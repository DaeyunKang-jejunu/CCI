# REVIEW 보완 후 검증·구현 결과

현재 source hash, 실행 완료 manifest, 산출물 hash가 일치하는 결과만 아래에 표시한다. 기존 수치는 `archive/v9_pre_review_fixes`에 보존되어 있다.

## 기능 검증

실행 `simulation_20261008T010758Z_4a29aa20`: 정상/검증 완료 132건, 의도된 실패 검출 16건. 별도로 규모 측정(scale_sweep·read/write extension·probe variation) 104건이 통과했다. [실행 manifest](runs/simulation_20261008T010758Z_4a29aa20/manifest.json).

| Test | 검증 범위 | 결과 | 근거 |
|---|---|---|---|
| b0 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b0.log) |
| axi_outstanding_d1 | axi_outstanding_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_outstanding_d1.log) |
| axi_outstanding_d3 | axi_outstanding_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_outstanding_d3.log) |
| axi_outstanding_d5 | axi_outstanding_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_outstanding_d5.log) |
| axi_fifo_overlap_d1 | axi_fifo_overlap | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d1.log) |
| axi_fifo_overlap_d3 | axi_fifo_overlap | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d3.log) |
| axi_fifo_overlap_d5 | axi_fifo_overlap | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d5.log) |
| axi_protocol_wlast_early | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_wlast_early.log) |
| axi_protocol_bid_mismatch | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_bid_mismatch.log) |
| axi_protocol_rlast_early | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_rlast_early.log) |
| axi_protocol_rid_mismatch | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_rid_mismatch.log) |
| axi_protocol_aw_overflow | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_aw_overflow.log) |
| axi_protocol_ar_overflow | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_ar_overflow.log) |
| axi_protocol_wlast_missing | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_wlast_missing.log) |
| axi_protocol_rlast_missing | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_rlast_missing.log) |
| axi_protocol_b_without_aw | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_b_without_aw.log) |
| axi_protocol_r_without_ar | protocol_error_detection | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_r_without_ar.log) |
| fifo_wr_bad_count | fifo_mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/fifo_wr_bad_count.log) |
| fifo_rd_bad_count | fifo_mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/fifo_rd_bad_count.log) |
| grant_lock | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/grant_lock.log) |
| b1_d16_t4_f4 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t4_f4.log) |
| p_d16_t4_f4 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t4_f4.log) |
| b1_d16_t8_f8 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t8_f8.log) |
| p_d16_t8_f8 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t8_f8.log) |
| b1_d16_t16_f16 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t16_f16.log) |
| p_d16_t16_f16 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t16_f16.log) |
| b1_d16_t16_f4 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t16_f4.log) |
| p_d16_t16_f4 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t16_f4.log) |
| b1_d1_t1_f1 | parameter_directed | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d1_t1_f1.log) |
| p_d1_t1_f1 | parameter_directed | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d1_t1_f1.log) |
| b1_d3_t2_f1 | parameter_directed | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d3_t2_f1.log) |
| p_d3_t2_f1 | parameter_directed | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d3_t2_f1.log) |
| b1_d5_t5_f3 | parameter_directed | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d5_t5_f3.log) |
| p_d5_t5_f3 | parameter_directed | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d5_t5_f3.log) |
| b1_d16_t5_f3 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t5_f3.log) |
| p_d16_t5_f3 | directed_suite | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t5_f3.log) |
| seed_1_mode0 | seeded_ready_stalls | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_1_mode0.log) |
| seed_1_mode1 | seeded_ready_stalls | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_1_mode1.log) |
| seed_7_mode0 | seeded_ready_stalls | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_7_mode0.log) |
| seed_7_mode1 | seeded_ready_stalls | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_7_mode1.log) |
| seed_123_mode0 | seeded_ready_stalls | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_123_mode0.log) |
| seed_123_mode1 | seeded_ready_stalls | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_123_mode1.log) |
| traffic_seed11_mode0 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed11_mode0.log) |
| traffic_seed11_mode1 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed11_mode1.log) |
| traffic_seed29_mode0 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed29_mode0.log) |
| traffic_seed29_mode1 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed29_mode1.log) |
| traffic_seed101_mode0 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed101_mode0.log) |
| traffic_seed101_mode1 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed101_mode1.log) |
| traffic_seed997_mode0 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed997_mode0.log) |
| traffic_seed997_mode1 | constrained_traffic | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed997_mode1.log) |
| bench_seed1_mode0_prelude0 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed1_mode0_prelude0.log) |
| bench_seed1_mode0_prelude137 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed1_mode0_prelude137.log) |
| bench_seed1_mode1_prelude0 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed1_mode1_prelude0.log) |
| bench_seed1_mode1_prelude137 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed1_mode1_prelude137.log) |
| bench_seed7_mode0_prelude0 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed7_mode0_prelude0.log) |
| bench_seed7_mode0_prelude137 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed7_mode0_prelude137.log) |
| bench_seed7_mode1_prelude0 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed7_mode1_prelude0.log) |
| bench_seed7_mode1_prelude137 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed7_mode1_prelude137.log) |
| bench_seed123_mode0_prelude0 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed123_mode0_prelude0.log) |
| bench_seed123_mode0_prelude137 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed123_mode0_prelude137.log) |
| bench_seed123_mode1_prelude0 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed123_mode1_prelude0.log) |
| bench_seed123_mode1_prelude137 | benchmark_isolation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/bench_seed123_mode1_prelude137.log) |
| scale_b1_t1_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t1_l8_o0.log) |
| scale_b1_t1_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t1_l8_o4.log) |
| scale_b1_t1_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t1_l64_o0.log) |
| scale_b1_t1_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t1_l64_o4.log) |
| scale_b1_t1_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t1_l256_o0.log) |
| scale_b1_t1_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t1_l256_o4.log) |
| scale_b1_t2_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t2_l8_o0.log) |
| scale_b1_t2_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t2_l8_o4.log) |
| scale_b1_t2_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t2_l64_o0.log) |
| scale_b1_t2_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t2_l64_o4.log) |
| scale_b1_t2_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t2_l256_o0.log) |
| scale_b1_t2_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t2_l256_o4.log) |
| scale_b1_t4_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t4_l8_o0.log) |
| scale_b1_t4_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t4_l8_o4.log) |
| scale_b1_t4_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t4_l64_o0.log) |
| scale_b1_t4_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t4_l64_o4.log) |
| scale_b1_t4_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t4_l256_o0.log) |
| scale_b1_t4_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t4_l256_o4.log) |
| scale_b1_t8_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t8_l8_o0.log) |
| scale_b1_t8_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t8_l8_o4.log) |
| scale_b1_t8_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t8_l64_o0.log) |
| scale_b1_t8_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t8_l64_o4.log) |
| scale_b1_t8_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t8_l256_o0.log) |
| scale_b1_t8_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t8_l256_o4.log) |
| scale_b1_t16_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t16_l8_o0.log) |
| scale_b1_t16_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t16_l8_o4.log) |
| scale_b1_t16_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t16_l64_o0.log) |
| scale_b1_t16_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t16_l64_o4.log) |
| scale_b1_t16_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t16_l256_o0.log) |
| scale_b1_t16_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_b1_t16_l256_o4.log) |
| scale_p_t1_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t1_l8_o0.log) |
| scale_p_t1_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t1_l8_o4.log) |
| scale_p_t1_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t1_l64_o0.log) |
| scale_p_t1_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t1_l64_o4.log) |
| scale_p_t1_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t1_l256_o0.log) |
| scale_p_t1_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t1_l256_o4.log) |
| scale_p_t2_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t2_l8_o0.log) |
| scale_p_t2_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t2_l8_o4.log) |
| scale_p_t2_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t2_l64_o0.log) |
| scale_p_t2_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t2_l64_o4.log) |
| scale_p_t2_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t2_l256_o0.log) |
| scale_p_t2_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t2_l256_o4.log) |
| scale_p_t4_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t4_l8_o0.log) |
| scale_p_t4_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t4_l8_o4.log) |
| scale_p_t4_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t4_l64_o0.log) |
| scale_p_t4_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t4_l64_o4.log) |
| scale_p_t4_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t4_l256_o0.log) |
| scale_p_t4_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t4_l256_o4.log) |
| scale_p_t8_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t8_l8_o0.log) |
| scale_p_t8_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t8_l8_o4.log) |
| scale_p_t8_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t8_l64_o0.log) |
| scale_p_t8_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t8_l64_o4.log) |
| scale_p_t8_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t8_l256_o0.log) |
| scale_p_t8_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t8_l256_o4.log) |
| scale_p_t16_l8_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t16_l8_o0.log) |
| scale_p_t16_l8_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t16_l8_o4.log) |
| scale_p_t16_l64_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t16_l64_o0.log) |
| scale_p_t16_l64_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t16_l64_o4.log) |
| scale_p_t16_l256_o0 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t16_l256_o0.log) |
| scale_p_t16_l256_o4 | scale_sweep | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_p_t16_l256_o4.log) |
| scale_ext_b1_t4_lat4_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t4_lat4_m0.log) |
| scale_wext_b1_t4_lat4_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t4_lat4_m0w.log) |
| scale_ext_b1_t4_lat12_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t4_lat12_m0.log) |
| scale_wext_b1_t4_lat12_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t4_lat12_m0w.log) |
| scale_ext_b1_t4_lat32_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t4_lat32_m0.log) |
| scale_wext_b1_t4_lat32_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t4_lat32_m0w.log) |
| scale_ext_b1_t4_lat64_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t4_lat64_m0.log) |
| scale_wext_b1_t4_lat64_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t4_lat64_m0w.log) |
| scale_ext_b1_t16_lat4_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t16_lat4_m0.log) |
| scale_wext_b1_t16_lat4_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t16_lat4_m0w.log) |
| scale_ext_b1_t16_lat12_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t16_lat12_m0.log) |
| scale_wext_b1_t16_lat12_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t16_lat12_m0w.log) |
| scale_ext_b1_t16_lat32_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t16_lat32_m0.log) |
| scale_wext_b1_t16_lat32_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t16_lat32_m0w.log) |
| scale_ext_b1_t16_lat64_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_b1_t16_lat64_m0.log) |
| scale_wext_b1_t16_lat64_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_b1_t16_lat64_m0w.log) |
| scale_ext_p_t4_lat4_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t4_lat4_m0.log) |
| scale_wext_p_t4_lat4_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t4_lat4_m0w.log) |
| scale_ext_p_t4_lat12_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t4_lat12_m0.log) |
| scale_wext_p_t4_lat12_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t4_lat12_m0w.log) |
| scale_ext_p_t4_lat32_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t4_lat32_m0.log) |
| scale_wext_p_t4_lat32_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t4_lat32_m0w.log) |
| scale_ext_p_t4_lat64_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t4_lat64_m0.log) |
| scale_wext_p_t4_lat64_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t4_lat64_m0w.log) |
| scale_ext_p_t16_lat4_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t16_lat4_m0.log) |
| scale_wext_p_t16_lat4_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t16_lat4_m0w.log) |
| scale_ext_p_t16_lat12_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t16_lat12_m0.log) |
| scale_wext_p_t16_lat12_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t16_lat12_m0w.log) |
| scale_ext_p_t16_lat32_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t16_lat32_m0.log) |
| scale_wext_p_t16_lat32_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t16_lat32_m0w.log) |
| scale_ext_p_t16_lat64_m0 | scale_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_ext_p_t16_lat64_m0.log) |
| scale_wext_p_t16_lat64_m0w | scale_write_extension | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/scale_wext_p_t16_lat64_m0w.log) |
| probe_var_b1_t4_a1_b2 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_b1_t4_a1_b2.log) |
| probe_var_b1_t4_a4_b8 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_b1_t4_a4_b8.log) |
| probe_var_b1_t4_a16_b32 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_b1_t4_a16_b32.log) |
| probe_var_b1_t16_a1_b2 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_b1_t16_a1_b2.log) |
| probe_var_b1_t16_a4_b8 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_b1_t16_a4_b8.log) |
| probe_var_b1_t16_a16_b32 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_b1_t16_a16_b32.log) |
| probe_var_p_t4_a1_b2 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_p_t4_a1_b2.log) |
| probe_var_p_t4_a4_b8 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_p_t4_a4_b8.log) |
| probe_var_p_t4_a16_b32 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_p_t4_a16_b32.log) |
| probe_var_p_t16_a1_b2 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_p_t16_a1_b2.log) |
| probe_var_p_t16_a4_b8 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_p_t16_a4_b8.log) |
| probe_var_p_t16_a16_b32 | probe_variation | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/probe_var_p_t16_a16_b32.log) |
| seed_2_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_2_mode0.log) |
| seed_3_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_3_mode0.log) |
| seed_4_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_4_mode0.log) |
| seed_5_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_5_mode0.log) |
| seed_6_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_6_mode0.log) |
| traffic_seed41_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed41_mode0.log) |
| traffic_seed77_mode0 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed77_mode0.log) |
| seed_2_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_2_mode1.log) |
| seed_3_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_3_mode1.log) |
| seed_4_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_4_mode1.log) |
| seed_5_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_5_mode1.log) |
| seed_6_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/seed_6_mode1.log) |
| traffic_seed41_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed41_mode1.log) |
| traffic_seed77_mode1 | seed_expansion | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/traffic_seed77_mode1.log) |
| cross_overlap_mode0 | cross_targeted | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/cross_overlap_mode0.log) |
| cross_overlap_mode1 | cross_targeted | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/cross_overlap_mode1.log) |
| lat_b1_sl1_sn1_suite | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_suite.log) |
| lat_b1_sl1_sn1_seed2 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_seed2.log) |
| lat_b1_sl1_sn1_seed3 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_seed3.log) |
| lat_b1_sl1_sn1_seed4 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_seed4.log) |
| lat_b1_sl1_sn1_seed5 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_seed5.log) |
| lat_b1_sl1_sn1_seed6 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_seed6.log) |
| lat_b1_sl1_sn1_traffic41 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_traffic41.log) |
| lat_b1_sl1_sn1_traffic77 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl1_sn1_traffic77.log) |
| lat_b1_sl20_sn40_suite | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_suite.log) |
| lat_b1_sl20_sn40_seed2 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_seed2.log) |
| lat_b1_sl20_sn40_seed3 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_seed3.log) |
| lat_b1_sl20_sn40_seed4 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_seed4.log) |
| lat_b1_sl20_sn40_seed5 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_seed5.log) |
| lat_b1_sl20_sn40_seed6 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_seed6.log) |
| lat_b1_sl20_sn40_traffic41 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_traffic41.log) |
| lat_b1_sl20_sn40_traffic77 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_b1_sl20_sn40_traffic77.log) |
| lat_p_sl1_sn1_suite | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_suite.log) |
| lat_p_sl1_sn1_seed2 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_seed2.log) |
| lat_p_sl1_sn1_seed3 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_seed3.log) |
| lat_p_sl1_sn1_seed4 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_seed4.log) |
| lat_p_sl1_sn1_seed5 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_seed5.log) |
| lat_p_sl1_sn1_seed6 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_seed6.log) |
| lat_p_sl1_sn1_traffic41 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_traffic41.log) |
| lat_p_sl1_sn1_traffic77 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl1_sn1_traffic77.log) |
| lat_p_sl20_sn40_suite | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_suite.log) |
| lat_p_sl20_sn40_seed2 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_seed2.log) |
| lat_p_sl20_sn40_seed3 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_seed3.log) |
| lat_p_sl20_sn40_seed4 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_seed4.log) |
| lat_p_sl20_sn40_seed5 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_seed5.log) |
| lat_p_sl20_sn40_seed6 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_seed6.log) |
| lat_p_sl20_sn40_traffic41 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_traffic41.log) |
| lat_p_sl20_sn40_traffic77 | latency_matrix | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/lat_p_sl20_sn40_traffic77.log) |
| watchdog_negative | negative_assertion | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/watchdog_negative.log) |
| range_cr_error | negative_assertion | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/range_cr_error.log) |
| b_error | negative_assertion | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/b_error.log) |
| m0_crossing | negative_assertion | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/m0_crossing.log) |
| page_mutant | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/page_mutant.log) |
| hazard_no_page | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_no_page.log) |
| hazard_no_mask | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_no_mask.log) |
| hazard_no_done | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_no_done.log) |
| hazard_zero | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_zero.log) |
| hazard_ar_disabled | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_ar_disabled.log) |
| hazard_aw_disabled | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_aw_disabled.log) |
| hazard_aw_wrong_address | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_aw_wrong_address.log) |
| hazard_ar_wrong_address | mutation | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/hazard_ar_wrong_address.log) |
| memory_cache_mode0 | memory_cache | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_mode0.log) |
| memory_cache_mode1 | memory_cache | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_mode1.log) |
| memory_cache_m0_lines1_axi1_lat0 | memory_cache_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_m0_lines1_axi1_lat0.log) |
| memory_cache_m1_lines1_axi1_lat0 | memory_cache_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_m1_lines1_axi1_lat0.log) |
| memory_cache_m0_lines2_axi3_lat5 | memory_cache_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_m0_lines2_axi3_lat5.log) |
| memory_cache_m1_lines2_axi3_lat5 | memory_cache_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_m1_lines2_axi3_lat5.log) |
| memory_cache_m0_lines16_axi5_lat12 | memory_cache_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_m0_lines16_axi5_lat12.log) |
| memory_cache_m1_lines16_axi5_lat12 | memory_cache_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_cache_m1_lines16_axi5_lat12.log) |
| cache_collision_lines1 | cache_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/cache_collision_lines1.log) |
| cache_collision_lines2 | cache_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/cache_collision_lines2.log) |
| cache_collision_lines8 | cache_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/cache_collision_lines8.log) |
| cache_collision_lines16 | cache_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/cache_collision_lines16.log) |
| memory_collision_latency0 | memory_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_collision_latency0.log) |
| memory_collision_latency5 | memory_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_collision_latency5.log) |
| memory_collision_latency255 | memory_collision | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_collision_latency255.log) |
| memory_collision_latency256 | negative_parameter | EXPECTED_FAILURE_PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/memory_collision_latency256.log) |
| endpoint_d1_l0 | endpoint_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/endpoint_d1_l0.log) |
| endpoint_d1_l1 | endpoint_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/endpoint_d1_l1.log) |
| endpoint_d3_l0 | endpoint_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/endpoint_d3_l0.log) |
| endpoint_d3_l12 | endpoint_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/endpoint_d3_l12.log) |
| endpoint_d16_l1 | endpoint_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/endpoint_d16_l1.log) |
| endpoint_d16_l12 | endpoint_parameters | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/endpoint_d16_l12.log) |
| decoder_verilator | decoder_exhaustive | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/decoder_verilator.log) |
| decoder_iverilog | cross_simulator_decoder | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/decoder_iverilog.log) |
| decoder_formal | formal_combinational_decoder | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/decoder_formal.log) |

작은 depth는 parameter_directed 6건이다. conventional 수명/hazard와 중간 W reset, P range-only hazard·duplicate·setup drain을 추가 검사한다. 여러 entry가 필요한 HOL은 depth≥3에서만 실행한다. 과거 boundary_smoke case가 있다면 0건으로 별도 구분한다.
seeded_ready_stalls는 seed 1/7/123의 downstream AW/AR/W READY stall만 변경한다. 주소·setup 정책·요청 task 조합은 directed이며 응답 latency는 고정이다. 매 case reset이 난수 상태를 초기화한다. benchmark_isolation은 full suite/독립 실행/137-cycle prelude의 모든 METRIC 값 일치를 확인한다. 일반적인 constrained-random traffic 검증은 아니다.
전체 P directed suite는 active range를 유지하며 비대상 line·다른 page의 같은 index·duplicate 없는 done target에 M0 AR/AW가 각각 8 cycle 이내 수락되는지 검사한다. 세 hazard mutation은 해당 수락 제한 오류로 검출해야 한다.
range-only 차단 시험은 conventional entry 없이 INVALIDATING/TRACKING(write 수락 전)/B pending에서 AR·AW를 각각 확인한다. 반대 채널에는 비대상 주소를 동시에 보내며, pending 차단과 actual B 이후 8 cycle 내 수락을 검사한다. 출력 상수 0·AR/AW 개별 hazard 무시·AR/AW 주소 오연결 변이를 전용 오류로 검출한다.

## AXI protocol 오류 검출기

조기/누락 WLAST·RLAST, BID/RID 불일치, outstanding이 없는 B/R을 실제 채널 handshake로 각각 주입하고 sticky 오류 flag를 확인한다. full 상태에서는 외부 AW/AR handshake 자체가 차단되므로 overflow 방어 분기는 내부 full+handshake 조건을 한 edge 강제하는 white-box unit test로 확인한다.

| Case | 결과 | 근거 |
|---|---|---|
| axi_protocol_wlast_early | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_wlast_early.log) |
| axi_protocol_bid_mismatch | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_bid_mismatch.log) |
| axi_protocol_rlast_early | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_rlast_early.log) |
| axi_protocol_rid_mismatch | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_rid_mismatch.log) |
| axi_protocol_aw_overflow | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_aw_overflow.log) |
| axi_protocol_ar_overflow | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_ar_overflow.log) |
| axi_protocol_wlast_missing | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_wlast_missing.log) |
| axi_protocol_rlast_missing | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_rlast_missing.log) |
| axi_protocol_b_without_aw | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_b_without_aw.log) |
| axi_protocol_r_without_ar | PASS | [log](runs/simulation_20261008T010758Z_4a29aa20/axi_protocol_r_without_ar.log) |

[Scenario 실행 coverage](runs/simulation_20261008T010758Z_4a29aa20/scenario_coverage.json)는 PASS feature별 실행 case 목록이다. 분기/toggle coverage 또는 모든 동시성 조합의 coverage 비율은 아니다.
decoder는 Verilator/Icarus에서 49,152개 경계 조합을 교차검증하고, Yosys SAT로 전체 입력의 조합 명세를 증명한다. 순차 FIFO/order/lifetime의 formal 범위는 아래 Formal 절에서 별도로 보고한다.
메모리 충돌 시험은 read-first, 다른 주소, held R, 후속 read를 검사한다. endpoint는 depth 1/3/16과 latency 0/1/12 조합을 검사한다. 실행 tool version·command·warning 허용 목록·latency 조건은 manifest에 보존한다.

## AXI/cache 경계 확장

AXI outstanding depth 1/3/5에서 두 master의 각 16개 read/write를 실행하고 외부 handshake 기준 outstanding 상한·drain을 검사한다. 일반 workload의 overlap과 별도로 전용 FIFO 시험이 depth 3/5에서 AW/B·AR/RLAST 동시 handshake를 각각 40회 요구한다. depth 1은 full 상태의 다음-cycle 수락 계약을 확인한다. 모든 조합을 포괄한다는 뜻은 아니다.
B1/P memory/cache는 (LINES, AXI depth, memory latency)=(1,1,0),(2,3,5),(16,5,12)를 추가한다. cache 전용 시험은 LINES 1/2/8/16에서 matching final-beat AC, load/AC, stalled AR/AC와 같은 index의 다른 tag를 검증한다.

| Case | 실행 bin |
|---|---|
| axi_outstanding_d1 | axi_outstanding depth=1 write_peak=1 read_peak=1 aw_b_overlap=0 ar_rlast_overlap=0 |
| axi_outstanding_d3 | axi_outstanding depth=3 write_peak=3 read_peak=3 aw_b_overlap=0 ar_rlast_overlap=0 |
| axi_outstanding_d5 | axi_outstanding depth=5 write_peak=5 read_peak=5 aw_b_overlap=0 ar_rlast_overlap=0 |
| axi_fifo_overlap_d1 | axi_fifo depth=1 aw_b_overlap=0 ar_rlast_overlap=0 full_hold=41 issued=42 |
| axi_fifo_overlap_d3 | axi_fifo depth=3 aw_b_overlap=40 ar_rlast_overlap=40 full_hold=1 issued=44 |
| axi_fifo_overlap_d5 | axi_fifo depth=5 aw_b_overlap=40 ar_rlast_overlap=40 full_hold=1 issued=46 |
| cache_collision_lines1 | cache_collision final_match=1 load_match=1 stalled_ar_match=1 final_other_tag=1 resident_other_tag=1 replace_old_tag=1 |
| cache_collision_lines2 | cache_collision final_match=1 load_match=1 stalled_ar_match=1 final_other_tag=1 resident_other_tag=1 replace_old_tag=1 |
| cache_collision_lines8 | cache_collision final_match=1 load_match=1 stalled_ar_match=1 final_other_tag=1 resident_other_tag=1 replace_old_tag=1 |
| cache_collision_lines16 | cache_collision final_match=1 load_match=1 stalled_ar_match=1 final_other_tag=1 resident_other_tag=1 replace_old_tag=1 |

## RTL 계측 coverage

Verilator --coverage-line/--coverage-toggle의 native 계측 point 수이다. 물리적인 소스 행 수나 요구사항 검증률이 아니다. positive 실행만 합산하며 구성별로 분모를 분리한다. 시뮬레이션 assertion/error 경로도 RTL 계측에 포함될 수 있다. 100% 통과 gate로 사용하지 않는다.

| 구성 | 종류 | Hit / 전체 point | 비율 | 미실행 지점 |
|---|---|---:|---:|---|
| axi_fifo_overlap_d1 | toggle | 733 / 2798 | 26.20% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d1.uncovered.json) |
| axi_fifo_overlap_d1 | line | 23 / 32 | 71.88% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d1.uncovered.json) |
| axi_fifo_overlap_d1 | branch | 63 / 90 | 70.00% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d1.uncovered.json) |
| axi_fifo_overlap_d3 | toggle | 813 / 2934 | 27.71% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d3.uncovered.json) |
| axi_fifo_overlap_d3 | line | 23 / 32 | 71.88% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d3.uncovered.json) |
| axi_fifo_overlap_d3 | branch | 64 / 90 | 71.11% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d3.uncovered.json) |
| axi_fifo_overlap_d5 | toggle | 883 / 3070 | 28.76% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d5.uncovered.json) |
| axi_fifo_overlap_d5 | line | 23 / 32 | 71.88% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d5.uncovered.json) |
| axi_fifo_overlap_d5 | branch | 64 / 90 | 71.11% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/axi_fifo_overlap_d5.uncovered.json) |
| b1_d16_t16_f16 | toggle | 5014 / 10448 | 47.99% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t16_f16.uncovered.json) |
| b1_d16_t16_f16 | line | 61 / 69 | 88.41% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t16_f16.uncovered.json) |
| b1_d16_t16_f16 | branch | 128 / 150 | 85.33% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/b1_d16_t16_f16.uncovered.json) |
| p_d16_t16_f16 | toggle | 10052 / 13492 | 74.50% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t16_f16.uncovered.json) |
| p_d16_t16_f16 | line | 77 / 85 | 90.59% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t16_f16.uncovered.json) |
| p_d16_t16_f16 | branch | 167 / 184 | 90.76% | [JSON](runs/simulation_20261008T010758Z_4a29aa20/p_d16_t16_f16.uncovered.json) |

[구성별 계측 metadata](runs/simulation_20261008T010758Z_4a29aa20/instrumented_coverage.json). RTL file list 밖의 TB·slave counter는 집계에서 제외한다. native 데이터와 미실행 point의 파일/행/종류/instance를 보존한다.

## 미실행 toggle 분류

미실행 toggle point를 신호 역할 규칙으로 분류했다([규칙·상위 신호](runs/simulation_20261008T010758Z_4a29aa20/toggle_classification.json)). 규칙에 맞지 않는 point는 unclassified로 남겨 숨기지 않는다. 분류는 미실행 사유의 설명이며 해당 기능의 검증을 대신하지 않는다.

| 구성 | 미실행 toggle | address_outside_window | error_flag_negative_only | fixed_protocol_field | focused_tb_scope | line_mask_unused_lines | occupancy_parameter_dependent | payload_data | range_path_tied_off_in_B1 | reset_single_assertion | response_okay_only | tb_constant_handshake | unclassified |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| axi_fifo_overlap_d1 | 2065 | 684 | 10 | 133 | 10 | 0 | 48 | 1148 | 0 | 1 | 24 | 7 | 0 |
| axi_fifo_overlap_d3 | 2121 | 684 | 10 | 197 | 10 | 0 | 40 | 1148 | 0 | 1 | 24 | 7 | 0 |
| axi_fifo_overlap_d5 | 2187 | 684 | 10 | 261 | 10 | 0 | 42 | 1148 | 0 | 1 | 24 | 7 | 0 |
| b1_d16_t16_f16 | 5434 | 1090 | 20 | 519 | 0 | 0 | 70 | 1172 | 2499 | 0 | 60 | 4 | 0 |
| p_d16_t16_f16 | 3440 | 1427 | 20 | 586 | 0 | 90 | 76 | 1172 | 0 | 0 | 64 | 5 | 0 |

## 동일 cycle 사건 cross coverage

tb_cci_integration의 모든 positive 실행에서 8개 사건의 동일-cycle 쌍(28개)을 합산했다. 값은 해당 쌍이 같은 cycle에 발생한 횟수이다. B1은 setup 사건이 구조적으로 없으므로 setup 쌍 7개가 0이다. P에서 ingress_push×setup과 m0_accept×setup은 setup_fire가 admission_freeze를 올려 M1 AW와 (grant lock 밖의) M0 AR/AW를 닫으므로 구조적으로 0이다. cross_targeted 2건은 suite에서 비어 있던 tracker_alloc×setup(P)과 tracker_alloc×m0_accept를 유도하고 각 실행에서 발생을 assertion으로 확인한다. [JSON](runs/simulation_20261008T010758Z_4a29aa20/cross_coverage.json)

| 쌍 | mode0 | mode1 |
|---|---:|---:|
| ingress_push×aw_issue | 1004 | 1392 |
| ingress_push×b_retire | 100 | 131 |
| ingress_push×tracker_alloc | 7671 | 245 |
| ingress_push×ac | 125 | 4231 |
| ingress_push×cr | 3271 | 3140 |
| ingress_push×m0_accept | 879 | 727 |
| ingress_push×setup | 0 | 0 |
| aw_issue×b_retire | 645 | 815 |
| aw_issue×tracker_alloc | 1037 | 911 |
| aw_issue×ac | 8000 | 1236 |
| aw_issue×cr | 519 | 395 |
| aw_issue×m0_accept | 428 | 191 |
| aw_issue×setup | 0 | 0 |
| b_retire×tracker_alloc | 99 | 22 |
| b_retire×ac | 116 | 104 |
| b_retire×cr | 1451 | 332 |
| b_retire×m0_accept | 237 | 201 |
| b_retire×setup | 0 | 0 |
| tracker_alloc×ac | 1295 | 1572 |
| tracker_alloc×cr | 3900 | 352 |
| tracker_alloc×m0_accept | 511 | 84 |
| tracker_alloc×setup | 0 | 64 |
| ac×cr | 326 | 12291 |
| ac×m0_accept | 592 | 383 |
| ac×setup | 0 | 0 |
| cr×m0_accept | 380 | 178 |
| cr×setup | 0 | 0 |
| m0_accept×setup | 0 | 0 |

Hit 쌍: mode0 21/28, mode1 22/28.

## 제약 기반 트래픽 coverage

Seed 11/29/101/997 × B1/P에서 각각 24개 시나리오를 실행했다. page·start·mask·대상 write 순서·간격·M0/M1 요청 혼합을 변경하며, P는 일부 setup을 기존 B가 보류된 시점에 발행한다. response latency는 고정이고 전체 입력 공간의 무작위 검증은 아니다.

| Case | 실행 bin |
|---|---|
| traffic_seed11_mode0 | seed=11 mode=0 sparse=12 contiguous=12 setup_overlap=0 m0_read_mix=44 m0_write_mix=43 duplicates=24 |
| traffic_seed11_mode1 | seed=11 mode=1 sparse=12 contiguous=12 setup_overlap=8 m0_read_mix=49 m0_write_mix=43 duplicates=24 |
| traffic_seed29_mode0 | seed=29 mode=0 sparse=12 contiguous=12 setup_overlap=0 m0_read_mix=46 m0_write_mix=41 duplicates=24 |
| traffic_seed29_mode1 | seed=29 mode=1 sparse=12 contiguous=12 setup_overlap=8 m0_read_mix=45 m0_write_mix=52 duplicates=24 |
| traffic_seed101_mode0 | seed=101 mode=0 sparse=12 contiguous=12 setup_overlap=0 m0_read_mix=47 m0_write_mix=46 duplicates=24 |
| traffic_seed101_mode1 | seed=101 mode=1 sparse=12 contiguous=12 setup_overlap=8 m0_read_mix=41 m0_write_mix=43 duplicates=24 |
| traffic_seed997_mode0 | seed=997 mode=0 sparse=12 contiguous=12 setup_overlap=0 m0_read_mix=35 m0_write_mix=46 duplicates=24 |
| traffic_seed997_mode1 | seed=997 mode=1 sparse=12 contiguous=12 setup_overlap=8 m0_read_mix=38 m0_write_mix=55 duplicates=24 |

## Seed · 응답 latency 확장

seed_expansion 14건: 기본 구성(D16/T16/F16)에서 READY stall seed 2~6과 traffic seed 41/77을 추가했다. latency_matrix 32건: (downstream slave latency, snoop endpoint latency)=(1,1),(20,40)의 B1/P 빌드마다 full suite, seed 2~6, traffic seed 41/77을 실행했다. 기본 (5,12)는 다른 scope에 포함된다. 모든 parameter의 Cartesian product는 아니다.

## Runtime: 8-line 동일 workload

초기 setup부터 drain 확인 여유까지 포함한 cycle이다. Seed 실행은 별도 case 이름으로 식별하며, 점유 감소를 처리량 개선으로 해석하지 않는다.

| Case | Peak tracker | Tracker stall | Ingress stall | Cycles | Accepted/cycle |
|---|---:|---:|---:|---:|---:|
| b1_d16_t4_f4 | 4 | 40 | 0 | 86 | 0.093023 |
| p_d16_t4_f4 | 0 | 0 | 0 | 91 | 0.087912 |
| b1_d16_t8_f8 | 8 | 0 | 0 | 83 | 0.096386 |
| p_d16_t8_f8 | 0 | 0 | 0 | 91 | 0.087912 |
| b1_d16_t16_f16 | 8 | 0 | 0 | 83 | 0.096386 |
| p_d16_t16_f16 | 0 | 0 | 0 | 91 | 0.087912 |
| b1_d16_t16_f4 | 8 | 0 | 0 | 83 | 0.096386 |
| p_d16_t16_f4 | 0 | 0 | 0 | 91 | 0.087912 |
| b1_d16_t5_f3 | 5 | 32 | 0 | 83 | 0.096386 |
| p_d16_t5_f3 | 0 | 0 | 0 | 91 | 0.087912 |
| seed_1_mode0 | 8 | 0 | 0 | 83 | 0.096386 |
| seed_1_mode1 | 0 | 0 | 0 | 93 | 0.086022 |
| seed_7_mode0 | 8 | 0 | 0 | 97 | 0.082474 |
| seed_7_mode1 | 0 | 0 | 0 | 107 | 0.074766 |
| seed_123_mode0 | 8 | 0 | 0 | 95 | 0.084211 |
| seed_123_mode1 | 0 | 0 | 0 | 103 | 0.077670 |
| bench_seed1_mode0_prelude0 | 8 | 0 | 0 | 83 | 0.096386 |
| bench_seed1_mode0_prelude137 | 8 | 0 | 0 | 83 | 0.096386 |
| bench_seed1_mode1_prelude0 | 0 | 0 | 0 | 93 | 0.086022 |
| bench_seed1_mode1_prelude137 | 0 | 0 | 0 | 93 | 0.086022 |
| bench_seed7_mode0_prelude0 | 8 | 0 | 0 | 97 | 0.082474 |
| bench_seed7_mode0_prelude137 | 8 | 0 | 0 | 97 | 0.082474 |
| bench_seed7_mode1_prelude0 | 0 | 0 | 0 | 107 | 0.074766 |
| bench_seed7_mode1_prelude137 | 0 | 0 | 0 | 107 | 0.074766 |
| bench_seed123_mode0_prelude0 | 8 | 0 | 0 | 95 | 0.084211 |
| bench_seed123_mode0_prelude137 | 8 | 0 | 0 | 95 | 0.084211 |
| bench_seed123_mode1_prelude0 | 0 | 0 | 0 | 103 | 0.077670 |
| bench_seed123_mode1_prelude137 | 0 | 0 | 0 | 103 | 0.077670 |
| seed_2_mode0 | 8 | 0 | 0 | 106 | 0.075472 |
| seed_3_mode0 | 8 | 0 | 0 | 106 | 0.075472 |
| seed_4_mode0 | 8 | 0 | 0 | 87 | 0.091954 |
| seed_5_mode0 | 8 | 0 | 0 | 87 | 0.091954 |
| seed_6_mode0 | 8 | 0 | 0 | 97 | 0.082474 |
| seed_2_mode1 | 0 | 0 | 0 | 107 | 0.074766 |
| seed_3_mode1 | 0 | 0 | 0 | 107 | 0.074766 |
| seed_4_mode1 | 0 | 0 | 0 | 97 | 0.082474 |
| seed_5_mode1 | 0 | 0 | 0 | 97 | 0.082474 |
| seed_6_mode1 | 0 | 0 | 0 | 107 | 0.074766 |
| lat_b1_sl1_sn1_suite | 7 | 0 | 0 | 61 | 0.131148 |
| lat_b1_sl1_sn1_seed2 | 8 | 0 | 0 | 88 | 0.090909 |
| lat_b1_sl1_sn1_seed3 | 8 | 0 | 0 | 88 | 0.090909 |
| lat_b1_sl1_sn1_seed4 | 8 | 0 | 0 | 72 | 0.111111 |
| lat_b1_sl1_sn1_seed5 | 8 | 0 | 0 | 72 | 0.111111 |
| lat_b1_sl1_sn1_seed6 | 8 | 0 | 0 | 81 | 0.098765 |
| lat_b1_sl20_sn40_suite | 8 | 0 | 0 | 230 | 0.034783 |
| lat_b1_sl20_sn40_seed2 | 8 | 0 | 0 | 232 | 0.034483 |
| lat_b1_sl20_sn40_seed3 | 8 | 0 | 0 | 232 | 0.034483 |
| lat_b1_sl20_sn40_seed4 | 8 | 0 | 0 | 230 | 0.034783 |
| lat_b1_sl20_sn40_seed5 | 8 | 0 | 0 | 230 | 0.034783 |
| lat_b1_sl20_sn40_seed6 | 8 | 0 | 0 | 231 | 0.034632 |
| lat_p_sl1_sn1_suite | 0 | 0 | 0 | 68 | 0.117647 |
| lat_p_sl1_sn1_seed2 | 0 | 0 | 0 | 89 | 0.089888 |
| lat_p_sl1_sn1_seed3 | 0 | 0 | 0 | 89 | 0.089888 |
| lat_p_sl1_sn1_seed4 | 0 | 0 | 0 | 78 | 0.102564 |
| lat_p_sl1_sn1_seed5 | 0 | 0 | 0 | 78 | 0.102564 |
| lat_p_sl1_sn1_seed6 | 0 | 0 | 0 | 88 | 0.090909 |
| lat_p_sl20_sn40_suite | 0 | 0 | 0 | 239 | 0.033473 |
| lat_p_sl20_sn40_seed2 | 0 | 0 | 0 | 241 | 0.033195 |
| lat_p_sl20_sn40_seed3 | 0 | 0 | 0 | 241 | 0.033195 |
| lat_p_sl20_sn40_seed4 | 0 | 0 | 0 | 239 | 0.033473 |
| lat_p_sl20_sn40_seed5 | 0 | 0 | 0 | 239 | 0.033473 |
| lat_p_sl20_sn40_seed6 | 0 | 0 | 0 | 242 | 0.033058 |

## 규모 측정: tracker 점유 · 할당 대기 · range context

B1/P × tracker(=AC FIFO) 1/2/4/8/16 × 8/64/256 line × range 밖 write 없음/4개마다 1개. ingress 16, periodic READY stall, snoop latency 12. P는 4KB page마다 setup한다. cycle은 첫 setup/AW부터 drain까지이며, setup wait는 이전 context 완료를 기다린 cycle, context%는 range_active cycle 비율이다. range 밖 write가 없을 때 P의 tracker 점유 0과 완료 건수는 TB가 assertion으로 확인한다. [CSV](runs/simulation_20261008T010758Z_4a29aa20/scale_sweep.csv)

| Case | Snoop lat | Lines | Outside | Peak tracker | Avg tracker | Alloc stall | Ingress stall | Setup wait | Freeze | Context % | Cycles |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| scale_b1_t1_l8_o0 | 12 | 8 | 0 | 1 | 0.951 | 202 | 0 | 0 | 0 | 0.0 | 245 |
| scale_b1_t1_l8_o4 | 12 | 8 | 2 | 1 | 0.954 | 260 | 0 | 0 | 0 | 0.0 | 305 |
| scale_b1_t1_l64_o0 | 12 | 64 | 0 | 1 | 0.965 | 1826 | 1316 | 0 | 0 | 0.0 | 1925 |
| scale_b1_t1_l64_o4 | 12 | 64 | 16 | 1 | 0.965 | 2290 | 1764 | 0 | 0 | 0.0 | 2405 |
| scale_b1_t1_l256_o0 | 12 | 256 | 0 | 1 | 0.966 | 7394 | 6692 | 0 | 0 | 0.0 | 7685 |
| scale_b1_t1_l256_o4 | 12 | 256 | 64 | 1 | 0.966 | 9250 | 8484 | 0 | 0 | 0.0 | 9605 |
| scale_b1_t2_l8_o0 | 12 | 8 | 0 | 2 | 1.811 | 88 | 0 | 0 | 0 | 0.0 | 132 |
| scale_b1_t2_l8_o4 | 12 | 8 | 2 | 2 | 1.832 | 117 | 0 | 0 | 0 | 0.0 | 161 |
| scale_b1_t2_l64_o0 | 12 | 64 | 0 | 2 | 1.917 | 872 | 603 | 0 | 0 | 0.0 | 972 |
| scale_b1_t2_l64_o4 | 12 | 64 | 16 | 2 | 1.920 | 1096 | 811 | 0 | 0 | 0.0 | 1212 |
| scale_b1_t2_l256_o0 | 12 | 256 | 0 | 2 | 1.929 | 3560 | 3099 | 0 | 0 | 0.0 | 3852 |
| scale_b1_t2_l256_o4 | 12 | 256 | 64 | 2 | 1.930 | 4456 | 3931 | 0 | 0 | 0.0 | 4812 |
| scale_b1_t4_l8_o0 | 12 | 8 | 0 | 4 | 3.093 | 40 | 0 | 0 | 0 | 0.0 | 86 |
| scale_b1_t4_l8_o4 | 12 | 8 | 2 | 4 | 3.188 | 55 | 0 | 0 | 0 | 0.0 | 101 |
| scale_b1_t4_l64_o0 | 12 | 64 | 0 | 4 | 3.735 | 405 | 257 | 0 | 0 | 0.0 | 506 |
| scale_b1_t4_l64_o4 | 12 | 64 | 16 | 4 | 3.760 | 509 | 345 | 0 | 0 | 0.0 | 626 |
| scale_b1_t4_l256_o0 | 12 | 256 | 0 | 4 | 3.832 | 1653 | 1313 | 0 | 0 | 0.0 | 1946 |
| scale_b1_t4_l256_o4 | 12 | 256 | 64 | 4 | 3.839 | 2069 | 1665 | 0 | 0 | 0.0 | 2426 |
| scale_b1_t8_l8_o0 | 12 | 8 | 0 | 8 | 4.482 | 0 | 0 | 0 | 0 | 0.0 | 83 |
| scale_b1_t8_l8_o4 | 12 | 8 | 2 | 8 | 4.969 | 20 | 0 | 0 | 0 | 0.0 | 97 |
| scale_b1_t8_l64_o0 | 12 | 64 | 0 | 8 | 7.267 | 344 | 234 | 0 | 0 | 0.0 | 475 |
| scale_b1_t8_l64_o4 | 12 | 64 | 16 | 8 | 7.380 | 440 | 314 | 0 | 0 | 0.0 | 587 |
| scale_b1_t8_l256_o0 | 12 | 256 | 0 | 8 | 7.703 | 1496 | 1194 | 0 | 0 | 0.0 | 1819 |
| scale_b1_t8_l256_o4 | 12 | 256 | 64 | 8 | 7.734 | 1880 | 1514 | 0 | 0 | 0.0 | 2267 |
| scale_b1_t16_l8_o0 | 12 | 8 | 0 | 8 | 4.482 | 0 | 0 | 0 | 0 | 0.0 | 83 |
| scale_b1_t16_l8_o4 | 12 | 8 | 2 | 10 | 5.309 | 0 | 0 | 0 | 0 | 0.0 | 97 |
| scale_b1_t16_l64_o0 | 12 | 64 | 0 | 16 | 13.354 | 0 | 234 | 0 | 0 | 0.0 | 475 |
| scale_b1_t16_l64_o4 | 12 | 64 | 16 | 16 | 13.804 | 0 | 314 | 0 | 0 | 0.0 | 587 |
| scale_b1_t16_l256_o0 | 12 | 256 | 0 | 16 | 15.098 | 0 | 1194 | 0 | 0 | 0.0 | 1819 |
| scale_b1_t16_l256_o4 | 12 | 256 | 64 | 16 | 15.220 | 0 | 1514 | 0 | 0 | 0.0 | 2267 |
| scale_p_t1_l8_o0 | 12 | 8 | 0 | 0 | 0.000 | 0 | 0 | 0 | 2 | 94.5 | 91 |
| scale_p_t1_l8_o4 | 12 | 8 | 2 | 1 | 0.846 | 45 | 0 | 0 | 2 | 89.4 | 104 |
| scale_p_t1_l64_o0 | 12 | 64 | 0 | 0 | 0.000 | 0 | 295 | 0 | 2 | 99.1 | 539 |
| scale_p_t1_l64_o4 | 12 | 64 | 16 | 1 | 0.954 | 577 | 375 | 0 | 2 | 98.3 | 650 |
| scale_p_t1_l256_o0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_p_t1_l256_o4 | 12 | 256 | 64 | 1 | 0.958 | 2306 | 1513 | 312 | 23 | 98.8 | 2586 |
| scale_p_t2_l8_o0 | 12 | 8 | 0 | 0 | 0.000 | 0 | 0 | 0 | 2 | 94.5 | 91 |
| scale_p_t2_l8_o4 | 12 | 8 | 2 | 2 | 1.279 | 0 | 0 | 0 | 2 | 89.4 | 104 |
| scale_p_t2_l64_o0 | 12 | 64 | 0 | 0 | 0.000 | 0 | 295 | 0 | 2 | 99.1 | 539 |
| scale_p_t2_l64_o4 | 12 | 64 | 16 | 2 | 1.863 | 533 | 375 | 0 | 2 | 98.3 | 650 |
| scale_p_t2_l256_o0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_p_t2_l256_o4 | 12 | 256 | 64 | 2 | 1.872 | 2130 | 1513 | 312 | 23 | 98.8 | 2586 |
| scale_p_t4_l8_o0 | 12 | 8 | 0 | 0 | 0.000 | 0 | 0 | 0 | 2 | 94.5 | 91 |
| scale_p_t4_l8_o4 | 12 | 8 | 2 | 2 | 1.279 | 0 | 0 | 0 | 2 | 89.4 | 104 |
| scale_p_t4_l64_o0 | 12 | 64 | 0 | 0 | 0.000 | 0 | 295 | 0 | 2 | 99.1 | 539 |
| scale_p_t4_l64_o4 | 12 | 64 | 16 | 4 | 2.823 | 0 | 375 | 0 | 2 | 98.3 | 650 |
| scale_p_t4_l256_o0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_p_t4_l256_o4 | 12 | 256 | 64 | 4 | 2.836 | 0 | 1513 | 312 | 23 | 98.8 | 2586 |
| scale_p_t8_l8_o0 | 12 | 8 | 0 | 0 | 0.000 | 0 | 0 | 0 | 2 | 94.5 | 91 |
| scale_p_t8_l8_o4 | 12 | 8 | 2 | 2 | 1.279 | 0 | 0 | 0 | 2 | 89.4 | 104 |
| scale_p_t8_l64_o0 | 12 | 64 | 0 | 0 | 0.000 | 0 | 295 | 0 | 2 | 99.1 | 539 |
| scale_p_t8_l64_o4 | 12 | 64 | 16 | 4 | 2.823 | 0 | 375 | 0 | 2 | 98.3 | 650 |
| scale_p_t8_l256_o0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_p_t8_l256_o4 | 12 | 256 | 64 | 4 | 2.836 | 0 | 1513 | 312 | 23 | 98.8 | 2586 |
| scale_p_t16_l8_o0 | 12 | 8 | 0 | 0 | 0.000 | 0 | 0 | 0 | 2 | 94.5 | 91 |
| scale_p_t16_l8_o4 | 12 | 8 | 2 | 2 | 1.279 | 0 | 0 | 0 | 2 | 89.4 | 104 |
| scale_p_t16_l64_o0 | 12 | 64 | 0 | 0 | 0.000 | 0 | 295 | 0 | 2 | 99.1 | 539 |
| scale_p_t16_l64_o4 | 12 | 64 | 16 | 4 | 2.823 | 0 | 375 | 0 | 2 | 98.3 | 650 |
| scale_p_t16_l256_o0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_p_t16_l256_o4 | 12 | 256 | 64 | 4 | 2.836 | 0 | 1513 | 312 | 23 | 98.8 | 2586 |
| scale_ext_b1_t4_lat4_m0 | 4 | 256 | 0 | 4 | 3.820 | 1519 | 1185 | 0 | 0 | 0.0 | 1810 |
| scale_wext_b1_t4_lat4_m0w | 4 | 256 | 0 | 4 | 3.840 | 1743 | 1402 | 0 | 0 | 0.0 | 2034 |
| scale_ext_b1_t4_lat12_m0 | 12 | 256 | 0 | 4 | 3.832 | 1653 | 1313 | 0 | 0 | 0.0 | 1946 |
| scale_wext_b1_t4_lat12_m0w | 12 | 256 | 0 | 4 | 3.847 | 1833 | 1494 | 0 | 0 | 0.0 | 2126 |
| scale_ext_b1_t4_lat32_m0 | 32 | 256 | 0 | 4 | 3.899 | 2913 | 2513 | 0 | 0 | 0.0 | 3226 |
| scale_wext_b1_t4_lat32_m0w | 32 | 256 | 0 | 4 | 3.892 | 2926 | 2526 | 0 | 0 | 0.0 | 3239 |
| scale_ext_b1_t4_lat64_m0 | 64 | 256 | 0 | 4 | 3.935 | 4904 | 4409 | 0 | 0 | 0.0 | 5249 |
| scale_wext_b1_t4_lat64_m0w | 64 | 256 | 0 | 4 | 3.929 | 4938 | 4442 | 0 | 0 | 0.0 | 5282 |
| scale_ext_b1_t16_lat4_m0 | 4 | 256 | 0 | 16 | 15.086 | 0 | 1185 | 0 | 0 | 0.0 | 1810 |
| scale_wext_b1_t16_lat4_m0w | 4 | 256 | 0 | 16 | 15.129 | 0 | 1269 | 0 | 0 | 0.0 | 1901 |
| scale_ext_b1_t16_lat12_m0 | 12 | 256 | 0 | 16 | 15.098 | 0 | 1194 | 0 | 0 | 0.0 | 1819 |
| scale_wext_b1_t16_lat12_m0w | 12 | 256 | 0 | 16 | 15.115 | 0 | 1284 | 0 | 0 | 0.0 | 1916 |
| scale_ext_b1_t16_lat32_m0 | 32 | 256 | 0 | 16 | 15.108 | 0 | 1214 | 0 | 0 | 0.0 | 1839 |
| scale_wext_b1_t16_lat32_m0w | 32 | 256 | 0 | 16 | 15.146 | 0 | 1312 | 0 | 0 | 0.0 | 1944 |
| scale_ext_b1_t16_lat64_m0 | 64 | 256 | 0 | 16 | 15.123 | 0 | 1245 | 0 | 0 | 0.0 | 1870 |
| scale_wext_b1_t16_lat64_m0w | 64 | 256 | 0 | 16 | 15.138 | 0 | 1385 | 0 | 0 | 0.0 | 2017 |
| scale_ext_p_t4_lat4_m0 | 4 | 256 | 0 | 0 | 0.000 | 0 | 1148 | 333 | 8 | 99.5 | 2115 |
| scale_wext_p_t4_lat4_m0w | 4 | 256 | 0 | 0 | 0.000 | 0 | 1188 | 354 | 23 | 98.8 | 2183 |
| scale_ext_p_t4_lat12_m0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_wext_p_t4_lat12_m0w | 12 | 256 | 0 | 0 | 0.000 | 0 | 1220 | 354 | 23 | 98.8 | 2215 |
| scale_ext_p_t4_lat32_m0 | 32 | 256 | 0 | 0 | 0.000 | 0 | 1474 | 333 | 8 | 99.5 | 2441 |
| scale_wext_p_t4_lat32_m0w | 32 | 256 | 0 | 0 | 0.000 | 0 | 1516 | 354 | 23 | 99.0 | 2511 |
| scale_ext_p_t4_lat64_m0 | 64 | 256 | 0 | 0 | 0.000 | 0 | 1986 | 333 | 8 | 99.6 | 2953 |
| scale_wext_p_t4_lat64_m0w | 64 | 256 | 0 | 0 | 0.000 | 0 | 2028 | 354 | 23 | 99.1 | 3023 |
| scale_ext_p_t16_lat4_m0 | 4 | 256 | 0 | 0 | 0.000 | 0 | 1148 | 333 | 8 | 99.5 | 2115 |
| scale_wext_p_t16_lat4_m0w | 4 | 256 | 0 | 0 | 0.000 | 0 | 1188 | 354 | 23 | 98.8 | 2183 |
| scale_ext_p_t16_lat12_m0 | 12 | 256 | 0 | 0 | 0.000 | 0 | 1180 | 333 | 8 | 99.5 | 2147 |
| scale_wext_p_t16_lat12_m0w | 12 | 256 | 0 | 0 | 0.000 | 0 | 1220 | 354 | 23 | 98.8 | 2215 |
| scale_ext_p_t16_lat32_m0 | 32 | 256 | 0 | 0 | 0.000 | 0 | 1474 | 333 | 8 | 99.5 | 2441 |
| scale_wext_p_t16_lat32_m0w | 32 | 256 | 0 | 0 | 0.000 | 0 | 1516 | 354 | 23 | 99.0 | 2511 |
| scale_ext_p_t16_lat64_m0 | 64 | 256 | 0 | 0 | 0.000 | 0 | 1986 | 333 | 8 | 99.6 | 2953 |
| scale_wext_p_t16_lat64_m0w | 64 | 256 | 0 | 0 | 0.000 | 0 | 2028 | 354 | 23 | 99.1 | 3023 |
| probe_var_b1_t4_a1_b2 | 12 | 1024 | 0 | 4 | 3.858 | 6645 | 5537 | 0 | 0 | 0.0 | 7706 |
| probe_var_b1_t4_a4_b8 | 12 | 1024 | 0 | 4 | 3.858 | 6645 | 5537 | 0 | 0 | 0.0 | 7706 |
| probe_var_b1_t4_a16_b32 | 12 | 1024 | 0 | 4 | 3.858 | 6645 | 5537 | 0 | 0 | 0.0 | 7706 |
| probe_var_b1_t16_a1_b2 | 12 | 1024 | 0 | 16 | 15.558 | 0 | 5034 | 0 | 0 | 0.0 | 7195 |
| probe_var_b1_t16_a4_b8 | 12 | 1024 | 0 | 16 | 15.558 | 0 | 5034 | 0 | 0 | 0.0 | 7195 |
| probe_var_b1_t16_a16_b32 | 12 | 1024 | 0 | 16 | 15.558 | 0 | 5034 | 0 | 0 | 0.0 | 7195 |
| probe_var_p_t4_a1_b2 | 12 | 1024 | 0 | 0 | 0.000 | 0 | 4748 | 1665 | 67 | 99.2 | 8607 |
| probe_var_p_t4_a4_b8 | 12 | 1024 | 0 | 0 | 0.000 | 0 | 4752 | 1665 | 74 | 99.1 | 8611 |
| probe_var_p_t4_a16_b32 | 12 | 1024 | 0 | 0 | 0.000 | 0 | 4720 | 1665 | 32 | 99.6 | 8579 |
| probe_var_p_t16_a1_b2 | 12 | 1024 | 0 | 0 | 0.000 | 0 | 4748 | 1665 | 67 | 99.2 | 8607 |
| probe_var_p_t16_a4_b8 | 12 | 1024 | 0 | 0 | 0.000 | 0 | 4752 | 1665 | 74 | 99.1 | 8611 |
| probe_var_p_t16_a16_b32 | 12 | 1024 | 0 | 0 | 0.000 | 0 | 4720 | 1665 | 32 | 99.6 | 8579 |

## 동시 M0 read 대기 (scale_extension, probe_variation)

256-line copy 동안 M0가 16 cycle마다 한 line을 읽는다. ahead = copy front보다 4 line 앞의 대상(아직 미기록), behind = 8 line 뒤의 대상, other = copy와 무관한 page. probe_variation은 1024 line(16 page) copy에서 8 cycle마다 읽고 ahead/behind 거리를 (1,2),(4,8),(16,32)로 바꾼다. 대기는 ARVALID가 ARREADY 없이 유지된 cycle이며 평균/최대/대기 발생 건수를 표시한다. [CSV](runs/simulation_20261008T010758Z_4a29aa20/m0_wait.csv)

| Case | Snoop lat | Ahead/behind 거리 | Ahead avg / max (blocked/n) | Behind avg / max (blocked/n) | Other avg / max (blocked/n) |
|---|---:|---|---|---|---|
| scale_ext_b1_t4_lat4_m0 | 4 | 4/8 | 0.00 / 0 (0/12) | 58.75 / 59 (12/12) | 0.00 / 0 (0/12) |
| scale_ext_b1_t4_lat12_m0 | 12 | 4/8 | 0.46 / 1 (6/13) | 60.85 / 63 (13/13) | 0.33 / 1 (4/12) |
| scale_ext_b1_t4_lat32_m0 | 32 | 4/8 | 0.40 / 1 (6/15) | 116.56 / 120 (16/16) | 0.33 / 1 (5/15) |
| scale_ext_b1_t4_lat64_m0 | 64 | 4/8 | 0.55 / 1 (11/20) | 165.00 / 201 (20/20) | 0.47 / 1 (9/19) |
| scale_ext_b1_t16_lat4_m0 | 4 | 4/8 | 0.00 / 0 (0/12) | 58.75 / 59 (12/12) | 0.00 / 0 (0/12) |
| scale_ext_b1_t16_lat12_m0 | 12 | 4/8 | 0.00 / 0 (0/12) | 58.92 / 59 (12/12) | 0.00 / 0 (0/12) |
| scale_ext_b1_t16_lat32_m0 | 32 | 4/8 | 0.00 / 0 (0/12) | 59.15 / 64 (13/13) | 0.00 / 0 (0/12) |
| scale_ext_b1_t16_lat64_m0 | 64 | 4/8 | 0.92 / 1 (11/12) | 59.77 / 95 (13/13) | 1.00 / 1 (12/12) |
| scale_ext_p_t4_lat4_m0 | 4 | 4/8 | 130.38 / 142 (8/8) | 50.00 / 57 (7/7) | 0.43 / 1 (3/7) |
| scale_ext_p_t4_lat12_m0 | 12 | 4/8 | 134.38 / 148 (8/8) | 51.00 / 57 (7/7) | 0.29 / 1 (2/7) |
| scale_ext_p_t4_lat32_m0 | 32 | 4/8 | 170.50 / 221 (8/8) | 51.00 / 57 (7/7) | 0.00 / 0 (0/7) |
| scale_ext_p_t4_lat64_m0 | 64 | 4/8 | 235.12 / 350 (8/8) | 50.00 / 57 (7/7) | 0.29 / 1 (2/7) |
| scale_ext_p_t16_lat4_m0 | 4 | 4/8 | 130.38 / 142 (8/8) | 50.00 / 57 (7/7) | 0.43 / 1 (3/7) |
| scale_ext_p_t16_lat12_m0 | 12 | 4/8 | 134.38 / 148 (8/8) | 51.00 / 57 (7/7) | 0.29 / 1 (2/7) |
| scale_ext_p_t16_lat32_m0 | 32 | 4/8 | 170.50 / 221 (8/8) | 51.00 / 57 (7/7) | 0.00 / 0 (0/7) |
| scale_ext_p_t16_lat64_m0 | 64 | 4/8 | 235.12 / 350 (8/8) | 50.00 / 57 (7/7) | 0.29 / 1 (2/7) |
| probe_var_b1_t4_a1_b2 | 12 | 1/2 | 0.13 / 1 (6/47) | 107.26 / 109 (46/46) | 0.15 / 1 (7/46) |
| probe_var_b1_t4_a4_b8 | 12 | 4/8 | 0.14 / 1 (9/64) | 62.39 / 64 (64/64) | 0.14 / 1 (9/63) |
| probe_var_b1_t4_a16_b32 | 12 | 16/32 | 0.24 / 1 (31/130) | 0.24 / 1 (31/130) | 0.25 / 1 (33/132) |
| probe_var_b1_t16_a1_b2 | 12 | 1/2 | 0.00 / 0 (0/46) | 96.65 / 97 (46/46) | 0.00 / 0 (0/46) |
| probe_var_b1_t16_a4_b8 | 12 | 4/8 | 0.00 / 0 (0/64) | 54.75 / 55 (64/64) | 0.00 / 0 (0/63) |
| probe_var_b1_t16_a16_b32 | 12 | 16/32 | 0.24 / 1 (29/122) | 0.24 / 1 (29/121) | 0.25 / 1 (31/123) |
| probe_var_p_t4_a1_b2 | 12 | 1/2 | 136.72 / 163 (32/32) | 76.74 / 100 (31/31) | 0.13 / 1 (4/31) |
| probe_var_p_t4_a4_b8 | 12 | 4/8 | 122.20 / 193 (34/40) | 35.17 / 58 (33/40) | 0.18 / 1 (7/39) |
| probe_var_p_t4_a16_b32 | 12 | 16/32 | 57.05 / 249 (31/73) | 0.21 / 1 (16/75) | 0.23 / 1 (17/75) |
| probe_var_p_t16_a1_b2 | 12 | 1/2 | 136.72 / 163 (32/32) | 76.74 / 100 (31/31) | 0.13 / 1 (4/31) |
| probe_var_p_t16_a4_b8 | 12 | 4/8 | 122.20 / 193 (34/40) | 35.17 / 58 (33/40) | 0.18 / 1 (7/39) |
| probe_var_p_t16_a16_b32 | 12 | 16/32 | 57.05 / 249 (31/73) | 0.21 / 1 (16/75) | 0.23 / 1 (17/75) |

## 동시 M0 write AW 대기 (scale_write_extension)

256-line copy 동안 M0가 16 cycle마다 한 line을 쓴다. 주소 분류는 read probe와 같고, 대기는 AWVALID가 AWREADY 없이 유지된 cycle이다. 수락 후 W 4 beat와 B까지 완료한 뒤 다음 표본을 낸다. 평균/최대/대기 발생 건수를 표시한다. [CSV](runs/simulation_20261008T010758Z_4a29aa20/m0_write_wait.csv)

| Case | Snoop lat | Ahead avg / max (blocked/n) | Behind avg / max (blocked/n) | Other avg / max (blocked/n) |
|---|---:|---|---|---|
| scale_wext_b1_t4_lat4_m0w | 4 | 0.18 / 1 (2/11) | 60.27 / 61 (11/11) | 0.20 / 1 (2/10) |
| scale_wext_b1_t4_lat12_m0w | 12 | 0.50 / 1 (6/12) | 64.08 / 66 (12/12) | 0.50 / 1 (6/12) |
| scale_wext_b1_t4_lat32_m0w | 32 | 0.00 / 0 (0/15) | 105.06 / 107 (16/16) | 1.00 / 1 (15/15) |
| scale_wext_b1_t4_lat64_m0w | 64 | 0.22 / 1 (4/18) | 181.33 / 213 (18/18) | 0.22 / 1 (4/18) |
| scale_wext_b1_t16_lat4_m0w | 4 | 0.40 / 1 (2/5) | 60.25 / 61 (4/4) | 0.50 / 1 (2/4) |
| scale_wext_b1_t16_lat12_m0w | 12 | 0.20 / 1 (1/5) | 60.20 / 61 (5/5) | 0.25 / 1 (1/4) |
| scale_wext_b1_t16_lat32_m0w | 32 | 0.33 / 1 (2/6) | 60.20 / 61 (5/5) | 0.40 / 1 (2/5) |
| scale_wext_b1_t16_lat64_m0w | 64 | 0.14 / 1 (1/7) | 63.88 / 91 (8/8) | 0.29 / 1 (2/7) |
| scale_wext_p_t4_lat4_m0w | 4 | 143.00 / 144 (4/4) | 60.00 / 60 (4/4) | 0.33 / 1 (1/3) |
| scale_wext_p_t4_lat12_m0w | 12 | 151.00 / 152 (4/4) | 60.25 / 61 (4/4) | 0.67 / 1 (2/3) |
| scale_wext_p_t4_lat32_m0w | 32 | 225.25 / 227 (4/4) | 60.25 / 61 (4/4) | 0.00 / 0 (0/3) |
| scale_wext_p_t4_lat64_m0w | 64 | 353.00 / 354 (4/4) | 60.00 / 60 (4/4) | 0.33 / 1 (1/3) |
| scale_wext_p_t16_lat4_m0w | 4 | 143.00 / 144 (4/4) | 60.00 / 60 (4/4) | 0.33 / 1 (1/3) |
| scale_wext_p_t16_lat12_m0w | 12 | 151.00 / 152 (4/4) | 60.25 / 61 (4/4) | 0.67 / 1 (2/3) |
| scale_wext_p_t16_lat32_m0w | 32 | 225.25 / 227 (4/4) | 60.25 / 61 (4/4) | 0.00 / 0 (0/3) |
| scale_wext_p_t16_lat64_m0w | 64 | 353.00 / 354 (4/4) | 60.00 / 60 (4/4) | 0.33 / 1 (1/3) |

## 전체 CCI directed suite 교차 simulator

실행 `xsim_20261008T010758Z_3a493843`. Vivado XSim에서 원본 RTL과 동일 tb_cci_integration을 실행했다. [manifest](runs/xsim_20261008T010758Z_3a493843/manifest.json). 기본·ingress depth 1/3 구성, AXI FIFO depth 1/3/5, B1/P seed 2/3/5와 traffic seed 41/77, (slave, snoop) latency (1,1)/(20,40), 의도된 assertion 실패 4종, RTL mutant 6종을 포함한다. Verilator matrix의 부분집합이며 모든 조합을 반복한 것은 아니다.

| Scope | 건수 |
|---|---:|
| cross_simulator_cci_directed | 2 |
| cross_simulator_cci_parameters | 4 |
| cross_simulator_axi_fifo | 3 |
| cross_simulator_seed | 10 |
| cross_simulator_cross_targeted | 2 |
| cross_simulator_negative | 4 |
| cross_simulator_latency | 12 |
| cross_simulator_mutation | 6 |

- cci_mode0_d16: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16.log)
- cci_mode1_d16: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16.log)
- cci_mode0_d1: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d1.log)
- cci_mode1_d1: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d1.log)
- cci_mode0_d3: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d3.log)
- cci_mode1_d3: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d3.log)
- axi_fifo_d1: PASS — [log](runs/xsim_20261008T010758Z_3a493843/axi_fifo_d1.log)
- axi_fifo_d3: PASS — [log](runs/xsim_20261008T010758Z_3a493843/axi_fifo_d3.log)
- axi_fifo_d5: PASS — [log](runs/xsim_20261008T010758Z_3a493843/axi_fifo_d5.log)
- cci_mode0_d16_seed2: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16_seed2.log)
- cci_mode0_d16_seed3: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16_seed3.log)
- cci_mode0_d16_seed5: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16_seed5.log)
- cci_mode0_d16_traffic41: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16_traffic41.log)
- cci_mode0_d16_traffic77: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16_traffic77.log)
- cci_mode0_d16_cross_overlap: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode0_d16_cross_overlap.log)
- cci_mode1_d16_seed2: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16_seed2.log)
- cci_mode1_d16_seed3: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16_seed3.log)
- cci_mode1_d16_seed5: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16_seed5.log)
- cci_mode1_d16_traffic41: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16_traffic41.log)
- cci_mode1_d16_traffic77: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16_traffic77.log)
- cci_mode1_d16_cross_overlap: PASS — [log](runs/xsim_20261008T010758Z_3a493843/cci_mode1_d16_cross_overlap.log)
- neg_watchdog_negative: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/neg_watchdog_negative.log)
- neg_range_cr_error: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/neg_range_cr_error.log)
- neg_b_error: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/neg_b_error.log)
- neg_m0_crossing: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/neg_m0_crossing.log)
- lat_mode0_sl1_sn1_suite: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode0_sl1_sn1_suite.log)
- lat_mode0_sl1_sn1_seed2: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode0_sl1_sn1_seed2.log)
- lat_mode0_sl1_sn1_traffic41: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode0_sl1_sn1_traffic41.log)
- lat_mode0_sl20_sn40_suite: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode0_sl20_sn40_suite.log)
- lat_mode0_sl20_sn40_seed2: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode0_sl20_sn40_seed2.log)
- lat_mode0_sl20_sn40_traffic41: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode0_sl20_sn40_traffic41.log)
- lat_mode1_sl1_sn1_suite: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode1_sl1_sn1_suite.log)
- lat_mode1_sl1_sn1_seed2: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode1_sl1_sn1_seed2.log)
- lat_mode1_sl1_sn1_traffic41: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode1_sl1_sn1_traffic41.log)
- lat_mode1_sl20_sn40_suite: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode1_sl20_sn40_suite.log)
- lat_mode1_sl20_sn40_seed2: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode1_sl20_sn40_seed2.log)
- lat_mode1_sl20_sn40_traffic41: PASS — [log](runs/xsim_20261008T010758Z_3a493843/lat_mode1_sl20_sn40_traffic41.log)
- page_mutant: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/page_mutant.log)
- hazard_no_page: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/hazard_no_page.log)
- hazard_no_mask: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/hazard_no_mask.log)
- hazard_no_done: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/hazard_no_done.log)
- hazard_ar_disabled: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/hazard_ar_disabled.log)
- hazard_aw_disabled: EXPECTED_FAILURE_PASS — [log](runs/xsim_20261008T010758Z_3a493843/hazard_aw_disabled.log)

## Formal: snoop endpoint FIFO · coherent ingress

실행 `formal_20261007T030139Z_94db1c83`. sv2v로 assertion을 유지하여 변환하고($fatal 절만 제거) Yosys SAT로 검사했다. [manifest](runs/formal_20261007T030139Z_94db1c83/manifest.json). tool: sv2v v0.0.11-0-g6082cae, Yosys 0.69.
- m0_snoop_endpoint: occupancy 상한, ready/valid 일관성, head 기준 연속 valid window, tail=head+count, head부터 비감소 잔여 delay(=push 순서 응답)를 **k-induction으로 무한 깊이 증명**했다(DEPTH/LATENCY 2/0, 3/2, 4/3).
- coh_write_ingress: DUT 자체 assertion(queue 상한, 정렬 burst, age-order 할당, tracker–ingress lifetime, B 연관, AC FIFO, CR 연관, range mask·reservation)을 in-order downstream·응답하는 snoop 환경에서 **깊이 20 bounded model check**로 확인했다(B1/P, DEPTH 3·TRACKERS 2·AC_DEPTH 2, 2 page×4 line 주소). 무한 깊이 증명이 아니다.
- 비공허성: b_fire, tracker_full_stall, CR, setup 수락, range B release, M0 hazard 각각에 도달하는 trace가 존재해야 하며(=witness 실패) 모두 확인했다. 강도: endpoint 2종·ingress 3종 RTL mutant가 모두 반례로 검출되었다.

| Check | 방식 | 기대 | 결과 | Assert cell 수(환경 witness cell 포함) | log |
|---|---|---|---|---:|---|
| endpoint_d2_l0_induction | induction (depth 25) | pass | PASS | 11 | [log](runs/formal_20261007T030139Z_94db1c83/endpoint_d2_l0_induction.log) |
| endpoint_d3_l2_induction | induction (depth 25) | pass | PASS | 14 | [log](runs/formal_20261007T030139Z_94db1c83/endpoint_d3_l2_induction.log) |
| endpoint_d4_l3_induction | induction (depth 25) | pass | PASS | 17 | [log](runs/formal_20261007T030139Z_94db1c83/endpoint_d4_l3_induction.log) |
| ingress_b1_bmc | bmc (depth 20) | pass | PASS | 13 | [log](runs/formal_20261007T030139Z_94db1c83/ingress_b1_bmc.log) |
| ingress_p_bmc | bmc (depth 20) | pass | PASS | 19 | [log](runs/formal_20261007T030139Z_94db1c83/ingress_p_bmc.log) |
| witness_b_fire | bmc (depth 20) | fail | EXPECTED_FAILURE_PASS | 14 | [log](runs/formal_20261007T030139Z_94db1c83/witness_b_fire.log) |
| witness_tracker_full_stall | bmc (depth 20) | fail | EXPECTED_FAILURE_PASS | 14 | [log](runs/formal_20261007T030139Z_94db1c83/witness_tracker_full_stall.log) |
| witness_cr_fire | bmc (depth 20) | fail | EXPECTED_FAILURE_PASS | 14 | [log](runs/formal_20261007T030139Z_94db1c83/witness_cr_fire.log) |
| witness_setup_accept | bmc (depth 20) | fail | EXPECTED_FAILURE_PASS | 20 | [log](runs/formal_20261007T030139Z_94db1c83/witness_setup_accept.log) |
| witness_range_b_release | bmc (depth 20) | fail | EXPECTED_FAILURE_PASS | 20 | [log](runs/formal_20261007T030139Z_94db1c83/witness_range_b_release.log) |
| witness_m0_hazard | bmc (depth 20) | fail | EXPECTED_FAILURE_PASS | 20 | [log](runs/formal_20261007T030139Z_94db1c83/witness_m0_hazard.log) |
| mutant_endpoint_ready_off_by_one | induction (depth 25) | fail | EXPECTED_FAILURE_PASS | 14 | [log](runs/formal_20261007T030139Z_94db1c83/mutant_endpoint_ready_off_by_one.log) |
| mutant_endpoint_no_head_advance | induction (depth 25) | fail | EXPECTED_FAILURE_PASS | 14 | [log](runs/formal_20261007T030139Z_94db1c83/mutant_endpoint_no_head_advance.log) |
| mutant_ingress_no_retire_advance | bmc (depth 12) | fail | EXPECTED_FAILURE_PASS | 13 | [log](runs/formal_20261007T030139Z_94db1c83/mutant_ingress_no_retire_advance.log) |
| mutant_ingress_no_issue_mark | bmc (depth 12) | fail | EXPECTED_FAILURE_PASS | 13 | [log](runs/formal_20261007T030139Z_94db1c83/mutant_ingress_no_issue_mark.log) |
| mutant_ingress_no_tracker_free | bmc (depth 12) | fail | EXPECTED_FAILURE_PASS | 13 | [log](runs/formal_20261007T030139Z_94db1c83/mutant_ingress_no_tracker_free.log) |

## ACE snoop / CD 확장

실행 `ace_20261008T011153Z_616e4c68`. [manifest](runs/ace_20261008T011153Z_616e4c68/manifest.json), [범위·연결 계약](../ACE_EXTENSION.md). 기존 v9 비용 측정과 별도 확장이다.
8종 cache snoop × 5종 상태, 5-bit CRRESP, 독립 CR/CD backpressure, dirty writeback, ACE initiating-manager의 ARSNOOP/AWSNOOP/DOMAIN 자동 변환과 기존 v9 B1/P 통합을 검사한다. manager와 snoop 경로는 기본 4 context이며 서로 다른 manager ID의 R/B out-of-order와 endpoint/fabric/service의 동시 snoop 4개를 directed 검증한다. ReadShared·ReadUnique·CleanUnique·WriteUnique·WriteBack·Evict, DVM Message/Complete, barrier pair, shareable exclusive 및 RACK/WACK가 범위이다. 같은 ID의 복수 outstanding, 2-part DVM과 3개 이상 cached target은 미지원이다.

| 실행 | 결과 | log |
|---|---|---|
| service | PASS | [log](runs/ace_20261008T011153Z_616e4c68/service.log) |
| endpoint_outstanding | PASS | [log](runs/ace_20261008T011153Z_616e4c68/endpoint_outstanding.log) |
| snoop_pipeline | PASS | [log](runs/ace_20261008T011153Z_616e4c68/snoop_pipeline.log) |
| service_outstanding | PASS | [log](runs/ace_20261008T011153Z_616e4c68/service_outstanding.log) |
| manager_transactions | PASS | [log](runs/ace_20261008T011153Z_616e4c68/manager_transactions.log) |
| manager_outstanding | PASS | [log](runs/ace_20261008T011153Z_616e4c68/manager_outstanding.log) |
| multi_snoop_fabric | PASS | [log](runs/ace_20261008T011153Z_616e4c68/multi_snoop_fabric.log) |
| multi_top_integration | PASS | [log](runs/ace_20261008T011153Z_616e4c68/multi_top_integration.log) |
| b1_integration | PASS | [log](runs/ace_20261008T011153Z_616e4c68/b1_integration.log) |
| p_integration | PASS | [log](runs/ace_20261008T011153Z_616e4c68/p_integration.log) |
| b1_multiline | PASS | [log](runs/ace_20261008T011153Z_616e4c68/b1_multiline.log) |
| p_multiline | PASS | [log](runs/ace_20261008T011153Z_616e4c68/p_multiline.log) |
| manager_review10 | PASS | [log](runs/ace_20261008T011153Z_616e4c68/manager_review10.log) |
| snoop_bank_review10 | PASS | [log](runs/ace_20261008T011153Z_616e4c68/snoop_bank_review10.log) |
| fabric_review10 | PASS | [log](runs/ace_20261008T011153Z_616e4c68/fabric_review10.log) |
| b1_wb_contention | PASS | [log](runs/ace_20261008T011153Z_616e4c68/b1_wb_contention.log) |
| p_wb_contention | PASS | [log](runs/ace_20261008T011153Z_616e4c68/p_wb_contention.log) |
| cd_waits_cr | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/cd_waits_cr.log) |
| early_b | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/early_b.log) |
| skip_dirty_wb | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/skip_dirty_wb.log) |
| skip_drain | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/skip_drain.log) |
| bad_read_mapping | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/bad_read_mapping.log) |
| skip_write_unique_snoop | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/skip_write_unique_snoop.log) |
| reject_dvm | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/reject_dvm.log) |
| bypass_exclusive_monitor | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/bypass_exclusive_monitor.log) |
| drop_barrier_pair_ready | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_barrier_pair_ready.log) |
| reject_barrier_ignore | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/reject_barrier_ignore.log) |
| disable_snoop_filter | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/disable_snoop_filter.log) |
| ignore_fabric_conflict | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/ignore_fabric_conflict.log) |
| drop_filter_collision_fallback | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_filter_collision_fallback.log) |
| allow_same_target_filter_replace | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/allow_same_target_filter_replace.log) |
| count_any_aw | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/count_any_aw.log) |
| drop_early_barrier_rack | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_early_barrier_rack.log) |
| skip_bar2_error_w_drain | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/skip_bar2_error_w_drain.log) |
| short_bar2_error_read | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/short_bar2_error_read.log) |
| mask_dvm_payload | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/mask_dvm_payload.log) |
| accept_two_part_dvm | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/accept_two_part_dvm.log) |
| manager_error_not_fatal | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/manager_error_not_fatal.log) |
| fatal_not_core_block | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/fatal_not_core_block.log) |
| fatal_manager_reaccept | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/fatal_manager_reaccept.log) |
| fatal_explicit_req_leak | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/fatal_explicit_req_leak.log) |
| fatal_req_ready_open | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/fatal_req_ready_open.log) |
| fixed_ar_priority | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/fixed_ar_priority.log) |
| accept_ac_during_sf_update | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/accept_ac_during_sf_update.log) |
| collapse_dual_reservation_kill | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/collapse_dual_reservation_kill.log) |
| allow_same_id_outstanding | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/allow_same_id_outstanding.log) |
| break_wq_push_pop_count | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/break_wq_push_pop_count.log) |
| collapse_top_service_owner | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/collapse_top_service_owner.log) |
| serialize_snoop_endpoint | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/serialize_snoop_endpoint.log) |
| serialize_snoop_fabric | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/serialize_snoop_fabric.log) |
| collapse_snoop_owner | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/collapse_snoop_owner.log) |
| context_local_monitor | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/context_local_monitor.log) |
| drop_cross_context_commit_clear | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_cross_context_commit_clear.log) |
| drop_exclusive_store_serialization | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_exclusive_store_serialization.log) |
| drop_commit_recheck | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_commit_recheck.log) |
| drop_cross_context_write_clear | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_cross_context_write_clear.log) |
| drop_mem_ar_hold | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_mem_ar_hold.log) |
| drop_snoop_req_hold | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_snoop_req_hold.log) |
| dvm_global_slot_zero | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/dvm_global_slot_zero.log) |
| lowest_index_ac | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/lowest_index_ac.log) |
| drop_snoop_wb_aw_hold | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_snoop_wb_aw_hold.log) |
| fabric_cd_to_unresolved_context | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/fabric_cd_to_unresolved_context.log) |
| drop_top_wb_aw_hold | EXPECTED_FAILURE_PASS | [log](runs/ace_20261008T011153Z_616e4c68/drop_top_wb_aw_hold.log) |
| tb_ace_snoop_service_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_snoop_service_xsim.log) |
| tb_ace_snoop_outstanding_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_snoop_outstanding_xsim.log) |
| tb_ace_snoop_pipeline_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_snoop_pipeline_xsim.log) |
| tb_ace_snoop_service_outstanding_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_snoop_service_outstanding_xsim.log) |
| tb_ace_manager_transactions_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_manager_transactions_xsim.log) |
| tb_ace_manager_outstanding_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_manager_outstanding_xsim.log) |
| tb_ace_snoop_fabric_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_snoop_fabric_xsim.log) |
| ace_multi_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_multi_xsim.log) |
| ace_b1_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_b1_xsim.log) |
| ace_p_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_p_xsim.log) |
| ace_b1_multiline_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_b1_multiline_xsim.log) |
| ace_p_multiline_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_p_multiline_xsim.log) |
| tb_ace_manager_review10_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_manager_review10_xsim.log) |
| tb_ace_snoop_bank_review10_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_snoop_bank_review10_xsim.log) |
| tb_ace_fabric_review10_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/tb_ace_fabric_review10_xsim.log) |
| ace_b1_wb_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_b1_wb_xsim.log) |
| ace_p_wb_xsim | PASS | [log](runs/ace_20261008T011153Z_616e4c68/ace_p_wb_xsim.log) |

## ACE 확장 synthesis-only 확인

실행 `ace_synthesis_20261008T011847Z_bbcc3d07`. [manifest](runs/ace_synthesis_20261008T011847Z_bbcc3d07/manifest.json). endpoint/fabric, 단일 controller와 context bank, service, manager controller와 bank 및 B1/P 확장 top의 합성 확인이며 배치·배선·timing sign-off는 아니다. 기존 v9의 면적 증분에 이 확장 비용이 포함되어 있지 않다.

- ace_cache_snoop_endpoint: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/ace_cache_snoop_endpoint_utilization.rpt)
- ace_snoop_fabric: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/ace_snoop_fabric_utilization.rpt)
- ace_snoop_controller: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/ace_snoop_controller_utilization.rpt)
- ace_snoop_controller_bank: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/ace_snoop_controller_bank_utilization.rpt)
- cci_ace_snoop_service: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/cci_ace_snoop_service_utilization.rpt)
- ace_manager_request_controller: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/ace_manager_request_controller_utilization.rpt)
- ace_manager_request_bank: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/ace_manager_request_bank_utilization.rpt)
- axi_cci_ace_top_B1: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/axi_cci_ace_top_B1_utilization.rpt)
- axi_cci_ace_top_P: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/axi_cci_ace_top_P_utilization.rpt)
- axi_cci_ace_top_multi_filter: [utilization](runs/ace_synthesis_20261008T011847Z_bbcc3d07/axi_cci_ace_top_multi_filter_utilization.rpt)

## ACE 확장 post-route 내부 timing 확인

실행 `ace_implementation_20261008T012531Z_43d6eb18`. Device `xczu7ev-ffvc1156-2-e`, period 5.0 ns. [구현 manifest](runs/ace_implementation_20261008T012531Z_43d6eb18/manifest.json). 직접 OOC top의 외부 pin 경로는 제외하고 내부 register-to-register 경로를 배치·배선했다.

| 구성 | LUT | FF | CARRY8 | BRAM | WNS | WHS |
|---|---:|---:|---:|---:|---:|---:|
| B1 | 17080 | 8723 | 624 | 0.0 | 0.444 | 0.01 |
| P | 17964 | 9189 | 643 | 0.0 | 0.105 | 0.02 |
| MULTI_FILTER | 26389 | 16263 | 655 | 0.0 | 0.037 | 0.012 |

세 구성 모두 setup/hold/pulse-width failing endpoint 0, 내부 no-clock/unconstrained endpoint 0, 완전 배선 및 허용된 OOC DRC warning 조건을 통과했다. 외부 인터페이스 timing과 board clock/reset sign-off는 이 결과에 포함되지 않는다.

## Post-route: 관찰 출력 제거, DUT 내부와 경계 분리

실행 `implementation_20261007T093606Z_1bc5647a`. Device `xczu7ev-ffvc1156-2-e`, period 5.0 ns, OBSERVE_DEBUG=0. [구현 manifest](runs/implementation_20261007T093606Z_1bc5647a/manifest.json).

| 구성 | DUT LUT | DUT FF | Shell 포함 LUT | Shell 포함 FF | CARRY8 전체 | BRAM 전체 | WNS | WHS |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| B0 | 523 | 478 | 527 | 1642 | 0 | 0.0 | 2.351 | 0.001 |
| B1 | 2417 | 2083 | 2533 | 3399 | 96 | 0.0 | 0.698 | 0.001 |
| P | 3199 | 2545 | 3309 | 4003 | 115 | 0.0 | 0.797 | 0.01 |

대표 **DUT 내부 P−B1: LUT +782, FF +462**.
보조 shell/endpoint 포함 P−B1: LUT +776, FF +604, CARRY8 +19, BRAM +0.

DUT의 setup pending 저장은 기능 비용이다. 측정 경계의 setup 입력 레지스터는 DUT 내부 비용과 별도로 보고한다. 관찰 출력은 이번 shell에서 제거했다. 계층 LUT는 cross-hierarchy combining 때문에 단순 합산하지 않는다.

모든 표시된 구성은 setup/hold/pulse-width failing endpoint 0, 내부 no-clock/unconstrained endpoint 0 및 일관된 fully-routed count, 허용된 OOC DRC warning만 존재 조건을 통과했다. 외부 pin 경로와 비동기 reset 경로는 측정에서 제외했다. OOC clock source와 board clock/reset sign-off를 구분해야 한다.

## 지원 범위와 남은 확장

단일 range context, 정상 응답, full-line M1 write, line-contained M0 burst, in-order AXI 응답이 지원 범위이다. CR/B 오류는 simulation fail-fast이며 하드웨어 recovery가 아니다.
Memory/cache 검증은 simulation용 sparse byte memory와 단일 outstanding refill의 clean-cache 모델을 사용한다. Late fill은 cached-master 모델이 poison하여 재설치를 막는다. 합성 비용에는 이 test-only cache/memory를 포함하지 않으며 공통 ordered snoop responder를 사용한다.
v9 기본 경로는 dirty cache/CD를 포함하지 않는다. 별도 ACE 확장은 서로 다른 ID의 manager 4 context와 2-target snoop 4 context까지 지원한다. 같은 ID의 복수 outstanding, 3개 이상 cached target, 일반적인 cache hierarchy, CCI 전체의 무한 깊이 formal proof 및 보드-level sign-off는 완료 주장에 포함하지 않는다. 참고용 `hw_overhead_sv_참고용`은 신규 file list 밖의 보존 코드이다.
