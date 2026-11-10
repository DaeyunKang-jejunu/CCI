module axi_b0_top #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int MAX_OUTSTANDING_TRANSACTIONS=16, M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=16, CONV_AC_FIFO_DEPTH=LINE_TRACKER_ENTRIES
)(
    input  wire                         ACLK,
    input  wire                         ARESETn,

    // MASTER 0 WRITE ADDRESS
    input  wire                         M0_AWVALID,
    output reg                          M0_AWREADY,
    input  wire [ID_WIDTH-1:0]          M0_AWID,
    input  wire [ADDR_WIDTH-1:0]        M0_AWADDR,
    input  wire [7:0]                   M0_AWLEN,

    // MASTER 0 WRITE DATA
    input  wire                         M0_WVALID,
    output reg                          M0_WREADY,
    input  wire [DATA_WIDTH-1:0]        M0_WDATA,
    input  wire                         M0_WLAST,

    // MASTER 0 WRITE RESPONSE
    output reg                          M0_BVALID,
    input  wire                         M0_BREADY,
    output reg [ID_WIDTH-1:0]           M0_BID,
    output reg [1:0]                    M0_BRESP,

    // MASTER 0 READ ADDRESS
    input  wire                         M0_ARVALID,
    output reg                          M0_ARREADY,
    input  wire [ID_WIDTH-1:0]          M0_ARID,
    input  wire [ADDR_WIDTH-1:0]        M0_ARADDR,
    input  wire [7:0]                   M0_ARLEN,

    // MASTER 0 READ DATA
    output reg                          M0_RVALID,
    input  wire                         M0_RREADY,
    output reg [ID_WIDTH-1:0]           M0_RID,
    output reg [DATA_WIDTH-1:0]         M0_RDATA,
    output reg                          M0_RLAST,
    output reg [1:0]                    M0_RRESP,

    // MASTER 1 WRITE ADDRESS
    input  wire                         M1_AWVALID,
    output reg                          M1_AWREADY,
    input  wire [ID_WIDTH-1:0]          M1_AWID,
    input  wire [ADDR_WIDTH-1:0]        M1_AWADDR,
    input  wire [7:0]                   M1_AWLEN,

    // MASTER 1 WRITE DATA
    input  wire                         M1_WVALID,
    output reg                          M1_WREADY,
    input  wire [DATA_WIDTH-1:0]        M1_WDATA,
    input  wire [DATA_WIDTH/8-1:0]      M1_WSTRB,
    input  wire                         M1_WLAST,

    // MASTER 1 WRITE RESPONSE
    output reg                          M1_BVALID,
    input  wire                         M1_BREADY,
    output reg [ID_WIDTH-1:0]           M1_BID,
    output reg [1:0]                    M1_BRESP,

    // MASTER 1 READ ADDRESS
    input  wire                         M1_ARVALID,
    output reg                          M1_ARREADY,
    input  wire [ID_WIDTH-1:0]          M1_ARID,
    input  wire [ADDR_WIDTH-1:0]        M1_ARADDR,
    input  wire [7:0]                   M1_ARLEN,

    // MASTER 1 READ DATA
    output reg                          M1_RVALID,
    input  wire                         M1_RREADY,
    output reg [ID_WIDTH-1:0]           M1_RID,
    output reg [DATA_WIDTH-1:0]         M1_RDATA,
    output reg                          M1_RLAST,
    output reg [1:0]                    M1_RRESP,

    // SLAVE WRITE ADDRESS. Slave-side ID has one extra route bit for routing and checking.
    output reg                          S_AWVALID,
    input  wire                         S_AWREADY,
    output reg [ID_WIDTH:0]             S_AWID, // High bit is route (master select), low bits are ID.
    output reg [ADDR_WIDTH-1:0]         S_AWADDR,
    output reg [7:0]                    S_AWLEN,

    // SLAVE WRITE DATA
    output reg                          S_WVALID,
    input  wire                         S_WREADY,
    output reg [DATA_WIDTH-1:0]         S_WDATA,
    output reg [DATA_WIDTH/8-1:0]       S_WSTRB,
    output reg                          S_WLAST,

    // SLAVE WRITE RESPONSE
    input  wire                         S_BVALID,
    output reg                          S_BREADY,
    input  wire [ID_WIDTH:0]            S_BID, // High bit is route (master select), low bits are ID.
    input  wire [1:0]                   S_BRESP,

    // SLAVE READ ADDRESS
    output reg                          S_ARVALID,
    input  wire                         S_ARREADY,
    output reg [ID_WIDTH:0]             S_ARID, // High bit is route (master select), low bits are ID.
    output reg [ADDR_WIDTH-1:0]         S_ARADDR,
    output reg [7:0]                    S_ARLEN,

    // SLAVE READ DATA
    input  wire                         S_RVALID,
    output reg                          S_RREADY,
    input  wire [ID_WIDTH:0]            S_RID, // High bit is route (master select), low bits are ID.
    input  wire [DATA_WIDTH-1:0]        S_RDATA,
    input  wire                         S_RLAST,
    input  wire [1:0]                   S_RRESP,

    // Protocol status flags.
    output reg                          protocol_error_wlast,
    output reg                          protocol_error_rlast,
    output reg                          protocol_error_bid_order,
    output reg                          protocol_error_rid_order,
    output reg                          protocol_error_outstanding_overflow,
    output wire ACVALID,
    input wire ACREADY,
    output wire [63:0] ACADDR,
    output wire [3:0] ACSNOOP,
    input wire CRVALID,
    output wire CRREADY,
    input wire [1:0] CRRESP,
    output wire [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count,
    output wire [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count,
    output wire tracker_full_stall
);
    axi_cci_top #(
        .ID_WIDTH(ID_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .MAX_OUTSTANDING_TRANSACTIONS(MAX_OUTSTANDING_TRANSACTIONS),
        .M1_INGRESS_DEPTH(M1_INGRESS_DEPTH),
        .LINE_TRACKER_ENTRIES(LINE_TRACKER_ENTRIES),
        .CONV_AC_FIFO_DEPTH(CONV_AC_FIFO_DEPTH),.COHERENT(0)
    ) dut (.write_nq_valid(),.write_nq_ready(1'b0),.write_nq_addr(),.write_nq_tracker(),
        .write_nq_rsp_valid(1'b0),.write_nq_rsp_ready(),.write_nq_rsp_tracker('0),
        .write_nq_rsp_resp('0),.write_service_fault(),
        .PROBE_ACE_ARVALID(1'b0),.PROBE_ACE_ARADDR('0),
        .PROBE_ACE_AWVALID(1'b0),.PROBE_ACE_AWADDR('0),
        .PROBE_ACE_ARLAST('0),.PROBE_ACE_AWLAST('0),
        .EXT_M0_AR_HAZARD(1'b0),.EXT_M0_AW_HAZARD(1'b0),
        .PROBE_M1_ARVALID(1'b0),.PROBE_M1_ARADDR('0),.PROBE_M1_ARLEN('0),
        .WRITE_ACE_AR_HAZARD(),.WRITE_ACE_AW_HAZARD(),.WRITE_M1_AR_HAZARD(),.*);
endmodule
