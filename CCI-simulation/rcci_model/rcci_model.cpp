#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>
#include <vector>

enum class Design { B1, RCCI };
enum class Op { Read, Write };
enum class State { WaitSnoop, Snoop, Control, MemPending, MemWait, ReadyBus,
                   OnBus, WaitB, Done };

struct Config {
    Design design=Design::B1;
    Op op=Op::Read;
    int streams=1, lines=4096, tokens=4, window=4, snoop_contexts=4;
    int mem_outstanding=16, dma_outstanding=16;
    int hit_percent=0, dirty_percent=0;
    int ls_nodata=1, ls_data=4, lc=2, lm=2, lw=2;
    bool merge_misses=false;
    // RCCI_PLAN 14.7 (보완 6): the RTL window is global per direction and lines are
    // issued by one ordered cursor over admitted ranges. 'stream' keeps the old
    // per-range window (optimistic) for comparison.
    bool window_global=true;
};

struct Line {
    int stream=0, index=0;
    std::uint64_t seq=0;
    State state=State::WaitSnoop;
    std::int64_t ready=0;
    bool hit=false, dirty=false, holds_service=false, holds_mem=false;
    int merge_group=-1;
};

struct Stream {
    int admitted=0, completed=0, active=0;
    bool range_token=false;
};

struct Result {
    std::int64_t cycles=0, first_done=-1, token_wait_cycles=0;
    std::int64_t mem_requests=0, snoop_requests=0;
    double throughput=0, avg_tokens=0, avg_service=0, avg_mem=0, avg_lines=0;
    int max_tokens=0, max_service=0, max_mem=0, max_lines=0;
};

class Model {
  public:
    explicit Model(Config c): c_(c), streams_(c.streams) { validate(); }

    Result run() {
        const std::int64_t total=std::int64_t(c_.streams)*c_.lines;
        std::int64_t done=0, cycle=0;
        std::uint64_t next_seq=0;
        int tokens=0, service=0, mem=0, dma=0;
        int rr_stream=0;
        std::int64_t sum_tokens=0,sum_service=0,sum_mem=0,sum_lines=0;
        std::int64_t first_admit=-1;
        int bus_line=-1;
        std::int64_t bus_done=-1;
        std::vector<int> merge_refs;
        std::vector<int> merge_size,merge_stream,merge_last_index;
        std::vector<std::int64_t> merge_next_ready;

        auto finish_line=[&](Line &l) {
            l.state=State::Done;
            done++;streams_[l.stream].completed++;streams_[l.stream].active--;
            if(l.holds_service){service--;l.holds_service=false;}
            if(l.holds_mem){
                if(l.merge_group<0) mem--;
                else if(--merge_refs[l.merge_group]==0) mem--;
                l.holds_mem=false;
            }
            if(c_.design==Design::B1){tokens--;dma--;}
            if(result_.first_done<0) result_.first_done=cycle;
            if(c_.design==Design::RCCI && streams_[l.stream].completed==c_.lines){
                if(streams_[l.stream].range_token){tokens--;dma--;streams_[l.stream].range_token=false;}
            }
        };

        const std::int64_t max_cycles=std::max<std::int64_t>(100000,total*1000);
        while(done<total && cycle<max_cycles) {
            // Retire the shared 128-bit data channel first.
            if(bus_line>=0 && bus_done==cycle) {
                Line &l=lines_[bus_line];
                bus_line=-1;
                if(c_.op==Op::Read) finish_line(l);
                else {l.state=State::WaitB;l.ready=cycle+c_.lw;}
            }

            // Advance latency-bearing stages. Control delay zero is allowed.
            for(Line &l:lines_) {
                if(l.state==State::Snoop && l.ready<=cycle) {
                    if(c_.op==Op::Read && l.hit) {
                        // The context keeps the CD payload through status/control
                        // delivery and until the ordered R output completes.
                        l.state=(c_.lc==0?State::ReadyBus:State::Control);
                        l.ready=cycle+c_.lc;
                    } else {
                        l.state=(c_.lc==0?State::MemPending:State::Control);
                        l.ready=cycle+c_.lc;
                        if(c_.lc==0){service--;l.holds_service=false;}
                    }
                }
                if(l.state==State::Control && l.ready<=cycle) {
                    if(c_.op==Op::Read && l.hit) l.state=State::ReadyBus;
                    else {
                        l.state=State::MemPending;
                        service--;l.holds_service=false;
                    }
                }
                if(l.state==State::MemWait && l.ready<=cycle) l.state=State::ReadyBus;
                if(l.state==State::WaitB && l.ready<=cycle) finish_line(l);
            }

            // Admit requests/lines. One external request per stream per cycle is
            // sufficient because the common data bus is four cycles per line.
            bool blocked=false;
            for(int scan=0;scan<c_.streams;scan++) {
                int s=(rr_stream+scan)%c_.streams;
                Stream &st=streams_[s];
                if(st.admitted>=c_.lines) continue;
                bool can=false;
                if(c_.design==Design::B1) {
                    can=(tokens<c_.tokens && dma<c_.dma_outstanding);
                    if(!can) blocked=true;
                } else {
                    if(!st.range_token) {
                        if(tokens<c_.tokens && dma<c_.dma_outstanding) {
                            st.range_token=true;tokens++;dma++;range_order_.push_back(s);
                        } else {blocked=true;continue;}
                    }
                    if(c_.window_global) {
                        // Ordered cursor: only the oldest admitted range with lines
                        // left may issue, and all ranges share one window.
                        int head=-1;
                        for(int q:range_order_) if(streams_[q].admitted<c_.lines){head=q;break;}
                        int total_active=0;
                        for(const Stream &x:streams_) total_active+=x.active;
                        can=(s==head) && total_active<c_.window;
                    } else can=st.active<c_.window;
                }
                if(!can) continue;
                Line l;
                l.stream=s;l.index=st.admitted;l.seq=next_seq++;
                l.hit=percentage(l.seq,s,17,c_.hit_percent);
                l.dirty=l.hit && percentage(l.seq,s,53,c_.dirty_percent);
                lines_.push_back(l);st.admitted++;st.active++;
                if(c_.design==Design::B1){tokens++;dma++;}
                if(first_admit<0) first_admit=cycle;
                rr_stream=(s+1)%c_.streams;
                break;
            }
            if(blocked) result_.token_wait_cycles++;

            // The AC channel accepts at most one new snoop each cycle.
            if(service<c_.snoop_contexts) {
                auto it=std::min_element(lines_.begin(),lines_.end(),[](const Line&a,const Line&b){
                    const auto ka=(a.state==State::WaitSnoop?a.seq:std::numeric_limits<std::uint64_t>::max());
                    const auto kb=(b.state==State::WaitSnoop?b.seq:std::numeric_limits<std::uint64_t>::max());
                    return ka<kb;
                });
                if(it!=lines_.end() && it->state==State::WaitSnoop) {
                    it->state=State::Snoop;it->holds_service=true;service++;
                    const bool needs_cd=(c_.op==Op::Read?it->hit:it->dirty);
                    it->ready=cycle+(needs_cd?c_.ls_data:c_.ls_nodata);
                    result_.snoop_requests++;
                }
            }

            // Issue one memory read a cycle. Optional coalescing uses one Q entry
            // and one AR for up to four consecutive ready misses.
            if(c_.op==Op::Read) {
                std::vector<int> candidates;
                for(int i=0;i<int(lines_.size());i++)
                    if(lines_[i].state==State::MemPending) candidates.push_back(i);
                std::sort(candidates.begin(),candidates.end(),[&](int a,int b){return lines_[a].seq<lines_[b].seq;});
                if(!candidates.empty()) {
                    Line &l=lines_[candidates[0]];
                    int attach=-1;
                    if(c_.merge_misses) {
                        for(int g=int(merge_refs.size())-1;g>=0;g--) {
                            if(merge_refs[g]>0 && merge_size[g]<4 && merge_stream[g]==l.stream &&
                               merge_last_index[g]+1==l.index) {attach=g;break;}
                        }
                    }
                    if(attach>=0) {
                        l.state=State::MemWait;l.ready=merge_next_ready[attach];
                        l.holds_mem=true;l.merge_group=attach;
                        merge_next_ready[attach]+=4;merge_last_index[attach]=l.index;
                        merge_size[attach]++;merge_refs[attach]++;
                    } else if(mem<c_.mem_outstanding) {
                        int gid=-1;
                        if(c_.merge_misses) {
                            gid=int(merge_refs.size());merge_refs.push_back(1);merge_size.push_back(1);
                            merge_stream.push_back(l.stream);merge_last_index.push_back(l.index);
                            merge_next_ready.push_back(cycle+c_.lm+4);
                        }
                        l.state=State::MemWait;l.ready=cycle+c_.lm;
                        l.holds_mem=true;l.merge_group=gid;
                        mem++;result_.mem_requests++;
                    }
                }
            }

            // Strict global line order on the M1 data path.
            if(bus_line<0) {
                int pick=-1;
                std::uint64_t lowest=std::numeric_limits<std::uint64_t>::max();
                for(int i=0;i<int(lines_.size());i++) {
                    const bool awaits_bus=lines_[i].state!=State::Done &&
                        !(c_.op==Op::Write && lines_[i].state==State::WaitB);
                    if(awaits_bus) lowest=std::min(lowest,lines_[i].seq);
                }
                for(int i=0;i<int(lines_.size());i++) if(lines_[i].seq==lowest) {pick=i;break;}
                if(pick>=0) {
                    Line &l=lines_[pick];
                    const bool ready=(c_.op==Op::Read && l.state==State::ReadyBus) ||
                                     (c_.op==Op::Write && l.state==State::MemPending && mem<c_.mem_outstanding);
                    if(ready) {
                        if(c_.op==Op::Write){mem++;result_.mem_requests++;l.holds_mem=true;}
                        l.state=State::OnBus;bus_line=pick;bus_done=cycle+4;
                    }
                }
            }

            const int active_lines=int(lines_.size())-int(done);
            sum_tokens+=tokens;sum_service+=service;sum_mem+=mem;sum_lines+=active_lines;
            result_.max_tokens=std::max(result_.max_tokens,tokens);
            result_.max_service=std::max(result_.max_service,service);
            result_.max_mem=std::max(result_.max_mem,mem);
            result_.max_lines=std::max(result_.max_lines,active_lines);
            cycle++;
        }
        if(done!=total) throw std::runtime_error("simulation did not converge");
        result_.cycles=cycle-first_admit;
        result_.throughput=double(total)/result_.cycles;
        result_.avg_tokens=double(sum_tokens)/cycle;
        result_.avg_service=double(sum_service)/cycle;
        result_.avg_mem=double(sum_mem)/cycle;
        result_.avg_lines=double(sum_lines)/cycle;
        return result_;
    }

  private:
    Config c_;
    std::vector<Stream> streams_;
    std::vector<Line> lines_;
    std::vector<int> range_order_;
    Result result_;
    static bool percentage(std::uint64_t seq,int stream,int salt,int percent) {
        if(percent<=0)return false;
        if(percent>=100)return true;
        std::uint64_t x=seq*0x9e3779b97f4a7c15ULL+std::uint64_t(stream+1)*0xbf58476d1ce4e5b9ULL+salt;
        x^=x>>30;x*=0xbf58476d1ce4e5b9ULL;x^=x>>27;
        return int(x%100)<percent;
    }
    void validate() const {
        auto pos=[](int v,const char*n){if(v<=0)throw std::invalid_argument(std::string(n)+" must be positive");};
        pos(c_.streams,"streams");pos(c_.lines,"lines");pos(c_.tokens,"tokens");
        pos(c_.window,"window");pos(c_.snoop_contexts,"snoop contexts");
        pos(c_.mem_outstanding,"memory outstanding");pos(c_.dma_outstanding,"DMA outstanding");
        if(c_.lc<0||c_.ls_nodata<=0||c_.ls_data<=0||c_.lm<=0||c_.lw<=0)
            throw std::invalid_argument("latencies out of range");
        if(c_.hit_percent<0||c_.hit_percent>100||c_.dirty_percent<0||c_.dirty_percent>100)
            throw std::invalid_argument("percent out of range");
    }
};

static int integer(const char *s,const std::string &name) {
    char *end=nullptr;long v=std::strtol(s,&end,10);
    if(!end||*end||v<std::numeric_limits<int>::min()||v>std::numeric_limits<int>::max())
        throw std::invalid_argument("bad integer for "+name);
    return int(v);
}

static double analytic_read_miss(const Config &c) {
    const double slots=(c.design==Design::B1?c.tokens:c.window);
    return std::min({slots/(c.ls_nodata+c.lc+c.lm+4.0),
                     c.snoop_contexts/(c.ls_nodata+c.lc+0.0),
                     c.mem_outstanding/(c.lm+4.0),0.25});
}

static void usage() {
    std::cerr<<"usage: rcci_model [--design b1|rcci] [--op read|write] [--streams N] [--lines N]\n"
             <<"  [--tokens N] [--window N] [--snoop-contexts N] [--mem-outstanding N]\n"
             <<"  [--dma-outstanding N] [--hit-percent N] [--dirty-percent N]\n"
             <<"  [--ls-nodata N] [--ls-data N] [--lc N] [--lm N] [--lw N] [--merge-misses]\n"
             <<"  [--window-scope global|stream]\n";
}

int main(int argc,char **argv) try {
    Config c;
    for(int i=1;i<argc;i++) {
        std::string a=argv[i];
        auto value=[&](){if(++i>=argc)throw std::invalid_argument("missing value for "+a);return argv[i];};
        if(a=="--design"){std::string v=value();if(v=="b1")c.design=Design::B1;else if(v=="rcci")c.design=Design::RCCI;else throw std::invalid_argument("bad design");}
        else if(a=="--op"){std::string v=value();if(v=="read")c.op=Op::Read;else if(v=="write")c.op=Op::Write;else throw std::invalid_argument("bad op");}
        else if(a=="--streams")c.streams=integer(value(),a);
        else if(a=="--lines")c.lines=integer(value(),a);
        else if(a=="--tokens")c.tokens=integer(value(),a);
        else if(a=="--window")c.window=integer(value(),a);
        else if(a=="--snoop-contexts")c.snoop_contexts=integer(value(),a);
        else if(a=="--mem-outstanding")c.mem_outstanding=integer(value(),a);
        else if(a=="--dma-outstanding")c.dma_outstanding=integer(value(),a);
        else if(a=="--hit-percent")c.hit_percent=integer(value(),a);
        else if(a=="--dirty-percent")c.dirty_percent=integer(value(),a);
        else if(a=="--ls-nodata")c.ls_nodata=integer(value(),a);
        else if(a=="--ls-data")c.ls_data=integer(value(),a);
        else if(a=="--lc")c.lc=integer(value(),a);
        else if(a=="--lm")c.lm=integer(value(),a);
        else if(a=="--lw")c.lw=integer(value(),a);
        else if(a=="--merge-misses")c.merge_misses=true;
        else if(a=="--window-scope"){std::string v=value();if(v=="global")c.window_global=true;else if(v=="stream")c.window_global=false;else throw std::invalid_argument("bad window scope");}
        else if(a=="--help"){usage();return 0;}
        else throw std::invalid_argument("unknown option "+a);
    }
    Result r=Model(c).run();
    const char *design=c.design==Design::B1?"b1":"rcci";
    const char *op=c.op==Op::Read?"read":"write";
    std::cout<<"design,op,streams,lines,tokens,window,snoop_contexts,mem_outstanding,dma_outstanding,hit_percent,dirty_percent,ls_nodata,ls_data,lc,lm,lw,merge_misses,cycles,first_done,throughput,analytic_read_miss,avg_tokens,max_tokens,avg_service,max_service,avg_mem,max_mem,avg_lines,max_lines,token_wait_cycles,mem_requests,snoop_requests,window_scope\n";
    std::cout<<design<<','<<op<<','<<c.streams<<','<<c.lines<<','<<c.tokens<<','<<c.window<<','
             <<c.snoop_contexts<<','<<c.mem_outstanding<<','<<c.dma_outstanding<<','
             <<c.hit_percent<<','<<c.dirty_percent<<','<<c.ls_nodata<<','<<c.ls_data<<','
             <<c.lc<<','<<c.lm<<','<<c.lw<<','<<(c.merge_misses?1:0)<<','<<r.cycles<<','
             <<r.first_done<<','<<std::fixed<<std::setprecision(8)<<r.throughput<<','
             <<(c.op==Op::Read&&c.hit_percent==0?analytic_read_miss(c):0.0)<<','
             <<r.avg_tokens<<','<<r.max_tokens<<','<<r.avg_service<<','<<r.max_service<<','
             <<r.avg_mem<<','<<r.max_mem<<','<<r.avg_lines<<','<<r.max_lines<<','
             <<r.token_wait_cycles<<','<<r.mem_requests<<','<<r.snoop_requests<<','
             <<(c.window_global?"global":"stream")<<'\n';
    return 0;
} catch(const std::exception &e) {
    std::cerr<<"rcci_model: "<<e.what()<<'\n';usage();return 2;
}
