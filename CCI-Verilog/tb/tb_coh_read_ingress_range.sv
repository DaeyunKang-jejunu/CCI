`timescale 1ns/1ps
module tb_coh_read_ingress_range;
    parameter int WINDOW=4;
    localparam int DEPTH=4,TRACKERS=8,IW=2,TW=3;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic in_valid=0,in_ready,in_range=0,in_attr_ok=1;logic [3:0] in_id=0;
    logic [63:0] in_addr=0;logic [7:0] in_len=3;
    logic out_valid,out_ready=0;logic [3:0] out_id;logic [63:0] out_addr;logic [7:0] out_len;
    // RCCI_PLAN 15.4 (보완 13): memory R beats go into the tracker buffer.
    logic mem_r_valid=0,mem_r_ready,mem_r_last=0;logic [127:0] mem_r_data=0;logic [1:0] mem_r_resp=0;
    logic nq_valid,nq_ready=0;logic [63:0] nq_addr;logic [TW-1:0] nq_tracker;
    logic nq_rsp_valid=0,nq_rsp_ready;logic [TW-1:0] nq_rsp_tracker=0;
    logic [4:0] nq_rsp_resp=0;logic [511:0] nq_rsp_data=0;
    logic hit_valid,hit_ready=0;logic [3:0] hit_id;logic [127:0] hit_data;
    logic hit_last;logic [1:0] hit_resp;
    logic m0_ar_probe_valid=0,m0_aw_probe_valid=0,ace_ar_probe_valid=0,ace_aw_probe_valid=0;
    logic [63:0] m0_ar_probe_addr=0,m0_aw_probe_addr=0,ace_ar_probe_addr=0,ace_aw_probe_addr=0;
    logic m0_ar_hazard,m0_aw_hazard,ace_ar_hazard,ace_aw_hazard;
    logic m1_aw_probe_valid=0,m1_aw_hazard;logic [63:0] m1_aw_probe_addr=0;logic [7:0] m1_aw_probe_len=3;
    logic [$clog2(DEPTH+1)-1:0] ingress_count;
    logic [$clog2(TRACKERS+1)-1:0] tracker_count;
    logic tracker_full_stall,config_fault,service_fault,read_error;
    int max_trackers;

    // RCCI_PLAN 14.3: span probes default to the single probe line; no issue gate.
    logic [58:0] ace_ar_probe_last,ace_aw_probe_last,m0_ar_probe_last,m0_aw_probe_last;
    assign m0_ar_probe_last={1'b0,m0_ar_probe_addr[63:6]};
    assign m0_aw_probe_last={1'b0,m0_aw_probe_addr[63:6]};
    assign ace_ar_probe_last={1'b0,ace_ar_probe_addr[63:6]};
    assign ace_aw_probe_last={1'b0,ace_aw_probe_addr[63:6]};
    logic issue_line_valid,issue_block=0;logic [63:0] issue_line_addr;
    logic wr_issue_probe_valid=0,wr_issue_hazard,issue_fire,alloc_ready;logic [63:0] wr_issue_probe_addr=0;
    coh_read_ingress #(.ID_WIDTH(4),.DEPTH(DEPTH),.TRACKERS(TRACKERS),
        .USE_RANGE(1),.RANGE_WINDOW(WINDOW)) dut(.*);
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    function automatic logic is_hit(input int line);return line%3!=1;endfunction
    function automatic logic [511:0] line_data(input logic [63:0] addr);
        logic [511:0] value;
        for(int b=0;b<4;b++)value[b*128+:128]={addr+64'(b),addr+64'(b)};
        return value;
    endfunction
    task automatic push_range(input logic [3:0] id,input logic [63:0] base,input int lines);
        in_id=id;in_addr=base;in_len=8'(lines*4-1);in_range=1;in_valid=1;
        do tick();while(!in_ready);in_valid=0;in_range=0;in_len=3;
    endtask
    task automatic service_lines(input logic [63:0] base,input int lines,input int phase=0);
        logic [TW-1:0] tag;logic [63:0] expected;
        for(int line=0;line<lines;line++)begin
            expected=base+64'(line*64);
            for(int n=0;n<500&&!nq_valid;n++)tick();
            assert(nq_valid&&nq_addr==expected)else $fatal(1,"RANGE_NQ_ORDER line=%0d got=%h expected=%h",line,nq_addr,expected);
            tag=nq_tracker;nq_ready=1;tick();nq_ready=0;
            nq_rsp_tracker=tag;nq_rsp_resp={4'b0,is_hit(line+phase)};
            nq_rsp_data=line_data(expected);nq_rsp_valid=1;tick();nq_rsp_valid=0;
        end
    endtask
    task automatic consume_lines(input logic [3:0] id,input logic [63:0] base,
                                 input int lines,input int phase=0);
        logic [63:0] expected;logic [511:0] value;
        for(int line=0;line<lines;line++)begin
            expected=base+64'(line*64);value=line_data(expected);
            if(is_hit(line+phase))begin
                for(int beat=0;beat<4;beat++)begin
                    for(int n=0;n<500&&!hit_valid;n++)tick();
                    assert(hit_valid&&hit_id==id&&hit_data==value[beat*128+:128]&&
                           hit_last==(line==lines-1&&beat==3)&&hit_resp==0)
                        else $fatal(1,"RANGE_HIT_R line=%0d beat=%0d last=%0d",line,beat,hit_last);
                    hit_ready=1;tick();hit_ready=0;
                end
            end else begin
                for(int n=0;n<500&&!out_valid;n++)tick();
                assert(out_valid&&out_id==id&&out_addr==expected&&out_len==3)
                    else $fatal(1,"RANGE_MISS_AR line=%0d got=%h",line,out_addr);
                out_ready=1;tick();out_ready=0;
                for(int beat=0;beat<4;beat++)begin
                    mem_r_data=value[beat*128+:128];mem_r_last=beat==3;mem_r_valid=1;
                    do @(posedge clk);while(!mem_r_ready);
                    @(negedge clk);mem_r_valid=0;
                end
                mem_r_last=0;
                for(int beat=0;beat<4;beat++)begin
                    for(int n=0;n<500&&!hit_valid;n++)tick();
                    assert(hit_valid&&hit_id==id&&hit_data==value[beat*128+:128]&&
                           hit_last==(line==lines-1&&beat==3))
                        else $fatal(1,"RANGE_MISS_RLAST line=%0d beat=%0d",line,beat);
                    hit_ready=1;tick();hit_ready=0;
                end
            end
        end
    endtask
    task automatic run_range(input logic [3:0] id,input logic [63:0] base,input int lines);
        push_range(id,base,lines);
        for(int n=0;n<100&&int'(tracker_count)<(lines<WINDOW?lines:WINDOW);n++)tick();
        assert(int'(tracker_count)==(lines<WINDOW?lines:WINDOW))else $fatal(1,"RANGE_WINDOW_FILL lines=%0d count=%0d",lines,tracker_count);
        m0_ar_probe_valid=1;m0_ar_probe_addr=base;#1;
        assert(m0_ar_hazard)else $fatal(1,"RANGE_WINDOW_HAZARD_MISSING");
        if(lines>WINDOW)begin m0_ar_probe_addr=base+64'(WINDOW*64);#1;
            assert(!m0_ar_hazard)else $fatal(1,"RANGE_WINDOW_OVERBLOCK");end
        m0_ar_probe_valid=0;
        // The opposite-direction M1 WriteRange probe must compare its whole
        // burst, not only its base line. The second line overlaps `base`.
        m1_aw_probe_valid=1;m1_aw_probe_addr=base-64;m1_aw_probe_len=8'd7;#1;
        assert(m1_aw_hazard)else $fatal(1,"RANGE_M1_AW_SPAN_HAZARD_MISSING");
        m1_aw_probe_addr=base+64'h800;#1;
        assert(!m1_aw_hazard)else $fatal(1,"RANGE_M1_AW_SPAN_OVERBLOCK");
        m1_aw_probe_valid=0;m1_aw_probe_len=3;
        fork service_lines(base,lines);consume_lines(id,base,lines);join
        for(int n=0;n<100&&(ingress_count!=0||tracker_count!=0);n++)tick();
        assert(ingress_count==0&&tracker_count==0&&!service_fault&&!read_error)
            else $fatal(1,"RANGE_DRAIN lines=%0d ingress=%0d trackers=%0d",lines,ingress_count,tracker_count);
    endtask
    task automatic run_two_ranges;
        localparam logic [63:0] A=64'h20000,B=64'h21000;
        push_range(4'ha,A,4);push_range(4'hb,B,4);
        assert(ingress_count==2)else $fatal(1,"RANGE_MULTI_ADMISSION");
        fork
            begin service_lines(A,4,0);service_lines(B,4,4);end
            begin consume_lines(4'ha,A,4,0);consume_lines(4'hb,B,4,4);end
        join
        for(int n=0;n<100&&(ingress_count!=0||tracker_count!=0);n++)tick();
        assert(ingress_count==0&&tracker_count==0)else $fatal(1,"RANGE_MULTI_DRAIN");
    endtask
    always @(posedge clk)if(rst_n&&int'(tracker_count)>max_trackers)max_trackers=int'(tracker_count);
    initial begin
        max_trackers=0;repeat(3)tick();rst_n=1;tick();
        run_range(1,64'h10000,1);
        run_range(2,64'h12000,8);
        run_range(3,64'h14000,64);
        run_two_ranges();
        assert(max_trackers==WINDOW)else $fatal(1,"RANGE_WINDOW_NOT_EXERCISED max=%0d W=%0d",max_trackers,WINDOW);
        if(WINDOW==4)begin
            // Four lines starting at 0xfc0 would cross the 4 KB boundary.
            in_id=1;in_addr=64'h30fc0;in_len=8'd15;in_range=1;in_valid=1;tick();in_valid=0;
            assert(config_fault&&!in_ready)else $fatal(1,"RANGE_4K_FORMAT_FAULT");
        end
        $display("PASS stage5 ReadRange 1/8/64 mixed hit-miss W=%0d multiple ranges",WINDOW);
        $finish;
    end
endmodule
