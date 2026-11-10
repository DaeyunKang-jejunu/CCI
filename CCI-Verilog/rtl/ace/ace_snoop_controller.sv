// One snoop in flight. Buffer CD independently of CR; update memory on PassDirty
// and report completion only after actual AXI B. Single fixed writeback ID, INCR.
module ace_snoop_controller(
    input logic clk,rst_n,
    input logic req_valid,output logic req_ready,input logic [63:0] req_addr,input logic [3:0] req_snoop,
    output logic rsp_valid,input logic rsp_ready,output logic [4:0] rsp_resp,
    output logic [511:0] rsp_data,output logic fault,output logic idle,
    output logic ac_valid,input logic ac_ready,output logic [63:0] ac_addr,output logic [3:0] ac_snoop,
    input logic cr_valid,output logic cr_ready,input logic [4:0] cr_resp,
    input logic cd_valid,output logic cd_ready,input logic [127:0] cd_data,input logic cd_last,
    output logic aw_valid,input logic aw_ready,output logic [63:0] aw_addr,
    output logic [7:0] aw_len,output logic [2:0] aw_size,output logic [1:0] aw_burst,
    output logic w_valid,input logic w_ready,output logic [127:0] w_data,output logic [15:0] w_strb,output logic w_last,
    input logic b_valid,output logic b_ready,input logic [1:0] b_resp
);
    typedef enum logic [2:0] {IDLE,AC,RECEIVE,AW,W,B,DONE,STOP} state_t;
    state_t state;
    logic [63:0] addr;logic [3:0] opcode;logic [4:0] response;logic [511:0] buffer;
    logic cr_seen;logic [2:0] received;logic [1:0] sent;
    assign req_ready=state==IDLE && !fault;assign idle=state==IDLE && !req_valid;
    assign ac_valid=state==AC;assign ac_addr=addr;assign ac_snoop=opcode;
    assign cr_ready=state==RECEIVE && !cr_seen;
    assign cd_ready=state==RECEIVE && received<4;
    assign rsp_valid=state==DONE;assign rsp_resp=response;assign rsp_data=buffer;
    assign aw_valid=state==AW;assign aw_addr=addr;assign aw_len=3;assign aw_size=4;assign aw_burst=1;
    assign w_valid=state==W;assign w_data=buffer[128*int'(sent)+:128];assign w_last=sent==3;assign w_strb='1;
    assign b_ready=state==B;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin state<=IDLE;addr<=0;opcode<=0;response<=0;buffer<=0;cr_seen<=0;received<=0;sent<=0;fault<=0;end
        else begin
            case(state)
                IDLE: if(req_valid && req_ready) begin
                    addr<=req_addr;opcode<=req_snoop;response<=0;buffer<=0;cr_seen<=0;received<=0;sent<=0;state<=AC;
                end
                AC: if(ac_ready) state<=RECEIVE;
                RECEIVE: begin
                    if(cr_valid && cr_ready) begin
                        response<=cr_resp;cr_seen<=1;
                        // Error-only is returned to the requester as a
                        // recoverable line error. Error combined with either
                        // DataTransfer or PassDirty is internally
                        // contradictory and enters fail-stop immediately;
                        // waiting for CD would otherwise deadlock recovery.
                        if(cr_resp[1]&&(cr_resp[0]||cr_resp[2]))begin
                            fault<=1;state<=DONE;
                        end
                    end
                    if(cd_valid && cd_ready) begin
                        buffer[128*int'(received)+:128]<=cd_data;received<=received+1'b1;
                    end
                    if(cr_seen) begin
                        if((response[2] && !response[0]) || (!response[0] && received!=0)) begin
                            fault<=1;response[1]<=1;state<=DONE;
                        end else if(!response[0] || received==4) begin
                            if(response[1]) begin
                                if(response[0] || response[2]) fault<=1;
                                state<=DONE;
                            end
                            else if(response[2]) state<=AW;
                            else state<=DONE;
                        end
                    end
                    // Last check has priority over normal completion.
                    if(cd_valid && cd_ready && cd_last!=(received==3)) begin
                        fault<=1;response[1]<=1;state<=DONE;
                    end
                end
                AW: if(aw_ready) state<=W;
                W: if(w_ready) begin if(w_last) state<=B;else sent<=sent+1'b1;end
                B: if(b_valid) begin
                    if(b_resp!=0) begin fault<=1;response[1]<=1;end
                    state<=DONE;
                end
                DONE: if(rsp_ready) state<=fault ? STOP : IDLE;
                STOP: ; // Retain dirty recovery data; reset requires system-level recovery.
                default: state<=STOP;
            endcase
        end
    end
    assert property(@(posedge clk) disable iff(!rst_n) ac_valid && !ac_ready |=> ac_valid && $stable({ac_addr,ac_snoop}));
    assert property(@(posedge clk) disable iff(!rst_n) aw_valid && !aw_ready |=> aw_valid && $stable({aw_addr,aw_len,aw_size,aw_burst}));
    assert property(@(posedge clk) disable iff(!rst_n) w_valid && !w_ready |=> w_valid && $stable({w_data,w_last,w_strb}));
    assert property(@(posedge clk) disable iff(!rst_n) rsp_valid && !rsp_ready |=> rsp_valid && $stable({rsp_resp,rsp_data}));
endmodule
