#!/bin/bash
# Resumable -O0 sweep driver. Processes configs not yet in CSV, up to TIME_BUDGET.
cd /tmp/ccibuild
OUT=/sessions/determined-vibrant-albattani/mnt/CCI_P/CCI-simulation/sim_PROP
mkdir -p "$OUT"; CSV="$OUT/sweep_results.csv"
SRCS="./Top.cpp ./Memory.cpp ./CAxPkt.cpp ./CACPkt.cpp ./CCDPkt.cpp ./CCRPkt.cpp ./CRPkt.cpp ./CWPkt.cpp ./CBPkt.cpp ./UD_Bus.cpp ./CFIFO.cpp ./CTRx.cpp ./CQ.cpp ./CBank.cpp ./CMem.cpp ./CAddrGen.cpp ./CMST.cpp ./CTracker.cpp ./CROB.cpp ./CMIU.cpp ./CMMU.cpp ./CCache.cpp ./CBUS.cpp ./CArb.cpp ./CScheduler.cpp ./CSLV.cpp ./mainMemCopy.cpp ./Buddy/BuddyTop.cpp ./Buddy/CQueue.cpp ./Buddy/CFreeList.cpp ./Buddy/CBlockList.cpp ./Buddy/CBlockArray.cpp ./Buddy/CPageArray.cpp ./Buddy/CBuddy.cpp"
BASE='-w -fno-stack-protector -DDEBUG -D"AR_LIAM" -D"AW_LIAM" -D"BANK_NUM=16" -D"SEED_INIT=493" -D"TILE_SIZE=4" -D"RASTER_SCAN" -D"NUM_TOTAL_PAGES=32" -D"BLOCKSIZE_INIT = 16" -D"BANK_FLIP_PLUS" -D"SINGLE_FETCH" -D"BBS" -D"MAX_ORDER=10" -D"Cache_OFF" -D"IMG_HORIZONTAL_SIZE = 2048" -D"IMG_VERTICAL_SIZE = 256" -D"BYTE_PER_PIXEL = 4"'
[ -f "$CSV" ] || echo "scenario,proposed,n,s,r,entries,target_lines,make_inval,done_bits,pages_done,live_end,I1,I2,I3,trk_range,trk_line,trk_ratio,base_stall,prop_stall,reduction_pct,lat_base_p95,lat_prop_p95,nonconf_cnt,simfp" > "$CSV"

CONFIGS="$1"; BUDGET=${2:-34}; START=$(date +%s); n_done=0
for cfg in $CONFIGS; do
  IFS=, read sc pr n s r <<< "$cfg"
  tag="${sc}_p${pr}_n${n}_s${s}_r${r}"
  grep -q ",$tag$\|^$sc,$pr,$n,$s,$r," "$CSV" 2>/dev/null && continue   # already done
  [ $(( $(date +%s)-START )) -ge $BUDGET ] && { echo "BUDGET_HIT after $n_done"; break; }
  TT=$([ "$sc" = MEMSET ] && echo CCI_MEMSET || echo CCI_MEMCPY)
  PF=$([ "$pr" = 1 ] && echo '-D"CCI_PROPOSED"' || echo '')
  eval g++ -O0 $BASE -D\"$TT\" $PF -D'"CCI_CACHELINE='$n'"' -D'"ISSUE_MIN_INTERVAL='$r'"' -D'"CCI_SNOOP_LATENCY='$s'"' -o b.bin $SRCS 2>/dev/null
  [ $? -ne 0 ] && { echo "BUILD_FAIL $tag"; continue; }
  log="$OUT/prop_${tag}.log"; ./b.bin > "$log" 2>&1; rm -f b.bin
  G(){ grep -m1 "$1" "$log" | grep -oE '[-0-9]+' | tail -1; }
  simfp=$(grep -m1 'Avg req Q scheduled Ax waiting' "$log" | grep -oE '[0-9.]+' | tail -1)
  if [ "$pr" = 1 ]; then
    ent=$(G 'entries allocated'); tgt=$(G 'target lines total'); mki=$(G 'MakeInvalid issued')
    dbs=$(G 'done bits set'); pdn=$(G 'pages reaching DONE'); lve=$(G 'live entries at end')
    i1=$(G 'I1 violations'); i2=$(G 'I2 violations'); i3=$(G 'I3 violations')
    trR=$(grep -m1 'tracker peak' "$log"|grep -oE '[0-9]+'|sed -n 1p); trL=$(grep -m1 'tracker peak' "$log"|grep -oE '[0-9]+'|sed -n 2p)
    rat=$(grep -m1 'tracker peak' "$log"|grep -oE '[0-9.]+x'|tr -d x)
    bst=$(grep -m1 'total stall base' "$log"|grep -oE '[0-9]+'|sed -n 1p); pst=$(grep -m1 'total stall base' "$log"|grep -oE '[0-9]+'|sed -n 2p)
    red=$(grep -m1 'stall reduction' "$log"|grep -oE '[0-9.]+'|tail -1)
    lbp=$(grep -m1 'latency all  base' "$log"|grep -oE '[0-9]+'|sed -n 2p); lpp=$(grep -m1 'latency all  prop' "$log"|grep -oE '[0-9]+'|sed -n 2p)
    ncf=$(grep -m1 'non-conflict count' "$log"|grep -oE '[0-9]+'|sed -n 1p)
    echo "$sc,$pr,$n,$s,$r,$ent,$tgt,$mki,$dbs,$pdn,$lve,$i1,$i2,$i3,$trR,$trL,$rat,$bst,$pst,$red,$lbp,$lpp,$ncf,$simfp" >> "$CSV"
  else
    echo "$sc,$pr,$n,$s,$r,,,,,,,,,,,,,,,,,,,$simfp" >> "$CSV"
  fi
  n_done=$((n_done+1))
done
echo "PROCESSED=$n_done total_rows=$(( $(wc -l < "$CSV")-1 ))"
