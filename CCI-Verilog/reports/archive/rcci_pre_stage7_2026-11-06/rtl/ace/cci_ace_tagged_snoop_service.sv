// Tagged service wrapper. Legacy MakeInvalid remains a private owner and is
// retired internally; AUTO/EXPLICIT/NQ owners use status/data/release ports.
module cci_ace_tagged_snoop_service #(
    parameter int OUTSTANDING=4,
    parameter int OWNERS=4,
    parameter int QW=(OUTSTANDING<2?1:$clog2(OUTSTANDING)),
    parameter int OW=(OWNERS+1<2?1:$clog2(OWNERS+1)),
    parameter int EXPLICIT_OWNER=1,
    localparam int ALL_OWNERS=OWNERS+1,
    localparam int LEGACY_OWNER=OWNERS
)(
    input logic clk,rst_n,quiescent,
    input logic legacy_ac_valid,output logic legacy_ac_ready,
    input logic [63:0] legacy_ac_addr,input logic [3:0] legacy_ac_snoop,
    output logic legacy_cr_valid,input logic legacy_cr_ready,output logic [1:0] legacy_cr_resp,
    input logic req_valid,output logic req_ready,input logic [63:0] req_addr,input logic [3:0] req_snoop,
    input logic [$clog2(OWNERS)-1:0] req_owner,input logic req_requires_quiescence,
    output logic [QW-1:0] req_tag,
    output logic [OWNERS-1:0] status_valid,input logic [OWNERS-1:0] status_ready,
    output logic [OWNERS-1:0][QW-1:0] status_tag,output logic [OWNERS-1:0][4:0] status_resp,
    input logic data_select_valid,output logic data_select_ready,
    input logic [$clog2(OWNERS)-1:0] data_select_owner,input logic [QW-1:0] data_select_tag,
    output logic data_valid,output logic [QW-1:0] data_tag,output logic [511:0] data,input logic data_done,
    input logic release_valid,output logic release_ready,
    input logic [$clog2(OWNERS)-1:0] release_owner,input logic [QW-1:0] release_tag,
    output logic maintenance_busy,output logic idle,output logic fault,
    output logic ac_valid,input logic ac_ready,output logic [63:0] ac_addr,output logic [3:0] ac_snoop,
    input logic cr_valid,output logic cr_ready,input logic [4:0] cr_resp,
    input logic cd_valid,output logic cd_ready,input logic [127:0] cd_data,input logic cd_last,
    output logic aw_valid,input logic aw_ready,output logic [63:0] aw_addr,
    output logic [7:0] aw_len,output logic [2:0] aw_size,output logic [1:0] aw_burst,
    output logic w_valid,input logic w_ready,output logic [127:0] w_data,output logic [15:0] w_strb,output logic w_last,
    input logic b_valid,output logic b_ready,input logic [1:0] b_resp,
    output logic [$clog2(OUTSTANDING+1)-1:0] outstanding_count
);
    logic inner_valid,inner_ready,inner_fault,inner_idle;
    logic [63:0] inner_addr;logic [3:0] inner_snoop;logic [OW-1:0] inner_owner;
    logic [ALL_OWNERS-1:0] all_status_valid,all_status_ready;
    logic [ALL_OWNERS-1:0][QW-1:0] all_status_tag;
    logic [ALL_OWNERS-1:0][4:0] all_status_resp;
    logic bank_release_valid,bank_release_ready;logic [OW-1:0] bank_release_owner;logic [QW-1:0] bank_release_tag;
    logic [$clog2(OUTSTANDING+1)-1:0] explicit_count;
    wire legacy_status=all_status_valid[LEGACY_OWNER];
    wire legacy_bad=legacy_status && (all_status_resp[LEGACY_OWNER][2] ||
        all_status_resp[LEGACY_OWNER][1] || all_status_resp[LEGACY_OWNER][0]);
    wire legacy_release_req=legacy_status && !legacy_bad && legacy_cr_ready;
    wire external_release_fire=release_valid&&release_ready;
    wire inner_fire=inner_valid&&inner_ready;

    assign inner_valid=(legacy_ac_valid || (req_valid&&(!req_requires_quiescence||quiescent)))&&!fault;
    assign inner_addr=legacy_ac_valid?legacy_ac_addr:req_addr;
    assign inner_snoop=legacy_ac_valid?legacy_ac_snoop:req_snoop;
    assign inner_owner=legacy_ac_valid?OW'(LEGACY_OWNER):OW'(req_owner);
    assign legacy_ac_ready=inner_ready&&!fault;
    assign req_ready=inner_ready&&!legacy_ac_valid&&(!req_requires_quiescence||quiescent)&&!fault;

    assign status_valid=all_status_valid[OWNERS-1:0];
    assign status_tag=all_status_tag[OWNERS-1:0];
    assign status_resp=all_status_resp[OWNERS-1:0];
    always_comb begin
        all_status_ready='0;
        all_status_ready[OWNERS-1:0]=status_ready;
        all_status_ready[LEGACY_OWNER]=legacy_release_req&&bank_release_ready;
    end
    assign legacy_cr_valid=legacy_status&&!legacy_bad&&bank_release_ready;
    assign legacy_cr_resp={all_status_resp[LEGACY_OWNER][1]|
        all_status_resp[LEGACY_OWNER][0]|all_status_resp[LEGACY_OWNER][2],1'b0};

    // Legacy has priority only for the cycle in which its CR is accepted.
    assign bank_release_valid=legacy_release_req?1'b1:release_valid;
    assign bank_release_owner=legacy_release_req?OW'(LEGACY_OWNER):OW'(release_owner);
    assign bank_release_tag=legacy_release_req?all_status_tag[LEGACY_OWNER]:release_tag;
    assign release_ready=!legacy_release_req&&bank_release_ready;
    assign fault=inner_fault||legacy_bad;
    assign maintenance_busy=fault||explicit_count!=0;
    assign idle=inner_idle&&explicit_count==0;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) explicit_count<=0;
        else begin
            unique case({inner_fire&&!legacy_ac_valid&&req_owner==$clog2(OWNERS)'(EXPLICIT_OWNER),
                         external_release_fire&&release_owner==$clog2(OWNERS)'(EXPLICIT_OWNER)})
                2'b10:explicit_count<=explicit_count+1'b1;
                2'b01:explicit_count<=explicit_count-1'b1;
                default:;
            endcase
        end
    end

    ace_snoop_controller_tag_bank #(.OUTSTANDING(OUTSTANDING),.OWNERS(ALL_OWNERS)) bank(
        .clk,.rst_n,.req_valid(inner_valid),.req_ready(inner_ready),.req_addr(inner_addr),.req_snoop(inner_snoop),
        .req_owner(inner_owner),.req_tag,
        .status_valid(all_status_valid),.status_ready(all_status_ready),.status_tag(all_status_tag),.status_resp(all_status_resp),
        .data_select_valid,.data_select_ready,.data_select_owner(OW'(data_select_owner)),.data_select_tag,
        .data_valid,.data_tag,.data,.data_done,
        .release_valid(bank_release_valid),.release_ready(bank_release_ready),
        .release_owner(bank_release_owner),.release_tag(bank_release_tag),
        .fault(inner_fault),.idle(inner_idle),.ac_valid,.ac_ready,.ac_addr,.ac_snoop,
        .cr_valid,.cr_ready,.cr_resp,.cd_valid,.cd_ready,.cd_data,.cd_last,
        .aw_valid,.aw_ready,.aw_addr,.aw_len,.aw_size,.aw_burst,
        .w_valid,.w_ready,.w_data,.w_strb,.w_last,.b_valid,.b_ready,.b_resp,.outstanding_count);

    always @(posedge clk) if(rst_n) begin
        if(legacy_ac_valid&&legacy_ac_ready) assert(legacy_ac_snoop==4'b1101)
            else $fatal(1,"TAG_LEGACY_REQUIRES_MAKEINVALID");
        if(explicit_count!=0) assert(quiescent) else $fatal(1,"TAG_QUIESCENCE_LOST");
    end
endmodule
