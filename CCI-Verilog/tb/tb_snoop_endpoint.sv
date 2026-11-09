`timescale 1ns/1ps
module tb_snoop_endpoint #(parameter int DEPTH=3,LATENCY=1);
    logic clk=0,rst=0,av=0,ar,cv,cr=0,idle;
    logic [63:0] addr=0;
    logic [1:0] resp;
    int cycle=0,sent=0,received=0,both=0;
    int issued_at[40];
    always #5 clk=~clk;
    m0_snoop_endpoint #(.DEPTH(DEPTH),.LATENCY(LATENCY)) dut(
        .clk,.rst_n(rst),.ac_valid(av),.ac_ready(ar),.ac_addr(addr),.ac_snoop(4'b1101),
        .cr_valid(cv),.cr_ready(cr),.cr_resp(resp),.idle);
    always @(posedge clk) if(rst) begin
        cycle++;
        if(cv && cr) begin
            assert(received<sent && cycle-issued_at[received]>=LATENCY+1 && resp==0)
                else $fatal(1,"ENDPOINT_ORDER_LATENCY");
            received++;
        end
        if(av && ar) begin issued_at[sent]=cycle;sent++;end
        if(av && ar && cv && cr) both++;
        assert(sent-received<=DEPTH) else $fatal(1,"ENDPOINT_BOUNDS");
    end
    always @(negedge clk) if(rst) begin
        cr=(cycle%5!=0 && cycle%5!=1);
        av=(sent<40);addr=64'(sent)*64;
    end
    initial begin
        repeat(3) @(negedge clk);rst=1;
        wait(received==40);repeat(3) @(negedge clk);
        assert(idle && sent==40) else $fatal(1,"ENDPOINT_DRAIN");
        $display("PASS endpoint depth=%0d latency=%0d simultaneous=%0d",DEPTH,LATENCY,both);$finish;
    end
    initial begin #100000; $fatal(1,"endpoint timeout");end
endmodule
