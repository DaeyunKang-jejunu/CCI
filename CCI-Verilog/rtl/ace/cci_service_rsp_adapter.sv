// Converts one owner's tagged status/data/release contract back to the existing
// single-response interface used by the ACE manager and explicit requester.
module cci_service_rsp_adapter #(
    parameter int TAGS=4,
    parameter int OWNER=0,
    parameter int TW=(TAGS<2?1:$clog2(TAGS)),
    parameter int OW=2
)(
    input logic clk,rst_n,
    input logic status_valid,output logic status_ready,input logic [TW-1:0] status_tag,input logic [4:0] status_resp,
    output logic rsp_valid,input logic rsp_ready,output logic [TW-1:0] rsp_tag,
    output logic [4:0] rsp_resp,output logic [511:0] rsp_data,
    output logic data_select_valid,input logic data_select_ready,output logic [OW-1:0] data_select_owner,
    output logic [TW-1:0] data_select_tag,input logic data_valid,input logic [TW-1:0] data_tag,
    input logic [511:0] data,input logic data_done_ready,output logic data_done,
    output logic release_valid,input logic release_ready,output logic [OW-1:0] release_owner,
    output logic [TW-1:0] release_tag,output logic released,output logic fault
);
    typedef enum logic [2:0] {A_IDLE,A_SELECT,A_DATA,A_RSP,A_RELEASE} state_e;
    state_e state;logic [TW-1:0] tag_q;logic [4:0] resp_q;logic [511:0] data_q;
    assign status_ready=state==A_IDLE;
    assign data_select_valid=state==A_SELECT;assign data_select_owner=OW'(OWNER);assign data_select_tag=tag_q;
    assign data_done=state==A_DATA&&data_valid&&data_done_ready;
    assign rsp_valid=state==A_RSP;assign rsp_tag=tag_q;assign rsp_resp=resp_q;assign rsp_data=data_q;
    assign release_valid=state==A_RELEASE;assign release_owner=OW'(OWNER);assign release_tag=tag_q;
    assign released=release_valid&&release_ready;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin state<=A_IDLE;tag_q<=0;resp_q<=0;data_q<=0;fault<=0;end
        else case(state)
            A_IDLE:if(status_valid&&status_ready) begin
                tag_q<=status_tag;resp_q<=status_resp;data_q<=0;
                state<=status_resp[0]?A_SELECT:A_RSP;
            end
            A_SELECT:if(data_select_valid&&data_select_ready)state<=A_DATA;
            A_DATA:if(data_valid&&data_done_ready) begin
                if(data_tag!=tag_q) fault<=1;
                data_q<=data;state<=A_RSP;
            end
            A_RSP:if(rsp_valid&&rsp_ready)state<=A_RELEASE;
            A_RELEASE:if(release_valid&&release_ready)state<=A_IDLE;
            default:state<=A_IDLE;
        endcase
    end
    assert property(@(posedge clk) disable iff(!rst_n) rsp_valid&&!rsp_ready |=>
        rsp_valid&&$stable({rsp_resp,rsp_data})) else $fatal(1,"TAG_ADAPTER_RSP_STABILITY");
    assert property(@(posedge clk) disable iff(!rst_n) release_valid&&!release_ready |=>
        release_valid&&$stable(release_tag)) else $fatal(1,"TAG_ADAPTER_RELEASE_STABILITY");
endmodule
