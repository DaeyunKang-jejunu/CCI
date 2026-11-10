`ifndef ACE_SNOOP_PKG_SV
`define ACE_SNOOP_PKG_SV
package ace_snoop_pkg;
    localparam logic [3:0] READ_ONCE=0, READ_SHARED=1, READ_CLEAN=2,
        READ_NOT_SHARED_DIRTY=3, READ_UNIQUE=7, CLEAN_SHARED=8, CLEAN_INVALID=9,
        CLEAN_UNIQUE=11, MAKE_UNIQUE=12, MAKE_INVALID=13,
        DVM_COMPLETE=14, DVM_MESSAGE=15;
    localparam logic [2:0] WRITE_UNIQUE=0, WRITE_LINE_UNIQUE=1,
        WRITE_CLEAN=2, WRITE_BACK=3, EVICT=4, WRITE_EVICT=5;
    localparam logic [1:0] DOMAIN_NONSHAREABLE=0, DOMAIN_INNER=1,
        DOMAIN_OUTER=2, DOMAIN_SYSTEM=3;
    typedef enum logic [2:0] {INVALID=0, SHARED_CLEAN=1, UNIQUE_CLEAN=2, SHARED_DIRTY=3, UNIQUE_DIRTY=4} cache_state_t;
    function automatic bit supported(input logic [3:0] op);
        return op inside {READ_ONCE,READ_SHARED,READ_CLEAN,READ_NOT_SHARED_DIRTY,READ_UNIQUE,CLEAN_SHARED,CLEAN_INVALID,MAKE_INVALID};
    endfunction
    function automatic bit dvm(input logic [3:0] op);
        return op inside {DVM_COMPLETE,DVM_MESSAGE};
    endfunction
    function automatic bit shareable(input logic [1:0] domain);
        return domain inside {DOMAIN_INNER,DOMAIN_OUTER};
    endfunction
    function automatic bit dirty(input cache_state_t s);return s inside {SHARED_DIRTY,UNIQUE_DIRTY};endfunction
    function automatic bit unique_line(input cache_state_t s);return s inside {UNIQUE_CLEAN,UNIQUE_DIRTY};endfunction
endpackage
`endif
