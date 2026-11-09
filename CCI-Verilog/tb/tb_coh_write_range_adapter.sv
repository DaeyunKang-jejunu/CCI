`timescale 1ns/1ps
    // RCCI_PLAN 14.3-3: reservation interface; the unit test never blocks issue.
    logic issue_cand_valid,issue_block=0,hold_valid;logic [63:0] issue_cand_addr,hold_addr;
    // RCCI_PLAN 14.4: interval CAM probes are idle in the unit test.
    logic m0_ar_probe_valid=0,m0_aw_probe_valid=0,ace_ar_probe_valid=0,ace_aw_probe_valid=0,m1_ar_probe_valid=0;
    logic [63:0] m0_ar_probe_addr=0,m0_aw_probe_addr=0,ace_ar_probe_addr=0,ace_aw_probe_addr=0,m1_ar_probe_addr=0;
    logic [58:0] ace_ar_probe_last=0,ace_aw_probe_last=0,m0_ar_probe_last=0,m0_aw_probe_last=0;logic [7:0] m1_ar_probe_len=0;
    logic m0_ar_hazard,m0_aw_hazard,ace_ar_hazard,ace_aw_hazard,m1_ar_hazard;
    logic rd_issue_probe_valid=0,rd_issue_hazard,issue_reserve;logic [63:0] rd_issue_probe_addr=0;
module tb_coh_write_range_adapter #(
    parameter int WINDOW=2
);
    localparam int ID_WIDTH=4,DATA_WIDTH=128,DEPTH=4;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic in_aw_valid=0,in_aw_ready;logic [ID_WIDTH-1:0] in_aw_id=0;
    logic [63:0] in_aw_addr=0;logic [7:0] in_aw_len=3;logic in_aw_range=0,in_aw_attr_ok=1;
    logic in_w_valid=0,in_w_ready;logic [DATA_WIDTH-1:0] in_w_data=0;
    logic [DATA_WIDTH/8-1:0] in_w_strb='1;logic in_w_last=0;
    logic out_b_valid,out_b_ready=0;logic [ID_WIDTH-1:0] out_b_id;logic [1:0] out_b_resp;
    logic line_aw_valid,line_aw_ready=0;logic [ID_WIDTH-1:0] line_aw_id;
    logic [63:0] line_aw_addr;logic [7:0] line_aw_len;
    logic line_w_valid,line_w_ready=0;logic [DATA_WIDTH-1:0] line_w_data;
    logic [DATA_WIDTH/8-1:0] line_w_strb;logic line_w_last;
    logic line_b_valid=0,line_b_ready;logic [ID_WIDTH-1:0] line_b_id=0;logic [1:0] line_b_resp=0;
    logic config_fault,data_fault;logic [2:0] context_count;
    logic [$clog2(WINDOW+1)-1:0] line_outstanding;

    coh_write_range_adapter #(.ID_WIDTH(ID_WIDTH),.DATA_WIDTH(DATA_WIDTH),.DEPTH(DEPTH),.WINDOW(WINDOW))dut(.*);
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic send_aw(input logic [3:0] id,input logic [63:0] addr,input logic [7:0] len,input logic range);
        in_aw_id=id;in_aw_addr=addr;in_aw_len=len;in_aw_range=range;in_aw_valid=1;
        do @(posedge clk);while(!in_aw_ready);@(negedge clk);in_aw_valid=0;
    endtask
    task automatic take_line_aw(input logic [3:0] id,input logic [63:0] addr);
        for(int n=0;n<20&&!line_aw_valid;n++)tick();
        assert(line_aw_valid&&line_aw_id==id&&line_aw_addr==addr&&line_aw_len==3)
            else $fatal(1,"WRITE_RANGE_LINE_AW");
        line_aw_ready=1;tick();line_aw_ready=0;
    endtask
    task automatic send_w(input int beats,input bit range);
        line_w_ready=1;
        for(int b=0;b<beats;b++)begin
            in_w_data=128'(b+1);in_w_last=b==beats-1;in_w_valid=1;
            do @(posedge clk);while(!in_w_ready);
            assert(line_w_valid&&line_w_data==128'(b+1)&&line_w_strb=='1)
                else $fatal(1,"WRITE_RANGE_W_PAYLOAD");
            assert(line_w_last==(range ? b%4==3 : b==beats-1))
                else $fatal(1,"WRITE_RANGE_LINE_WLAST beat=%0d",b);
            @(negedge clk);in_w_valid=0;
        end
        line_w_ready=0;in_w_last=0;
    endtask
    task automatic send_range_line(input int line,input int lines);
        line_w_ready=1;
        for(int b=0;b<4;b++)begin
            in_w_data=128'(line*4+b+1);in_w_last=line==lines-1&&b==3;in_w_valid=1;
            do @(posedge clk);while(!in_w_ready);
            assert(line_w_valid&&line_w_data==128'(line*4+b+1)&&line_w_strb=='1&&line_w_last==(b==3))
                else $fatal(1,"WRITE_RANGE_LINE_W line=%0d beat=%0d",line,b);
            @(negedge clk);in_w_valid=0;
        end
        line_w_ready=0;in_w_last=0;
    endtask
    task automatic send_line_b(input logic [3:0] id,input logic [1:0] resp);
        line_b_id=id;line_b_resp=resp;line_b_valid=1;
        do @(posedge clk);while(!line_b_ready);@(negedge clk);line_b_valid=0;line_b_resp=0;
    endtask
    task automatic take_b(input logic [3:0] id,input logic [1:0] resp);
        for(int n=0;n<20&&!out_b_valid;n++)tick();
        assert(out_b_valid&&out_b_id==id&&out_b_resp==resp)
            else $fatal(1,"WRITE_RANGE_MERGED_B");
        out_b_ready=1;tick();out_b_ready=0;
    endtask
    task automatic run_range(input int lines,input logic [3:0] id,input logic [63:0] base,input bit inject_error);
        int accepted=0;int initial_fill=(lines<WINDOW?lines:WINDOW);
        send_aw(id,base,8'(lines*4-1),1);
        for(int line=0;line<initial_fill;line++)begin
            take_line_aw(id,base+64'(line*64));accepted++;
        end
        assert(int'(line_outstanding)==initial_fill)
            else $fatal(1,"WRITE_RANGE_WINDOW_FILL lines=%0d got=%0d",lines,line_outstanding);
        for(int line=0;line<lines;line++)begin
            send_range_line(line,lines);
            assert(!out_b_valid)else $fatal(1,"WRITE_RANGE_EARLY_B line=%0d",line);
            send_line_b(id,(inject_error&&line==lines/2)?2'b10:2'b00);
            if(accepted<lines)begin take_line_aw(id,base+64'(accepted*64));accepted++;end
        end
        take_b(id,inject_error?2'b10:2'b00);
        assert(line_outstanding==0)else $fatal(1,"WRITE_RANGE_LINE_DRAIN");
    endtask

    initial begin
        repeat(3)tick();rst_n=1;tick();
        begin:intentional_data_error
            int bad;
            if($value$plusargs("stage6_bad_data=%d",bad))begin
                send_aw(1,64'h4000,3,1);take_line_aw(1,64'h4000);line_w_ready=1;
                in_w_data='0;in_w_strb=bad==1?16'hfffe:16'hffff;
                in_w_last=bad==2;in_w_valid=1;
                do @(posedge clk);while(!in_w_ready);
                @(negedge clk);$fatal(1,"STAGE6_DATA_ERROR_NOT_DETECTED");
            end
        end
        send_aw(1,64'h4000,3,0);take_line_aw(1,64'h4000);send_w(4,0);send_line_b(1,0);take_b(1,0);
        run_range(1,2,64'h8000,0);
        run_range(8,3,64'h10000,1);
        run_range(64,4,64'h20000,0);
        assert(context_count==0&&line_outstanding==0&&!config_fault&&!data_fault)
            else $fatal(1,"WRITE_RANGE_DRAIN");
        $display("PASS stage6 write range adapter W=%0d lines=1/8/64 split-WLAST merged-B",WINDOW);
        $finish;
    end
endmodule
