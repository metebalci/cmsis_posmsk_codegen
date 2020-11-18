#define ETM_CR_VMID_TRACE_ENABLE_Pos                                  30U
#define ETM_CR_VMID_TRACE_ENABLE_Msk                                  (1UL << ETM_CR_VMID_TRACE_ENABLE_Pos)
#define ETM_CR_TIMESTAMP_ENABLE_Pos                                   28U
#define ETM_CR_TIMESTAMP_ENABLE_Msk                                   (1UL << ETM_CR_TIMESTAMP_ENABLE_Pos)
#define ETM_CR_PROCESSOR_SELECT_Pos                                   25U
#define ETM_CR_PROCESSOR_SELECT_Msk                                   (7UL << ETM_CR_PROCESSOR_SELECT_Pos)
#define ETM_CR_INSTRUMENTATION_RESOURCE_CONTROL_Pos                   24U
#define ETM_CR_INSTRUMENTATION_RESOURCE_CONTROL_Msk                   (1UL << ETM_CR_INSTRUMENTATION_RESOURCE_CONTROL_Pos)
#define ETM_CR_DISABLE_SOFTWARE_WRITES_Pos                            23U
#define ETM_CR_DISABLE_SOFTWARE_WRITES_Msk                            (1UL << ETM_CR_DISABLE_SOFTWARE_WRITES_Pos)
#define ETM_CR_DISABLE_DEBUGGER_WRITES_Pos                            22U
#define ETM_CR_DISABLE_DEBUGGER_WRITES_Msk                            (1UL << ETM_CR_DISABLE_DEBUGGER_WRITES_Pos)
#define ETM_CR_PORT_SIZE_3_Pos                                        21U
#define ETM_CR_PORT_SIZE_3_Msk                                        (1UL << ETM_CR_PORT_SIZE_3_Pos)
#define ETM_CR_DATA_ONLY_MODE_Pos                                     20U
#define ETM_CR_DATA_ONLY_MODE_Msk                                     (1UL << ETM_CR_DATA_ONLY_MODE_Pos)
#define ETM_CR_FILTER_CPRT_Pos                                        19U
#define ETM_CR_FILTER_CPRT_Msk                                        (1UL << ETM_CR_FILTER_CPRT_Pos)
#define ETM_CR_SUPPRESS_DATA_Pos                                      18U
#define ETM_CR_SUPPRESS_DATA_Msk                                      (1UL << ETM_CR_SUPPRESS_DATA_Pos)
#define ETM_CR_PORT_MODE_10_Pos                                       16U
#define ETM_CR_PORT_MODE_10_Msk                                       (3UL << ETM_CR_PORT_MODE_10_Pos)
#define ETM_CR_CONTEXT_ID_SIZE_Pos                                    14U
#define ETM_CR_CONTEXT_ID_SIZE_Msk                                    (3UL << ETM_CR_CONTEXT_ID_SIZE_Pos)
#define ETM_CR_PORT_MODE_2_Pos                                        13U
#define ETM_CR_PORT_MODE_2_Msk                                        (1UL << ETM_CR_PORT_MODE_2_Pos)
#define ETM_CR_CYCLE_ACCURATE_TRACING_Pos                             12U
#define ETM_CR_CYCLE_ACCURATE_TRACING_Msk                             (1UL << ETM_CR_CYCLE_ACCURATE_TRACING_Pos)
#define ETM_CR_ETM_PORT_SELECT_ETMEN_Pos                              11U
#define ETM_CR_ETM_PORT_SELECT_ETMEN_Msk                              (1UL << ETM_CR_ETM_PORT_SELECT_ETMEN_Pos)
#define ETM_CR_ETM_PROGRAMMING_Pos                                    10U
#define ETM_CR_ETM_PROGRAMMING_Msk                                    (1UL << ETM_CR_ETM_PROGRAMMING_Pos)
#define ETM_CR_DEBUG_REQUEST_CONTROL_Pos                              9U
#define ETM_CR_DEBUG_REQUEST_CONTROL_Msk                              (1UL << ETM_CR_DEBUG_REQUEST_CONTROL_Pos)
#define ETM_CR_BRANCH_OUTPUT_Pos                                      8U
#define ETM_CR_BRANCH_OUTPUT_Msk                                      (1UL << ETM_CR_BRANCH_OUTPUT_Pos)
#define ETM_CR_STALL_PROCESSOR_Pos                                    7U
#define ETM_CR_STALL_PROCESSOR_Msk                                    (1UL << ETM_CR_STALL_PROCESSOR_Pos)
#define ETM_CR_PORT_SIZE_20_Pos                                       4U
#define ETM_CR_PORT_SIZE_20_Msk                                       (7UL << ETM_CR_PORT_SIZE_20_Pos)
#define ETM_CR_DATA_ACCESS_Pos                                        2U
#define ETM_CR_DATA_ACCESS_Msk                                        (3UL << ETM_CR_DATA_ACCESS_Pos)
#define ETM_CR_MONITOR_CPRT_Pos                                       1U
#define ETM_CR_MONITOR_CPRT_Msk                                       (1UL << ETM_CR_MONITOR_CPRT_Pos)
#define ETM_CR_POWER_DOWN_Pos                                         0U
#define ETM_CR_POWER_DOWN_Msk                                         (1UL << ETM_CR_POWER_DOWN_Pos)
#define ETM_CCR_ETM_ID_PRESENT_Pos                                    31U
#define ETM_CCR_ETM_ID_PRESENT_Msk                                    (1UL << ETM_CCR_ETM_ID_PRESENT_Pos)
#define ETM_CCR_COPROCESSOR_AND_MEMORYMAPPED_ACCESS_SUPPORTED_Pos     27U
#define ETM_CCR_COPROCESSOR_AND_MEMORYMAPPED_ACCESS_SUPPORTED_Msk     (1UL << ETM_CCR_COPROCESSOR_AND_MEMORYMAPPED_ACCESS_SUPPORTED_Pos)
#define ETM_CCR_TRACE_START_STOP_BLOCK_PRESENT_Pos                    26U
#define ETM_CCR_TRACE_START_STOP_BLOCK_PRESENT_Msk                    (1UL << ETM_CCR_TRACE_START_STOP_BLOCK_PRESENT_Pos)
#define ETM_CCR_NUMBER_OF_CONTEXT_ID_COMPARATORS_Pos                  24U
#define ETM_CCR_NUMBER_OF_CONTEXT_ID_COMPARATORS_Msk                  (3UL << ETM_CCR_NUMBER_OF_CONTEXT_ID_COMPARATORS_Pos)
#define ETM_CCR_FIFOFULL_LOGIC_PRESENT_Pos                            23U
#define ETM_CCR_FIFOFULL_LOGIC_PRESENT_Msk                            (1UL << ETM_CCR_FIFOFULL_LOGIC_PRESENT_Pos)
#define ETM_CCR_NUMBER_OF_EXTERNAL_OUTPUTS_Pos                        20U
#define ETM_CCR_NUMBER_OF_EXTERNAL_OUTPUTS_Msk                        (7UL << ETM_CCR_NUMBER_OF_EXTERNAL_OUTPUTS_Pos)
#define ETM_CCR_NUMBER_OF_EXTERNAL_INPUTS_Pos                         17U
#define ETM_CCR_NUMBER_OF_EXTERNAL_INPUTS_Msk                         (7UL << ETM_CCR_NUMBER_OF_EXTERNAL_INPUTS_Pos)
#define ETM_CCR_EQUENCER_PRESENT_Pos                                  16U
#define ETM_CCR_EQUENCER_PRESENT_Msk                                  (1UL << ETM_CCR_EQUENCER_PRESENT_Pos)
#define ETM_CCR_NUMBER_OF_COUNTERS_Pos                                13U
#define ETM_CCR_NUMBER_OF_COUNTERS_Msk                                (7UL << ETM_CCR_NUMBER_OF_COUNTERS_Pos)
#define ETM_CCR_NUMBER_OF_MEMORY_MAP_DECODERS_Pos                     8U
#define ETM_CCR_NUMBER_OF_MEMORY_MAP_DECODERS_Msk                     (31UL << ETM_CCR_NUMBER_OF_MEMORY_MAP_DECODERS_Pos)
#define ETM_CCR_NUMBER_OF_DATA_VALUE_COMPARATORS_Pos                  4U
#define ETM_CCR_NUMBER_OF_DATA_VALUE_COMPARATORS_Msk                  (15UL << ETM_CCR_NUMBER_OF_DATA_VALUE_COMPARATORS_Pos)
#define ETM_CCR_NUMBER_OF_ADDRESS_COMPARATOR_PAIRS_Pos                0U
#define ETM_CCR_NUMBER_OF_ADDRESS_COMPARATOR_PAIRS_Msk                (15UL << ETM_CCR_NUMBER_OF_ADDRESS_COMPARATOR_PAIRS_Pos)
#define ETM_SR_TRIGGER_FLAG_Pos                                       3U
#define ETM_SR_TRIGGER_FLAG_Msk                                       (1UL << ETM_SR_TRIGGER_FLAG_Pos)
#define ETM_SR_TRACE_START_STOP_RESOURCE_STATUS_Pos                   2U
#define ETM_SR_TRACE_START_STOP_RESOURCE_STATUS_Msk                   (1UL << ETM_SR_TRACE_START_STOP_RESOURCE_STATUS_Pos)
#define ETM_SR_ETM_PROGRAMMING_BIT_VALUE_Pos                          1U
#define ETM_SR_ETM_PROGRAMMING_BIT_VALUE_Msk                          (1UL << ETM_SR_ETM_PROGRAMMING_BIT_VALUE_Pos)
#define ETM_SR_UNTRACED_OVERFLOW_FLAG_Pos                             0U
#define ETM_SR_UNTRACED_OVERFLOW_FLAG_Msk                             (1UL << ETM_SR_UNTRACED_OVERFLOW_FLAG_Pos)
#define ETM_SCR_NO_FETCH_COMPARISONS_Pos                              17U
#define ETM_SCR_NO_FETCH_COMPARISONS_Msk                              (1UL << ETM_SCR_NO_FETCH_COMPARISONS_Pos)
#define ETM_SCR_NUMBER_OF_SUPPORTED_PROCESSORS_Pos                    12U
#define ETM_SCR_NUMBER_OF_SUPPORTED_PROCESSORS_Msk                    (7UL << ETM_SCR_NUMBER_OF_SUPPORTED_PROCESSORS_Pos)
#define ETM_SCR_PORT_MODE_SUPPORTED_Pos                               11U
#define ETM_SCR_PORT_MODE_SUPPORTED_Msk                               (1UL << ETM_SCR_PORT_MODE_SUPPORTED_Pos)
#define ETM_SCR_PORT_SIZE_SUPPORTED_Pos                               10U
#define ETM_SCR_PORT_SIZE_SUPPORTED_Msk                               (1UL << ETM_SCR_PORT_SIZE_SUPPORTED_Pos)
#define ETM_SCR_MAXIMUM_PORT_SIZE_3_Pos                               9U
#define ETM_SCR_MAXIMUM_PORT_SIZE_3_Msk                               (1UL << ETM_SCR_MAXIMUM_PORT_SIZE_3_Pos)
#define ETM_SCR_FIFOFULL_SUPPORTED_Pos                                8U
#define ETM_SCR_FIFOFULL_SUPPORTED_Msk                                (1UL << ETM_SCR_FIFOFULL_SUPPORTED_Pos)
#define ETM_SCR_MAXIMUM_PORT_SIZE_20_Pos                              0U
#define ETM_SCR_MAXIMUM_PORT_SIZE_20_Msk                              (7UL << ETM_SCR_MAXIMUM_PORT_SIZE_20_Pos)
#define ETM_TSSCR_STOP_ADDRESS_COMPARATOR_SELECT_BITS_Pos             16U
#define ETM_TSSCR_STOP_ADDRESS_COMPARATOR_SELECT_BITS_Msk             (65535UL << ETM_TSSCR_STOP_ADDRESS_COMPARATOR_SELECT_BITS_Pos)
#define ETM_TSSCR_START_ADDRESS_COMPARATOR_SELECT_BITS_Pos            0U
#define ETM_TSSCR_START_ADDRESS_COMPARATOR_SELECT_BITS_Msk            (65535UL << ETM_TSSCR_START_ADDRESS_COMPARATOR_SELECT_BITS_Pos)
#define ETM_TECR2_INCLUDE_EXCLUDE_CONTROL_COMPARATORS_SELECT_BITS_Pos 0U
#define ETM_TECR2_INCLUDE_EXCLUDE_CONTROL_COMPARATORS_SELECT_BITS_Msk (65535UL << ETM_TECR2_INCLUDE_EXCLUDE_CONTROL_COMPARATORS_SELECT_BITS_Pos)
#define ETM_TEEVR_FCN_Pos                                             14U
#define ETM_TEEVR_FCN_Msk                                             (7UL << ETM_TEEVR_FCN_Pos)
#define ETM_TEEVR_RESOURCE_B_Pos                                      7U
#define ETM_TEEVR_RESOURCE_B_Msk                                      (127UL << ETM_TEEVR_RESOURCE_B_Pos)
#define ETM_TEEVR_RESOURCE_A_Pos                                      0U
#define ETM_TEEVR_RESOURCE_A_Msk                                      (127UL << ETM_TEEVR_RESOURCE_A_Pos)
#define ETM_TECR1_TRACE_CONTROL_ENABLE_Pos                            25U
#define ETM_TECR1_TRACE_CONTROL_ENABLE_Msk                            (1UL << ETM_TECR1_TRACE_CONTROL_ENABLE_Pos)
#define ETM_TECR1_EXCLUDE_FLAG_Pos                                    24U
#define ETM_TECR1_EXCLUDE_FLAG_Msk                                    (1UL << ETM_TECR1_EXCLUDE_FLAG_Pos)
#define ETM_TECR1_MEMORY_MAP_DECODE_SELECT_BITS_Pos                   8U
#define ETM_TECR1_MEMORY_MAP_DECODE_SELECT_BITS_Msk                   (65535UL << ETM_TECR1_MEMORY_MAP_DECODE_SELECT_BITS_Pos)
#define ETM_TECR1_ADDRESS_COMPARATOR_SELECT_BITS_Pos                  0U
#define ETM_TECR1_ADDRESS_COMPARATOR_SELECT_BITS_Msk                  (255UL << ETM_TECR1_ADDRESS_COMPARATOR_SELECT_BITS_Pos)
#define ETM_LAR_KEY_VALUE_Pos                                         0U
#define ETM_LAR_KEY_VALUE_Msk                                         (4294967295UL << ETM_LAR_KEY_VALUE_Pos)
#define ETM_LSR_ETM_LOCKED_Pos                                        1U
#define ETM_LSR_ETM_LOCKED_Msk                                        (1UL << ETM_LSR_ETM_LOCKED_Pos)
#define ETM_LSR_ETM_LOCKING_IMPLEMENTED_Pos                           0U
#define ETM_LSR_ETM_LOCKING_IMPLEMENTED_Msk                           (1UL << ETM_LSR_ETM_LOCKING_IMPLEMENTED_Pos)
