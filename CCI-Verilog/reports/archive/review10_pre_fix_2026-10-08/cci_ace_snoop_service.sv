// Adapter between the existing v9 AC/2-bit CR and a full 5-bit ACE endpoint.
// Maintenance requests require a system quiescence grant, held through busy.
// The writeback AXI port must connect to memory (not the snooping ingress).
module cci_ace_snoop_service #(
    parameter int OUTSTANDING=4,
    parameter int QW=(OUTSTANDING<2?1:$clog2(OUTSTANDING))
)(
    input logic clk,rst_n,quiescent,
    input logic legacy_ac_valid,output logic legacy_ac_ready,
    input logic [63:0] legacy_ac_addr,input logic [3:0] legacy_ac_snoop,
    output logic legacy_cr_valid,input logic legacy_cr_ready,output logic [1:0] legacy_cr_resp,
    input logic req_valid,output logic req_ready,input logic [63:0] req_addr,input logic [3:0] req_snoop,
    output logic rsp_valid,input logic rsp_ready,output logic [4:0] rsp_resp,output logic [511:0] rsp_data,
    output logic maintenance_busy,output logic idle,output logic fault,
    output logic ac_valid,input logic ac_ready,output logic [63:0] ac_addr,output logic [3:0] ac_snoop,
    input logic cr_valid,output logic cr_ready,input logic [4:0] cr_resp,
    input logic cd_valid,output logic cd_ready,input logic [127:0] cd_data,input logic cd_last,
    output logic aw_valid,input logic aw_ready,output logic [63:0] aw_addr,
    output logic [7:0] aw_len,output logic [2:0] aw_size,output logic [1:0] aw_burst,
    output logic w_valid,input logic w_ready,output logic [127:0] w_data,output logic [15:0] w_strb,output logic w_last,
    input logic b_valid,output logic b_ready,input logic [1:0] b_resp
);
    logic controller_fault;
    logic owner_legacy,inner_ready,inner_valid,inner_rsp_valid,inner_rsp_ready,inner_idle;
    logic [63:0] inner_addr;logic [3:0] inner_snoop;logic [4:0] inner_resp;
    logic [511:0] inner_data,fault_data;
    logic owner_q[OUTSTANDING];logic [QW-1:0] owner_head,owner_tail;
    logic [$clog2(OUTSTANDING+1)-1:0] owner_count,explicit_count,bank_count;
    wire inner_fire=inner_valid&&inner_ready;
    wire inner_rsp_fire=inner_rsp_valid&&inner_rsp_ready;
    function automatic [QW-1:0] qinc(input [QW-1:0] p);
        return p==QW'(OUTSTANDING-1)?'0:p+1'b1;
    endfunction
    assign inner_valid=(legacy_ac_valid || (req_valid && quiescent)) && !fault;
    assign inner_addr=legacy_ac_valid ? legacy_ac_addr:req_addr;
    assign inner_snoop=legacy_ac_valid ? legacy_ac_snoop:req_snoop;
    assign legacy_ac_ready=inner_ready && !fault;
    assign req_ready=inner_ready && quiescent && !legacy_ac_valid && !fault;
    assign owner_legacy=owner_count!=0&&owner_q[owner_head];
    // A failed legacy snoop must never retire a v9 invalidation as successful.
    // Hold its CR and the controller result until reset/recovery.
    assign fault=controller_fault || (inner_rsp_valid && owner_legacy && (inner_resp[1] || inner_resp[0] || inner_resp[2]));
    assign legacy_cr_valid=inner_rsp_valid && owner_legacy && !fault;
    assign legacy_cr_resp={inner_resp[1] | inner_resp[0] | inner_resp[2],1'b0};
    assign rsp_valid=inner_rsp_valid && !owner_legacy;assign rsp_resp=inner_resp;
    assign rsp_data=inner_rsp_valid?inner_data:fault_data;
    assign inner_rsp_ready=owner_legacy?(legacy_cr_ready && !fault):rsp_ready;
    assign maintenance_busy=fault || explicit_count!=0;
    assign idle=inner_idle && owner_count==0;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin owner_head<=0;owner_tail<=0;owner_count<=0;explicit_count<=0;fault_data<=0;end
        else begin
            if(inner_rsp_valid&&controller_fault) fault_data<=inner_data;
            if(inner_fire) begin owner_q[owner_tail]<=legacy_ac_valid;owner_tail<=qinc(owner_tail);end
            if(inner_rsp_fire) owner_head<=qinc(owner_head);
            unique case({inner_fire,inner_rsp_fire})
                2'b10:owner_count<=owner_count+1'b1;
                2'b01:owner_count<=owner_count-1'b1;
                default:;
            endcase
            unique case({inner_fire&&!legacy_ac_valid,inner_rsp_fire&&!owner_legacy})
                2'b10:explicit_count<=explicit_count+1'b1;
                2'b01:explicit_count<=explicit_count-1'b1;
                default:;
            endcase
        end
    end
    ace_snoop_controller_bank #(.OUTSTANDING(OUTSTANDING)) controller(
        .clk,.rst_n,.req_valid(inner_valid),.req_ready(inner_ready),.req_addr(inner_addr),.req_snoop(inner_snoop),
        .rsp_valid(inner_rsp_valid),.rsp_ready(inner_rsp_ready),.rsp_resp(inner_resp),.rsp_data(inner_data),.fault(controller_fault),.idle(inner_idle),
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp,.cd_valid,.cd_ready,.cd_data,.cd_last,
        .aw_valid,.aw_ready,.aw_addr,.aw_len,.aw_size,.aw_burst,.w_valid,.w_ready,.w_data,.w_strb,.w_last,
        .b_valid,.b_ready,.b_resp,.outstanding_count(bank_count)
    );
    always @(posedge clk) if(rst_n) begin
        if(legacy_ac_valid && legacy_ac_ready) assert(legacy_ac_snoop==4'b1101) else $fatal(1,"LEGACY_REQUIRES_MAKEINVALID");
        if(explicit_count!=0) assert(quiescent) else $fatal(1,"ACE_QUIESCENCE_LOST");
        assert(owner_count==bank_count) else $fatal(1,"ACE_SERVICE_OWNER_ASSOCIATION");
    end
endmodule
