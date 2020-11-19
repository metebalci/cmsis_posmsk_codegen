#define ETF_RSZ_RSZ_Pos            0U
#define ETF_RSZ_RSZ_Msk            (2147483647UL << ETF_RSZ_RSZ_Pos)
#define ETF_STS_EMPTY_Pos          4U
#define ETF_STS_EMPTY_Msk          (1UL << ETF_STS_EMPTY_Pos)
#define ETF_STS_FTEMPTY_Pos        3U
#define ETF_STS_FTEMPTY_Msk        (1UL << ETF_STS_FTEMPTY_Pos)
#define ETF_STS_READY_Pos          2U
#define ETF_STS_READY_Msk          (1UL << ETF_STS_READY_Pos)
#define ETF_STS_TRIGD_Pos          1U
#define ETF_STS_TRIGD_Msk          (1UL << ETF_STS_TRIGD_Pos)
#define ETF_STS_FULL_Pos           0U
#define ETF_STS_FULL_Msk           (1UL << ETF_STS_FULL_Pos)
#define ETF_RRD_RRD_Pos            0U
#define ETF_RRD_RRD_Msk            (4294967295UL << ETF_RRD_RRD_Pos)
#define ETF_RRP_RRP_Pos            0U
#define ETF_RRP_RRP_Msk            (8191UL << ETF_RRP_RRP_Pos)
#define ETF_RWP_RWP_Pos            0U
#define ETF_RWP_RWP_Msk            (8191UL << ETF_RWP_RWP_Pos)
#define ETF_TRG_TRG_Pos            0U
#define ETF_TRG_TRG_Msk            (2047UL << ETF_TRG_TRG_Pos)
#define ETF_CTL_TCEN_Pos           0U
#define ETF_CTL_TCEN_Msk           (1UL << ETF_CTL_TCEN_Pos)
#define ETF_RWD_RWD_Pos            0U
#define ETF_RWD_RWD_Msk            (4294967295UL << ETF_RWD_RWD_Pos)
#define ETF_MODE_MODE_Pos          0U
#define ETF_MODE_MODE_Msk          (3UL << ETF_MODE_MODE_Pos)
#define ETF_LBUFLVL_LBUFLEVEL_Pos  0U
#define ETF_LBUFLVL_LBUFLEVEL_Msk  (4095UL << ETF_LBUFLVL_LBUFLEVEL_Pos)
#define ETF_CBUFLVL_CBUFLEVEL_Pos  0U
#define ETF_CBUFLVL_CBUFLEVEL_Msk  (4095UL << ETF_CBUFLVL_CBUFLEVEL_Pos)
#define ETF_BUFWM_BUFWM_Pos        0U
#define ETF_BUFWM_BUFWM_Msk        (2047UL << ETF_BUFWM_BUFWM_Pos)
#define ETF_FFSR_FTSTOPPED_Pos     1U
#define ETF_FFSR_FTSTOPPED_Msk     (1UL << ETF_FFSR_FTSTOPPED_Pos)
#define ETF_FFSR_FLINPROG_Pos      0U
#define ETF_FFSR_FLINPROG_Msk      (1UL << ETF_FFSR_FLINPROG_Pos)
#define ETF_FFCR_DRAINBUF_Pos      14U
#define ETF_FFCR_DRAINBUF_Msk      (1UL << ETF_FFCR_DRAINBUF_Pos)
#define ETF_FFCR_STPONTRGEV_Pos    13U
#define ETF_FFCR_STPONTRGEV_Msk    (1UL << ETF_FFCR_STPONTRGEV_Pos)
#define ETF_FFCR_STOPONFL_Pos      12U
#define ETF_FFCR_STOPONFL_Msk      (1UL << ETF_FFCR_STOPONFL_Pos)
#define ETF_FFCR_TRIGONFL_Pos      10U
#define ETF_FFCR_TRIGONFL_Msk      (1UL << ETF_FFCR_TRIGONFL_Pos)
#define ETF_FFCR_TRGONTRGEV_Pos    9U
#define ETF_FFCR_TRGONTRGEV_Msk    (1UL << ETF_FFCR_TRGONTRGEV_Pos)
#define ETF_FFCR_TRGONTRGIN_Pos    8U
#define ETF_FFCR_TRGONTRGIN_Msk    (1UL << ETF_FFCR_TRGONTRGIN_Pos)
#define ETF_FFCR_FLUSHMAN_Pos      6U
#define ETF_FFCR_FLUSHMAN_Msk      (1UL << ETF_FFCR_FLUSHMAN_Pos)
#define ETF_FFCR_FONTRGEV_Pos      5U
#define ETF_FFCR_FONTRGEV_Msk      (1UL << ETF_FFCR_FONTRGEV_Pos)
#define ETF_FFCR_FONFLIN_Pos       4U
#define ETF_FFCR_FONFLIN_Msk       (1UL << ETF_FFCR_FONFLIN_Pos)
#define ETF_FFCR_ENTI_Pos          1U
#define ETF_FFCR_ENTI_Msk          (1UL << ETF_FFCR_ENTI_Pos)
#define ETF_FFCR_ENFT_Pos          0U
#define ETF_FFCR_ENFT_Msk          (1UL << ETF_FFCR_ENFT_Pos)
#define ETF_PSCR_PSCOUNT_Pos       0U
#define ETF_PSCR_PSCOUNT_Msk       (31UL << ETF_PSCR_PSCOUNT_Pos)
#define ETF_CLAIMSET_CLAIMSET_Pos  0U
#define ETF_CLAIMSET_CLAIMSET_Msk  (15UL << ETF_CLAIMSET_CLAIMSET_Pos)
#define ETF_CLAIMCLR_CLAIMCLR_Pos  0U
#define ETF_CLAIMCLR_CLAIMCLR_Msk  (15UL << ETF_CLAIMCLR_CLAIMCLR_Pos)
#define ETF_LAR_ACCESS_W_Pos       0U
#define ETF_LAR_ACCESS_W_Msk       (4294967295UL << ETF_LAR_ACCESS_W_Pos)
#define ETF_LSR_LOCKTYPE_Pos       2U
#define ETF_LSR_LOCKTYPE_Msk       (1UL << ETF_LSR_LOCKTYPE_Pos)
#define ETF_LSR_LOCKGRANT_Pos      1U
#define ETF_LSR_LOCKGRANT_Msk      (1UL << ETF_LSR_LOCKGRANT_Pos)
#define ETF_LSR_LOCKEXIST_Pos      0U
#define ETF_LSR_LOCKEXIST_Msk      (1UL << ETF_LSR_LOCKEXIST_Pos)
#define ETF_AUTHSTAT_SNID_Pos      6U
#define ETF_AUTHSTAT_SNID_Msk      (3UL << ETF_AUTHSTAT_SNID_Pos)
#define ETF_AUTHSTAT_SID_Pos       4U
#define ETF_AUTHSTAT_SID_Msk       (3UL << ETF_AUTHSTAT_SID_Pos)
#define ETF_AUTHSTAT_NSNID_Pos     2U
#define ETF_AUTHSTAT_NSNID_Msk     (3UL << ETF_AUTHSTAT_NSNID_Pos)
#define ETF_AUTHSTAT_NSID_Pos      0U
#define ETF_AUTHSTAT_NSID_Msk      (3UL << ETF_AUTHSTAT_NSID_Pos)
#define ETF_DEVID_MEMWIDTH_Pos     8U
#define ETF_DEVID_MEMWIDTH_Msk     (7UL << ETF_DEVID_MEMWIDTH_Pos)
#define ETF_DEVID_CONFIGTYP_Pos    6U
#define ETF_DEVID_CONFIGTYP_Msk    (3UL << ETF_DEVID_CONFIGTYP_Pos)
#define ETF_DEVID_CLKSCHEM_Pos     5U
#define ETF_DEVID_CLKSCHEM_Msk     (1UL << ETF_DEVID_CLKSCHEM_Pos)
#define ETF_DEVID_ATBINPORTCNT_Pos 0U
#define ETF_DEVID_ATBINPORTCNT_Msk (31UL << ETF_DEVID_ATBINPORTCNT_Pos)
