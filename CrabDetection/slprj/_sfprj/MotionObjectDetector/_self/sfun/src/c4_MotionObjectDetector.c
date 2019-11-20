/* Include files */

#include "MotionObjectDetector_sfun.h"
#include "c4_MotionObjectDetector.h"
#include <math.h>
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static void *c4_fcnDataPtrs[13];
static char_T *c4_dataNames[13];
static uint32_T c4_ssIds[13];
static uint32_T c4_statuses[13];
static void *c4_outMexFcns[13];
static void *c4_inMexFcns[13];
static emlrtRTEInfo c4_emlrtRTEI = { 111,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 111,/* lineNo */
  6,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 116,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 117,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 118,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 119,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 122,/* lineNo */
  63,                                  /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 122,/* lineNo */
  1,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 124,/* lineNo */
  18,                                  /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 124,/* lineNo */
  38,                                  /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_k_emlrtRTEI = { 7,/* lineNo */
  65,                                  /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_l_emlrtRTEI = { 7,/* lineNo */
  2,                                   /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_m_emlrtRTEI = { 7,/* lineNo */
  19,                                  /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_n_emlrtRTEI = { 10,/* lineNo */
  55,                                  /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_o_emlrtRTEI = { 186,/* lineNo */
  13,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_p_emlrtRTEI = { 471,/* lineNo */
  22,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_q_emlrtRTEI = { 762,/* lineNo */
  1,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_r_emlrtRTEI = { 478,/* lineNo */
  17,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_s_emlrtRTEI = { 478,/* lineNo */
  29,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_t_emlrtRTEI = { 478,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_u_emlrtRTEI = { 479,/* lineNo */
  14,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_v_emlrtRTEI = { 479,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_w_emlrtRTEI = { 480,/* lineNo */
  15,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_x_emlrtRTEI = { 480,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_y_emlrtRTEI = { 481,/* lineNo */
  24,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ab_emlrtRTEI = { 481,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_bb_emlrtRTEI = { 483,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_cb_emlrtRTEI = { 484,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_db_emlrtRTEI = { 485,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_eb_emlrtRTEI = { 486,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_fb_emlrtRTEI = { 780,/* lineNo */
  9,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_gb_emlrtRTEI = { 780,/* lineNo */
  29,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_hb_emlrtRTEI = { 780,/* lineNo */
  46,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ib_emlrtRTEI = { 781,/* lineNo */
  9,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_jb_emlrtRTEI = { 778,/* lineNo */
  6,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_kb_emlrtRTEI = { 778,/* lineNo */
  76,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_lb_emlrtRTEI = { 783,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_mb_emlrtRTEI = { 784,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_nb_emlrtRTEI = { 785,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ob_emlrtRTEI = { 786,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_pb_emlrtRTEI = { 787,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_qb_emlrtRTEI = { 792,/* lineNo */
  1,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_rb_emlrtRTEI = { 803,/* lineNo */
  31,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_sb_emlrtRTEI = { 803,/* lineNo */
  46,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_tb_emlrtRTEI = { 10,/* lineNo */
  2,                                   /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_ub_emlrtRTEI = { 10,/* lineNo */
  15,                                  /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_vb_emlrtRTEI = { 13,/* lineNo */
  30,                                  /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_wb_emlrtRTEI = { 13,/* lineNo */
  47,                                  /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_xb_emlrtRTEI = { 165,/* lineNo */
  6,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_yb_emlrtRTEI = { 165,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ac_emlrtRTEI = { 185,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_bc_emlrtRTEI = { 185,/* lineNo */
  5,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_cc_emlrtRTEI = { 186,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_dc_emlrtRTEI = { 186,/* lineNo */
  5,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ec_emlrtRTEI = { 188,/* lineNo */
  28,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_fc_emlrtRTEI = { 188,/* lineNo */
  39,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_gc_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_hc_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_ic_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis/MATLAB Function1",     /* fName */
  "#MotionObjectDetector:261"          /* pName */
};

static emlrtRTEInfo c4_jc_emlrtRTEI = { 87,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c4_kc_emlrtRTEI = { 768,/* lineNo */
  6,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_lc_emlrtRTEI = { 473,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_mc_emlrtRTEI = { 474,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_nc_emlrtRTEI = { 475,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_oc_emlrtRTEI = { 476,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_pc_emlrtRTEI = { 158,/* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_qc_emlrtRTEI = { 24,/* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_rc_emlrtRTEI = { 240,/* lineNo */
  32,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_sc_emlrtRTEI = { 241,/* lineNo */
  30,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_tc_emlrtRTEI = { 204,/* lineNo */
  29,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_uc_emlrtRTEI = { 206,/* lineNo */
  39,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_vc_emlrtRTEI = { 224,/* lineNo */
  43,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_wc_emlrtRTEI = { 224,/* lineNo */
  61,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_xc_emlrtRTEI = { 12,/* lineNo */
  49,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtRTEInfo c4_yc_emlrtRTEI = { 11,/* lineNo */
  43,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtRTEInfo c4_ad_emlrtRTEI = { 179,/* lineNo */
  25,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_bd_emlrtRTEI = { 1,/* lineNo */
  37,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c4_cd_emlrtRTEI = { 40,/* lineNo */
  20,                                  /* colNo */
  "checkPoints",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pName */
};

static emlrtRTEInfo c4_dd_emlrtRTEI = { 63,/* lineNo */
  15,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c4_ed_emlrtRTEI = { 63,/* lineNo */
  27,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c4_fd_emlrtRTEI = { 63,/* lineNo */
  36,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c4_gd_emlrtRTEI = { 63,/* lineNo */
  46,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c4_hd_emlrtRTEI = { 43,/* lineNo */
  18,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c4_id_emlrtRTEI = { 205,/* lineNo */
  35,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_jd_emlrtRTEI = { 608,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_kd_emlrtRTEI = { 199,/* lineNo */
  28,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ld_emlrtRTEI = { 199,/* lineNo */
  39,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_md_emlrtRTEI = { 526,/* lineNo */
  21,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_nd_emlrtRTEI = { 526,/* lineNo */
  9,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_od_emlrtRTEI = { 527,/* lineNo */
  21,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_pd_emlrtRTEI = { 527,/* lineNo */
  9,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_qd_emlrtRTEI = { 528,/* lineNo */
  86,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_rd_emlrtRTEI = { 528,/* lineNo */
  96,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_sd_emlrtRTEI = { 150,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_td_emlrtRTEI = { 42,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo c4_ud_emlrtRTEI = { 43,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo c4_vd_emlrtRTEI = { 179,/* lineNo */
  66,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_wd_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c4_xd_emlrtRTEI = { 182,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_yd_emlrtRTEI = { 182,/* lineNo */
  48,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ae_emlrtRTEI = { 110,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_be_emlrtRTEI = { 117,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_ce_emlrtRTEI = { 182,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_de_emlrtRTEI = { 599,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ee_emlrtRTEI = { 154,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_fe_emlrtRTEI = { 602,/* lineNo */
  11,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ge_emlrtRTEI = { 602,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_he_emlrtRTEI = { 603,/* lineNo */
  15,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ie_emlrtRTEI = { 603,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_je_emlrtRTEI = { 272,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ke_emlrtRTEI = { 266,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_le_emlrtRTEI = { 421,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_me_emlrtRTEI = { 157,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ne_emlrtRTEI = { 422,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_oe_emlrtRTEI = { 275,/* lineNo */
  15,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_pe_emlrtRTEI = { 270,/* lineNo */
  26,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_qe_emlrtRTEI = { 275,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_re_emlrtRTEI = { 423,/* lineNo */
  10,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_se_emlrtRTEI = { 276,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_te_emlrtRTEI = { 423,/* lineNo */
  32,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ue_emlrtRTEI = { 164,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ve_emlrtRTEI = { 141,/* lineNo */
  38,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_we_emlrtRTEI = { 166,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_xe_emlrtRTEI = { 423,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ye_emlrtRTEI = { 270,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_af_emlrtRTEI = { 167,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_bf_emlrtRTEI = { 152,/* lineNo */
  2,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_cf_emlrtRTEI = { 166,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_df_emlrtRTEI = { 167,/* lineNo */
  30,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ef_emlrtRTEI = { 152,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ff_emlrtRTEI = { 597,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_gf_emlrtRTEI = { 602,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_hf_emlrtRTEI = { 603,/* lineNo */
  30,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_if_emlrtRTEI = { 275,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_jf_emlrtRTEI = { 276,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_kf_emlrtRTEI = { 182,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_lf_emlrtRTEI = { 422,/* lineNo */
  17,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_mf_emlrtRTEI = { 105,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_nf_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_of_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_pf_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_qf_emlrtRTEI = { 1,/* lineNo */
  25,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c4_rf_emlrtRTEI = { 44,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_sf_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c4_tf_emlrtRTEI = { 398,/* lineNo */
  9,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c4_uf_emlrtRTEI = { 495,/* lineNo */
  5,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c4_vf_emlrtRTEI = { 18,/* lineNo */
  5,                                   /* colNo */
  "minOrMax",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtRTEInfo c4_wf_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_xf_emlrtRTEI = { 27,/* lineNo */
  24,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_yf_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_ag_emlrtRTEI = { 27,/* lineNo */
  39,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_bg_emlrtRTEI = { 28,/* lineNo */
  51,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_cg_emlrtRTEI = { 41,/* lineNo */
  30,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c4_dg_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c4_eg_emlrtRTEI = { 48,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c4_fg_emlrtRTEI = { 48,/* lineNo */
  17,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c4_gg_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c4_hg_emlrtRTEI = { 28,/* lineNo */
  13,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_ig_emlrtRTEI = { 29,/* lineNo */
  15,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_jg_emlrtRTEI = { 5,/* lineNo */
  30,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_kg_emlrtRTEI = { 5,/* lineNo */
  19,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c4_lg_emlrtRTEI = { 16,/* lineNo */
  14,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c4_mg_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c4_ng_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_og_emlrtRTEI = { 482,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_pg_emlrtRTEI = { 520,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_qg_emlrtRTEI = { 278,/* lineNo */
  13,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_rg_emlrtRTEI = { 181,/* lineNo */
  20,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_sg_emlrtRTEI = { 283,/* lineNo */
  70,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_tg_emlrtRTEI = { 343,/* lineNo */
  28,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_ug_emlrtRTEI = { 181,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_vg_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c4_wg_emlrtRTEI = { 183,/* lineNo */
  22,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_xg_emlrtRTEI = { 343,/* lineNo */
  21,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_yg_emlrtRTEI = { 190,/* lineNo */
  70,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_ah_emlrtRTEI = { 189,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_bh_emlrtRTEI = { 193,/* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_ch_emlrtRTEI = { 192,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_dh_emlrtRTEI = { 196,/* lineNo */
  63,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_eh_emlrtRTEI = { 195,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_fh_emlrtRTEI = { 193,/* lineNo */
  70,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c4_gh_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_hh_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c4_ih_emlrtRTEI = { 46,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo c4_jh_emlrtRTEI = { 55,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRTEInfo c4_kh_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "sum",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pName */
};

static emlrtRTEInfo c4_lh_emlrtRTEI = { 81,/* lineNo */
  13,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

static emlrtRTEInfo c4_mh_emlrtRTEI = { 610,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_nh_emlrtRTEI = { 610,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_oh_emlrtRTEI = { 613,/* lineNo */
  3,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_ph_emlrtRTEI = { 613,/* lineNo */
  7,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_qh_emlrtRTEI = { 609,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c4_rh_emlrtRTEI = { 36,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c4_sh_emlrtRTEI = { 56,/* lineNo */
  1,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c4_th_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_uh_emlrtRTEI = { 385,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_vh_emlrtRTEI = { 308,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_wh_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_xh_emlrtRTEI = { 387,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c4_yh_emlrtRTEI = { 388,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static const char_T c4_cv[36] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x',
  't', 'r', 'a', 'c', 't', 'F', 'e', 'a', 't', 'u', 'r', 'e', 's', ':', 'i', 'n',
  'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

static const char_T c4_cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't',
  'S', 'i', 'z', 'e' };

static const char_T c4_cv2[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'F', 'e',
  'a', 't', 'u', 'r', 'e', 'P', 'o', 'i', 'n', 't', 's', ':', 'i', 'n', 'v', 'a',
  'l', 'i', 'd', 'P', 'a', 'r', 'a', 'm', 'L', 'e', 'n', 'g', 't', 'h' };

static const char_T c4_cv3[40] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'S', 'U',
  'R', 'F', 'P', 'o', 'i', 'n', 't', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
  'S', 'i', 'g', 'n', 'O', 'f', 'L', 'a', 'p', 'l', 'a', 'c', 'i', 'a', 'n' };

static const char_T c4_cv4[15] = { 'S', 'i', 'g', 'n', 'O', 'f', 'L', 'a', 'p',
  'l', 'a', 'c', 'i', 'a', 'n' };

static const char_T c4_cv5[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
  's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S', 'U',
  'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'e', 'x', 'p', 'e',
  'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

static const char_T c4_cv6[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'N', 'a', 'N' };

static const char_T c4_cv7[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
  's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S', 'U',
  'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'e', 'x', 'p', 'e',
  'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

static const char_T c4_cv8[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F',
  'i', 'n', 'i', 't', 'e' };

static const char_T c4_cv9[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
  'a', 'x', 's', 'i', 'z', 'e' };

/* Function Declarations */
static void initialize_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void initialize_params_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void enable_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void disable_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void c4_update_jit_animation_state_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void ext_mode_exec_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void set_sim_state_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const mxArray *c4_st);
static void finalize_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void sf_gateway_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void mdl_start_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void c4_chartstep_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void initSimStructsc4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance);
static void c4_SURFPoints_cg_SURFPoints_cg
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_varargin_1, c4_sJTMl20J2MtSHoTgqrNGwiD c4_varargin_2,
   c4_vision_internal_SURFPoints_cg *c4_this);
static void c4_FeaturePointsImpl_checkLocation
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_location);
static boolean_T c4_inputMeetsSizeRequirement
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_a);
static void c4_FeaturePointsImpl_checkMetric
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_metric);
static boolean_T c4_all(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_a);
static void c4_SURFPointsImpl_checkScale(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_scale);
static boolean_T c4_b_all(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_boolean_T *c4_x);
static void c4_check_forloop_overflow_error
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, boolean_T c4_overflow);
static void c4_SURFPointsImpl_configure(SFc4_MotionObjectDetectorInstanceStruct *
  chartInstance, c4_vision_internal_SURFPoints_cg c4_this,
  c4_sTGP517nzdmMmY48RaBsM6E c4_inputs, c4_vision_internal_SURFPoints_cg
  *c4_b_this);
static void c4_assertValidSizeArg(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, real_T c4_varargin_1);
static void c4_extractFeatures(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, uint8_T c4_I[50463], c4_vision_internal_SURFPoints_cg
  c4_points, c4_emxArray_real32_T *c4_features, c4_vision_internal_SURFPoints_cg
  *c4_valid_points);
static void c4_extractSurfBuildable_extractSurf_uint8
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c4_b_Iu8T
   [50463], c4_emxArray_real32_T *c4_inLocation, c4_emxArray_real32_T
   *c4_inScale, c4_emxArray_real32_T *c4_inMetric, c4_emxArray_int8_T
   *c4_inSignOfLaplacian, boolean_T c4_isExtended, boolean_T c4_isUpright,
   c4_emxArray_real32_T *c4_outLocation, c4_emxArray_real32_T *c4_outScale,
   c4_emxArray_real32_T *c4_outMetric, c4_emxArray_int8_T *c4_outSignOfLaplacian,
   c4_emxArray_real32_T *c4_outOrientation, c4_emxArray_real32_T *c4_outFeatures);
static void c4_b_SURFPoints_cg_SURFPoints_cg
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_varargin_1, c4_s2rdWZ6jAA0S8hk59zYLzBC c4_varargin_2,
   c4_vision_internal_SURFPoints_cg *c4_this);
static void c4_b_SURFPointsImpl_configure
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg c4_this, c4_sGhH0Msgf1shDAvf5CNZg6B
   c4_inputs, c4_vision_internal_SURFPoints_cg *c4_b_this);
static void c4_b_extractSurfBuildable_extractSurf_uint8
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c4_b_Iu8T
   [250000], c4_emxArray_real32_T *c4_inLocation, c4_emxArray_real32_T
   *c4_inScale, c4_emxArray_real32_T *c4_inMetric, c4_emxArray_int8_T
   *c4_inSignOfLaplacian, boolean_T c4_isExtended, boolean_T c4_isUpright,
   c4_emxArray_real32_T *c4_outLocation, c4_emxArray_real32_T *c4_outScale,
   c4_emxArray_real32_T *c4_outMetric, c4_emxArray_int8_T *c4_outSignOfLaplacian,
   c4_emxArray_real32_T *c4_outOrientation, c4_emxArray_real32_T *c4_outFeatures);
static void c4_normalizeX(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_c_X, c4_emxArray_real32_T *c4_d_X);
static void c4_findMatchesExhaustive(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_features1, c4_emxArray_real32_T
  *c4_features2, real32_T c4_matchThreshold, c4_emxArray_uint32_T *c4_indexPairs,
  c4_emxArray_real32_T *c4_matchMetric);
static void c4_partialSort(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_x, c4_emxArray_real32_T *c4_values,
  c4_emxArray_uint32_T *c4_indices);
static boolean_T c4_allinrange(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T *c4_x, real_T c4_lo, int32_T c4_hi);
static void c4_sort(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
                    c4_emxArray_real32_T *c4_x, c4_emxArray_real32_T *c4_b_x,
                    c4_emxArray_int32_T *c4_idx);
static void c4_sortIdx(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_x, c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *
  c4_b_x);
static void c4_merge_block(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x,
  int32_T c4_offset, int32_T c4_n, int32_T c4_preSortLevel, c4_emxArray_int32_T *
  c4_iwork, c4_emxArray_real32_T *c4_xwork, c4_emxArray_int32_T *c4_b_idx,
  c4_emxArray_real32_T *c4_b_x, c4_emxArray_int32_T *c4_b_iwork,
  c4_emxArray_real32_T *c4_b_xwork);
static void c4_merge(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
                     c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x,
                     int32_T c4_offset, int32_T c4_np, int32_T c4_nq,
                     c4_emxArray_int32_T *c4_iwork, c4_emxArray_real32_T
                     *c4_xwork, c4_emxArray_int32_T *c4_b_idx,
                     c4_emxArray_real32_T *c4_b_x, c4_emxArray_int32_T
                     *c4_b_iwork, c4_emxArray_real32_T *c4_b_xwork);
static uint8_T c4_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_MotionObjectDetector, const
  char_T *c4_identifier);
static uint8_T c4_b_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId);
static const mxArray *c4_sf_marshallOut_matrix500x500x3_real32_T(void
  *chartInstanceVoid, void *c4_inData);
static void c4_c_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  real32_T c4_d_y[750000]);
static void c4_sf_marshallIn_matrix500x500x3_real32_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_sf_marshallOut_matrix189x267x3_uint8_T(void
  *chartInstanceVoid, void *c4_inData);
static void c4_d_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  uint8_T c4_d_y[151389]);
static void c4_sf_marshallIn_matrix189x267x3_uint8_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_sf_marshallOut_matrix189x267_uint8_T(void
  *chartInstanceVoid, void *c4_inData);
static void c4_e_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  uint8_T c4_d_y[50463]);
static void c4_sf_marshallIn_matrix189x267_uint8_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_sf_marshallOut_matrix500x500_real32_T(void
  *chartInstanceVoid, void *c4_inData);
static void c4_f_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  real32_T c4_d_y[250000]);
static void c4_sf_marshallIn_matrix500x500_real32_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_sf_marshallOut_real_T(void *chartInstanceVoid, void
  *c4_inData);
static real_T c4_g_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn_real_T(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_emlrt_marshallOut
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const
   c4_emxArray_real32_T *c4_c_u);
static const mxArray *c4_b_emlrt_marshallOut
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const
   c4_emxArray_real32_T *c4_c_u);
static const mxArray *c4_c_emlrt_marshallOut
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const
   c4_emxArray_int8_T *c4_c_u);
static const mxArray *c4_sf_marshallOut_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, c4_vision_internal_SURFPoints_cg *c4_inData);
static void c4_h_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_vision_internal_SURFPoints_cg *c4_d_y);
static void c4_i_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_real32_T *c4_d_y);
static void c4_j_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_real32_T *c4_d_y);
static void c4_k_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_int8_T *c4_d_y);
static void c4_sf_marshallIn_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, const mxArray *c4_mxArrayInData, const char_T *c4_varName,
  c4_vision_internal_SURFPoints_cg *c4_outData);
static const mxArray *c4_sf_marshallOut_dynamicmatrix(void *chartInstanceVoid,
  c4_emxArray_real32_T *c4_inData);
static void c4_l_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_real32_T *c4_d_y);
static void c4_sf_marshallIn_dynamicmatrix(void *chartInstanceVoid, const
  mxArray *c4_mxArrayInData, const char_T *c4_varName, c4_emxArray_real32_T
  *c4_outData);
static const mxArray *c4_sf_marshallOut_dynamicmatrix_1(void *chartInstanceVoid,
  c4_emxArray_uint32_T *c4_inData);
static void c4_m_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_uint32_T *c4_d_y);
static void c4_sf_marshallIn_dynamicmatrix_1(void *chartInstanceVoid, const
  mxArray *c4_mxArrayInData, const char_T *c4_varName, c4_emxArray_uint32_T
  *c4_outData);
static const mxArray *c4_chart_data_browse_helper
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, int32_T c4_ssIdNumber);
static void c4_c_SURFPointsImpl_configure
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_this, c4_sTGP517nzdmMmY48RaBsM6E
   c4_inputs);
static void c4_d_SURFPointsImpl_configure
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_this, c4_sGhH0Msgf1shDAvf5CNZg6B
   c4_inputs);
static void c4_b_normalizeX(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_c_X);
static void c4_b_sort(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
                      c4_emxArray_real32_T *c4_x, c4_emxArray_int32_T *c4_idx);
static void c4_b_sortIdx(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_x, c4_emxArray_int32_T *c4_idx);
static void c4_b_merge_block(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x,
  int32_T c4_offset, int32_T c4_n, int32_T c4_preSortLevel, c4_emxArray_int32_T *
  c4_iwork, c4_emxArray_real32_T *c4_xwork);
static void c4_b_merge(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x, int32_T c4_offset,
  int32_T c4_np, int32_T c4_nq, c4_emxArray_int32_T *c4_iwork,
  c4_emxArray_real32_T *c4_xwork);
static void c4_emxEnsureCapacity_real32_T
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real32_T1
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_int8_T(SFc4_MotionObjectDetectorInstanceStruct *
  chartInstance, c4_emxArray_int8_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyStruct_sJTMl20J2MtSHoTgq
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sJTMl20J2MtSHoTgqrNGwiD *c4_dst, const c4_sJTMl20J2MtSHoTgqrNGwiD *c4_src,
   const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopy_real32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_dst, c4_emxArray_real32_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopy_real32_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_dst, c4_emxArray_real32_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopy_int8_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int8_T **c4_dst, c4_emxArray_int8_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyStruct_vision_internal_S
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_dst, const
   c4_vision_internal_SURFPoints_cg *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_int32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyStruct_s2rdWZ6jAA0S8hk59
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_dst, const c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_src,
   const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_uint32_T
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_uint32_T *
   c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_vision_internal_S
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_pStruct, const emlrtRTEInfo
   *c4_srcLocation);
static void c4_emxInit_real32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real32_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_int8_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int8_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_uint32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_uint32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_sJTMl20J2MtSHoTgq
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sJTMl20J2MtSHoTgqrNGwiD *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_s2rdWZ6jAA0S8hk59
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_int32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_real32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray);
static void c4_emxFreeStruct_vision_internal_S
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_pStruct);
static void c4_emxFree_int8_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int8_T **c4_pEmxArray);
static void c4_emxFree_uint32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_uint32_T **c4_pEmxArray);
static void c4_emxFreeStruct_sJTMl20J2MtSHoTgq
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sJTMl20J2MtSHoTgqrNGwiD *c4_pStruct);
static void c4_emxFreeStruct_s2rdWZ6jAA0S8hk59
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_pStruct);
static void c4_emxFree_int32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray);
static void c4_emxEnsureCapacity_boolean_T
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_boolean_T
   *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_sTGP517nzdmMmY48R
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sTGP517nzdmMmY48RaBsM6E *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_boolean_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFreeStruct_sTGP517nzdmMmY48R
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sTGP517nzdmMmY48RaBsM6E *c4_pStruct);
static void c4_emxFree_boolean_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray);
static void c4_emxCopyStruct_sTGP517nzdmMmY48R
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sTGP517nzdmMmY48RaBsM6E *c4_dst, const c4_sTGP517nzdmMmY48RaBsM6E *c4_src,
   const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_sGhH0Msgf1shDAvf5
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sGhH0Msgf1shDAvf5CNZg6B *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFreeStruct_sGhH0Msgf1shDAvf5
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sGhH0Msgf1shDAvf5CNZg6B *c4_pStruct);
static void c4_emxCopyStruct_sGhH0Msgf1shDAvf5
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sGhH0Msgf1shDAvf5CNZg6B *c4_dst, const c4_sGhH0Msgf1shDAvf5CNZg6B *c4_src,
   const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real_T(SFc4_MotionObjectDetectorInstanceStruct *
  chartInstance, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_boolean_T1
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_boolean_T
   *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_int32_T1
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_int32_T
   *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_int32_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_boolean_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitMatrix_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   c4_pMatrix[2], const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_real_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray);
static void c4_emxFreeMatrix_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   c4_pMatrix[2]);
static void c4_emxFreeStruct_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   *c4_pStruct);
static void c4_emxEnsureCapacity_real_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void init_dsm_address_info(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  emlrtLicenseCheckR2012b(chartInstance->c4_fEmlrtCtx,
    "Video_and_Image_Blockset", 2);
  emlrtLicenseCheckR2012b(chartInstance->c4_fEmlrtCtx, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_MotionObjectDetector = 0U;
}

static void initialize_params_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c4_update_jit_animation_state_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  const mxArray *c4_st = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  c4_st = NULL;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_createcellmatrix(1, 1), false);
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_MotionObjectDetector, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c4_d_y, 0, c4_e_y);
  sf_mex_assign(&c4_st, c4_d_y, false);
  return c4_st;
}

static void set_sim_state_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_c_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_c_u = sf_mex_dup(c4_st);
  chartInstance->c4_is_active_c4_MotionObjectDetector = c4_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_c_u, 0)),
     "is_active_c4_MotionObjectDetector");
  sf_mex_destroy(&c4_c_u);
  sf_mex_destroy(&c4_st);
}

static void finalize_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  sfListenerTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void sf_gateway_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  int32_T c4_i;
  int32_T c4_i1;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 151389; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, (real_T)
                      (*chartInstance->c4_b_redcrab)[c4_i]);
  }

  for (c4_i1 = 0; c4_i1 < 750000; c4_i1++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_b_Image)[c4_i1]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_chartstep_c4_MotionObjectDetector(chartInstance);
  c4_do_animation_call_c4_MotionObjectDetector(chartInstance);
}

static void mdl_start_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerInitializeUsingSimStruct
    (chartInstance->S);
  chartInstance->c4_SequenceViewerOptimization = 1;
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 1, 0,
    &chartInstance->c4_mlFcnLineNumber);
  sfListenerInitializeIsStmtByStmtModeVar(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsStmtByStmtMode);
  sfListenerInitializeRuntimeFcnVarsJitOff(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_numFcnVars, c4_dataNames, c4_ssIds, c4_fcnDataPtrs,
    c4_outMexFcns, c4_inMexFcns, c4_statuses);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    11U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 617);
}

static void c4_chartstep_c4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  c4_vision_internal_SURFPoints_cg c4_RedCrabPoints;
  c4_emxArray_real32_T *c4_RedCrabFeatures;
  c4_vision_internal_SURFPoints_cg c4_ROIPoints;
  c4_emxArray_real32_T *c4_ROIFeatures;
  c4_emxArray_uint32_T *c4_RedCrabPairs;
  c4_vision_internal_SURFPoints_cg c4_b_RedCrabPoints;
  c4_vision_internal_SURFPoints_cg c4_b_ROIPoints;
  c4_s2rdWZ6jAA0S8hk59zYLzBC c4_vPts;
  c4_sJTMl20J2MtSHoTgqrNGwiD c4_PtsStruct;
  c4_vision_internal_SURFPoints_cg c4_c_RedCrabPoints;
  c4_sJTMl20J2MtSHoTgqrNGwiD c4_b_PtsStruct;
  int32_T c4_i;
  int32_T c4_i1;
  real_T c4_nargin = 2.0;
  real_T c4_nargout = 0.0;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  c4_emxArray_real32_T *c4_PtsStruct_Location;
  int32_T c4_i11;
  c4_emxArray_real32_T *c4_valLocation;
  int32_T c4_i12;
  c4_emxArray_real32_T *c4_valScale;
  c4_emxArray_real32_T *c4_valMetric;
  uint8_T c4_c_Iu8[50463];
  c4_emxArray_int8_T *c4_valSignOfLaplacian;
  void * c4_ptrKeypoint;
  int32_T c4_outNumRows;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_loop_ub;
  int32_T c4_i18;
  c4_sJTMl20J2MtSHoTgqrNGwiD c4_c_PtsStruct;
  int32_T c4_i19;
  int32_T c4_b_loop_ub;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_c_loop_ub;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_d_loop_ub;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_e_loop_ub;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_f_loop_ub;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_g_loop_ub;
  int32_T c4_i30;
  c4_emxArray_real32_T *c4_d_PtsStruct;
  int32_T c4_i31;
  int32_T c4_h_loop_ub;
  int32_T c4_i32;
  int32_T c4_i33;
  c4_emxArray_real32_T *c4_b_RedCrabFeatures;
  uint8_T c4_b_redcrabGray[50463];
  c4_vision_internal_SURFPoints_cg c4_d_RedCrabPoints;
  int32_T c4_i34;
  int32_T c4_i_loop_ub;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  void * c4_b_ptrKeypoint;
  int32_T c4_i40;
  int32_T c4_b_outNumRows;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_j_loop_ub;
  int32_T c4_i47;
  c4_sJTMl20J2MtSHoTgqrNGwiD c4_e_PtsStruct;
  int32_T c4_i48;
  int32_T c4_k_loop_ub;
  int32_T c4_i49;
  int32_T c4_i50;
  int32_T c4_l_loop_ub;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_m_loop_ub;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_n_loop_ub;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_o_loop_ub;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_p_loop_ub;
  int32_T c4_i59;
  c4_emxArray_real32_T *c4_f_PtsStruct;
  int32_T c4_i60;
  int32_T c4_q_loop_ub;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_r_loop_ub;
  int32_T c4_i64;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i65;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  static char_T c4_b_cv[6] = { 'P', 'O', 'I', 'N', 'T', 'S' };

  int32_T c4_s_loop_ub;
  int32_T c4_i66;
  real_T c4_out_numel;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i70;
  boolean_T c4_b;
  int32_T c4_i71;
  c4_emxArray_int32_T *c4_r;
  int32_T c4_i72;
  int32_T c4_t_loop_ub;
  int32_T c4_i73;
  int32_T c4_i74;
  int32_T c4_i75;
  int32_T c4_tmp_data[2];
  int32_T c4_u_loop_ub;
  int32_T c4_i76;
  int32_T c4_iv[2];
  int32_T c4_i77;
  boolean_T c4_b1;
  int32_T c4_v_loop_ub;
  int32_T c4_i78;
  int32_T c4_i79;
  int32_T c4_i80;
  int32_T c4_w_loop_ub;
  int32_T c4_i81;
  c4_emxArray_real32_T *c4_outOrientation;
  int32_T c4_i82;
  int32_T c4_x_loop_ub;
  int32_T c4_i83;
  int32_T c4_iv1[1];
  int32_T c4_y_loop_ub;
  int32_T c4_i84;
  boolean_T c4_b2;
  int32_T c4_i85;
  int32_T c4_i86;
  int32_T c4_ab_loop_ub;
  int32_T c4_i87;
  int32_T c4_i88;
  int32_T c4_bb_loop_ub;
  int32_T c4_i89;
  int32_T c4_iv2[1];
  int32_T c4_cb_loop_ub;
  int32_T c4_i90;
  boolean_T c4_b3;
  int32_T c4_i91;
  int32_T c4_i92;
  int32_T c4_db_loop_ub;
  int32_T c4_i93;
  c4_emxArray_int8_T *c4_r1;
  int32_T c4_i94;
  int32_T c4_eb_loop_ub;
  int32_T c4_i95;
  int32_T c4_iv3[1];
  int32_T c4_fb_loop_ub;
  int32_T c4_i96;
  c4_sJTMl20J2MtSHoTgqrNGwiD c4_ptsStruct;
  int32_T c4_i97;
  int32_T c4_gb_loop_ub;
  int32_T c4_i98;
  int32_T c4_i99;
  int32_T c4_hb_loop_ub;
  int32_T c4_i100;
  int32_T c4_i101;
  int32_T c4_ib_loop_ub;
  int32_T c4_i102;
  int32_T c4_i103;
  int32_T c4_jb_loop_ub;
  int32_T c4_i104;
  int32_T c4_i105;
  int32_T c4_i106;
  c4_emxArray_real32_T *c4_b_ptsStruct;
  int32_T c4_i107;
  int32_T c4_i108;
  int32_T c4_i109;
  int32_T c4_kb_loop_ub;
  int32_T c4_i110;
  c4_emxArray_real32_T *c4_c_ptsStruct;
  int32_T c4_i111;
  int32_T c4_lb_loop_ub;
  int32_T c4_i112;
  c4_emxArray_real32_T *c4_d_ptsStruct;
  int32_T c4_i113;
  int32_T c4_mb_loop_ub;
  int32_T c4_i114;
  c4_emxArray_int8_T *c4_e_ptsStruct;
  int32_T c4_i115;
  int32_T c4_nb_loop_ub;
  int32_T c4_i116;
  c4_emxArray_real32_T *c4_features;
  int32_T c4_i117;
  int32_T c4_ob_loop_ub;
  int32_T c4_i118;
  int32_T c4_i119;
  int32_T c4_pb_loop_ub;
  int32_T c4_i120;
  c4_s2rdWZ6jAA0S8hk59zYLzBC c4_b_vPts;
  int32_T c4_i121;
  int32_T c4_qb_loop_ub;
  int32_T c4_i122;
  int32_T c4_i123;
  int32_T c4_rb_loop_ub;
  int32_T c4_i124;
  int32_T c4_i125;
  int32_T c4_sb_loop_ub;
  int32_T c4_i126;
  int32_T c4_i127;
  int32_T c4_tb_loop_ub;
  int32_T c4_i128;
  int32_T c4_i129;
  int32_T c4_ub_loop_ub;
  int32_T c4_i130;
  int32_T c4_i131;
  int32_T c4_vb_loop_ub;
  int32_T c4_i132;
  c4_emxArray_real32_T *c4_c_vPts;
  int32_T c4_i133;
  int32_T c4_wb_loop_ub;
  int32_T c4_i134;
  int32_T c4_i135;
  int32_T c4_xb_loop_ub;
  int32_T c4_i136;
  int32_T c4_i137;
  int32_T c4_yb_loop_ub;
  int32_T c4_i138;
  c4_emxArray_real32_T *c4_varargin_2;
  int32_T c4_i139;
  int32_T c4_ac_loop_ub;
  int32_T c4_i140;
  c4_emxArray_real32_T *c4_features1;
  int32_T c4_i141;
  int32_T c4_bc_loop_ub;
  int32_T c4_i142;
  c4_emxArray_real32_T *c4_features2;
  int32_T c4_i143;
  int32_T c4_cc_loop_ub;
  int32_T c4_i144;
  c4_emxArray_real32_T *c4_b_features1;
  int32_T c4_i145;
  int32_T c4_i146;
  int32_T c4_i147;
  int32_T c4_dc_loop_ub;
  int32_T c4_i148;
  int32_T c4_iv4[2];
  int32_T c4_ec_loop_ub;
  int32_T c4_i149;
  int32_T c4_i150;
  int32_T c4_fc_loop_ub;
  int32_T c4_i151;
  c4_emxArray_real32_T *c4_b_features2;
  int32_T c4_i152;
  int32_T c4_i153;
  int32_T c4_i154;
  int32_T c4_gc_loop_ub;
  int32_T c4_i155;
  int32_T c4_iv5[2];
  int32_T c4_hc_loop_ub;
  int32_T c4_i156;
  int32_T c4_i157;
  int32_T c4_ic_loop_ub;
  int32_T c4_i158;
  c4_emxArray_real32_T *c4_features1in;
  int32_T c4_i159;
  int32_T c4_jc_loop_ub;
  int32_T c4_i160;
  c4_emxArray_real32_T *c4_features2in;
  int32_T c4_i161;
  int32_T c4_kc_loop_ub;
  int32_T c4_i162;
  boolean_T c4_b4;
  c4_emxArray_uint32_T *c4_indexPairs;
  c4_emxArray_real32_T *c4_matchMetric;
  boolean_T c4_guard1 = false;
  boolean_T c4_b5;
  int32_T c4_i163;
  int32_T c4_i164;
  int32_T c4_lc_loop_ub;
  int32_T c4_i165;
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_RedCrabPoints,
    &c4_hc_emlrtRTEI);
  c4_emxInit_real32_T(chartInstance, &c4_RedCrabFeatures, 2, &c4_l_emlrtRTEI);
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_ROIPoints,
    &c4_ic_emlrtRTEI);
  c4_emxInit_real32_T(chartInstance, &c4_ROIFeatures, 2, &c4_tb_emlrtRTEI);
  c4_emxInit_uint32_T(chartInstance, &c4_RedCrabPairs, 2, &c4_gc_emlrtRTEI);
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_b_RedCrabPoints,
    &c4_hc_emlrtRTEI);
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_b_ROIPoints,
    &c4_ic_emlrtRTEI);
  c4_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_vPts, &c4_sb_emlrtRTEI);
  c4_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_PtsStruct,
    &c4_j_emlrtRTEI);
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_c_RedCrabPoints,
    &c4_k_emlrtRTEI);
  c4_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_b_PtsStruct,
    &c4_j_emlrtRTEI);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportStartingSection(chartInstance->c4_RuntimeVar, 0, 1);
  }

  for (c4_i = 0; c4_i < 750000; c4_i++) {
    chartInstance->c4_Image[c4_i] = (*chartInstance->c4_b_Image)[c4_i];
  }

  for (c4_i1 = 0; c4_i1 < 151389; c4_i1++) {
    chartInstance->c4_redcrab[c4_i1] = (*chartInstance->c4_b_redcrab)[c4_i1];
  }

  chartInstance->c4_numFcnVars = 6U;
  c4_fcnDataPtrs[0] = (void *)&chartInstance->c4_Image;
  c4_fcnDataPtrs[1] = (void *)&chartInstance->c4_redcrab;
  c4_fcnDataPtrs[2] = (void *)&chartInstance->c4_redcrabGray;
  c4_fcnDataPtrs[3] = (void *)&chartInstance->c4_ImageGray;
  c4_fcnDataPtrs[4] = (void *)&c4_nargin;
  c4_fcnDataPtrs[5] = (void *)&c4_nargout;
  c4_statuses[0] = 0U;
  c4_statuses[1] = 0U;
  c4_statuses[2] = 0U;
  c4_statuses[3] = 0U;
  c4_statuses[4] = 0U;
  c4_statuses[5] = 0U;
  c4_inMexFcns[0] = (void *)c4_sf_marshallIn_matrix500x500x3_real32_T;
  c4_inMexFcns[1] = (void *)c4_sf_marshallIn_matrix189x267x3_uint8_T;
  c4_inMexFcns[2] = (void *)c4_sf_marshallIn_matrix189x267_uint8_T;
  c4_inMexFcns[3] = (void *)c4_sf_marshallIn_matrix500x500_real32_T;
  c4_inMexFcns[4] = (void *)c4_sf_marshallIn_real_T;
  c4_inMexFcns[5] = (void *)c4_sf_marshallIn_real_T;
  c4_outMexFcns[0] = (void *)c4_sf_marshallOut_matrix500x500x3_real32_T;
  c4_outMexFcns[1] = (void *)c4_sf_marshallOut_matrix189x267x3_uint8_T;
  c4_outMexFcns[2] = (void *)c4_sf_marshallOut_matrix189x267_uint8_T;
  c4_outMexFcns[3] = (void *)c4_sf_marshallOut_matrix500x500_real32_T;
  c4_outMexFcns[4] = (void *)c4_sf_marshallOut_real_T;
  c4_outMexFcns[5] = (void *)c4_sf_marshallOut_real_T;
  c4_ssIds[0] = 0U;
  c4_ssIds[1] = 0U;
  c4_ssIds[2] = 0U;
  c4_ssIds[3] = 0U;
  c4_ssIds[4] = 0U;
  c4_ssIds[5] = 0U;
  c4_dataNames[0] = (char_T *)"Image";
  c4_dataNames[1] = (char_T *)"redcrab";
  c4_dataNames[2] = (char_T *)"redcrabGray";
  c4_dataNames[3] = (char_T *)"ImageGray";
  c4_dataNames[4] = (char_T *)"nargin";
  c4_dataNames[5] = (char_T *)"nargout";
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportStartingSection(chartInstance->c4_RuntimeVar, 0, 4);
  }

  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 3);
  }

  for (c4_i2 = 0; c4_i2 < 151389; c4_i2++) {
    chartInstance->c4_b_X[c4_i2] = chartInstance->c4_redcrab[c4_i2];
  }

  for (c4_i3 = 0; c4_i3 < 50463; c4_i3++) {
    chartInstance->c4_b_Iu8[c4_i3] = chartInstance->c4_redcrabGray[c4_i3];
  }

  for (c4_i4 = 0; c4_i4 < 50463; c4_i4++) {
    chartInstance->c4_redcrabGray[c4_i4] = chartInstance->c4_b_Iu8[c4_i4];
  }

  rgb2gray_tbb_uint8(chartInstance->c4_b_X, 50463.0,
                     chartInstance->c4_redcrabGray, true);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 4);
  }

  for (c4_i5 = 0; c4_i5 < 750000; c4_i5++) {
    chartInstance->c4_X[c4_i5] = chartInstance->c4_Image[c4_i5];
  }

  for (c4_i6 = 0; c4_i6 < 250000; c4_i6++) {
    chartInstance->c4_outputImage[c4_i6] = chartInstance->c4_ImageGray[c4_i6];
  }

  for (c4_i7 = 0; c4_i7 < 250000; c4_i7++) {
    chartInstance->c4_ImageGray[c4_i7] = chartInstance->c4_outputImage[c4_i7];
  }

  rgb2gray_tbb_real32(chartInstance->c4_X, 250000.0, chartInstance->c4_ImageGray,
                      true);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 5);
  }

  for (c4_i8 = 0; c4_i8 < 50463; c4_i8++) {
    chartInstance->c4_b_Iu8[c4_i8] = chartInstance->c4_redcrabGray[c4_i8];
  }

  c4_i9 = 0;
  for (c4_i10 = 0; c4_i10 < 189; c4_i10++) {
    c4_i11 = 0;
    for (c4_i12 = 0; c4_i12 < 267; c4_i12++) {
      c4_c_Iu8[c4_i12 + c4_i9] = chartInstance->c4_b_Iu8[c4_i11 + c4_i10];
      c4_i11 += 189;
    }

    c4_i9 += 267;
  }

  c4_emxInit_real32_T(chartInstance, &c4_PtsStruct_Location, 2, &c4_g_emlrtRTEI);
  c4_emxInit_real32_T(chartInstance, &c4_valLocation, 2, &c4_lc_emlrtRTEI);
  c4_emxInit_real32_T1(chartInstance, &c4_valScale, 1, &c4_mc_emlrtRTEI);
  c4_emxInit_real32_T1(chartInstance, &c4_valMetric, 1, &c4_nc_emlrtRTEI);
  c4_emxInit_int8_T(chartInstance, &c4_valSignOfLaplacian, 1, &c4_oc_emlrtRTEI);
  c4_ptrKeypoint = NULL;
  c4_outNumRows = fastHessianDetector_uint8(c4_c_Iu8, 189, 267, 2, 2, 3, 1000,
    &c4_ptrKeypoint);
  c4_i13 = c4_valLocation->size[0] * c4_valLocation->size[1];
  c4_valLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_outNumRows);
  c4_valLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_valLocation, c4_i13,
    &c4_emlrtRTEI);
  c4_i14 = c4_valScale->size[0];
  c4_valScale->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_outNumRows);
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valScale, c4_i14,
    &c4_emlrtRTEI);
  c4_i15 = c4_valMetric->size[0];
  c4_valMetric->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_outNumRows);
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valMetric, c4_i15,
    &c4_emlrtRTEI);
  c4_i16 = c4_valSignOfLaplacian->size[0];
  c4_valSignOfLaplacian->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_outNumRows);
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_valSignOfLaplacian, c4_i16,
    &c4_emlrtRTEI);
  fastHessianDetector_keyPoints2field(c4_ptrKeypoint, &c4_valLocation->data[0],
    &c4_valScale->data[0], &c4_valMetric->data[0], &c4_valSignOfLaplacian->data
    [0]);
  fastHessianDetector_deleteKeypoint(c4_ptrKeypoint);
  c4_i17 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_valLocation->size[0];
  c4_PtsStruct_Location->size[1] = c4_valLocation->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i17,
    &c4_b_emlrtRTEI);
  c4_loop_ub = c4_valLocation->size[0] * c4_valLocation->size[1] - 1;
  for (c4_i18 = 0; c4_i18 <= c4_loop_ub; c4_i18++) {
    c4_PtsStruct_Location->data[c4_i18] = c4_valLocation->data[c4_i18];
  }

  c4_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_c_PtsStruct,
    &c4_jc_emlrtRTEI);
  c4_i19 = c4_c_PtsStruct.Location->size[0] * c4_c_PtsStruct.Location->size[1];
  c4_c_PtsStruct.Location->size[0] = c4_PtsStruct_Location->size[0];
  c4_c_PtsStruct.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_PtsStruct.Location, c4_i19,
    &c4_c_emlrtRTEI);
  c4_b_loop_ub = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1]
    - 1;
  for (c4_i20 = 0; c4_i20 <= c4_b_loop_ub; c4_i20++) {
    c4_c_PtsStruct.Location->data[c4_i20] = c4_PtsStruct_Location->data[c4_i20];
  }

  c4_i21 = c4_c_PtsStruct.Scale->size[0];
  c4_c_PtsStruct.Scale->size[0] = c4_valScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_c_PtsStruct.Scale, c4_i21,
    &c4_d_emlrtRTEI);
  c4_c_loop_ub = c4_valScale->size[0] - 1;
  for (c4_i22 = 0; c4_i22 <= c4_c_loop_ub; c4_i22++) {
    c4_c_PtsStruct.Scale->data[c4_i22] = c4_valScale->data[c4_i22];
  }

  c4_i23 = c4_c_PtsStruct.Metric->size[0];
  c4_c_PtsStruct.Metric->size[0] = c4_valMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_c_PtsStruct.Metric, c4_i23,
    &c4_e_emlrtRTEI);
  c4_d_loop_ub = c4_valMetric->size[0] - 1;
  for (c4_i24 = 0; c4_i24 <= c4_d_loop_ub; c4_i24++) {
    c4_c_PtsStruct.Metric->data[c4_i24] = c4_valMetric->data[c4_i24];
  }

  c4_i25 = c4_c_PtsStruct.SignOfLaplacian->size[0];
  c4_c_PtsStruct.SignOfLaplacian->size[0] = c4_valSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_c_PtsStruct.SignOfLaplacian,
    c4_i25, &c4_f_emlrtRTEI);
  c4_e_loop_ub = c4_valSignOfLaplacian->size[0] - 1;
  for (c4_i26 = 0; c4_i26 <= c4_e_loop_ub; c4_i26++) {
    c4_c_PtsStruct.SignOfLaplacian->data[c4_i26] = c4_valSignOfLaplacian->
      data[c4_i26];
  }

  c4_i27 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_c_PtsStruct.Location->size[0];
  c4_PtsStruct_Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i27,
    &c4_g_emlrtRTEI);
  c4_f_loop_ub = c4_c_PtsStruct.Location->size[0] *
    c4_c_PtsStruct.Location->size[1] - 1;
  for (c4_i28 = 0; c4_i28 <= c4_f_loop_ub; c4_i28++) {
    c4_PtsStruct_Location->data[c4_i28] = c4_c_PtsStruct.Location->data[c4_i28];
  }

  c4_i29 = c4_c_PtsStruct.Location->size[0] * c4_c_PtsStruct.Location->size[1];
  c4_c_PtsStruct.Location->size[0] = c4_PtsStruct_Location->size[0];
  c4_c_PtsStruct.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_PtsStruct.Location, c4_i29,
    &c4_h_emlrtRTEI);
  c4_g_loop_ub = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1]
    - 1;
  for (c4_i30 = 0; c4_i30 <= c4_g_loop_ub; c4_i30++) {
    c4_c_PtsStruct.Location->data[c4_i30] = c4_PtsStruct_Location->data[c4_i30];
  }

  c4_emxInit_real32_T(chartInstance, &c4_d_PtsStruct, 2, &c4_i_emlrtRTEI);
  c4_i31 = c4_d_PtsStruct->size[0] * c4_d_PtsStruct->size[1];
  c4_d_PtsStruct->size[0] = c4_c_PtsStruct.Location->size[0];
  c4_d_PtsStruct->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_d_PtsStruct, c4_i31,
    &c4_i_emlrtRTEI);
  c4_h_loop_ub = c4_c_PtsStruct.Location->size[0] *
    c4_c_PtsStruct.Location->size[1] - 1;
  for (c4_i32 = 0; c4_i32 <= c4_h_loop_ub; c4_i32++) {
    c4_d_PtsStruct->data[c4_i32] = c4_c_PtsStruct.Location->data[c4_i32];
  }

  c4_emxCopyStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_b_PtsStruct,
    &c4_c_PtsStruct, &c4_j_emlrtRTEI);
  c4_SURFPoints_cg_SURFPoints_cg(chartInstance, c4_d_PtsStruct, c4_b_PtsStruct,
    &c4_RedCrabPoints);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "RedCrabPoints", &c4_RedCrabPoints, (void *)
    c4_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c4_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 7);
  }

  c4_emxFree_real32_T(chartInstance, &c4_d_PtsStruct);
  c4_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_c_PtsStruct);
  for (c4_i33 = 0; c4_i33 < 50463; c4_i33++) {
    c4_b_redcrabGray[c4_i33] = chartInstance->c4_redcrabGray[c4_i33];
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_RedCrabFeatures, 2, &c4_vb_emlrtRTEI);
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_d_RedCrabPoints,
    &c4_n_emlrtRTEI);
  c4_emxCopyStruct_vision_internal_S(chartInstance, &c4_c_RedCrabPoints,
    &c4_RedCrabPoints, &c4_k_emlrtRTEI);
  c4_extractFeatures(chartInstance, c4_b_redcrabGray, c4_c_RedCrabPoints,
                     c4_b_RedCrabFeatures, &c4_d_RedCrabPoints);
  c4_i34 = c4_RedCrabFeatures->size[0] * c4_RedCrabFeatures->size[1];
  c4_RedCrabFeatures->size[0] = c4_b_RedCrabFeatures->size[0];
  c4_RedCrabFeatures->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_RedCrabFeatures, c4_i34,
    &c4_l_emlrtRTEI);
  c4_i_loop_ub = c4_b_RedCrabFeatures->size[0] * c4_b_RedCrabFeatures->size[1] -
    1;
  for (c4_i35 = 0; c4_i35 <= c4_i_loop_ub; c4_i35++) {
    c4_RedCrabFeatures->data[c4_i35] = c4_b_RedCrabFeatures->data[c4_i35];
  }

  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "RedCrabFeatures", c4_RedCrabFeatures, (void *)
    c4_sf_marshallOut_dynamicmatrix, (void *)c4_sf_marshallIn_dynamicmatrix, 0U);
  c4_emxCopyStruct_vision_internal_S(chartInstance, &c4_b_RedCrabPoints,
    &c4_d_RedCrabPoints, &c4_m_emlrtRTEI);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "RedCrabPoints", &c4_b_RedCrabPoints, (void *)
    c4_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c4_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 9);
  }

  for (c4_i36 = 0; c4_i36 < 250000; c4_i36++) {
    chartInstance->c4_outputImage[c4_i36] = chartInstance->c4_ImageGray[c4_i36];
  }

  grayto8_real32(chartInstance->c4_outputImage, chartInstance->c4_Iu8, 250000.0);
  for (c4_i37 = 0; c4_i37 < 250000; c4_i37++) {
    chartInstance->c4_Iu8T[c4_i37] = chartInstance->c4_Iu8[c4_i37];
  }

  c4_i38 = 0;
  for (c4_i39 = 0; c4_i39 < 500; c4_i39++) {
    c4_i40 = 0;
    for (c4_i41 = 0; c4_i41 < 500; c4_i41++) {
      chartInstance->c4_Iu8[c4_i41 + c4_i38] = chartInstance->c4_Iu8T[c4_i40 +
        c4_i39];
      c4_i40 += 500;
    }

    c4_i38 += 500;
  }

  c4_b_ptrKeypoint = NULL;
  c4_b_outNumRows = fastHessianDetector_uint8(chartInstance->c4_Iu8, 500, 500, 2,
    2, 3, 1000, &c4_b_ptrKeypoint);
  c4_i42 = c4_valLocation->size[0] * c4_valLocation->size[1];
  c4_valLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_b_outNumRows);
  c4_valLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_valLocation, c4_i42,
    &c4_emlrtRTEI);
  c4_i43 = c4_valScale->size[0];
  c4_valScale->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_b_outNumRows);
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valScale, c4_i43,
    &c4_emlrtRTEI);
  c4_i44 = c4_valMetric->size[0];
  c4_valMetric->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_b_outNumRows);
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valMetric, c4_i44,
    &c4_emlrtRTEI);
  c4_i45 = c4_valSignOfLaplacian->size[0];
  c4_valSignOfLaplacian->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_b_outNumRows);
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_valSignOfLaplacian, c4_i45,
    &c4_emlrtRTEI);
  fastHessianDetector_keyPoints2field(c4_b_ptrKeypoint, &c4_valLocation->data[0],
    &c4_valScale->data[0], &c4_valMetric->data[0], &c4_valSignOfLaplacian->data
    [0]);
  fastHessianDetector_deleteKeypoint(c4_b_ptrKeypoint);
  c4_i46 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_valLocation->size[0];
  c4_PtsStruct_Location->size[1] = c4_valLocation->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i46,
    &c4_b_emlrtRTEI);
  c4_j_loop_ub = c4_valLocation->size[0] * c4_valLocation->size[1] - 1;
  for (c4_i47 = 0; c4_i47 <= c4_j_loop_ub; c4_i47++) {
    c4_PtsStruct_Location->data[c4_i47] = c4_valLocation->data[c4_i47];
  }

  c4_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_e_PtsStruct,
    &c4_jc_emlrtRTEI);
  c4_i48 = c4_e_PtsStruct.Location->size[0] * c4_e_PtsStruct.Location->size[1];
  c4_e_PtsStruct.Location->size[0] = c4_PtsStruct_Location->size[0];
  c4_e_PtsStruct.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_e_PtsStruct.Location, c4_i48,
    &c4_c_emlrtRTEI);
  c4_k_loop_ub = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1]
    - 1;
  for (c4_i49 = 0; c4_i49 <= c4_k_loop_ub; c4_i49++) {
    c4_e_PtsStruct.Location->data[c4_i49] = c4_PtsStruct_Location->data[c4_i49];
  }

  c4_i50 = c4_e_PtsStruct.Scale->size[0];
  c4_e_PtsStruct.Scale->size[0] = c4_valScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_e_PtsStruct.Scale, c4_i50,
    &c4_d_emlrtRTEI);
  c4_l_loop_ub = c4_valScale->size[0] - 1;
  for (c4_i51 = 0; c4_i51 <= c4_l_loop_ub; c4_i51++) {
    c4_e_PtsStruct.Scale->data[c4_i51] = c4_valScale->data[c4_i51];
  }

  c4_i52 = c4_e_PtsStruct.Metric->size[0];
  c4_e_PtsStruct.Metric->size[0] = c4_valMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_e_PtsStruct.Metric, c4_i52,
    &c4_e_emlrtRTEI);
  c4_m_loop_ub = c4_valMetric->size[0] - 1;
  for (c4_i53 = 0; c4_i53 <= c4_m_loop_ub; c4_i53++) {
    c4_e_PtsStruct.Metric->data[c4_i53] = c4_valMetric->data[c4_i53];
  }

  c4_i54 = c4_e_PtsStruct.SignOfLaplacian->size[0];
  c4_e_PtsStruct.SignOfLaplacian->size[0] = c4_valSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_e_PtsStruct.SignOfLaplacian,
    c4_i54, &c4_f_emlrtRTEI);
  c4_n_loop_ub = c4_valSignOfLaplacian->size[0] - 1;
  for (c4_i55 = 0; c4_i55 <= c4_n_loop_ub; c4_i55++) {
    c4_e_PtsStruct.SignOfLaplacian->data[c4_i55] = c4_valSignOfLaplacian->
      data[c4_i55];
  }

  c4_i56 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_e_PtsStruct.Location->size[0];
  c4_PtsStruct_Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i56,
    &c4_g_emlrtRTEI);
  c4_o_loop_ub = c4_e_PtsStruct.Location->size[0] *
    c4_e_PtsStruct.Location->size[1] - 1;
  for (c4_i57 = 0; c4_i57 <= c4_o_loop_ub; c4_i57++) {
    c4_PtsStruct_Location->data[c4_i57] = c4_e_PtsStruct.Location->data[c4_i57];
  }

  c4_i58 = c4_e_PtsStruct.Location->size[0] * c4_e_PtsStruct.Location->size[1];
  c4_e_PtsStruct.Location->size[0] = c4_PtsStruct_Location->size[0];
  c4_e_PtsStruct.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_e_PtsStruct.Location, c4_i58,
    &c4_h_emlrtRTEI);
  c4_p_loop_ub = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1]
    - 1;
  for (c4_i59 = 0; c4_i59 <= c4_p_loop_ub; c4_i59++) {
    c4_e_PtsStruct.Location->data[c4_i59] = c4_PtsStruct_Location->data[c4_i59];
  }

  c4_emxInit_real32_T(chartInstance, &c4_f_PtsStruct, 2, &c4_i_emlrtRTEI);
  c4_i60 = c4_f_PtsStruct->size[0] * c4_f_PtsStruct->size[1];
  c4_f_PtsStruct->size[0] = c4_e_PtsStruct.Location->size[0];
  c4_f_PtsStruct->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_f_PtsStruct, c4_i60,
    &c4_i_emlrtRTEI);
  c4_q_loop_ub = c4_e_PtsStruct.Location->size[0] *
    c4_e_PtsStruct.Location->size[1] - 1;
  for (c4_i61 = 0; c4_i61 <= c4_q_loop_ub; c4_i61++) {
    c4_f_PtsStruct->data[c4_i61] = c4_e_PtsStruct.Location->data[c4_i61];
  }

  c4_emxCopyStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_PtsStruct,
    &c4_e_PtsStruct, &c4_j_emlrtRTEI);
  c4_SURFPoints_cg_SURFPoints_cg(chartInstance, c4_f_PtsStruct, c4_PtsStruct,
    &c4_ROIPoints);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "ROIPoints", &c4_ROIPoints, (void *)
    c4_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c4_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 10);
  }

  c4_emxFree_real32_T(chartInstance, &c4_f_PtsStruct);
  c4_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_e_PtsStruct);
  for (c4_i62 = 0; c4_i62 < 250000; c4_i62++) {
    chartInstance->c4_outputImage[c4_i62] = chartInstance->c4_ImageGray[c4_i62];
  }

  c4_emxCopyStruct_vision_internal_S(chartInstance, &c4_d_RedCrabPoints,
    &c4_ROIPoints, &c4_n_emlrtRTEI);
  c4_i63 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_d_RedCrabPoints.pLocation->size[0];
  c4_PtsStruct_Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i63,
    &c4_o_emlrtRTEI);
  c4_r_loop_ub = c4_d_RedCrabPoints.pLocation->size[0] *
    c4_d_RedCrabPoints.pLocation->size[1] - 1;
  for (c4_i64 = 0; c4_i64 <= c4_r_loop_ub; c4_i64++) {
    c4_PtsStruct_Location->data[c4_i64] = c4_d_RedCrabPoints.pLocation->
      data[c4_i64];
  }

  if (!c4_inputMeetsSizeRequirement(chartInstance, c4_PtsStruct_Location)) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  grayto8_real32(chartInstance->c4_outputImage, chartInstance->c4_Iu8, 250000.0);
  c4_i65 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_d_RedCrabPoints.pLocation->size[0];
  c4_PtsStruct_Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i65,
    &c4_p_emlrtRTEI);
  c4_s_loop_ub = c4_d_RedCrabPoints.pLocation->size[0] *
    c4_d_RedCrabPoints.pLocation->size[1] - 1;
  for (c4_i66 = 0; c4_i66 <= c4_s_loop_ub; c4_i66++) {
    c4_PtsStruct_Location->data[c4_i66] = c4_d_RedCrabPoints.pLocation->
      data[c4_i66];
  }

  c4_out_numel = (real_T)c4_PtsStruct_Location->size[0];
  c4_i67 = c4_valLocation->size[0] * c4_valLocation->size[1];
  c4_valLocation->size[0] = (int32_T)c4_out_numel;
  c4_valLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_valLocation, c4_i67,
    &c4_q_emlrtRTEI);
  c4_i68 = c4_valScale->size[0];
  c4_valScale->size[0] = (int32_T)c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valScale, c4_i68,
    &c4_q_emlrtRTEI);
  c4_i69 = c4_valMetric->size[0];
  c4_valMetric->size[0] = (int32_T)c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valMetric, c4_i69,
    &c4_q_emlrtRTEI);
  c4_i70 = c4_valSignOfLaplacian->size[0];
  c4_valSignOfLaplacian->size[0] = (int32_T)c4_out_numel;
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_valSignOfLaplacian, c4_i70,
    &c4_q_emlrtRTEI);
  c4_b = (1.0 > c4_out_numel);
  if (c4_b) {
    c4_i71 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c4_valLocation->size[0]);
    c4_i71 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valLocation->size[0]) - 1;
  }

  c4_emxInit_int32_T(chartInstance, &c4_r, 1, (emlrtRTEInfo *)NULL);
  c4_i72 = c4_r->size[0];
  c4_r->size[0] = c4_i71 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i72, &c4_r_emlrtRTEI);
  c4_t_loop_ub = c4_i71;
  for (c4_i73 = 0; c4_i73 <= c4_t_loop_ub; c4_i73++) {
    c4_r->data[c4_i73] = c4_i73;
  }

  for (c4_i74 = 0; c4_i74 < 2; c4_i74++) {
    c4_tmp_data[c4_i74] = c4_i74;
  }

  c4_i75 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_d_RedCrabPoints.pLocation->size[0];
  c4_PtsStruct_Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i75,
    &c4_t_emlrtRTEI);
  c4_u_loop_ub = c4_d_RedCrabPoints.pLocation->size[0] *
    c4_d_RedCrabPoints.pLocation->size[1] - 1;
  for (c4_i76 = 0; c4_i76 <= c4_u_loop_ub; c4_i76++) {
    c4_PtsStruct_Location->data[c4_i76] = c4_d_RedCrabPoints.pLocation->
      data[c4_i76];
  }

  c4_iv[0] = c4_r->size[0];
  c4_iv[1] = 2;
  sf_mex_lw_sub_assign_size_check_nd(c4_iv, 2, *(int32_T (*)[2])
    c4_PtsStruct_Location->size, 2);
  for (c4_i77 = 0; c4_i77 < 2; c4_i77++) {
    c4_v_loop_ub = c4_PtsStruct_Location->size[0] - 1;
    for (c4_i78 = 0; c4_i78 <= c4_v_loop_ub; c4_i78++) {
      c4_valLocation->data[c4_r->data[c4_i78] + c4_valLocation->size[0] *
        c4_tmp_data[c4_i77]] = c4_PtsStruct_Location->data[c4_i78 +
        c4_PtsStruct_Location->size[0] * c4_i77];
    }
  }

  c4_b1 = (1.0 > c4_out_numel);
  if (c4_b1) {
    c4_i79 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c4_valScale->size[0]);
    c4_i79 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valScale->size[0]) - 1;
  }

  c4_i80 = c4_r->size[0];
  c4_r->size[0] = c4_i79 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i80, &c4_u_emlrtRTEI);
  c4_w_loop_ub = c4_i79;
  for (c4_i81 = 0; c4_i81 <= c4_w_loop_ub; c4_i81++) {
    c4_r->data[c4_i81] = c4_i81;
  }

  c4_emxInit_real32_T1(chartInstance, &c4_outOrientation, 1, (emlrtRTEInfo *)
                       NULL);
  c4_i82 = c4_outOrientation->size[0];
  c4_outOrientation->size[0] = c4_d_RedCrabPoints.pScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outOrientation, c4_i82,
    &c4_v_emlrtRTEI);
  c4_x_loop_ub = c4_d_RedCrabPoints.pScale->size[0] - 1;
  for (c4_i83 = 0; c4_i83 <= c4_x_loop_ub; c4_i83++) {
    c4_outOrientation->data[c4_i83] = c4_d_RedCrabPoints.pScale->data[c4_i83];
  }

  c4_iv1[0] = c4_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c4_iv1, 1, *(int32_T (*)[1])
    c4_outOrientation->size, 1);
  c4_y_loop_ub = c4_outOrientation->size[0] - 1;
  for (c4_i84 = 0; c4_i84 <= c4_y_loop_ub; c4_i84++) {
    c4_valScale->data[c4_r->data[c4_i84]] = c4_outOrientation->data[c4_i84];
  }

  c4_b2 = (1.0 > c4_out_numel);
  if (c4_b2) {
    c4_i85 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c4_valMetric->size[0]);
    c4_i85 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valMetric->size[0]) - 1;
  }

  c4_i86 = c4_r->size[0];
  c4_r->size[0] = c4_i85 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i86, &c4_w_emlrtRTEI);
  c4_ab_loop_ub = c4_i85;
  for (c4_i87 = 0; c4_i87 <= c4_ab_loop_ub; c4_i87++) {
    c4_r->data[c4_i87] = c4_i87;
  }

  c4_i88 = c4_outOrientation->size[0];
  c4_outOrientation->size[0] = c4_d_RedCrabPoints.pMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outOrientation, c4_i88,
    &c4_x_emlrtRTEI);
  c4_bb_loop_ub = c4_d_RedCrabPoints.pMetric->size[0] - 1;
  for (c4_i89 = 0; c4_i89 <= c4_bb_loop_ub; c4_i89++) {
    c4_outOrientation->data[c4_i89] = c4_d_RedCrabPoints.pMetric->data[c4_i89];
  }

  c4_iv2[0] = c4_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c4_iv2, 1, *(int32_T (*)[1])
    c4_outOrientation->size, 1);
  c4_cb_loop_ub = c4_outOrientation->size[0] - 1;
  for (c4_i90 = 0; c4_i90 <= c4_cb_loop_ub; c4_i90++) {
    c4_valMetric->data[c4_r->data[c4_i90]] = c4_outOrientation->data[c4_i90];
  }

  c4_b3 = (1.0 > c4_out_numel);
  if (c4_b3) {
    c4_i91 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c4_valSignOfLaplacian->size[0]);
    c4_i91 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valSignOfLaplacian->size[0]) -
      1;
  }

  c4_i92 = c4_r->size[0];
  c4_r->size[0] = c4_i91 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i92, &c4_y_emlrtRTEI);
  c4_db_loop_ub = c4_i91;
  for (c4_i93 = 0; c4_i93 <= c4_db_loop_ub; c4_i93++) {
    c4_r->data[c4_i93] = c4_i93;
  }

  c4_emxInit_int8_T(chartInstance, &c4_r1, 1, (emlrtRTEInfo *)NULL);
  c4_i94 = c4_r1->size[0];
  c4_r1->size[0] = c4_d_RedCrabPoints.pSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_r1, c4_i94, &c4_ab_emlrtRTEI);
  c4_eb_loop_ub = c4_d_RedCrabPoints.pSignOfLaplacian->size[0] - 1;
  for (c4_i95 = 0; c4_i95 <= c4_eb_loop_ub; c4_i95++) {
    c4_r1->data[c4_i95] = c4_d_RedCrabPoints.pSignOfLaplacian->data[c4_i95];
  }

  c4_iv3[0] = c4_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c4_iv3, 1, *(int32_T (*)[1])c4_r1->size, 1);
  c4_fb_loop_ub = c4_r1->size[0] - 1;
  for (c4_i96 = 0; c4_i96 <= c4_fb_loop_ub; c4_i96++) {
    c4_valSignOfLaplacian->data[c4_r->data[c4_i96]] = c4_r1->data[c4_i96];
  }

  c4_emxFree_int8_T(chartInstance, &c4_r1);
  c4_emxFree_int32_T(chartInstance, &c4_r);
  c4_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_ptsStruct, (emlrtRTEInfo
    *)NULL);
  c4_i97 = c4_ptsStruct.Location->size[0] * c4_ptsStruct.Location->size[1];
  c4_ptsStruct.Location->size[0] = c4_valLocation->size[0];
  c4_ptsStruct.Location->size[1] = c4_valLocation->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ptsStruct.Location, c4_i97,
    &c4_bb_emlrtRTEI);
  c4_gb_loop_ub = c4_valLocation->size[0] * c4_valLocation->size[1] - 1;
  for (c4_i98 = 0; c4_i98 <= c4_gb_loop_ub; c4_i98++) {
    c4_ptsStruct.Location->data[c4_i98] = c4_valLocation->data[c4_i98];
  }

  c4_i99 = c4_ptsStruct.Scale->size[0];
  c4_ptsStruct.Scale->size[0] = c4_valScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_ptsStruct.Scale, c4_i99,
    &c4_cb_emlrtRTEI);
  c4_hb_loop_ub = c4_valScale->size[0] - 1;
  for (c4_i100 = 0; c4_i100 <= c4_hb_loop_ub; c4_i100++) {
    c4_ptsStruct.Scale->data[c4_i100] = c4_valScale->data[c4_i100];
  }

  c4_i101 = c4_ptsStruct.Metric->size[0];
  c4_ptsStruct.Metric->size[0] = c4_valMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_ptsStruct.Metric, c4_i101,
    &c4_db_emlrtRTEI);
  c4_ib_loop_ub = c4_valMetric->size[0] - 1;
  for (c4_i102 = 0; c4_i102 <= c4_ib_loop_ub; c4_i102++) {
    c4_ptsStruct.Metric->data[c4_i102] = c4_valMetric->data[c4_i102];
  }

  c4_i103 = c4_ptsStruct.SignOfLaplacian->size[0];
  c4_ptsStruct.SignOfLaplacian->size[0] = c4_valSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_ptsStruct.SignOfLaplacian,
    c4_i103, &c4_eb_emlrtRTEI);
  c4_jb_loop_ub = c4_valSignOfLaplacian->size[0] - 1;
  for (c4_i104 = 0; c4_i104 <= c4_jb_loop_ub; c4_i104++) {
    c4_ptsStruct.SignOfLaplacian->data[c4_i104] = c4_valSignOfLaplacian->
      data[c4_i104];
  }

  c4_i105 = 0;
  for (c4_i106 = 0; c4_i106 < 500; c4_i106++) {
    c4_i107 = 0;
    for (c4_i109 = 0; c4_i109 < 500; c4_i109++) {
      chartInstance->c4_Iu8T[c4_i109 + c4_i105] = chartInstance->c4_Iu8[c4_i107
        + c4_i106];
      c4_i107 += 500;
    }

    c4_i105 += 500;
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_ptsStruct, 2, &c4_fb_emlrtRTEI);
  c4_i108 = c4_b_ptsStruct->size[0] * c4_b_ptsStruct->size[1];
  c4_b_ptsStruct->size[0] = c4_ptsStruct.Location->size[0];
  c4_b_ptsStruct->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_ptsStruct, c4_i108,
    &c4_fb_emlrtRTEI);
  c4_kb_loop_ub = c4_ptsStruct.Location->size[0] * c4_ptsStruct.Location->size[1]
    - 1;
  for (c4_i110 = 0; c4_i110 <= c4_kb_loop_ub; c4_i110++) {
    c4_b_ptsStruct->data[c4_i110] = c4_ptsStruct.Location->data[c4_i110];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_c_ptsStruct, 1, &c4_gb_emlrtRTEI);
  c4_i111 = c4_c_ptsStruct->size[0];
  c4_c_ptsStruct->size[0] = c4_ptsStruct.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_c_ptsStruct, c4_i111,
    &c4_gb_emlrtRTEI);
  c4_lb_loop_ub = c4_ptsStruct.Scale->size[0] - 1;
  for (c4_i112 = 0; c4_i112 <= c4_lb_loop_ub; c4_i112++) {
    c4_c_ptsStruct->data[c4_i112] = c4_ptsStruct.Scale->data[c4_i112];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_d_ptsStruct, 1, &c4_hb_emlrtRTEI);
  c4_i113 = c4_d_ptsStruct->size[0];
  c4_d_ptsStruct->size[0] = c4_ptsStruct.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_d_ptsStruct, c4_i113,
    &c4_hb_emlrtRTEI);
  c4_mb_loop_ub = c4_ptsStruct.Metric->size[0] - 1;
  for (c4_i114 = 0; c4_i114 <= c4_mb_loop_ub; c4_i114++) {
    c4_d_ptsStruct->data[c4_i114] = c4_ptsStruct.Metric->data[c4_i114];
  }

  c4_emxInit_int8_T(chartInstance, &c4_e_ptsStruct, 1, &c4_ib_emlrtRTEI);
  c4_i115 = c4_e_ptsStruct->size[0];
  c4_e_ptsStruct->size[0] = c4_ptsStruct.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_e_ptsStruct, c4_i115,
    &c4_ib_emlrtRTEI);
  c4_nb_loop_ub = c4_ptsStruct.SignOfLaplacian->size[0] - 1;
  for (c4_i116 = 0; c4_i116 <= c4_nb_loop_ub; c4_i116++) {
    c4_e_ptsStruct->data[c4_i116] = c4_ptsStruct.SignOfLaplacian->data[c4_i116];
  }

  c4_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_ptsStruct);
  c4_emxInit_real32_T(chartInstance, &c4_features, 2, (emlrtRTEInfo *)NULL);
  c4_b_extractSurfBuildable_extractSurf_uint8(chartInstance,
    chartInstance->c4_Iu8T, c4_b_ptsStruct, c4_c_ptsStruct, c4_d_ptsStruct,
    c4_e_ptsStruct, false, false, c4_valLocation, c4_valScale, c4_valMetric,
    c4_valSignOfLaplacian, c4_outOrientation, c4_features);
  c4_i117 = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1];
  c4_PtsStruct_Location->size[0] = c4_valLocation->size[0];
  c4_PtsStruct_Location->size[1] = c4_valLocation->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_PtsStruct_Location, c4_i117,
    &c4_jb_emlrtRTEI);
  c4_ob_loop_ub = c4_valLocation->size[0] * c4_valLocation->size[1] - 1;
  c4_emxFree_int8_T(chartInstance, &c4_e_ptsStruct);
  c4_emxFree_real32_T(chartInstance, &c4_d_ptsStruct);
  c4_emxFree_real32_T(chartInstance, &c4_c_ptsStruct);
  c4_emxFree_real32_T(chartInstance, &c4_b_ptsStruct);
  for (c4_i118 = 0; c4_i118 <= c4_ob_loop_ub; c4_i118++) {
    c4_PtsStruct_Location->data[c4_i118] = c4_valLocation->data[c4_i118];
  }

  c4_emxFree_real32_T(chartInstance, &c4_valLocation);
  c4_i119 = c4_b_RedCrabFeatures->size[0] * c4_b_RedCrabFeatures->size[1];
  c4_b_RedCrabFeatures->size[0] = c4_features->size[0];
  c4_b_RedCrabFeatures->size[1] = c4_features->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_RedCrabFeatures, c4_i119,
    &c4_kb_emlrtRTEI);
  c4_pb_loop_ub = c4_features->size[0] * c4_features->size[1] - 1;
  for (c4_i120 = 0; c4_i120 <= c4_pb_loop_ub; c4_i120++) {
    c4_b_RedCrabFeatures->data[c4_i120] = c4_features->data[c4_i120];
  }

  c4_emxFree_real32_T(chartInstance, &c4_features);
  c4_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_b_vPts, &c4_kc_emlrtRTEI);
  c4_i121 = c4_b_vPts.Location->size[0] * c4_b_vPts.Location->size[1];
  c4_b_vPts.Location->size[0] = c4_PtsStruct_Location->size[0];
  c4_b_vPts.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_vPts.Location, c4_i121,
    &c4_lb_emlrtRTEI);
  c4_qb_loop_ub = c4_PtsStruct_Location->size[0] * c4_PtsStruct_Location->size[1]
    - 1;
  for (c4_i122 = 0; c4_i122 <= c4_qb_loop_ub; c4_i122++) {
    c4_b_vPts.Location->data[c4_i122] = c4_PtsStruct_Location->data[c4_i122];
  }

  c4_emxFree_real32_T(chartInstance, &c4_PtsStruct_Location);
  c4_i123 = c4_b_vPts.Scale->size[0];
  c4_b_vPts.Scale->size[0] = c4_valScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Scale, c4_i123,
    &c4_mb_emlrtRTEI);
  c4_rb_loop_ub = c4_valScale->size[0] - 1;
  for (c4_i124 = 0; c4_i124 <= c4_rb_loop_ub; c4_i124++) {
    c4_b_vPts.Scale->data[c4_i124] = c4_valScale->data[c4_i124];
  }

  c4_emxFree_real32_T(chartInstance, &c4_valScale);
  c4_i125 = c4_b_vPts.Metric->size[0];
  c4_b_vPts.Metric->size[0] = c4_valMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Metric, c4_i125,
    &c4_nb_emlrtRTEI);
  c4_sb_loop_ub = c4_valMetric->size[0] - 1;
  for (c4_i126 = 0; c4_i126 <= c4_sb_loop_ub; c4_i126++) {
    c4_b_vPts.Metric->data[c4_i126] = c4_valMetric->data[c4_i126];
  }

  c4_emxFree_real32_T(chartInstance, &c4_valMetric);
  c4_i127 = c4_b_vPts.SignOfLaplacian->size[0];
  c4_b_vPts.SignOfLaplacian->size[0] = c4_valSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_b_vPts.SignOfLaplacian, c4_i127,
    &c4_ob_emlrtRTEI);
  c4_tb_loop_ub = c4_valSignOfLaplacian->size[0] - 1;
  for (c4_i128 = 0; c4_i128 <= c4_tb_loop_ub; c4_i128++) {
    c4_b_vPts.SignOfLaplacian->data[c4_i128] = c4_valSignOfLaplacian->
      data[c4_i128];
  }

  c4_emxFree_int8_T(chartInstance, &c4_valSignOfLaplacian);
  c4_i129 = c4_b_vPts.Orientation->size[0];
  c4_b_vPts.Orientation->size[0] = c4_outOrientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Orientation, c4_i129,
    &c4_pb_emlrtRTEI);
  c4_ub_loop_ub = c4_outOrientation->size[0] - 1;
  for (c4_i130 = 0; c4_i130 <= c4_ub_loop_ub; c4_i130++) {
    c4_b_vPts.Orientation->data[c4_i130] = c4_outOrientation->data[c4_i130];
  }

  c4_emxFree_real32_T(chartInstance, &c4_outOrientation);
  c4_i131 = c4_b_vPts.Orientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Orientation, c4_i131,
    &c4_qb_emlrtRTEI);
  c4_vb_loop_ub = c4_b_vPts.Orientation->size[0] - 1;
  for (c4_i132 = 0; c4_i132 <= c4_vb_loop_ub; c4_i132++) {
    c4_b_vPts.Orientation->data[c4_i132] = 6.28318548F -
      c4_b_vPts.Orientation->data[c4_i132];
  }

  c4_emxInit_real32_T(chartInstance, &c4_c_vPts, 2, &c4_rb_emlrtRTEI);
  c4_i133 = c4_c_vPts->size[0] * c4_c_vPts->size[1];
  c4_c_vPts->size[0] = c4_b_vPts.Location->size[0];
  c4_c_vPts->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_vPts, c4_i133,
    &c4_rb_emlrtRTEI);
  c4_wb_loop_ub = c4_b_vPts.Location->size[0] * c4_b_vPts.Location->size[1] - 1;
  for (c4_i134 = 0; c4_i134 <= c4_wb_loop_ub; c4_i134++) {
    c4_c_vPts->data[c4_i134] = c4_b_vPts.Location->data[c4_i134];
  }

  c4_emxCopyStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_vPts, &c4_b_vPts,
    &c4_sb_emlrtRTEI);
  c4_b_SURFPoints_cg_SURFPoints_cg(chartInstance, c4_c_vPts, c4_vPts,
    &c4_d_RedCrabPoints);
  c4_i135 = c4_ROIFeatures->size[0] * c4_ROIFeatures->size[1];
  c4_ROIFeatures->size[0] = c4_b_RedCrabFeatures->size[0];
  c4_ROIFeatures->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ROIFeatures, c4_i135,
    &c4_tb_emlrtRTEI);
  c4_xb_loop_ub = c4_b_RedCrabFeatures->size[0] * c4_b_RedCrabFeatures->size[1]
    - 1;
  c4_emxFree_real32_T(chartInstance, &c4_c_vPts);
  c4_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_b_vPts);
  for (c4_i136 = 0; c4_i136 <= c4_xb_loop_ub; c4_i136++) {
    c4_ROIFeatures->data[c4_i136] = c4_b_RedCrabFeatures->data[c4_i136];
  }

  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "ROIFeatures", c4_ROIFeatures, (void *)c4_sf_marshallOut_dynamicmatrix,
    (void *)c4_sf_marshallIn_dynamicmatrix, 0U);
  c4_emxCopyStruct_vision_internal_S(chartInstance, &c4_b_ROIPoints,
    &c4_d_RedCrabPoints, &c4_ub_emlrtRTEI);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "ROIPoints", &c4_b_ROIPoints, (void *)
    c4_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c4_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, 13);
  }

  c4_i137 = c4_b_RedCrabFeatures->size[0] * c4_b_RedCrabFeatures->size[1];
  c4_b_RedCrabFeatures->size[0] = c4_RedCrabFeatures->size[0];
  c4_b_RedCrabFeatures->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_RedCrabFeatures, c4_i137,
    &c4_vb_emlrtRTEI);
  c4_yb_loop_ub = c4_RedCrabFeatures->size[0] * c4_RedCrabFeatures->size[1] - 1;
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_d_RedCrabPoints);
  for (c4_i138 = 0; c4_i138 <= c4_yb_loop_ub; c4_i138++) {
    c4_b_RedCrabFeatures->data[c4_i138] = c4_RedCrabFeatures->data[c4_i138];
  }

  c4_emxInit_real32_T(chartInstance, &c4_varargin_2, 2, &c4_wb_emlrtRTEI);
  c4_i139 = c4_varargin_2->size[0] * c4_varargin_2->size[1];
  c4_varargin_2->size[0] = c4_ROIFeatures->size[0];
  c4_varargin_2->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_varargin_2, c4_i139,
    &c4_wb_emlrtRTEI);
  c4_ac_loop_ub = c4_ROIFeatures->size[0] * c4_ROIFeatures->size[1] - 1;
  for (c4_i140 = 0; c4_i140 <= c4_ac_loop_ub; c4_i140++) {
    c4_varargin_2->data[c4_i140] = c4_ROIFeatures->data[c4_i140];
  }

  c4_emxInit_real32_T(chartInstance, &c4_features1, 2, &c4_xb_emlrtRTEI);
  c4_i141 = c4_features1->size[0] * c4_features1->size[1];
  c4_features1->size[0] = c4_b_RedCrabFeatures->size[0];
  c4_features1->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features1, c4_i141,
    &c4_xb_emlrtRTEI);
  c4_bc_loop_ub = c4_b_RedCrabFeatures->size[0] * c4_b_RedCrabFeatures->size[1]
    - 1;
  for (c4_i142 = 0; c4_i142 <= c4_bc_loop_ub; c4_i142++) {
    c4_features1->data[c4_i142] = c4_b_RedCrabFeatures->data[c4_i142];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_RedCrabFeatures);
  c4_emxInit_real32_T(chartInstance, &c4_features2, 2, &c4_yb_emlrtRTEI);
  c4_i143 = c4_features2->size[0] * c4_features2->size[1];
  c4_features2->size[0] = c4_varargin_2->size[0];
  c4_features2->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features2, c4_i143,
    &c4_yb_emlrtRTEI);
  c4_cc_loop_ub = c4_varargin_2->size[0] * c4_varargin_2->size[1] - 1;
  for (c4_i144 = 0; c4_i144 <= c4_cc_loop_ub; c4_i144++) {
    c4_features2->data[c4_i144] = c4_varargin_2->data[c4_i144];
  }

  c4_emxFree_real32_T(chartInstance, &c4_varargin_2);
  c4_emxInit_real32_T(chartInstance, &c4_b_features1, 2, &c4_ac_emlrtRTEI);
  c4_i145 = c4_features1->size[1];
  c4_i146 = c4_features1->size[0];
  c4_i147 = c4_b_features1->size[0] * c4_b_features1->size[1];
  c4_b_features1->size[0] = c4_features1->size[1];
  c4_b_features1->size[1] = c4_features1->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_features1, c4_i147,
    &c4_ac_emlrtRTEI);
  c4_dc_loop_ub = c4_features1->size[0] - 1;
  for (c4_i148 = 0; c4_i148 <= c4_dc_loop_ub; c4_i148++) {
    c4_ec_loop_ub = c4_features1->size[1] - 1;
    for (c4_i149 = 0; c4_i149 <= c4_ec_loop_ub; c4_i149++) {
      c4_b_features1->data[c4_i149 + c4_b_features1->size[0] * c4_i148] =
        c4_features1->data[c4_i148 + c4_features1->size[0] * c4_i149];
    }
  }

  c4_iv4[0] = c4_i145;
  c4_iv4[1] = c4_i146;
  c4_i150 = c4_features1->size[0] * c4_features1->size[1];
  c4_features1->size[0] = c4_iv4[0];
  c4_features1->size[1] = c4_iv4[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features1, c4_i150,
    &c4_bc_emlrtRTEI);
  c4_fc_loop_ub = c4_iv4[0] * c4_iv4[1] - 1;
  for (c4_i151 = 0; c4_i151 <= c4_fc_loop_ub; c4_i151++) {
    c4_features1->data[c4_i151] = c4_b_features1->data[c4_i151];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_features1);
  c4_emxInit_real32_T(chartInstance, &c4_b_features2, 2, &c4_cc_emlrtRTEI);
  c4_i152 = c4_features2->size[1];
  c4_i153 = c4_features2->size[0];
  c4_i154 = c4_b_features2->size[0] * c4_b_features2->size[1];
  c4_b_features2->size[0] = c4_features2->size[1];
  c4_b_features2->size[1] = c4_features2->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_features2, c4_i154,
    &c4_cc_emlrtRTEI);
  c4_gc_loop_ub = c4_features2->size[0] - 1;
  for (c4_i155 = 0; c4_i155 <= c4_gc_loop_ub; c4_i155++) {
    c4_hc_loop_ub = c4_features2->size[1] - 1;
    for (c4_i156 = 0; c4_i156 <= c4_hc_loop_ub; c4_i156++) {
      c4_b_features2->data[c4_i156 + c4_b_features2->size[0] * c4_i155] =
        c4_features2->data[c4_i155 + c4_features2->size[0] * c4_i156];
    }
  }

  c4_iv5[0] = c4_i152;
  c4_iv5[1] = c4_i153;
  c4_i157 = c4_features2->size[0] * c4_features2->size[1];
  c4_features2->size[0] = c4_iv5[0];
  c4_features2->size[1] = c4_iv5[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features2, c4_i157,
    &c4_dc_emlrtRTEI);
  c4_ic_loop_ub = c4_iv5[0] * c4_iv5[1] - 1;
  for (c4_i158 = 0; c4_i158 <= c4_ic_loop_ub; c4_i158++) {
    c4_features2->data[c4_i158] = c4_b_features2->data[c4_i158];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_features2);
  c4_emxInit_real32_T(chartInstance, &c4_features1in, 2, &c4_ec_emlrtRTEI);
  c4_i159 = c4_features1in->size[0] * c4_features1in->size[1];
  c4_features1in->size[0] = c4_features1->size[0];
  c4_features1in->size[1] = c4_features1->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features1in, c4_i159,
    &c4_ec_emlrtRTEI);
  c4_jc_loop_ub = c4_features1->size[0] * c4_features1->size[1] - 1;
  for (c4_i160 = 0; c4_i160 <= c4_jc_loop_ub; c4_i160++) {
    c4_features1in->data[c4_i160] = c4_features1->data[c4_i160];
  }

  c4_emxFree_real32_T(chartInstance, &c4_features1);
  c4_emxInit_real32_T(chartInstance, &c4_features2in, 2, &c4_fc_emlrtRTEI);
  c4_i161 = c4_features2in->size[0] * c4_features2in->size[1];
  c4_features2in->size[0] = c4_features2->size[0];
  c4_features2in->size[1] = c4_features2->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features2in, c4_i161,
    &c4_fc_emlrtRTEI);
  c4_kc_loop_ub = c4_features2->size[0] * c4_features2->size[1] - 1;
  for (c4_i162 = 0; c4_i162 <= c4_kc_loop_ub; c4_i162++) {
    c4_features2in->data[c4_i162] = c4_features2->data[c4_i162];
  }

  c4_emxFree_real32_T(chartInstance, &c4_features2);
  c4_b4 = (c4_features1in->size[1] == 0);
  c4_emxInit_uint32_T(chartInstance, &c4_indexPairs, 2, (emlrtRTEInfo *)NULL);
  c4_emxInit_real32_T(chartInstance, &c4_matchMetric, 2, (emlrtRTEInfo *)NULL);
  c4_guard1 = false;
  if (c4_b4) {
    c4_guard1 = true;
  } else {
    c4_b5 = (c4_features2in->size[1] == 0);
    if (c4_b5) {
      c4_guard1 = true;
    } else {
      c4_b_normalizeX(chartInstance, c4_features1in);
      c4_b_normalizeX(chartInstance, c4_features2in);
      c4_findMatchesExhaustive(chartInstance, c4_features1in, c4_features2in,
        0.04F, c4_indexPairs, c4_matchMetric);
    }
  }

  if (c4_guard1) {
    c4_indexPairs->size[0] = 2;
    c4_indexPairs->size[1] = 0;
  }

  c4_emxFree_real32_T(chartInstance, &c4_matchMetric);
  c4_emxFree_real32_T(chartInstance, &c4_features2in);
  c4_emxFree_real32_T(chartInstance, &c4_features1in);
  c4_i163 = c4_RedCrabPairs->size[0] * c4_RedCrabPairs->size[1];
  c4_RedCrabPairs->size[0] = c4_indexPairs->size[1];
  c4_RedCrabPairs->size[1] = 2;
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_RedCrabPairs, c4_i163,
    &c4_gc_emlrtRTEI);
  for (c4_i164 = 0; c4_i164 < 2; c4_i164++) {
    c4_lc_loop_ub = c4_indexPairs->size[1] - 1;
    for (c4_i165 = 0; c4_i165 <= c4_lc_loop_ub; c4_i165++) {
      c4_RedCrabPairs->data[c4_i165 + c4_RedCrabPairs->size[0] * c4_i164] =
        c4_indexPairs->data[c4_i164 + (c4_i165 << 1)];
    }
  }

  c4_emxFree_uint32_T(chartInstance, &c4_indexPairs);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c4_RuntimeVar, 1U,
    "RedCrabPairs", c4_RedCrabPairs, (void *)c4_sf_marshallOut_dynamicmatrix_1,
    (void *)c4_sf_marshallIn_dynamicmatrix_1, 0U);
  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c4_RuntimeVar, 0, -13);
  }

  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportEndingSection(chartInstance->c4_RuntimeVar, 0, 4);
  }

  if ((chartInstance->c4_IsDebuggerActive == 1) ||
      (chartInstance->c4_IsSequenceViewerPresent == 1)) {
    sfListenerReportEndingSection(chartInstance->c4_RuntimeVar, 0, 1);
  }

  c4_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_b_PtsStruct);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_c_RedCrabPoints);
  c4_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_PtsStruct);
  c4_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_vPts);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_b_ROIPoints);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_b_RedCrabPoints);
  c4_emxFree_uint32_T(chartInstance, &c4_RedCrabPairs);
  c4_emxFree_real32_T(chartInstance, &c4_ROIFeatures);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_ROIPoints);
  c4_emxFree_real32_T(chartInstance, &c4_RedCrabFeatures);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_RedCrabPoints);
}

static void initSimStructsc4_MotionObjectDetector
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c4_MotionObjectDetector_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static void c4_SURFPoints_cg_SURFPoints_cg
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_varargin_1, c4_sJTMl20J2MtSHoTgqrNGwiD c4_varargin_2,
   c4_vision_internal_SURFPoints_cg *c4_this)
{
  c4_sTGP517nzdmMmY48RaBsM6E c4_inputs;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_c_loop_ub;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_d_loop_ub;
  int32_T c4_i7;
  c4_emxArray_real32_T *c4_b_inputs;
  int32_T c4_i8;
  int32_T c4_e_loop_ub;
  int32_T c4_i9;
  c4_emxArray_real32_T *c4_c_inputs;
  int32_T c4_i10;
  int32_T c4_f_loop_ub;
  int32_T c4_i11;
  real_T c4_numPts;
  real_T c4_numelParam;
  real_T c4_b_numPts;
  boolean_T c4_b;
  const mxArray *c4_d_y = NULL;
  c4_emxArray_real32_T *c4_d_inputs;
  int32_T c4_i12;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  int32_T c4_g_loop_ub;
  static char_T c4_b_cv[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  int32_T c4_i13;
  c4_emxArray_int8_T *c4_in;
  int32_T c4_i14;
  int32_T c4_h_loop_ub;
  int32_T c4_i15;
  c4_emxArray_boolean_T *c4_b_in;
  int32_T c4_i16;
  int32_T c4_i_loop_ub;
  int32_T c4_i17;
  c4_emxArray_boolean_T *c4_c_in;
  boolean_T c4_b1;
  int32_T c4_i18;
  int32_T c4_j_loop_ub;
  int32_T c4_i19;
  const mxArray *c4_g_y = NULL;
  real_T c4_c_numPts;
  real_T c4_b_numelParam;
  const mxArray *c4_h_y = NULL;
  real_T c4_d_numPts;
  boolean_T c4_b2;
  const mxArray *c4_i_y = NULL;
  real_T c4_c_numelParam;
  real_T c4_e_numPts;
  const mxArray *c4_j_y = NULL;
  boolean_T c4_b3;
  const mxArray *c4_k_y = NULL;
  static char_T c4_b_cv1[5] = { 'S', 'c', 'a', 'l', 'e' };

  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  c4_emxInitStruct_sTGP517nzdmMmY48R(chartInstance, &c4_inputs, &c4_qc_emlrtRTEI);
  c4_this->pLocation->size[0] = 0;
  c4_this->pLocation->size[1] = 2;
  c4_this->pMetric->size[0] = 0;
  c4_this->pScale->size[0] = 0;
  c4_this->pSignOfLaplacian->size[0] = 0;
  c4_this->pOrientation->size[0] = 0;
  c4_i = c4_inputs.Location->size[0] * c4_inputs.Location->size[1];
  c4_inputs.Location->size[0] = c4_varargin_1->size[0];
  c4_inputs.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_inputs.Location, c4_i,
    &c4_pc_emlrtRTEI);
  c4_loop_ub = c4_varargin_1->size[0] * c4_varargin_1->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_inputs.Location->data[c4_i1] = c4_varargin_1->data[c4_i1];
  }

  c4_i2 = c4_inputs.Metric->size[0];
  c4_inputs.Metric->size[0] = c4_varargin_2.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_inputs.Metric, c4_i2,
    &c4_qc_emlrtRTEI);
  c4_b_loop_ub = c4_varargin_2.Metric->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_inputs.Metric->data[c4_i3] = c4_varargin_2.Metric->data[c4_i3];
  }

  c4_i4 = c4_inputs.Scale->size[0];
  c4_inputs.Scale->size[0] = c4_varargin_2.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_inputs.Scale, c4_i4,
    &c4_qc_emlrtRTEI);
  c4_c_loop_ub = c4_varargin_2.Scale->size[0] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_inputs.Scale->data[c4_i5] = c4_varargin_2.Scale->data[c4_i5];
  }

  c4_i6 = c4_inputs.SignOfLaplacian->size[0];
  c4_inputs.SignOfLaplacian->size[0] = c4_varargin_2.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_inputs.SignOfLaplacian, c4_i6,
    &c4_qc_emlrtRTEI);
  c4_d_loop_ub = c4_varargin_2.SignOfLaplacian->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
    c4_inputs.SignOfLaplacian->data[c4_i7] = c4_varargin_2.SignOfLaplacian->
      data[c4_i7];
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_inputs, 2, &c4_rc_emlrtRTEI);
  c4_inputs.Orientation = 0.0F;
  c4_i8 = c4_b_inputs->size[0] * c4_b_inputs->size[1];
  c4_b_inputs->size[0] = c4_inputs.Location->size[0];
  c4_b_inputs->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_inputs, c4_i8,
    &c4_rc_emlrtRTEI);
  c4_e_loop_ub = c4_inputs.Location->size[0] * c4_inputs.Location->size[1] - 1;
  for (c4_i9 = 0; c4_i9 <= c4_e_loop_ub; c4_i9++) {
    c4_b_inputs->data[c4_i9] = c4_inputs.Location->data[c4_i9];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_c_inputs, 1, &c4_sc_emlrtRTEI);
  c4_FeaturePointsImpl_checkLocation(chartInstance, c4_b_inputs);
  c4_i10 = c4_c_inputs->size[0];
  c4_c_inputs->size[0] = c4_inputs.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_c_inputs, c4_i10,
    &c4_sc_emlrtRTEI);
  c4_f_loop_ub = c4_inputs.Metric->size[0] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_b_inputs);
  for (c4_i11 = 0; c4_i11 <= c4_f_loop_ub; c4_i11++) {
    c4_c_inputs->data[c4_i11] = c4_inputs.Metric->data[c4_i11];
  }

  c4_FeaturePointsImpl_checkMetric(chartInstance, c4_c_inputs);
  c4_numPts = (real_T)c4_inputs.Location->size[0];
  c4_numelParam = (real_T)c4_inputs.Metric->size[0];
  c4_b_numPts = c4_numPts;
  c4_emxFree_real32_T(chartInstance, &c4_c_inputs);
  if ((c4_numelParam == 1.0) || (c4_numelParam == c4_b_numPts)) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  c4_emxInit_real32_T1(chartInstance, &c4_d_inputs, 1, &c4_tc_emlrtRTEI);
  c4_i12 = c4_d_inputs->size[0];
  c4_d_inputs->size[0] = c4_inputs.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_d_inputs, c4_i12,
    &c4_tc_emlrtRTEI);
  c4_g_loop_ub = c4_inputs.Scale->size[0] - 1;
  for (c4_i13 = 0; c4_i13 <= c4_g_loop_ub; c4_i13++) {
    c4_d_inputs->data[c4_i13] = c4_inputs.Scale->data[c4_i13];
  }

  c4_emxInit_int8_T(chartInstance, &c4_in, 1, &c4_uc_emlrtRTEI);
  c4_SURFPointsImpl_checkScale(chartInstance, c4_d_inputs);
  c4_i14 = c4_in->size[0];
  c4_in->size[0] = c4_inputs.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_in, c4_i14, &c4_uc_emlrtRTEI);
  c4_h_loop_ub = c4_inputs.SignOfLaplacian->size[0] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_d_inputs);
  for (c4_i15 = 0; c4_i15 <= c4_h_loop_ub; c4_i15++) {
    c4_in->data[c4_i15] = c4_inputs.SignOfLaplacian->data[c4_i15];
  }

  c4_emxInit_boolean_T(chartInstance, &c4_b_in, 1, &c4_vc_emlrtRTEI);
  c4_i16 = c4_b_in->size[0];
  c4_b_in->size[0] = c4_in->size[0];
  c4_emxEnsureCapacity_boolean_T(chartInstance, c4_b_in, c4_i16,
    &c4_vc_emlrtRTEI);
  c4_i_loop_ub = c4_in->size[0] - 1;
  for (c4_i17 = 0; c4_i17 <= c4_i_loop_ub; c4_i17++) {
    c4_b_in->data[c4_i17] = ((real_T)c4_in->data[c4_i17] >= -1.0);
  }

  c4_emxInit_boolean_T(chartInstance, &c4_c_in, 1, &c4_wc_emlrtRTEI);
  if (c4_b_all(chartInstance, c4_b_in)) {
    c4_i18 = c4_c_in->size[0];
    c4_c_in->size[0] = c4_in->size[0];
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_c_in, c4_i18,
      &c4_wc_emlrtRTEI);
    c4_j_loop_ub = c4_in->size[0] - 1;
    for (c4_i19 = 0; c4_i19 <= c4_j_loop_ub; c4_i19++) {
      c4_c_in->data[c4_i19] = ((real_T)c4_in->data[c4_i19] <= 1.0);
    }

    if (c4_b_all(chartInstance, c4_c_in)) {
      c4_b1 = true;
    } else {
      c4_b1 = false;
    }
  } else {
    c4_b1 = false;
  }

  c4_emxFree_boolean_T(chartInstance, &c4_b_in);
  c4_emxFree_boolean_T(chartInstance, &c4_c_in);
  c4_emxFree_int8_T(chartInstance, &c4_in);
  if (!c4_b1) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14, c4_h_y)));
  }

  c4_c_numPts = (real_T)c4_inputs.Location->size[0];
  c4_b_numelParam = (real_T)c4_inputs.Scale->size[0];
  c4_d_numPts = c4_c_numPts;
  if ((c4_b_numelParam == 1.0) || (c4_b_numelParam == c4_d_numPts)) {
    c4_b2 = true;
  } else {
    c4_b2 = false;
  }

  if (!c4_b2) {
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_i_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_j_y, 14,
                  c4_k_y)));
  }

  c4_c_numelParam = (real_T)c4_inputs.SignOfLaplacian->size[0];
  c4_e_numPts = c4_c_numPts;
  if ((c4_c_numelParam == 1.0) || (c4_c_numelParam == c4_e_numPts)) {
    c4_b3 = true;
  } else {
    c4_b3 = false;
  }

  if (!c4_b3) {
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_l_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_m_y, 14,
                  c4_n_y)));
  }

  c4_c_SURFPointsImpl_configure(chartInstance, c4_this, c4_inputs);
  c4_emxFreeStruct_sTGP517nzdmMmY48R(chartInstance, &c4_inputs);
}

static void c4_FeaturePointsImpl_checkLocation
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_location)
{
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  boolean_T c4_b;
  real32_T c4_x;
  real32_T c4_b_x;
  boolean_T c4_b_b;
  const mxArray *c4_d_y = NULL;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  real_T c4_d1;
  const mxArray *c4_e_y = NULL;
  int32_T c4_i1;
  int32_T c4_c_k;
  const mxArray *c4_f_y = NULL;
  static char_T c4_b_cv[5] = { 'i', 'n', 'p', 'u', 't' };

  real_T c4_d_k;
  boolean_T c4_b1;
  real32_T c4_c_x;
  real32_T c4_d_x;
  boolean_T c4_c_b;
  const mxArray *c4_g_y = NULL;
  boolean_T c4_b2;
  boolean_T c4_d_p;
  real32_T c4_e_x;
  real_T c4_d2;
  const mxArray *c4_h_y = NULL;
  boolean_T c4_d_b;
  int32_T c4_i2;
  boolean_T c4_b3;
  int32_T c4_e_k;
  const mxArray *c4_i_y = NULL;
  boolean_T c4_e_b;
  static char_T c4_b_cv1[5] = { 'i', 'n', 'p', 'u', 't' };

  real_T c4_f_k;
  boolean_T c4_b4;
  real32_T c4_f_x;
  boolean_T c4_e_p;
  const mxArray *c4_j_y = NULL;
  c4_emxArray_real32_T *c4_b_location;
  static char_T c4_b_cv2[53] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
    's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S',
    'U', 'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  int32_T c4_i3;
  const mxArray *c4_k_y = NULL;
  static char_T c4_b_cv3[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  const mxArray *c4_l_y = NULL;
  static char_T c4_b_cv4[5] = { 'i', 'n', 'p', 'u', 't' };

  int32_T c4_loop_ub;
  int32_T c4_i4;
  const mxArray *c4_m_y = NULL;
  static char_T c4_b_cv5[50] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
    's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S',
    'U', 'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  static char_T c4_b_cv6[5] = { 'I', 'n', 'p', 'u', 't' };

  c4_p = true;
  c4_d = (real_T)(c4_location->size[0] << 1);
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_location->data[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muSingleScalarIsNaN(c4_b_x);
    c4_b_p = !c4_b_b;
    if (c4_b_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  c4_c_p = true;
  c4_d1 = (real_T)(c4_location->size[0] << 1);
  c4_i1 = (int32_T)c4_d1 - 1;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k <= c4_i1)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_c_x = c4_location->data[(int32_T)c4_d_k - 1];
    c4_d_x = c4_c_x;
    c4_c_b = muSingleScalarIsInf(c4_d_x);
    c4_b2 = !c4_c_b;
    c4_e_x = c4_c_x;
    c4_d_b = muSingleScalarIsNaN(c4_e_x);
    c4_b3 = !c4_d_b;
    c4_e_b = (c4_b2 && c4_b3);
    if (c4_e_b) {
      c4_c_k++;
    } else {
      c4_c_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_c_p) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_h_y, 14,
                  c4_i_y)));
  }

  c4_d_p = true;
  c4_d2 = (real_T)(c4_location->size[0] << 1);
  c4_i2 = (int32_T)c4_d2 - 1;
  c4_e_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_e_k <= c4_i2)) {
    c4_f_k = (real_T)c4_e_k + 1.0;
    c4_f_x = c4_location->data[(int32_T)c4_f_k - 1];
    c4_e_p = !(c4_f_x <= 0.0F);
    if (c4_e_p) {
      c4_e_k++;
    } else {
      c4_d_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_d_p) {
    c4_b4 = true;
  } else {
    c4_b4 = false;
  }

  if (!c4_b4) {
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 53),
                  false);
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_j_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_k_y, 14,
                  c4_l_y)));
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_location, 2, &c4_xc_emlrtRTEI);
  c4_i3 = c4_b_location->size[0] * c4_b_location->size[1];
  c4_b_location->size[0] = c4_location->size[0];
  c4_b_location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_location, c4_i3,
    &c4_xc_emlrtRTEI);
  c4_loop_ub = c4_location->size[0] * c4_location->size[1] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
    c4_b_location->data[c4_i4] = c4_location->data[c4_i4];
  }

  if (!c4_inputMeetsSizeRequirement(chartInstance, c4_b_location)) {
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 50),
                  false);
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_m_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_n_y, 14,
                  c4_o_y)));
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_location);
}

static boolean_T c4_inputMeetsSizeRequirement
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_a)
{
  boolean_T c4_p;
  static real_T c4_dv[2] = { 0.0, 2.0 };

  int32_T c4_k;
  real_T c4_b_k;
  boolean_T c4_b_p;
  real_T c4_d;
  (void)chartInstance;
  c4_dv[0U] = rtNaN;
  c4_p = true;
  for (c4_k = 0; c4_k < 2; c4_k++) {
    c4_b_k = (real_T)c4_k + 1.0;
    if (c4_p) {
      if (c4_dv[(int32_T)c4_b_k - 1] != c4_dv[(int32_T)c4_b_k - 1]) {
        c4_b_p = true;
      } else {
        c4_d = (real_T)c4_a->size[(int32_T)c4_b_k - 1];
        if (c4_dv[(int32_T)c4_b_k - 1] == c4_d) {
          c4_b_p = true;
        } else {
          c4_b_p = false;
        }
      }
    } else {
      c4_b_p = false;
    }

    c4_p = c4_b_p;
  }

  return c4_p;
}

static void c4_FeaturePointsImpl_checkMetric
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_metric)
{
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  boolean_T c4_b;
  real32_T c4_x;
  real32_T c4_b_x;
  boolean_T c4_b_b;
  const mxArray *c4_d_y = NULL;
  boolean_T c4_b_p;
  c4_emxArray_real32_T *c4_b_metric;
  int32_T c4_i1;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  int32_T c4_loop_ub;
  static char_T c4_b_cv[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  int32_T c4_i2;
  boolean_T c4_b1;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  static char_T c4_b_cv1[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  c4_p = true;
  c4_d = (real_T)c4_metric->size[0];
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_metric->data[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muSingleScalarIsNaN(c4_b_x);
    c4_b_p = !c4_b_b;
    if (c4_b_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  c4_emxInit_real32_T1(chartInstance, &c4_b_metric, 1, &c4_yc_emlrtRTEI);
  c4_i1 = c4_b_metric->size[0];
  c4_b_metric->size[0] = c4_metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_metric, c4_i1,
    &c4_yc_emlrtRTEI);
  c4_loop_ub = c4_metric->size[0] - 1;
  for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
    c4_b_metric->data[c4_i2] = c4_metric->data[c4_i2];
  }

  if (c4_all(chartInstance, c4_b_metric)) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_metric);
  if (!c4_b1) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_h_y, 14,
                  c4_i_y)));
  }
}

static boolean_T c4_all(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_a)
{
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  real32_T c4_x;
  real32_T c4_b_x;
  boolean_T c4_b;
  boolean_T c4_b_b;
  real32_T c4_c_x;
  boolean_T c4_c_b;
  boolean_T c4_b1;
  boolean_T c4_d_b;
  (void)chartInstance;
  c4_p = true;
  c4_d = (real_T)c4_a->size[0];
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_a->data[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b = muSingleScalarIsInf(c4_b_x);
    c4_b_b = !c4_b;
    c4_c_x = c4_x;
    c4_c_b = muSingleScalarIsNaN(c4_c_x);
    c4_b1 = !c4_c_b;
    c4_d_b = (c4_b_b && c4_b1);
    if (c4_d_b) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  return c4_p;
}

static void c4_SURFPointsImpl_checkScale(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_scale)
{
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  boolean_T c4_b;
  real32_T c4_x;
  real32_T c4_b_x;
  boolean_T c4_b_b;
  const mxArray *c4_d_y = NULL;
  boolean_T c4_b_p;
  c4_emxArray_real32_T *c4_b_scale;
  int32_T c4_i1;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  int32_T c4_loop_ub;
  static char_T c4_b_cv[5] = { 'S', 'c', 'a', 'l', 'e' };

  int32_T c4_i2;
  boolean_T c4_b1;
  const mxArray *c4_g_y = NULL;
  boolean_T c4_c_p;
  real_T c4_d1;
  const mxArray *c4_h_y = NULL;
  int32_T c4_i3;
  int32_T c4_c_k;
  const mxArray *c4_i_y = NULL;
  static char_T c4_b_cv1[5] = { 'S', 'c', 'a', 'l', 'e' };

  real_T c4_d_k;
  const mxArray *c4_j_y = NULL;
  static char_T c4_b_cv2[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
    's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S',
    'U', 'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'n', 'o',
    't', 'G', 'r', 'e', 'a', 't', 'e', 'r', 'E', 'q', 'u', 'a', 'l' };

  const mxArray *c4_k_y = NULL;
  static char_T c4_b_cv3[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'A', 'r', 'r', 'a', 'y' };

  const mxArray *c4_l_y = NULL;
  static char_T c4_b_cv4[5] = { 'S', 'c', 'a', 'l', 'e' };

  const mxArray *c4_m_y = NULL;
  static char_T c4_b_cv5[2] = { '>', '=' };

  const mxArray *c4_n_y = NULL;
  static char_T c4_b_cv6[3] = { '1', '.', '6' };

  c4_p = true;
  c4_d = (real_T)c4_scale->size[0];
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_scale->data[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muSingleScalarIsNaN(c4_b_x);
    c4_b_p = !c4_b_b;
    if (c4_b_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  c4_emxInit_real32_T1(chartInstance, &c4_b_scale, 1, &c4_yc_emlrtRTEI);
  c4_i1 = c4_b_scale->size[0];
  c4_b_scale->size[0] = c4_scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_scale, c4_i1,
    &c4_yc_emlrtRTEI);
  c4_loop_ub = c4_scale->size[0] - 1;
  for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
    c4_b_scale->data[c4_i2] = c4_scale->data[c4_i2];
  }

  if (c4_all(chartInstance, c4_b_scale)) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_scale);
  if (!c4_b1) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_h_y, 14,
                  c4_i_y)));
  }

  c4_c_p = true;
  c4_d1 = (real_T)c4_scale->size[0];
  c4_i3 = (int32_T)c4_d1 - 1;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k <= c4_i3)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    if ((real_T)c4_scale->data[(int32_T)c4_d_k - 1] >= 1.6) {
      c4_c_k++;
    } else {
      c4_c_p = false;
      c4_exitg1 = true;
    }
  }

  if (!c4_c_p) {
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 3),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_j_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 4U, 14, c4_k_y, 14,
                  c4_l_y, 14, c4_m_y, 14, c4_n_y)));
  }
}

static boolean_T c4_b_all(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_boolean_T *c4_x)
{
  boolean_T c4_d_y;
  boolean_T c4_b;
  const mxArray *c4_e_y = NULL;
  static char_T c4_b_cv[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  real_T c4_vlen;
  const mxArray *c4_f_y = NULL;
  real_T c4_a;
  int32_T c4_c;
  int32_T c4_b_a;
  int32_T c4_vspread;
  int32_T c4_b_b;
  int32_T c4_i2;
  int32_T c4_c_a;
  int32_T c4_c_b;
  int32_T c4_d_b;
  boolean_T c4_overflow;
  int32_T c4_ix;
  boolean_T c4_exitg1;
  if ((c4_x->size[0] == 1) || ((real_T)c4_x->size[0] != 1.0)) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14, c4_f_y)));
  }

  c4_d_y = true;
  c4_vlen = (real_T)c4_x->size[0];
  c4_a = c4_vlen;
  c4_c = (int32_T)c4_a;
  c4_b_a = c4_c - 1;
  c4_vspread = c4_b_a;
  c4_b_b = c4_vspread;
  c4_i2 = c4_b_b;
  c4_c_a = c4_i2 + 1;
  c4_i2 = c4_c_a;
  c4_c_b = c4_i2;
  c4_d_b = c4_c_b;
  if (1 > c4_d_b) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_d_b > 2147483646);
  }

  if (c4_overflow) {
    c4_check_forloop_overflow_error(chartInstance, true);
  }

  c4_ix = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_ix + 1 <= c4_i2)) {
    if (!c4_x->data[c4_ix]) {
      c4_d_y = false;
      c4_exitg1 = true;
    } else {
      c4_ix++;
    }
  }

  return c4_d_y;
}

static void c4_check_forloop_overflow_error
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, boolean_T c4_overflow)
{
  const mxArray *c4_d_y = NULL;
  static char_T c4_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  static char_T c4_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)c4_overflow;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
              sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                c4_f_y)));
}

static void c4_SURFPointsImpl_configure(SFc4_MotionObjectDetectorInstanceStruct *
  chartInstance, c4_vision_internal_SURFPoints_cg c4_this,
  c4_sTGP517nzdmMmY48RaBsM6E c4_inputs, c4_vision_internal_SURFPoints_cg
  *c4_b_this)
{
  c4_sTGP517nzdmMmY48RaBsM6E c4_b_inputs;
  c4_emxInitStruct_sTGP517nzdmMmY48R(chartInstance, &c4_b_inputs,
    &c4_ad_emlrtRTEI);
  c4_emxCopyStruct_vision_internal_S(chartInstance, c4_b_this, &c4_this,
    &c4_ad_emlrtRTEI);
  c4_emxCopyStruct_sTGP517nzdmMmY48R(chartInstance, &c4_b_inputs, &c4_inputs,
    &c4_ad_emlrtRTEI);
  c4_c_SURFPointsImpl_configure(chartInstance, c4_b_this, c4_b_inputs);
  c4_emxFreeStruct_sTGP517nzdmMmY48R(chartInstance, &c4_b_inputs);
}

static void c4_assertValidSizeArg(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, real_T c4_varargin_1)
{
  real_T c4_arg;
  boolean_T c4_p;
  boolean_T c4_b;
  const mxArray *c4_d_y = NULL;
  static char_T c4_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  const mxArray *c4_e_y = NULL;
  int32_T c4_c_u;
  const mxArray *c4_f_y = NULL;
  int32_T c4_d_u;
  const mxArray *c4_g_y = NULL;
  c4_arg = c4_varargin_1;
  if (c4_arg != c4_arg) {
    c4_p = false;
  } else {
    c4_p = true;
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c4_c_u = MIN_int32_T;
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_c_u, 6, 0U, 0U, 0U, 0), false);
    c4_d_u = MAX_int32_T;
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_d_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 3U, 14, c4_e_y, 14,
                  c4_f_y, 14, c4_g_y)));
  }
}

static void c4_extractFeatures(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, uint8_T c4_I[50463], c4_vision_internal_SURFPoints_cg
  c4_points, c4_emxArray_real32_T *c4_features, c4_vision_internal_SURFPoints_cg
  *c4_valid_points)
{
  c4_emxArray_real32_T *c4_out;
  c4_s2rdWZ6jAA0S8hk59zYLzBC c4_vPts;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i2;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  int32_T c4_b_loop_ub;
  static char_T c4_b_cv[6] = { 'P', 'O', 'I', 'N', 'T', 'S' };

  int32_T c4_i3;
  c4_emxArray_real32_T *c4_valLocation;
  c4_emxArray_real32_T *c4_valScale;
  c4_emxArray_real32_T *c4_valMetric;
  c4_emxArray_int8_T *c4_valSignOfLaplacian;
  real_T c4_out_numel;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  boolean_T c4_b;
  int32_T c4_i8;
  c4_emxArray_int32_T *c4_r;
  int32_T c4_i9;
  int32_T c4_c_loop_ub;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_tmp_data[2];
  int32_T c4_d_loop_ub;
  int32_T c4_i13;
  int32_T c4_iv[2];
  int32_T c4_i14;
  boolean_T c4_b1;
  int32_T c4_e_loop_ub;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_f_loop_ub;
  int32_T c4_i18;
  c4_emxArray_real32_T *c4_outOrientation;
  int32_T c4_i19;
  int32_T c4_g_loop_ub;
  int32_T c4_i20;
  int32_T c4_iv1[1];
  int32_T c4_h_loop_ub;
  int32_T c4_i21;
  boolean_T c4_b2;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i_loop_ub;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_j_loop_ub;
  int32_T c4_i26;
  int32_T c4_iv2[1];
  int32_T c4_k_loop_ub;
  int32_T c4_i27;
  boolean_T c4_b3;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_l_loop_ub;
  int32_T c4_i30;
  c4_emxArray_int8_T *c4_r1;
  int32_T c4_i31;
  int32_T c4_m_loop_ub;
  int32_T c4_i32;
  int32_T c4_iv3[1];
  int32_T c4_n_loop_ub;
  int32_T c4_i33;
  c4_sJTMl20J2MtSHoTgqrNGwiD c4_ptsStruct;
  int32_T c4_i34;
  int32_T c4_o_loop_ub;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_p_loop_ub;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_q_loop_ub;
  int32_T c4_i39;
  int32_T c4_i40;
  int32_T c4_r_loop_ub;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  c4_emxArray_real32_T *c4_b_ptsStruct;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  uint8_T c4_b_Iu8T[50463];
  int32_T c4_s_loop_ub;
  int32_T c4_i47;
  c4_emxArray_real32_T *c4_c_ptsStruct;
  int32_T c4_i48;
  int32_T c4_t_loop_ub;
  int32_T c4_i49;
  c4_emxArray_real32_T *c4_d_ptsStruct;
  int32_T c4_i50;
  int32_T c4_u_loop_ub;
  int32_T c4_i51;
  c4_emxArray_int8_T *c4_e_ptsStruct;
  int32_T c4_i52;
  int32_T c4_v_loop_ub;
  int32_T c4_i53;
  c4_emxArray_real32_T *c4_b_features;
  int32_T c4_i54;
  int32_T c4_w_loop_ub;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_x_loop_ub;
  int32_T c4_i57;
  c4_s2rdWZ6jAA0S8hk59zYLzBC c4_b_vPts;
  int32_T c4_i58;
  int32_T c4_y_loop_ub;
  int32_T c4_i59;
  int32_T c4_i60;
  int32_T c4_ab_loop_ub;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_bb_loop_ub;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_cb_loop_ub;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_db_loop_ub;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_eb_loop_ub;
  int32_T c4_i69;
  c4_emxArray_real32_T *c4_c_vPts;
  int32_T c4_i70;
  int32_T c4_fb_loop_ub;
  int32_T c4_i71;
  c4_emxInit_real32_T(chartInstance, &c4_out, 2, &c4_cd_emlrtRTEI);
  c4_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_vPts, &c4_sb_emlrtRTEI);
  c4_i = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = c4_points.pLocation->size[0];
  c4_out->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_out, c4_i, &c4_o_emlrtRTEI);
  c4_loop_ub = c4_points.pLocation->size[0] * c4_points.pLocation->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_out->data[c4_i1] = c4_points.pLocation->data[c4_i1];
  }

  if (!c4_inputMeetsSizeRequirement(chartInstance, c4_out)) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  c4_i2 = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = c4_points.pLocation->size[0];
  c4_out->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_out, c4_i2, &c4_p_emlrtRTEI);
  c4_b_loop_ub = c4_points.pLocation->size[0] * c4_points.pLocation->size[1] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_out->data[c4_i3] = c4_points.pLocation->data[c4_i3];
  }

  c4_emxInit_real32_T(chartInstance, &c4_valLocation, 2, &c4_lc_emlrtRTEI);
  c4_emxInit_real32_T1(chartInstance, &c4_valScale, 1, &c4_mc_emlrtRTEI);
  c4_emxInit_real32_T1(chartInstance, &c4_valMetric, 1, &c4_nc_emlrtRTEI);
  c4_emxInit_int8_T(chartInstance, &c4_valSignOfLaplacian, 1, &c4_oc_emlrtRTEI);
  c4_out_numel = (real_T)c4_out->size[0];
  c4_i4 = c4_valLocation->size[0] * c4_valLocation->size[1];
  c4_valLocation->size[0] = (int32_T)c4_out_numel;
  c4_valLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_valLocation, c4_i4,
    &c4_q_emlrtRTEI);
  c4_i5 = c4_valScale->size[0];
  c4_valScale->size[0] = (int32_T)c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valScale, c4_i5,
    &c4_q_emlrtRTEI);
  c4_i6 = c4_valMetric->size[0];
  c4_valMetric->size[0] = (int32_T)c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_valMetric, c4_i6,
    &c4_q_emlrtRTEI);
  c4_i7 = c4_valSignOfLaplacian->size[0];
  c4_valSignOfLaplacian->size[0] = (int32_T)c4_out_numel;
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_valSignOfLaplacian, c4_i7,
    &c4_q_emlrtRTEI);
  c4_b = (1.0 > c4_out_numel);
  if (c4_b) {
    c4_i8 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c4_valLocation->size[0]);
    c4_i8 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valLocation->size[0]) - 1;
  }

  c4_emxInit_int32_T(chartInstance, &c4_r, 1, &c4_bd_emlrtRTEI);
  c4_i9 = c4_r->size[0];
  c4_r->size[0] = c4_i8 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i9, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_i8;
  for (c4_i10 = 0; c4_i10 <= c4_c_loop_ub; c4_i10++) {
    c4_r->data[c4_i10] = c4_i10;
  }

  for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
    c4_tmp_data[c4_i11] = c4_i11;
  }

  c4_i12 = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = c4_points.pLocation->size[0];
  c4_out->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_out, c4_i12, &c4_t_emlrtRTEI);
  c4_d_loop_ub = c4_points.pLocation->size[0] * c4_points.pLocation->size[1] - 1;
  for (c4_i13 = 0; c4_i13 <= c4_d_loop_ub; c4_i13++) {
    c4_out->data[c4_i13] = c4_points.pLocation->data[c4_i13];
  }

  c4_iv[0] = c4_r->size[0];
  c4_iv[1] = 2;
  sf_mex_lw_sub_assign_size_check_nd(c4_iv, 2, *(int32_T (*)[2])c4_out->size, 2);
  for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
    c4_e_loop_ub = c4_out->size[0] - 1;
    for (c4_i15 = 0; c4_i15 <= c4_e_loop_ub; c4_i15++) {
      c4_valLocation->data[c4_r->data[c4_i15] + c4_valLocation->size[0] *
        c4_tmp_data[c4_i14]] = c4_out->data[c4_i15 + c4_out->size[0] * c4_i14];
    }
  }

  c4_b1 = (1.0 > c4_out_numel);
  if (c4_b1) {
    c4_i16 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c4_valScale->size[0]);
    c4_i16 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valScale->size[0]) - 1;
  }

  c4_i17 = c4_r->size[0];
  c4_r->size[0] = c4_i16 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i17, &c4_u_emlrtRTEI);
  c4_f_loop_ub = c4_i16;
  for (c4_i18 = 0; c4_i18 <= c4_f_loop_ub; c4_i18++) {
    c4_r->data[c4_i18] = c4_i18;
  }

  c4_emxInit_real32_T1(chartInstance, &c4_outOrientation, 1, &c4_bd_emlrtRTEI);
  c4_i19 = c4_outOrientation->size[0];
  c4_outOrientation->size[0] = c4_points.pScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outOrientation, c4_i19,
    &c4_v_emlrtRTEI);
  c4_g_loop_ub = c4_points.pScale->size[0] - 1;
  for (c4_i20 = 0; c4_i20 <= c4_g_loop_ub; c4_i20++) {
    c4_outOrientation->data[c4_i20] = c4_points.pScale->data[c4_i20];
  }

  c4_iv1[0] = c4_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c4_iv1, 1, *(int32_T (*)[1])
    c4_outOrientation->size, 1);
  c4_h_loop_ub = c4_outOrientation->size[0] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_h_loop_ub; c4_i21++) {
    c4_valScale->data[c4_r->data[c4_i21]] = c4_outOrientation->data[c4_i21];
  }

  c4_b2 = (1.0 > c4_out_numel);
  if (c4_b2) {
    c4_i22 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c4_valMetric->size[0]);
    c4_i22 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valMetric->size[0]) - 1;
  }

  c4_i23 = c4_r->size[0];
  c4_r->size[0] = c4_i22 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i23, &c4_w_emlrtRTEI);
  c4_i_loop_ub = c4_i22;
  for (c4_i24 = 0; c4_i24 <= c4_i_loop_ub; c4_i24++) {
    c4_r->data[c4_i24] = c4_i24;
  }

  c4_i25 = c4_outOrientation->size[0];
  c4_outOrientation->size[0] = c4_points.pMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outOrientation, c4_i25,
    &c4_x_emlrtRTEI);
  c4_j_loop_ub = c4_points.pMetric->size[0] - 1;
  for (c4_i26 = 0; c4_i26 <= c4_j_loop_ub; c4_i26++) {
    c4_outOrientation->data[c4_i26] = c4_points.pMetric->data[c4_i26];
  }

  c4_iv2[0] = c4_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c4_iv2, 1, *(int32_T (*)[1])
    c4_outOrientation->size, 1);
  c4_k_loop_ub = c4_outOrientation->size[0] - 1;
  for (c4_i27 = 0; c4_i27 <= c4_k_loop_ub; c4_i27++) {
    c4_valMetric->data[c4_r->data[c4_i27]] = c4_outOrientation->data[c4_i27];
  }

  c4_b3 = (1.0 > c4_out_numel);
  if (c4_b3) {
    c4_i28 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c4_valSignOfLaplacian->size[0]);
    c4_i28 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c4_out_numel, 1, c4_valSignOfLaplacian->size[0]) -
      1;
  }

  c4_i29 = c4_r->size[0];
  c4_r->size[0] = c4_i28 + 1;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_r, c4_i29, &c4_y_emlrtRTEI);
  c4_l_loop_ub = c4_i28;
  for (c4_i30 = 0; c4_i30 <= c4_l_loop_ub; c4_i30++) {
    c4_r->data[c4_i30] = c4_i30;
  }

  c4_emxInit_int8_T(chartInstance, &c4_r1, 1, &c4_bd_emlrtRTEI);
  c4_i31 = c4_r1->size[0];
  c4_r1->size[0] = c4_points.pSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_r1, c4_i31, &c4_ab_emlrtRTEI);
  c4_m_loop_ub = c4_points.pSignOfLaplacian->size[0] - 1;
  for (c4_i32 = 0; c4_i32 <= c4_m_loop_ub; c4_i32++) {
    c4_r1->data[c4_i32] = c4_points.pSignOfLaplacian->data[c4_i32];
  }

  c4_iv3[0] = c4_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c4_iv3, 1, *(int32_T (*)[1])c4_r1->size, 1);
  c4_n_loop_ub = c4_r1->size[0] - 1;
  for (c4_i33 = 0; c4_i33 <= c4_n_loop_ub; c4_i33++) {
    c4_valSignOfLaplacian->data[c4_r->data[c4_i33]] = c4_r1->data[c4_i33];
  }

  c4_emxFree_int8_T(chartInstance, &c4_r1);
  c4_emxFree_int32_T(chartInstance, &c4_r);
  c4_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_ptsStruct,
    &c4_bd_emlrtRTEI);
  c4_i34 = c4_ptsStruct.Location->size[0] * c4_ptsStruct.Location->size[1];
  c4_ptsStruct.Location->size[0] = c4_valLocation->size[0];
  c4_ptsStruct.Location->size[1] = c4_valLocation->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ptsStruct.Location, c4_i34,
    &c4_bb_emlrtRTEI);
  c4_o_loop_ub = c4_valLocation->size[0] * c4_valLocation->size[1] - 1;
  for (c4_i35 = 0; c4_i35 <= c4_o_loop_ub; c4_i35++) {
    c4_ptsStruct.Location->data[c4_i35] = c4_valLocation->data[c4_i35];
  }

  c4_i36 = c4_ptsStruct.Scale->size[0];
  c4_ptsStruct.Scale->size[0] = c4_valScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_ptsStruct.Scale, c4_i36,
    &c4_cb_emlrtRTEI);
  c4_p_loop_ub = c4_valScale->size[0] - 1;
  for (c4_i37 = 0; c4_i37 <= c4_p_loop_ub; c4_i37++) {
    c4_ptsStruct.Scale->data[c4_i37] = c4_valScale->data[c4_i37];
  }

  c4_i38 = c4_ptsStruct.Metric->size[0];
  c4_ptsStruct.Metric->size[0] = c4_valMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_ptsStruct.Metric, c4_i38,
    &c4_db_emlrtRTEI);
  c4_q_loop_ub = c4_valMetric->size[0] - 1;
  for (c4_i39 = 0; c4_i39 <= c4_q_loop_ub; c4_i39++) {
    c4_ptsStruct.Metric->data[c4_i39] = c4_valMetric->data[c4_i39];
  }

  c4_i40 = c4_ptsStruct.SignOfLaplacian->size[0];
  c4_ptsStruct.SignOfLaplacian->size[0] = c4_valSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_ptsStruct.SignOfLaplacian,
    c4_i40, &c4_eb_emlrtRTEI);
  c4_r_loop_ub = c4_valSignOfLaplacian->size[0] - 1;
  for (c4_i41 = 0; c4_i41 <= c4_r_loop_ub; c4_i41++) {
    c4_ptsStruct.SignOfLaplacian->data[c4_i41] = c4_valSignOfLaplacian->
      data[c4_i41];
  }

  c4_i42 = 0;
  for (c4_i43 = 0; c4_i43 < 189; c4_i43++) {
    c4_i44 = 0;
    for (c4_i46 = 0; c4_i46 < 267; c4_i46++) {
      c4_b_Iu8T[c4_i46 + c4_i42] = c4_I[c4_i44 + c4_i43];
      c4_i44 += 189;
    }

    c4_i42 += 267;
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_ptsStruct, 2, &c4_fb_emlrtRTEI);
  c4_i45 = c4_b_ptsStruct->size[0] * c4_b_ptsStruct->size[1];
  c4_b_ptsStruct->size[0] = c4_ptsStruct.Location->size[0];
  c4_b_ptsStruct->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_ptsStruct, c4_i45,
    &c4_fb_emlrtRTEI);
  c4_s_loop_ub = c4_ptsStruct.Location->size[0] * c4_ptsStruct.Location->size[1]
    - 1;
  for (c4_i47 = 0; c4_i47 <= c4_s_loop_ub; c4_i47++) {
    c4_b_ptsStruct->data[c4_i47] = c4_ptsStruct.Location->data[c4_i47];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_c_ptsStruct, 1, &c4_gb_emlrtRTEI);
  c4_i48 = c4_c_ptsStruct->size[0];
  c4_c_ptsStruct->size[0] = c4_ptsStruct.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_c_ptsStruct, c4_i48,
    &c4_gb_emlrtRTEI);
  c4_t_loop_ub = c4_ptsStruct.Scale->size[0] - 1;
  for (c4_i49 = 0; c4_i49 <= c4_t_loop_ub; c4_i49++) {
    c4_c_ptsStruct->data[c4_i49] = c4_ptsStruct.Scale->data[c4_i49];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_d_ptsStruct, 1, &c4_hb_emlrtRTEI);
  c4_i50 = c4_d_ptsStruct->size[0];
  c4_d_ptsStruct->size[0] = c4_ptsStruct.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_d_ptsStruct, c4_i50,
    &c4_hb_emlrtRTEI);
  c4_u_loop_ub = c4_ptsStruct.Metric->size[0] - 1;
  for (c4_i51 = 0; c4_i51 <= c4_u_loop_ub; c4_i51++) {
    c4_d_ptsStruct->data[c4_i51] = c4_ptsStruct.Metric->data[c4_i51];
  }

  c4_emxInit_int8_T(chartInstance, &c4_e_ptsStruct, 1, &c4_ib_emlrtRTEI);
  c4_i52 = c4_e_ptsStruct->size[0];
  c4_e_ptsStruct->size[0] = c4_ptsStruct.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_e_ptsStruct, c4_i52,
    &c4_ib_emlrtRTEI);
  c4_v_loop_ub = c4_ptsStruct.SignOfLaplacian->size[0] - 1;
  for (c4_i53 = 0; c4_i53 <= c4_v_loop_ub; c4_i53++) {
    c4_e_ptsStruct->data[c4_i53] = c4_ptsStruct.SignOfLaplacian->data[c4_i53];
  }

  c4_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c4_ptsStruct);
  c4_emxInit_real32_T(chartInstance, &c4_b_features, 2, &c4_bd_emlrtRTEI);
  c4_extractSurfBuildable_extractSurf_uint8(chartInstance, c4_b_Iu8T,
    c4_b_ptsStruct, c4_c_ptsStruct, c4_d_ptsStruct, c4_e_ptsStruct, false, false,
    c4_valLocation, c4_valScale, c4_valMetric, c4_valSignOfLaplacian,
    c4_outOrientation, c4_b_features);
  c4_i54 = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = c4_valLocation->size[0];
  c4_out->size[1] = c4_valLocation->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_out, c4_i54, &c4_jb_emlrtRTEI);
  c4_w_loop_ub = c4_valLocation->size[0] * c4_valLocation->size[1] - 1;
  c4_emxFree_int8_T(chartInstance, &c4_e_ptsStruct);
  c4_emxFree_real32_T(chartInstance, &c4_d_ptsStruct);
  c4_emxFree_real32_T(chartInstance, &c4_c_ptsStruct);
  c4_emxFree_real32_T(chartInstance, &c4_b_ptsStruct);
  for (c4_i55 = 0; c4_i55 <= c4_w_loop_ub; c4_i55++) {
    c4_out->data[c4_i55] = c4_valLocation->data[c4_i55];
  }

  c4_emxFree_real32_T(chartInstance, &c4_valLocation);
  c4_i56 = c4_features->size[0] * c4_features->size[1];
  c4_features->size[0] = c4_b_features->size[0];
  c4_features->size[1] = c4_b_features->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_features, c4_i56,
    &c4_kb_emlrtRTEI);
  c4_x_loop_ub = c4_b_features->size[0] * c4_b_features->size[1] - 1;
  for (c4_i57 = 0; c4_i57 <= c4_x_loop_ub; c4_i57++) {
    c4_features->data[c4_i57] = c4_b_features->data[c4_i57];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_features);
  c4_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_b_vPts, &c4_kc_emlrtRTEI);
  c4_i58 = c4_b_vPts.Location->size[0] * c4_b_vPts.Location->size[1];
  c4_b_vPts.Location->size[0] = c4_out->size[0];
  c4_b_vPts.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_vPts.Location, c4_i58,
    &c4_lb_emlrtRTEI);
  c4_y_loop_ub = c4_out->size[0] * c4_out->size[1] - 1;
  for (c4_i59 = 0; c4_i59 <= c4_y_loop_ub; c4_i59++) {
    c4_b_vPts.Location->data[c4_i59] = c4_out->data[c4_i59];
  }

  c4_emxFree_real32_T(chartInstance, &c4_out);
  c4_i60 = c4_b_vPts.Scale->size[0];
  c4_b_vPts.Scale->size[0] = c4_valScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Scale, c4_i60,
    &c4_mb_emlrtRTEI);
  c4_ab_loop_ub = c4_valScale->size[0] - 1;
  for (c4_i61 = 0; c4_i61 <= c4_ab_loop_ub; c4_i61++) {
    c4_b_vPts.Scale->data[c4_i61] = c4_valScale->data[c4_i61];
  }

  c4_emxFree_real32_T(chartInstance, &c4_valScale);
  c4_i62 = c4_b_vPts.Metric->size[0];
  c4_b_vPts.Metric->size[0] = c4_valMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Metric, c4_i62,
    &c4_nb_emlrtRTEI);
  c4_bb_loop_ub = c4_valMetric->size[0] - 1;
  for (c4_i63 = 0; c4_i63 <= c4_bb_loop_ub; c4_i63++) {
    c4_b_vPts.Metric->data[c4_i63] = c4_valMetric->data[c4_i63];
  }

  c4_emxFree_real32_T(chartInstance, &c4_valMetric);
  c4_i64 = c4_b_vPts.SignOfLaplacian->size[0];
  c4_b_vPts.SignOfLaplacian->size[0] = c4_valSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_b_vPts.SignOfLaplacian, c4_i64,
    &c4_ob_emlrtRTEI);
  c4_cb_loop_ub = c4_valSignOfLaplacian->size[0] - 1;
  for (c4_i65 = 0; c4_i65 <= c4_cb_loop_ub; c4_i65++) {
    c4_b_vPts.SignOfLaplacian->data[c4_i65] = c4_valSignOfLaplacian->data[c4_i65];
  }

  c4_emxFree_int8_T(chartInstance, &c4_valSignOfLaplacian);
  c4_i66 = c4_b_vPts.Orientation->size[0];
  c4_b_vPts.Orientation->size[0] = c4_outOrientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Orientation, c4_i66,
    &c4_pb_emlrtRTEI);
  c4_db_loop_ub = c4_outOrientation->size[0] - 1;
  for (c4_i67 = 0; c4_i67 <= c4_db_loop_ub; c4_i67++) {
    c4_b_vPts.Orientation->data[c4_i67] = c4_outOrientation->data[c4_i67];
  }

  c4_emxFree_real32_T(chartInstance, &c4_outOrientation);
  c4_i68 = c4_b_vPts.Orientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_vPts.Orientation, c4_i68,
    &c4_qb_emlrtRTEI);
  c4_eb_loop_ub = c4_b_vPts.Orientation->size[0] - 1;
  for (c4_i69 = 0; c4_i69 <= c4_eb_loop_ub; c4_i69++) {
    c4_b_vPts.Orientation->data[c4_i69] = 6.28318548F -
      c4_b_vPts.Orientation->data[c4_i69];
  }

  c4_emxInit_real32_T(chartInstance, &c4_c_vPts, 2, &c4_rb_emlrtRTEI);
  c4_i70 = c4_c_vPts->size[0] * c4_c_vPts->size[1];
  c4_c_vPts->size[0] = c4_b_vPts.Location->size[0];
  c4_c_vPts->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_vPts, c4_i70,
    &c4_rb_emlrtRTEI);
  c4_fb_loop_ub = c4_b_vPts.Location->size[0] * c4_b_vPts.Location->size[1] - 1;
  for (c4_i71 = 0; c4_i71 <= c4_fb_loop_ub; c4_i71++) {
    c4_c_vPts->data[c4_i71] = c4_b_vPts.Location->data[c4_i71];
  }

  c4_emxCopyStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_vPts, &c4_b_vPts,
    &c4_sb_emlrtRTEI);
  c4_b_SURFPoints_cg_SURFPoints_cg(chartInstance, c4_c_vPts, c4_vPts,
    c4_valid_points);
  c4_emxFree_real32_T(chartInstance, &c4_c_vPts);
  c4_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_b_vPts);
  c4_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c4_vPts);
}

static void c4_extractSurfBuildable_extractSurf_uint8
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c4_b_Iu8T
   [50463], c4_emxArray_real32_T *c4_inLocation, c4_emxArray_real32_T
   *c4_inScale, c4_emxArray_real32_T *c4_inMetric, c4_emxArray_int8_T
   *c4_inSignOfLaplacian, boolean_T c4_isExtended, boolean_T c4_isUpright,
   c4_emxArray_real32_T *c4_outLocation, c4_emxArray_real32_T *c4_outScale,
   c4_emxArray_real32_T *c4_outMetric, c4_emxArray_int8_T *c4_outSignOfLaplacian,
   c4_emxArray_real32_T *c4_outOrientation, c4_emxArray_real32_T *c4_outFeatures)
{
  c4_emxArray_real32_T *c4_b_inLocation;
  void * c4_ptrKeypoints;
  void * c4_ptrDescriptors;
  int32_T c4_numel;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_emxArray_real32_T *c4_b_inScale;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  c4_emxArray_real32_T *c4_b_inMetric;
  int32_T c4_i4;
  int32_T c4_c_loop_ub;
  int32_T c4_i5;
  c4_emxArray_int8_T *c4_b_inSignOfLaplacian;
  int32_T c4_i6;
  int32_T c4_d_loop_ub;
  int32_T c4_i7;
  int32_T c4_out_numel;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  (void)c4_isExtended;
  (void)c4_isUpright;
  c4_emxInit_real32_T(chartInstance, &c4_b_inLocation, 2, &c4_hd_emlrtRTEI);
  c4_ptrKeypoints = NULL;
  c4_ptrDescriptors = NULL;
  c4_numel = c4_inLocation->size[0];
  c4_i = c4_b_inLocation->size[0] * c4_b_inLocation->size[1];
  c4_b_inLocation->size[0] = c4_inLocation->size[0];
  c4_b_inLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_inLocation, c4_i,
    &c4_dd_emlrtRTEI);
  c4_loop_ub = c4_inLocation->size[0] * c4_inLocation->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_inLocation->data[c4_i1] = c4_inLocation->data[c4_i1];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_b_inScale, 1, &c4_hd_emlrtRTEI);
  c4_i2 = c4_b_inScale->size[0];
  c4_b_inScale->size[0] = c4_inScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_inScale, c4_i2,
    &c4_ed_emlrtRTEI);
  c4_b_loop_ub = c4_inScale->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_inScale->data[c4_i3] = c4_inScale->data[c4_i3];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_b_inMetric, 1, &c4_hd_emlrtRTEI);
  c4_i4 = c4_b_inMetric->size[0];
  c4_b_inMetric->size[0] = c4_inMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_inMetric, c4_i4,
    &c4_fd_emlrtRTEI);
  c4_c_loop_ub = c4_inMetric->size[0] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_b_inMetric->data[c4_i5] = c4_inMetric->data[c4_i5];
  }

  c4_emxInit_int8_T(chartInstance, &c4_b_inSignOfLaplacian, 1, &c4_hd_emlrtRTEI);
  c4_i6 = c4_b_inSignOfLaplacian->size[0];
  c4_b_inSignOfLaplacian->size[0] = c4_inSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_b_inSignOfLaplacian, c4_i6,
    &c4_gd_emlrtRTEI);
  c4_d_loop_ub = c4_inSignOfLaplacian->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
    c4_b_inSignOfLaplacian->data[c4_i7] = c4_inSignOfLaplacian->data[c4_i7];
  }

  c4_out_numel = extractSurf_compute(c4_b_Iu8T, 189, 267, 2,
    &c4_b_inLocation->data[0], &c4_b_inScale->data[0], &c4_b_inMetric->data[0],
    &c4_b_inSignOfLaplacian->data[0], c4_numel, false, false, &c4_ptrKeypoints,
    &c4_ptrDescriptors);
  c4_i8 = c4_outLocation->size[0] * c4_outLocation->size[1];
  c4_outLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_out_numel);
  c4_outLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_outLocation, c4_i8,
    &c4_hd_emlrtRTEI);
  c4_i9 = c4_outScale->size[0];
  c4_outScale->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outScale, c4_i9,
    &c4_hd_emlrtRTEI);
  c4_i10 = c4_outMetric->size[0];
  c4_outMetric->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outMetric, c4_i10,
    &c4_hd_emlrtRTEI);
  c4_i11 = c4_outSignOfLaplacian->size[0];
  c4_outSignOfLaplacian->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_outSignOfLaplacian, c4_i11,
    &c4_hd_emlrtRTEI);
  c4_i12 = c4_outOrientation->size[0];
  c4_outOrientation->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outOrientation, c4_i12,
    &c4_hd_emlrtRTEI);
  c4_i13 = c4_outFeatures->size[0] * c4_outFeatures->size[1];
  c4_outFeatures->size[0] = c4_out_numel;
  c4_outFeatures->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_outFeatures, c4_i13,
    &c4_hd_emlrtRTEI);
  extractSurf_assignOutput(c4_ptrKeypoints, c4_ptrDescriptors,
    &c4_outLocation->data[0], &c4_outScale->data[0], &c4_outMetric->data[0],
    &c4_outSignOfLaplacian->data[0], &c4_outOrientation->data[0],
    &c4_outFeatures->data[0]);
  c4_emxFree_int8_T(chartInstance, &c4_b_inSignOfLaplacian);
  c4_emxFree_real32_T(chartInstance, &c4_b_inMetric);
  c4_emxFree_real32_T(chartInstance, &c4_b_inScale);
  c4_emxFree_real32_T(chartInstance, &c4_b_inLocation);
}

static void c4_b_SURFPoints_cg_SURFPoints_cg
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_varargin_1, c4_s2rdWZ6jAA0S8hk59zYLzBC c4_varargin_2,
   c4_vision_internal_SURFPoints_cg *c4_this)
{
  c4_sGhH0Msgf1shDAvf5CNZg6B c4_inputs;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_c_loop_ub;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_d_loop_ub;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_e_loop_ub;
  int32_T c4_i9;
  c4_emxArray_real32_T *c4_b_inputs;
  int32_T c4_i10;
  int32_T c4_f_loop_ub;
  int32_T c4_i11;
  c4_emxArray_real32_T *c4_c_inputs;
  int32_T c4_i12;
  int32_T c4_g_loop_ub;
  int32_T c4_i13;
  real_T c4_numPts;
  real_T c4_numelParam;
  real_T c4_b_numPts;
  boolean_T c4_b;
  const mxArray *c4_d_y = NULL;
  c4_emxArray_real32_T *c4_d_inputs;
  int32_T c4_i14;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  int32_T c4_h_loop_ub;
  static char_T c4_b_cv[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  int32_T c4_i15;
  c4_emxArray_real32_T *c4_orientation;
  int32_T c4_i16;
  int32_T c4_i_loop_ub;
  int32_T c4_i17;
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i18;
  int32_T c4_k;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  boolean_T c4_b1;
  real32_T c4_x;
  real32_T c4_b_x;
  boolean_T c4_b_b;
  const mxArray *c4_g_y = NULL;
  boolean_T c4_b_p;
  boolean_T c4_b2;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  static char_T c4_b_cv1[11] = { 'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i',
    'o', 'n' };

  const mxArray *c4_j_y = NULL;
  c4_emxArray_int8_T *c4_in;
  int32_T c4_i19;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  int32_T c4_j_loop_ub;
  static char_T c4_b_cv2[11] = { 'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i',
    'o', 'n' };

  int32_T c4_i20;
  c4_emxArray_boolean_T *c4_b_in;
  int32_T c4_i21;
  int32_T c4_k_loop_ub;
  int32_T c4_i22;
  c4_emxArray_boolean_T *c4_c_in;
  boolean_T c4_b3;
  int32_T c4_i23;
  int32_T c4_l_loop_ub;
  int32_T c4_i24;
  const mxArray *c4_m_y = NULL;
  real_T c4_c_numPts;
  real_T c4_b_numelParam;
  const mxArray *c4_n_y = NULL;
  real_T c4_d_numPts;
  boolean_T c4_b4;
  const mxArray *c4_o_y = NULL;
  real_T c4_c_numelParam;
  real_T c4_e_numPts;
  const mxArray *c4_p_y = NULL;
  boolean_T c4_b5;
  const mxArray *c4_q_y = NULL;
  static char_T c4_b_cv3[5] = { 'S', 'c', 'a', 'l', 'e' };

  const mxArray *c4_r_y = NULL;
  real_T c4_d_numelParam;
  real_T c4_f_numPts;
  const mxArray *c4_s_y = NULL;
  boolean_T c4_b6;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  static char_T c4_b_cv4[11] = { 'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i',
    'o', 'n' };

  c4_emxInitStruct_sGhH0Msgf1shDAvf5(chartInstance, &c4_inputs, &c4_qc_emlrtRTEI);
  c4_this->pLocation->size[0] = 0;
  c4_this->pLocation->size[1] = 2;
  c4_this->pMetric->size[0] = 0;
  c4_this->pScale->size[0] = 0;
  c4_this->pSignOfLaplacian->size[0] = 0;
  c4_this->pOrientation->size[0] = 0;
  c4_i = c4_inputs.Location->size[0] * c4_inputs.Location->size[1];
  c4_inputs.Location->size[0] = c4_varargin_1->size[0];
  c4_inputs.Location->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_inputs.Location, c4_i,
    &c4_pc_emlrtRTEI);
  c4_loop_ub = c4_varargin_1->size[0] * c4_varargin_1->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_inputs.Location->data[c4_i1] = c4_varargin_1->data[c4_i1];
  }

  c4_i2 = c4_inputs.Metric->size[0];
  c4_inputs.Metric->size[0] = c4_varargin_2.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_inputs.Metric, c4_i2,
    &c4_qc_emlrtRTEI);
  c4_b_loop_ub = c4_varargin_2.Metric->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_inputs.Metric->data[c4_i3] = c4_varargin_2.Metric->data[c4_i3];
  }

  c4_i4 = c4_inputs.Scale->size[0];
  c4_inputs.Scale->size[0] = c4_varargin_2.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_inputs.Scale, c4_i4,
    &c4_qc_emlrtRTEI);
  c4_c_loop_ub = c4_varargin_2.Scale->size[0] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_inputs.Scale->data[c4_i5] = c4_varargin_2.Scale->data[c4_i5];
  }

  c4_i6 = c4_inputs.SignOfLaplacian->size[0];
  c4_inputs.SignOfLaplacian->size[0] = c4_varargin_2.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_inputs.SignOfLaplacian, c4_i6,
    &c4_qc_emlrtRTEI);
  c4_d_loop_ub = c4_varargin_2.SignOfLaplacian->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
    c4_inputs.SignOfLaplacian->data[c4_i7] = c4_varargin_2.SignOfLaplacian->
      data[c4_i7];
  }

  c4_i8 = c4_inputs.Orientation->size[0];
  c4_inputs.Orientation->size[0] = c4_varargin_2.Orientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_inputs.Orientation, c4_i8,
    &c4_qc_emlrtRTEI);
  c4_e_loop_ub = c4_varargin_2.Orientation->size[0] - 1;
  for (c4_i9 = 0; c4_i9 <= c4_e_loop_ub; c4_i9++) {
    c4_inputs.Orientation->data[c4_i9] = c4_varargin_2.Orientation->data[c4_i9];
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_inputs, 2, &c4_rc_emlrtRTEI);
  c4_i10 = c4_b_inputs->size[0] * c4_b_inputs->size[1];
  c4_b_inputs->size[0] = c4_inputs.Location->size[0];
  c4_b_inputs->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_inputs, c4_i10,
    &c4_rc_emlrtRTEI);
  c4_f_loop_ub = c4_inputs.Location->size[0] * c4_inputs.Location->size[1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_f_loop_ub; c4_i11++) {
    c4_b_inputs->data[c4_i11] = c4_inputs.Location->data[c4_i11];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_c_inputs, 1, &c4_sc_emlrtRTEI);
  c4_FeaturePointsImpl_checkLocation(chartInstance, c4_b_inputs);
  c4_i12 = c4_c_inputs->size[0];
  c4_c_inputs->size[0] = c4_inputs.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_c_inputs, c4_i12,
    &c4_sc_emlrtRTEI);
  c4_g_loop_ub = c4_inputs.Metric->size[0] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_b_inputs);
  for (c4_i13 = 0; c4_i13 <= c4_g_loop_ub; c4_i13++) {
    c4_c_inputs->data[c4_i13] = c4_inputs.Metric->data[c4_i13];
  }

  c4_FeaturePointsImpl_checkMetric(chartInstance, c4_c_inputs);
  c4_numPts = (real_T)c4_inputs.Location->size[0];
  c4_numelParam = (real_T)c4_inputs.Metric->size[0];
  c4_b_numPts = c4_numPts;
  c4_emxFree_real32_T(chartInstance, &c4_c_inputs);
  if ((c4_numelParam == 1.0) || (c4_numelParam == c4_b_numPts)) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_e_y, 14,
                  c4_f_y)));
  }

  c4_emxInit_real32_T1(chartInstance, &c4_d_inputs, 1, &c4_tc_emlrtRTEI);
  c4_i14 = c4_d_inputs->size[0];
  c4_d_inputs->size[0] = c4_inputs.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_d_inputs, c4_i14,
    &c4_tc_emlrtRTEI);
  c4_h_loop_ub = c4_inputs.Scale->size[0] - 1;
  for (c4_i15 = 0; c4_i15 <= c4_h_loop_ub; c4_i15++) {
    c4_d_inputs->data[c4_i15] = c4_inputs.Scale->data[c4_i15];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_orientation, 1, &c4_id_emlrtRTEI);
  c4_SURFPointsImpl_checkScale(chartInstance, c4_d_inputs);
  c4_i16 = c4_orientation->size[0];
  c4_orientation->size[0] = c4_inputs.Orientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_orientation, c4_i16,
    &c4_id_emlrtRTEI);
  c4_i_loop_ub = c4_inputs.Orientation->size[0] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_d_inputs);
  for (c4_i17 = 0; c4_i17 <= c4_i_loop_ub; c4_i17++) {
    c4_orientation->data[c4_i17] = c4_inputs.Orientation->data[c4_i17];
  }

  c4_p = true;
  c4_d = (real_T)c4_orientation->size[0];
  c4_i18 = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i18)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_orientation->data[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muSingleScalarIsNaN(c4_b_x);
    c4_b_p = !c4_b_b;
    if (c4_b_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 11),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_h_y, 14,
                  c4_i_y)));
  }

  if (c4_all(chartInstance, c4_orientation)) {
    c4_b2 = true;
  } else {
    c4_b2 = false;
  }

  c4_emxFree_real32_T(chartInstance, &c4_orientation);
  if (!c4_b2) {
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 11),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_j_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_k_y, 14,
                  c4_l_y)));
  }

  c4_emxInit_int8_T(chartInstance, &c4_in, 1, &c4_uc_emlrtRTEI);
  c4_i19 = c4_in->size[0];
  c4_in->size[0] = c4_inputs.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_in, c4_i19, &c4_uc_emlrtRTEI);
  c4_j_loop_ub = c4_inputs.SignOfLaplacian->size[0] - 1;
  for (c4_i20 = 0; c4_i20 <= c4_j_loop_ub; c4_i20++) {
    c4_in->data[c4_i20] = c4_inputs.SignOfLaplacian->data[c4_i20];
  }

  c4_emxInit_boolean_T(chartInstance, &c4_b_in, 1, &c4_vc_emlrtRTEI);
  c4_i21 = c4_b_in->size[0];
  c4_b_in->size[0] = c4_in->size[0];
  c4_emxEnsureCapacity_boolean_T(chartInstance, c4_b_in, c4_i21,
    &c4_vc_emlrtRTEI);
  c4_k_loop_ub = c4_in->size[0] - 1;
  for (c4_i22 = 0; c4_i22 <= c4_k_loop_ub; c4_i22++) {
    c4_b_in->data[c4_i22] = ((real_T)c4_in->data[c4_i22] >= -1.0);
  }

  c4_emxInit_boolean_T(chartInstance, &c4_c_in, 1, &c4_wc_emlrtRTEI);
  if (c4_b_all(chartInstance, c4_b_in)) {
    c4_i23 = c4_c_in->size[0];
    c4_c_in->size[0] = c4_in->size[0];
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_c_in, c4_i23,
      &c4_wc_emlrtRTEI);
    c4_l_loop_ub = c4_in->size[0] - 1;
    for (c4_i24 = 0; c4_i24 <= c4_l_loop_ub; c4_i24++) {
      c4_c_in->data[c4_i24] = ((real_T)c4_in->data[c4_i24] <= 1.0);
    }

    if (c4_b_all(chartInstance, c4_c_in)) {
      c4_b3 = true;
    } else {
      c4_b3 = false;
    }
  } else {
    c4_b3 = false;
  }

  c4_emxFree_boolean_T(chartInstance, &c4_b_in);
  c4_emxFree_boolean_T(chartInstance, &c4_c_in);
  c4_emxFree_int8_T(chartInstance, &c4_in);
  if (!c4_b3) {
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_m_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14, c4_n_y)));
  }

  c4_c_numPts = (real_T)c4_inputs.Location->size[0];
  c4_b_numelParam = (real_T)c4_inputs.Scale->size[0];
  c4_d_numPts = c4_c_numPts;
  if ((c4_b_numelParam == 1.0) || (c4_b_numelParam == c4_d_numPts)) {
    c4_b4 = true;
  } else {
    c4_b4 = false;
  }

  if (!c4_b4) {
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_o_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_p_y, 14,
                  c4_q_y)));
  }

  c4_c_numelParam = (real_T)c4_inputs.SignOfLaplacian->size[0];
  c4_e_numPts = c4_c_numPts;
  if ((c4_c_numelParam == 1.0) || (c4_c_numelParam == c4_e_numPts)) {
    c4_b5 = true;
  } else {
    c4_b5 = false;
  }

  if (!c4_b5) {
    c4_r_y = NULL;
    sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_s_y = NULL;
    sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_t_y = NULL;
    sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_r_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_s_y, 14,
                  c4_t_y)));
  }

  c4_d_numelParam = (real_T)c4_inputs.Orientation->size[0];
  c4_f_numPts = c4_c_numPts;
  if ((c4_d_numelParam == 1.0) || (c4_d_numelParam == c4_f_numPts)) {
    c4_b6 = true;
  } else {
    c4_b6 = false;
  }

  if (!c4_b6) {
    c4_u_y = NULL;
    sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_v_y = NULL;
    sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_w_y = NULL;
    sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 11),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_u_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_v_y, 14,
                  c4_w_y)));
  }

  c4_d_SURFPointsImpl_configure(chartInstance, c4_this, c4_inputs);
  c4_emxFreeStruct_sGhH0Msgf1shDAvf5(chartInstance, &c4_inputs);
}

static void c4_b_SURFPointsImpl_configure
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg c4_this, c4_sGhH0Msgf1shDAvf5CNZg6B
   c4_inputs, c4_vision_internal_SURFPoints_cg *c4_b_this)
{
  c4_sGhH0Msgf1shDAvf5CNZg6B c4_b_inputs;
  c4_emxInitStruct_sGhH0Msgf1shDAvf5(chartInstance, &c4_b_inputs,
    &c4_ad_emlrtRTEI);
  c4_emxCopyStruct_vision_internal_S(chartInstance, c4_b_this, &c4_this,
    &c4_ad_emlrtRTEI);
  c4_emxCopyStruct_sGhH0Msgf1shDAvf5(chartInstance, &c4_b_inputs, &c4_inputs,
    &c4_ad_emlrtRTEI);
  c4_d_SURFPointsImpl_configure(chartInstance, c4_b_this, c4_b_inputs);
  c4_emxFreeStruct_sGhH0Msgf1shDAvf5(chartInstance, &c4_b_inputs);
}

static void c4_b_extractSurfBuildable_extractSurf_uint8
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c4_b_Iu8T
   [250000], c4_emxArray_real32_T *c4_inLocation, c4_emxArray_real32_T
   *c4_inScale, c4_emxArray_real32_T *c4_inMetric, c4_emxArray_int8_T
   *c4_inSignOfLaplacian, boolean_T c4_isExtended, boolean_T c4_isUpright,
   c4_emxArray_real32_T *c4_outLocation, c4_emxArray_real32_T *c4_outScale,
   c4_emxArray_real32_T *c4_outMetric, c4_emxArray_int8_T *c4_outSignOfLaplacian,
   c4_emxArray_real32_T *c4_outOrientation, c4_emxArray_real32_T *c4_outFeatures)
{
  c4_emxArray_real32_T *c4_b_inLocation;
  void * c4_ptrKeypoints;
  void * c4_ptrDescriptors;
  int32_T c4_numel;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_emxArray_real32_T *c4_b_inScale;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  c4_emxArray_real32_T *c4_b_inMetric;
  int32_T c4_i4;
  int32_T c4_c_loop_ub;
  int32_T c4_i5;
  c4_emxArray_int8_T *c4_b_inSignOfLaplacian;
  int32_T c4_i6;
  int32_T c4_d_loop_ub;
  int32_T c4_i7;
  int32_T c4_out_numel;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  (void)c4_isExtended;
  (void)c4_isUpright;
  c4_emxInit_real32_T(chartInstance, &c4_b_inLocation, 2, &c4_hd_emlrtRTEI);
  c4_ptrKeypoints = NULL;
  c4_ptrDescriptors = NULL;
  c4_numel = c4_inLocation->size[0];
  c4_i = c4_b_inLocation->size[0] * c4_b_inLocation->size[1];
  c4_b_inLocation->size[0] = c4_inLocation->size[0];
  c4_b_inLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_inLocation, c4_i,
    &c4_dd_emlrtRTEI);
  c4_loop_ub = c4_inLocation->size[0] * c4_inLocation->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_inLocation->data[c4_i1] = c4_inLocation->data[c4_i1];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_b_inScale, 1, &c4_hd_emlrtRTEI);
  c4_i2 = c4_b_inScale->size[0];
  c4_b_inScale->size[0] = c4_inScale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_inScale, c4_i2,
    &c4_ed_emlrtRTEI);
  c4_b_loop_ub = c4_inScale->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_inScale->data[c4_i3] = c4_inScale->data[c4_i3];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_b_inMetric, 1, &c4_hd_emlrtRTEI);
  c4_i4 = c4_b_inMetric->size[0];
  c4_b_inMetric->size[0] = c4_inMetric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_inMetric, c4_i4,
    &c4_fd_emlrtRTEI);
  c4_c_loop_ub = c4_inMetric->size[0] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_b_inMetric->data[c4_i5] = c4_inMetric->data[c4_i5];
  }

  c4_emxInit_int8_T(chartInstance, &c4_b_inSignOfLaplacian, 1, &c4_hd_emlrtRTEI);
  c4_i6 = c4_b_inSignOfLaplacian->size[0];
  c4_b_inSignOfLaplacian->size[0] = c4_inSignOfLaplacian->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_b_inSignOfLaplacian, c4_i6,
    &c4_gd_emlrtRTEI);
  c4_d_loop_ub = c4_inSignOfLaplacian->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
    c4_b_inSignOfLaplacian->data[c4_i7] = c4_inSignOfLaplacian->data[c4_i7];
  }

  c4_out_numel = extractSurf_compute(c4_b_Iu8T, 500, 500, 2,
    &c4_b_inLocation->data[0], &c4_b_inScale->data[0], &c4_b_inMetric->data[0],
    &c4_b_inSignOfLaplacian->data[0], c4_numel, false, false, &c4_ptrKeypoints,
    &c4_ptrDescriptors);
  c4_i8 = c4_outLocation->size[0] * c4_outLocation->size[1];
  c4_outLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c4_out_numel);
  c4_outLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_outLocation, c4_i8,
    &c4_hd_emlrtRTEI);
  c4_i9 = c4_outScale->size[0];
  c4_outScale->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outScale, c4_i9,
    &c4_hd_emlrtRTEI);
  c4_i10 = c4_outMetric->size[0];
  c4_outMetric->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outMetric, c4_i10,
    &c4_hd_emlrtRTEI);
  c4_i11 = c4_outSignOfLaplacian->size[0];
  c4_outSignOfLaplacian->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_outSignOfLaplacian, c4_i11,
    &c4_hd_emlrtRTEI);
  c4_i12 = c4_outOrientation->size[0];
  c4_outOrientation->size[0] = c4_out_numel;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_outOrientation, c4_i12,
    &c4_hd_emlrtRTEI);
  c4_i13 = c4_outFeatures->size[0] * c4_outFeatures->size[1];
  c4_outFeatures->size[0] = c4_out_numel;
  c4_outFeatures->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_outFeatures, c4_i13,
    &c4_hd_emlrtRTEI);
  extractSurf_assignOutput(c4_ptrKeypoints, c4_ptrDescriptors,
    &c4_outLocation->data[0], &c4_outScale->data[0], &c4_outMetric->data[0],
    &c4_outSignOfLaplacian->data[0], &c4_outOrientation->data[0],
    &c4_outFeatures->data[0]);
  c4_emxFree_int8_T(chartInstance, &c4_b_inSignOfLaplacian);
  c4_emxFree_real32_T(chartInstance, &c4_b_inMetric);
  c4_emxFree_real32_T(chartInstance, &c4_b_inScale);
  c4_emxFree_real32_T(chartInstance, &c4_b_inLocation);
}

static void c4_normalizeX(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_c_X, c4_emxArray_real32_T *c4_d_X)
{
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_i = c4_d_X->size[0] * c4_d_X->size[1];
  c4_d_X->size[0] = 64;
  c4_d_X->size[1] = c4_c_X->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_d_X, c4_i, &c4_jd_emlrtRTEI);
  c4_loop_ub = c4_c_X->size[0] * c4_c_X->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_d_X->data[c4_i1] = c4_c_X->data[c4_i1];
  }

  c4_b_normalizeX(chartInstance, c4_d_X);
}

static void c4_findMatchesExhaustive(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_features1, c4_emxArray_real32_T
  *c4_features2, real32_T c4_matchThreshold, c4_emxArray_uint32_T *c4_indexPairs,
  c4_emxArray_real32_T *c4_matchMetric)
{
  c4_emxArray_real32_T *c4_scores;
  int32_T c4_i;
  uint32_T c4_N1;
  int32_T c4_i1;
  uint32_T c4_N2;
  uint32_T c4_b_N1;
  uint32_T c4_b_N2;
  int32_T c4_i2;
  int32_T c4_loop_ub;
  int32_T c4_i3;
  c4_emxArray_real32_T *c4_b_features2;
  int32_T c4_i4;
  int32_T c4_b_loop_ub;
  int32_T c4_i5;
  c4_emxArray_real32_T *c4_b_scores;
  uint32_T c4_c_N1;
  uint32_T c4_c_N2;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_c_loop_ub;
  int32_T c4_i9;
  int32_T c4_iv[2];
  int32_T c4_d_loop_ub;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_e_loop_ub;
  int32_T c4_i12;
  c4_emxArray_real32_T *c4_c_features2;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_f_loop_ub;
  int32_T c4_i16;
  int32_T c4_iv1[2];
  int32_T c4_g_loop_ub;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_h_loop_ub;
  int32_T c4_i19;
  c4_emxArray_real32_T *c4_b_features1;
  int32_T c4_i20;
  int32_T c4_i_loop_ub;
  int32_T c4_i21;
  c4_emxArray_real32_T *c4_d_features2;
  int32_T c4_i22;
  int32_T c4_j_loop_ub;
  int32_T c4_i23;
  uint32_T c4_d_N1;
  uint32_T c4_d_N2;
  int32_T c4_i24;
  uint32_T c4_numFeatures1;
  int32_T c4_i25;
  uint32_T c4_numFeatures2;
  int32_T c4_i26;
  int32_T c4_k_loop_ub;
  int32_T c4_i27;
  c4_emxArray_real32_T *c4_r;
  int32_T c4_i28;
  int32_T c4_l_loop_ub;
  int32_T c4_i29;
  int32_T c4_i30;
  c4_emxArray_real32_T *c4_r1;
  int32_T c4_i31;
  int32_T c4_m_loop_ub;
  int32_T c4_i32;
  int32_T c4_i33;
  c4_emxArray_real32_T *c4_c_scores;
  int32_T c4_i34;
  int32_T c4_n_loop_ub;
  int32_T c4_i35;
  c4_emxArray_real32_T *c4_topTwoMetrics;
  c4_emxArray_uint32_T *c4_topTwoIndices;
  c4_emxArray_real_T *c4_d_y;
  real_T c4_d;
  real_T c4_b;
  int32_T c4_i36;
  c4_emxArray_uint32_T *c4_varargin_1;
  int32_T c4_o_loop_ub;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_p_loop_ub;
  int32_T c4_i39;
  real_T c4_b_d;
  c4_emxArray_uint32_T *c4_varargin_2;
  int32_T c4_i40;
  int32_T c4_i41;
  uint32_T c4_c_u;
  int32_T c4_q_loop_ub;
  int32_T c4_i42;
  int32_T c4_result;
  int32_T c4_sizes[2];
  int32_T c4_expected;
  boolean_T c4_b_b;
  const mxArray *c4_e_y = NULL;
  static char_T c4_b_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  c4_cell_wrap_21 c4_reshapes[2];
  int32_T c4_i43;
  const mxArray *c4_h_y = NULL;
  int32_T c4_r_loop_ub;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_s_loop_ub;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_t_loop_ub;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_u_loop_ub;
  int32_T c4_i50;
  c4_emxArray_uint32_T *c4_b_indexPairs;
  int32_T c4_i51;
  int32_T c4_v_loop_ub;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_w_loop_ub;
  int32_T c4_i54;
  int32_T c4_i55;
  c4_emxArray_boolean_T *c4_inds;
  real32_T c4_b_matchThreshold;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_x_loop_ub;
  int32_T c4_i58;
  int32_T c4_end;
  int32_T c4_trueCount;
  int32_T c4_b_i;
  c4_emxArray_int32_T *c4_r2;
  int32_T c4_i59;
  int32_T c4_partialTrueCount;
  int32_T c4_c_i;
  c4_emxArray_uint32_T *c4_c_indexPairs;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_y_loop_ub;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_ab_loop_ub;
  int32_T c4_i65;
  int32_T c4_b_end;
  int32_T c4_b_trueCount;
  int32_T c4_d_i;
  c4_emxArray_int32_T *c4_r3;
  int32_T c4_i66;
  int32_T c4_b_partialTrueCount;
  int32_T c4_e_i;
  c4_emxArray_real32_T *c4_b_topTwoMetrics;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i70;
  int32_T c4_bb_loop_ub;
  int32_T c4_i71;
  int32_T c4_cb_loop_ub;
  int32_T c4_i72;
  int32_T c4_i73;
  int32_T c4_db_loop_ub;
  int32_T c4_i74;
  uint32_T c4_e_N2;
  c4_emxArray_real32_T *c4_i_y;
  int32_T c4_i75;
  c4_emxArray_real32_T *c4_topTwoScores;
  int32_T c4_i76;
  int32_T c4_eb_loop_ub;
  int32_T c4_i77;
  int32_T c4_fb_loop_ub;
  int32_T c4_i78;
  int32_T c4_c_end;
  int32_T c4_c_trueCount;
  int32_T c4_i79;
  int32_T c4_f_i;
  int32_T c4_i80;
  c4_emxArray_int32_T *c4_r4;
  int32_T c4_i81;
  int32_T c4_gb_loop_ub;
  int32_T c4_i82;
  int32_T c4_i83;
  int32_T c4_c_partialTrueCount;
  int32_T c4_tmp_size[1];
  int32_T c4_g_i;
  int32_T c4_hb_loop_ub;
  int32_T c4_i84;
  c4_emxArray_uint32_T *c4_d_indexPairs;
  int32_T c4_d_end;
  int32_T c4_tmp_data[2];
  int32_T c4_i85;
  int32_T c4_d_trueCount;
  int32_T c4_i86;
  int32_T c4_h_i;
  c4_emxArray_int32_T *c4_r5;
  int32_T c4_ib_loop_ub;
  int32_T c4_i87;
  int32_T c4_i88;
  int32_T c4_i89;
  int32_T c4_i90;
  int32_T c4_d_partialTrueCount;
  int32_T c4_i_i;
  int32_T c4_jb_loop_ub;
  int32_T c4_iv2[2];
  int32_T c4_i91;
  int32_T c4_i92;
  int32_T c4_kb_loop_ub;
  int32_T c4_i93;
  int32_T c4_e_end;
  int32_T c4_e_trueCount;
  int32_T c4_lb_loop_ub;
  int32_T c4_j_i;
  c4_emxArray_real32_T *c4_ratios;
  int32_T c4_i94;
  c4_emxArray_int32_T *c4_r6;
  int32_T c4_i95;
  int32_T c4_i96;
  int32_T c4_i97;
  int32_T c4_e_partialTrueCount;
  int32_T c4_mb_loop_ub;
  int32_T c4_k_i;
  int32_T c4_i98;
  int32_T c4_i99;
  int32_T c4_c_topTwoMetrics;
  int32_T c4_i100;
  int32_T c4_i101;
  int32_T c4_nb_loop_ub;
  int32_T c4_ob_loop_ub;
  int32_T c4_i102;
  int32_T c4_i103;
  int32_T c4_i104;
  int32_T c4_i105;
  int32_T c4_i106;
  real_T c4_b_varargin_1[2];
  boolean_T c4_p;
  real_T c4_b_varargin_2[2];
  boolean_T c4_b_p;
  int32_T c4_pb_loop_ub;
  int32_T c4_k;
  int32_T c4_i107;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  int32_T c4_f_end;
  real_T c4_x1;
  int32_T c4_f_trueCount;
  real_T c4_x2;
  int32_T c4_l_i;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  c4_emxArray_int32_T *c4_r7;
  int32_T c4_i108;
  const mxArray *c4_j_y = NULL;
  int32_T c4_i109;
  static char_T c4_b_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T c4_i110;
  const mxArray *c4_k_y = NULL;
  int32_T c4_f_partialTrueCount;
  int32_T c4_m_i;
  int32_T c4_i111;
  int32_T c4_qb_loop_ub;
  int32_T c4_i112;
  int32_T c4_e_indexPairs;
  int32_T c4_i113;
  int32_T c4_i114;
  int32_T c4_rb_loop_ub;
  int32_T c4_sb_loop_ub;
  int32_T c4_i115;
  int32_T c4_i116;
  int32_T c4_i117;
  int32_T c4_g_end;
  int32_T c4_g_trueCount;
  int32_T c4_n_i;
  c4_emxArray_int32_T *c4_r8;
  int32_T c4_i118;
  int32_T c4_g_partialTrueCount;
  int32_T c4_o_i;
  int32_T c4_l_y;
  int32_T c4_i119;
  int32_T c4_tb_loop_ub;
  int32_T c4_i120;
  c4_emxInit_real32_T(chartInstance, &c4_scores, 2, &c4_sd_emlrtRTEI);
  c4_i = c4_features1->size[1];
  if (c4_i < 0) {
    c4_i = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c4_N1 = (uint32_T)c4_i;
  c4_i1 = c4_features2->size[1];
  if (c4_i1 < 0) {
    c4_i1 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c4_N2 = (uint32_T)c4_i1;
  c4_b_N1 = c4_N1;
  c4_b_N2 = c4_N2;
  c4_i2 = c4_scores->size[0] * c4_scores->size[1];
  c4_scores->size[0] = 64;
  c4_scores->size[1] = c4_features1->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_scores, c4_i2,
    &c4_kd_emlrtRTEI);
  c4_loop_ub = c4_features1->size[0] * c4_features1->size[1] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_loop_ub; c4_i3++) {
    c4_scores->data[c4_i3] = c4_features1->data[c4_i3];
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_features2, 2, &c4_ld_emlrtRTEI);
  c4_i4 = c4_b_features2->size[0] * c4_b_features2->size[1];
  c4_b_features2->size[0] = 64;
  c4_b_features2->size[1] = c4_features2->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_features2, c4_i4,
    &c4_ld_emlrtRTEI);
  c4_b_loop_ub = c4_features2->size[0] * c4_features2->size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_b_loop_ub; c4_i5++) {
    c4_b_features2->data[c4_i5] = c4_features2->data[c4_i5];
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_scores, 2, &c4_md_emlrtRTEI);
  c4_c_N1 = c4_b_N1;
  c4_c_N2 = c4_b_N2;
  c4_i6 = c4_scores->size[1];
  c4_i7 = c4_scores->size[0];
  c4_i8 = c4_b_scores->size[0] * c4_b_scores->size[1];
  c4_b_scores->size[0] = c4_scores->size[1];
  c4_b_scores->size[1] = c4_scores->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_scores, c4_i8,
    &c4_md_emlrtRTEI);
  c4_c_loop_ub = c4_scores->size[0] - 1;
  for (c4_i9 = 0; c4_i9 <= c4_c_loop_ub; c4_i9++) {
    c4_d_loop_ub = c4_scores->size[1] - 1;
    for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
      c4_b_scores->data[c4_i10 + c4_b_scores->size[0] * c4_i9] = c4_scores->
        data[c4_i9 + c4_scores->size[0] * c4_i10];
    }
  }

  c4_iv[0] = c4_i6;
  c4_iv[1] = c4_i7;
  c4_i11 = c4_scores->size[0] * c4_scores->size[1];
  c4_scores->size[0] = c4_iv[0];
  c4_scores->size[1] = c4_iv[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_scores, c4_i11,
    &c4_nd_emlrtRTEI);
  c4_e_loop_ub = c4_iv[0] * c4_iv[1] - 1;
  for (c4_i12 = 0; c4_i12 <= c4_e_loop_ub; c4_i12++) {
    c4_scores->data[c4_i12] = c4_b_scores->data[c4_i12];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_scores);
  c4_emxInit_real32_T(chartInstance, &c4_c_features2, 2, &c4_od_emlrtRTEI);
  c4_i13 = c4_b_features2->size[1];
  c4_i14 = c4_b_features2->size[0];
  c4_i15 = c4_c_features2->size[0] * c4_c_features2->size[1];
  c4_c_features2->size[0] = c4_b_features2->size[1];
  c4_c_features2->size[1] = c4_b_features2->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_features2, c4_i15,
    &c4_od_emlrtRTEI);
  c4_f_loop_ub = c4_b_features2->size[0] - 1;
  for (c4_i16 = 0; c4_i16 <= c4_f_loop_ub; c4_i16++) {
    c4_g_loop_ub = c4_b_features2->size[1] - 1;
    for (c4_i17 = 0; c4_i17 <= c4_g_loop_ub; c4_i17++) {
      c4_c_features2->data[c4_i17 + c4_c_features2->size[0] * c4_i16] =
        c4_b_features2->data[c4_i16 + c4_b_features2->size[0] * c4_i17];
    }
  }

  c4_iv1[0] = c4_i13;
  c4_iv1[1] = c4_i14;
  c4_i18 = c4_b_features2->size[0] * c4_b_features2->size[1];
  c4_b_features2->size[0] = c4_iv1[0];
  c4_b_features2->size[1] = c4_iv1[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_features2, c4_i18,
    &c4_pd_emlrtRTEI);
  c4_h_loop_ub = c4_iv1[0] * c4_iv1[1] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_h_loop_ub; c4_i19++) {
    c4_b_features2->data[c4_i19] = c4_c_features2->data[c4_i19];
  }

  c4_emxFree_real32_T(chartInstance, &c4_c_features2);
  c4_emxInit_real32_T(chartInstance, &c4_b_features1, 2, &c4_qd_emlrtRTEI);
  c4_i20 = c4_b_features1->size[0] * c4_b_features1->size[1];
  c4_b_features1->size[0] = c4_scores->size[0];
  c4_b_features1->size[1] = c4_scores->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_features1, c4_i20,
    &c4_qd_emlrtRTEI);
  c4_i_loop_ub = c4_scores->size[0] * c4_scores->size[1] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_i_loop_ub; c4_i21++) {
    c4_b_features1->data[c4_i21] = c4_scores->data[c4_i21];
  }

  c4_emxInit_real32_T(chartInstance, &c4_d_features2, 2, &c4_rd_emlrtRTEI);
  c4_i22 = c4_d_features2->size[0] * c4_d_features2->size[1];
  c4_d_features2->size[0] = c4_b_features2->size[0];
  c4_d_features2->size[1] = c4_b_features2->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_d_features2, c4_i22,
    &c4_rd_emlrtRTEI);
  c4_j_loop_ub = c4_b_features2->size[0] * c4_b_features2->size[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_j_loop_ub; c4_i23++) {
    c4_d_features2->data[c4_i23] = c4_b_features2->data[c4_i23];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_features2);
  c4_d_N1 = c4_c_N1;
  c4_d_N2 = c4_c_N2;
  c4_i24 = c4_b_features1->size[0];
  if (c4_i24 < 0) {
    c4_i24 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c4_numFeatures1 = (uint32_T)c4_i24;
  c4_i25 = c4_d_features2->size[0];
  if (c4_i25 < 0) {
    c4_i25 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c4_numFeatures2 = (uint32_T)c4_i25;
  c4_i26 = c4_scores->size[0] * c4_scores->size[1];
  c4_scores->size[0] = (int32_T)c4_d_N1;
  c4_scores->size[1] = (int32_T)c4_d_N2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_scores, c4_i26,
    &c4_sd_emlrtRTEI);
  c4_k_loop_ub = (int32_T)c4_d_N1 * (int32_T)c4_d_N2 - 1;
  for (c4_i27 = 0; c4_i27 <= c4_k_loop_ub; c4_i27++) {
    c4_scores->data[c4_i27] = 0.0F;
  }

  c4_emxInit_real32_T(chartInstance, &c4_r, 2, &c4_ve_emlrtRTEI);
  c4_i28 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = 64;
  c4_r->size[1] = c4_b_features1->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_r, c4_i28, &c4_td_emlrtRTEI);
  c4_l_loop_ub = c4_b_features1->size[0] - 1;
  for (c4_i29 = 0; c4_i29 <= c4_l_loop_ub; c4_i29++) {
    for (c4_i30 = 0; c4_i30 < 64; c4_i30++) {
      c4_r->data[c4_i30 + (c4_i29 << 6)] = c4_b_features1->data[c4_i29 +
        c4_b_features1->size[0] * c4_i30];
    }
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_features1);
  c4_emxInit_real32_T(chartInstance, &c4_r1, 2, &c4_ve_emlrtRTEI);
  c4_i31 = c4_r1->size[0] * c4_r1->size[1];
  c4_r1->size[0] = 64;
  c4_r1->size[1] = c4_d_features2->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_r1, c4_i31, &c4_ud_emlrtRTEI);
  c4_m_loop_ub = c4_d_features2->size[0] - 1;
  for (c4_i32 = 0; c4_i32 <= c4_m_loop_ub; c4_i32++) {
    for (c4_i33 = 0; c4_i33 < 64; c4_i33++) {
      c4_r1->data[c4_i33 + (c4_i32 << 6)] = c4_d_features2->data[c4_i32 +
        c4_d_features2->size[0] * c4_i33];
    }
  }

  c4_emxFree_real32_T(chartInstance, &c4_d_features2);
  c4_emxInit_real32_T(chartInstance, &c4_c_scores, 2, &c4_vd_emlrtRTEI);
  ComputeMetric_ssd_single(&c4_r->data[0], &c4_r1->data[0], &c4_scores->data[0],
    c4_numFeatures1, c4_numFeatures2, 64U);
  c4_i34 = c4_c_scores->size[0] * c4_c_scores->size[1];
  c4_c_scores->size[0] = c4_scores->size[0];
  c4_c_scores->size[1] = c4_scores->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_scores, c4_i34,
    &c4_vd_emlrtRTEI);
  c4_n_loop_ub = c4_scores->size[0] * c4_scores->size[1] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_r1);
  c4_emxFree_real32_T(chartInstance, &c4_r);
  for (c4_i35 = 0; c4_i35 <= c4_n_loop_ub; c4_i35++) {
    c4_c_scores->data[c4_i35] = c4_scores->data[c4_i35];
  }

  c4_emxInit_real32_T(chartInstance, &c4_topTwoMetrics, 2, &c4_ef_emlrtRTEI);
  c4_emxInit_uint32_T(chartInstance, &c4_topTwoIndices, 2, &c4_ve_emlrtRTEI);
  c4_emxInit_real_T(chartInstance, &c4_d_y, 2, &c4_kf_emlrtRTEI);
  c4_partialSort(chartInstance, c4_c_scores, c4_topTwoMetrics, c4_topTwoIndices);
  sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1, 1,
    c4_topTwoIndices->size[0]);
  c4_d = (real_T)c4_scores->size[0];
  c4_b = c4_d;
  c4_emxFree_real32_T(chartInstance, &c4_c_scores);
  c4_emxFree_real32_T(chartInstance, &c4_scores);
  if (c4_b < 1.0) {
    c4_d_y->size[0] = 1;
    c4_d_y->size[1] = 0;
  } else {
    c4_i36 = c4_d_y->size[0] * c4_d_y->size[1];
    c4_d_y->size[0] = 1;
    c4_d_y->size[1] = (int32_T)muDoubleScalarFloor(c4_b - 1.0) + 1;
    c4_emxEnsureCapacity_real_T(chartInstance, c4_d_y, c4_i36, &c4_wd_emlrtRTEI);
    c4_o_loop_ub = (int32_T)muDoubleScalarFloor(c4_b - 1.0);
    for (c4_i38 = 0; c4_i38 <= c4_o_loop_ub; c4_i38++) {
      c4_d_y->data[c4_i38] = 1.0 + (real_T)c4_i38;
    }
  }

  c4_emxInit_uint32_T(chartInstance, &c4_varargin_1, 2, &c4_xd_emlrtRTEI);
  c4_i37 = c4_varargin_1->size[0] * c4_varargin_1->size[1];
  c4_varargin_1->size[0] = 1;
  c4_varargin_1->size[1] = c4_d_y->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_varargin_1, c4_i37,
    &c4_xd_emlrtRTEI);
  c4_p_loop_ub = c4_d_y->size[0] * c4_d_y->size[1] - 1;
  for (c4_i39 = 0; c4_i39 <= c4_p_loop_ub; c4_i39++) {
    c4_b_d = muDoubleScalarRound(c4_d_y->data[c4_i39]);
    if (c4_b_d < 4.294967296E+9) {
      if (c4_b_d >= 0.0) {
        c4_c_u = (uint32_T)c4_b_d;
      } else {
        c4_c_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c4_b_d >= 4.294967296E+9) {
      c4_c_u = MAX_uint32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c4_c_u = 0U;
    }

    c4_varargin_1->data[c4_i39] = c4_c_u;
  }

  c4_emxFree_real_T(chartInstance, &c4_d_y);
  c4_emxInit_uint32_T(chartInstance, &c4_varargin_2, 2, &c4_yd_emlrtRTEI);
  c4_i40 = c4_topTwoIndices->size[1] - 1;
  c4_i41 = c4_varargin_2->size[0] * c4_varargin_2->size[1];
  c4_varargin_2->size[0] = 1;
  c4_varargin_2->size[1] = c4_i40 + 1;
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_varargin_2, c4_i41,
    &c4_yd_emlrtRTEI);
  c4_q_loop_ub = c4_i40;
  for (c4_i42 = 0; c4_i42 <= c4_q_loop_ub; c4_i42++) {
    c4_varargin_2->data[c4_i42] = c4_topTwoIndices->data[c4_topTwoIndices->size
      [0] * c4_i42];
  }

  c4_emxFree_uint32_T(chartInstance, &c4_topTwoIndices);
  c4_result = c4_varargin_1->size[1];
  c4_sizes[1] = c4_result;
  c4_expected = c4_sizes[1];
  if (c4_varargin_1->size[1] == c4_expected) {
    c4_b_b = true;
  } else {
    c4_b_b = false;
  }

  if (!c4_b_b) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14, c4_f_y)));
  }

  if (c4_varargin_2->size[1] == c4_expected) {
    c4_b_b = true;
  } else {
    c4_b_b = false;
  }

  if (!c4_b_b) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14, c4_h_y)));
  }

  c4_emxInitMatrix_cell_wrap_21(chartInstance, c4_reshapes, &c4_mf_emlrtRTEI);
  c4_i43 = c4_reshapes[0].f1->size[0] * c4_reshapes[0].f1->size[1];
  c4_reshapes[0].f1->size[0] = 1;
  c4_reshapes[0].f1->size[1] = c4_varargin_1->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_reshapes[0].f1, c4_i43,
    &c4_ae_emlrtRTEI);
  c4_r_loop_ub = c4_varargin_1->size[0] * c4_varargin_1->size[1] - 1;
  for (c4_i44 = 0; c4_i44 <= c4_r_loop_ub; c4_i44++) {
    c4_reshapes[0].f1->data[c4_i44] = c4_varargin_1->data[c4_i44];
  }

  c4_i45 = c4_reshapes[1].f1->size[0] * c4_reshapes[1].f1->size[1];
  c4_reshapes[1].f1->size[0] = 1;
  c4_reshapes[1].f1->size[1] = c4_varargin_2->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_reshapes[1].f1, c4_i45,
    &c4_ae_emlrtRTEI);
  c4_s_loop_ub = c4_varargin_2->size[0] * c4_varargin_2->size[1] - 1;
  for (c4_i46 = 0; c4_i46 <= c4_s_loop_ub; c4_i46++) {
    c4_reshapes[1].f1->data[c4_i46] = c4_varargin_2->data[c4_i46];
  }

  c4_i47 = c4_varargin_1->size[0] * c4_varargin_1->size[1];
  c4_varargin_1->size[0] = 1;
  c4_varargin_1->size[1] = c4_reshapes[0].f1->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_varargin_1, c4_i47,
    &c4_be_emlrtRTEI);
  c4_t_loop_ub = c4_reshapes[0].f1->size[0] * c4_reshapes[0].f1->size[1] - 1;
  for (c4_i48 = 0; c4_i48 <= c4_t_loop_ub; c4_i48++) {
    c4_varargin_1->data[c4_i48] = c4_reshapes[0].f1->data[c4_i48];
  }

  c4_i49 = c4_varargin_2->size[0] * c4_varargin_2->size[1];
  c4_varargin_2->size[0] = 1;
  c4_varargin_2->size[1] = c4_reshapes[1].f1->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_varargin_2, c4_i49,
    &c4_be_emlrtRTEI);
  c4_u_loop_ub = c4_reshapes[1].f1->size[0] * c4_reshapes[1].f1->size[1] - 1;
  for (c4_i50 = 0; c4_i50 <= c4_u_loop_ub; c4_i50++) {
    c4_varargin_2->data[c4_i50] = c4_reshapes[1].f1->data[c4_i50];
  }

  c4_emxFreeMatrix_cell_wrap_21(chartInstance, c4_reshapes);
  c4_emxInit_uint32_T(chartInstance, &c4_b_indexPairs, 2, &c4_bf_emlrtRTEI);
  c4_i51 = c4_b_indexPairs->size[0] * c4_b_indexPairs->size[1];
  c4_b_indexPairs->size[0] = 2;
  c4_b_indexPairs->size[1] = c4_varargin_1->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_b_indexPairs, c4_i51,
    &c4_ce_emlrtRTEI);
  c4_v_loop_ub = c4_varargin_1->size[1] - 1;
  c4_i52 = 0;
  for (c4_i53 = 0; c4_i53 <= c4_v_loop_ub; c4_i53++) {
    c4_b_indexPairs->data[c4_i52] = c4_varargin_1->data[c4_i53];
    c4_i52 += 2;
  }

  c4_emxFree_uint32_T(chartInstance, &c4_varargin_1);
  c4_w_loop_ub = c4_varargin_2->size[1] - 1;
  c4_i54 = 0;
  for (c4_i55 = 0; c4_i55 <= c4_w_loop_ub; c4_i55++) {
    c4_b_indexPairs->data[c4_i54 + 1] = c4_varargin_2->data[c4_i55];
    c4_i54 += 2;
  }

  c4_emxFree_uint32_T(chartInstance, &c4_varargin_2);
  c4_emxInit_boolean_T1(chartInstance, &c4_inds, 2, &c4_ff_emlrtRTEI);
  c4_b_matchThreshold = c4_matchThreshold;
  sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1, 1,
    c4_topTwoMetrics->size[0]);
  c4_i56 = c4_topTwoMetrics->size[1] - 1;
  c4_i57 = c4_inds->size[0] * c4_inds->size[1];
  c4_inds->size[0] = 1;
  c4_inds->size[1] = c4_i56 + 1;
  c4_emxEnsureCapacity_boolean_T1(chartInstance, c4_inds, c4_i57,
    &c4_de_emlrtRTEI);
  c4_x_loop_ub = c4_i56;
  for (c4_i58 = 0; c4_i58 <= c4_x_loop_ub; c4_i58++) {
    c4_inds->data[c4_i58] = (c4_topTwoMetrics->data[c4_topTwoMetrics->size[0] *
      c4_i58] <= c4_b_matchThreshold);
  }

  c4_end = c4_inds->size[1] - 1;
  c4_trueCount = 0;
  for (c4_b_i = 0; c4_b_i <= c4_end; c4_b_i++) {
    if (c4_inds->data[c4_b_i]) {
      c4_trueCount++;
    }
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r2, 2, &c4_gf_emlrtRTEI);
  c4_i59 = c4_r2->size[0] * c4_r2->size[1];
  c4_r2->size[0] = 1;
  c4_r2->size[1] = c4_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r2, c4_i59, &c4_ee_emlrtRTEI);
  c4_partialTrueCount = 0;
  for (c4_c_i = 0; c4_c_i <= c4_end; c4_c_i++) {
    if (c4_inds->data[c4_c_i]) {
      c4_r2->data[c4_partialTrueCount] = c4_c_i + 1;
      c4_partialTrueCount++;
    }
  }

  c4_emxInit_uint32_T(chartInstance, &c4_c_indexPairs, 2, &c4_fe_emlrtRTEI);
  c4_i60 = c4_b_indexPairs->size[1];
  c4_i61 = c4_c_indexPairs->size[0] * c4_c_indexPairs->size[1];
  c4_c_indexPairs->size[0] = 2;
  c4_c_indexPairs->size[1] = c4_r2->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_c_indexPairs, c4_i61,
    &c4_fe_emlrtRTEI);
  c4_y_loop_ub = c4_r2->size[1] - 1;
  for (c4_i62 = 0; c4_i62 <= c4_y_loop_ub; c4_i62++) {
    for (c4_i63 = 0; c4_i63 < 2; c4_i63++) {
      c4_c_indexPairs->data[c4_i63 + (c4_i62 << 1)] = c4_b_indexPairs->
        data[c4_i63 + ((sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0,
        0, MAX_uint32_T, c4_r2->data[c4_i62], 1, c4_i60) - 1) << 1)];
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_r2);
  c4_i64 = c4_b_indexPairs->size[0] * c4_b_indexPairs->size[1];
  c4_b_indexPairs->size[0] = 2;
  c4_b_indexPairs->size[1] = c4_c_indexPairs->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_b_indexPairs, c4_i64,
    &c4_ge_emlrtRTEI);
  c4_ab_loop_ub = c4_c_indexPairs->size[0] * c4_c_indexPairs->size[1] - 1;
  for (c4_i65 = 0; c4_i65 <= c4_ab_loop_ub; c4_i65++) {
    c4_b_indexPairs->data[c4_i65] = c4_c_indexPairs->data[c4_i65];
  }

  c4_emxFree_uint32_T(chartInstance, &c4_c_indexPairs);
  c4_b_end = c4_inds->size[1] - 1;
  c4_b_trueCount = 0;
  for (c4_d_i = 0; c4_d_i <= c4_b_end; c4_d_i++) {
    if (c4_inds->data[c4_d_i]) {
      c4_b_trueCount++;
    }
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r3, 2, &c4_hf_emlrtRTEI);
  c4_i66 = c4_r3->size[0] * c4_r3->size[1];
  c4_r3->size[0] = 1;
  c4_r3->size[1] = c4_b_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r3, c4_i66, &c4_ee_emlrtRTEI);
  c4_b_partialTrueCount = 0;
  for (c4_e_i = 0; c4_e_i <= c4_b_end; c4_e_i++) {
    if (c4_inds->data[c4_e_i]) {
      c4_r3->data[c4_b_partialTrueCount] = c4_e_i + 1;
      c4_b_partialTrueCount++;
    }
  }

  c4_emxInit_real32_T(chartInstance, &c4_b_topTwoMetrics, 2, &c4_he_emlrtRTEI);
  c4_i67 = c4_topTwoMetrics->size[0];
  c4_i68 = c4_topTwoMetrics->size[1];
  c4_i69 = c4_i67 - 1;
  c4_i70 = c4_b_topTwoMetrics->size[0] * c4_b_topTwoMetrics->size[1];
  c4_b_topTwoMetrics->size[0] = c4_i69 + 1;
  c4_b_topTwoMetrics->size[1] = c4_r3->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_topTwoMetrics, c4_i70,
    &c4_he_emlrtRTEI);
  c4_bb_loop_ub = c4_r3->size[1] - 1;
  for (c4_i71 = 0; c4_i71 <= c4_bb_loop_ub; c4_i71++) {
    c4_cb_loop_ub = c4_i69;
    for (c4_i73 = 0; c4_i73 <= c4_cb_loop_ub; c4_i73++) {
      c4_b_topTwoMetrics->data[c4_i73 + c4_b_topTwoMetrics->size[0] * c4_i71] =
        c4_topTwoMetrics->data[c4_i73 + c4_topTwoMetrics->size[0] *
        (sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, c4_r3->data[c4_i71], 1, c4_i68) - 1)];
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_r3);
  c4_i72 = c4_topTwoMetrics->size[0] * c4_topTwoMetrics->size[1];
  c4_topTwoMetrics->size[0] = c4_b_topTwoMetrics->size[0];
  c4_topTwoMetrics->size[1] = c4_b_topTwoMetrics->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_topTwoMetrics, c4_i72,
    &c4_ie_emlrtRTEI);
  c4_db_loop_ub = c4_b_topTwoMetrics->size[0] * c4_b_topTwoMetrics->size[1] - 1;
  for (c4_i74 = 0; c4_i74 <= c4_db_loop_ub; c4_i74++) {
    c4_topTwoMetrics->data[c4_i74] = c4_b_topTwoMetrics->data[c4_i74];
  }

  c4_emxFree_real32_T(chartInstance, &c4_b_topTwoMetrics);
  c4_e_N2 = c4_N2;
  c4_emxInit_real32_T(chartInstance, &c4_i_y, 2, &c4_te_emlrtRTEI);
  if ((real_T)c4_e_N2 > 1.0) {
    c4_emxInit_real32_T(chartInstance, &c4_topTwoScores, 2, &c4_ke_emlrtRTEI);
    c4_i76 = c4_topTwoScores->size[0] * c4_topTwoScores->size[1];
    c4_topTwoScores->size[0] = c4_topTwoMetrics->size[0];
    c4_topTwoScores->size[1] = c4_topTwoMetrics->size[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, c4_topTwoScores, c4_i76,
      &c4_ke_emlrtRTEI);
    c4_fb_loop_ub = c4_topTwoMetrics->size[0] * c4_topTwoMetrics->size[1] - 1;
    for (c4_i78 = 0; c4_i78 <= c4_fb_loop_ub; c4_i78++) {
      c4_topTwoScores->data[c4_i78] = c4_topTwoMetrics->data[c4_i78];
    }

    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 2,
      1, c4_topTwoScores->size[0]);
    c4_i79 = c4_topTwoScores->size[1] - 1;
    c4_i80 = c4_inds->size[0] * c4_inds->size[1];
    c4_inds->size[0] = 1;
    c4_inds->size[1] = c4_i79 + 1;
    c4_emxEnsureCapacity_boolean_T1(chartInstance, c4_inds, c4_i80,
      &c4_le_emlrtRTEI);
    c4_gb_loop_ub = c4_i79;
    for (c4_i82 = 0; c4_i82 <= c4_gb_loop_ub; c4_i82++) {
      c4_inds->data[c4_i82] = (c4_topTwoScores->data[1 + c4_topTwoScores->size[0]
        * c4_i82] < 1.0E-6F);
    }

    c4_i83 = c4_topTwoScores->size[0];
    c4_tmp_size[0] = c4_i83;
    c4_hb_loop_ub = c4_i83 - 1;
    for (c4_i84 = 0; c4_i84 <= c4_hb_loop_ub; c4_i84++) {
      c4_tmp_data[c4_i84] = 1 + c4_i84;
    }

    c4_d_end = c4_inds->size[1] - 1;
    c4_d_trueCount = 0;
    for (c4_h_i = 0; c4_h_i <= c4_d_end; c4_h_i++) {
      if (c4_inds->data[c4_h_i]) {
        c4_d_trueCount++;
      }
    }

    c4_emxInit_int32_T1(chartInstance, &c4_r5, 2, &c4_lf_emlrtRTEI);
    c4_i87 = c4_r5->size[0] * c4_r5->size[1];
    c4_r5->size[0] = 1;
    c4_r5->size[1] = c4_d_trueCount;
    c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r5, c4_i87, &c4_pe_emlrtRTEI);
    c4_d_partialTrueCount = 0;
    for (c4_i_i = 0; c4_i_i <= c4_d_end; c4_i_i++) {
      if (c4_inds->data[c4_i_i]) {
        c4_r5->data[c4_d_partialTrueCount] = c4_i_i + 1;
        c4_d_partialTrueCount++;
      }
    }

    c4_iv2[0] = c4_tmp_size[0];
    c4_iv2[1] = c4_r5->size[1];
    c4_i92 = c4_topTwoScores->size[1];
    c4_kb_loop_ub = c4_iv2[1] - 1;
    for (c4_i93 = 0; c4_i93 <= c4_kb_loop_ub; c4_i93++) {
      c4_lb_loop_ub = c4_iv2[0] - 1;
      for (c4_i94 = 0; c4_i94 <= c4_lb_loop_ub; c4_i94++) {
        c4_topTwoScores->data[(c4_tmp_data[c4_i94] + c4_topTwoScores->size[0] *
          (sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, c4_r5->data[c4_i93], 1, c4_i92) - 1)) - 1] = 1.0F;
      }
    }

    c4_emxFree_int32_T(chartInstance, &c4_r5);
    c4_emxInit_real32_T(chartInstance, &c4_ratios, 2, &c4_xe_emlrtRTEI);
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c4_topTwoScores->size[0]);
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 2,
      1, c4_topTwoScores->size[0]);
    c4_i95 = c4_topTwoScores->size[1] - 1;
    c4_i97 = c4_ratios->size[0] * c4_ratios->size[1];
    c4_ratios->size[0] = 1;
    c4_ratios->size[1] = c4_i95 + 1;
    c4_emxEnsureCapacity_real32_T(chartInstance, c4_ratios, c4_i97,
      &c4_re_emlrtRTEI);
    c4_mb_loop_ub = c4_i95;
    for (c4_i98 = 0; c4_i98 <= c4_mb_loop_ub; c4_i98++) {
      c4_ratios->data[c4_i98] = c4_topTwoScores->data[c4_topTwoScores->size[0] *
        c4_i98];
    }

    c4_i99 = c4_topTwoScores->size[1] - 1;
    c4_i100 = c4_i_y->size[0] * c4_i_y->size[1];
    c4_i_y->size[0] = 1;
    c4_i_y->size[1] = c4_i99 + 1;
    c4_emxEnsureCapacity_real32_T(chartInstance, c4_i_y, c4_i100,
      &c4_te_emlrtRTEI);
    c4_nb_loop_ub = c4_i99;
    for (c4_i102 = 0; c4_i102 <= c4_nb_loop_ub; c4_i102++) {
      c4_i_y->data[c4_i102] = c4_topTwoScores->data[1 + c4_topTwoScores->size[0]
        * c4_i102];
    }

    c4_emxFree_real32_T(chartInstance, &c4_topTwoScores);
    for (c4_i104 = 0; c4_i104 < 2; c4_i104++) {
      c4_b_varargin_1[c4_i104] = (real_T)c4_ratios->size[c4_i104];
    }

    for (c4_i106 = 0; c4_i106 < 2; c4_i106++) {
      c4_b_varargin_2[c4_i106] = (real_T)c4_i_y->size[c4_i106];
    }

    c4_p = false;
    c4_b_p = true;
    c4_k = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_k < 2)) {
      c4_b_k = (real_T)c4_k + 1.0;
      c4_x1 = c4_b_varargin_1[(int32_T)c4_b_k - 1];
      c4_x2 = c4_b_varargin_2[(int32_T)c4_b_k - 1];
      c4_d_p = (c4_x1 == c4_x2);
      if (!c4_d_p) {
        c4_b_p = false;
        c4_exitg1 = true;
      } else {
        c4_k++;
      }
    }

    if (c4_b_p) {
      c4_p = true;
    }

    if (c4_p) {
      c4_c_p = true;
    } else {
      c4_c_p = false;
    }

    c4_e_p = c4_c_p;
    if (!c4_e_p) {
      c4_j_y = NULL;
      sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        15), false);
      c4_k_y = NULL;
      sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        15), false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_j_y, 14,
                  sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U,
        14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14,
                        c4_k_y)));
    }

    c4_i109 = c4_ratios->size[0] * c4_ratios->size[1];
    c4_i110 = c4_ratios->size[0] * c4_ratios->size[1];
    c4_ratios->size[0] = 1;
    c4_emxEnsureCapacity_real32_T(chartInstance, c4_ratios, c4_i110,
      &c4_xe_emlrtRTEI);
    c4_i111 = c4_i109;
    c4_qb_loop_ub = c4_i111 - 1;
    for (c4_i112 = 0; c4_i112 <= c4_qb_loop_ub; c4_i112++) {
      c4_ratios->data[c4_i112] /= c4_i_y->data[c4_i112];
    }

    c4_i114 = c4_inds->size[0] * c4_inds->size[1];
    c4_inds->size[0] = 1;
    c4_inds->size[1] = c4_ratios->size[1];
    c4_emxEnsureCapacity_boolean_T1(chartInstance, c4_inds, c4_i114,
      &c4_ye_emlrtRTEI);
    c4_sb_loop_ub = c4_ratios->size[0] * c4_ratios->size[1] - 1;
    for (c4_i116 = 0; c4_i116 <= c4_sb_loop_ub; c4_i116++) {
      c4_inds->data[c4_i116] = ((real_T)c4_ratios->data[c4_i116] <= 0.6);
    }

    c4_emxFree_real32_T(chartInstance, &c4_ratios);
  } else {
    c4_i75 = c4_inds->size[0] * c4_inds->size[1];
    c4_inds->size[0] = 1;
    c4_inds->size[1] = c4_topTwoMetrics->size[1];
    c4_emxEnsureCapacity_boolean_T1(chartInstance, c4_inds, c4_i75,
      &c4_je_emlrtRTEI);
    c4_eb_loop_ub = c4_topTwoMetrics->size[1] - 1;
    for (c4_i77 = 0; c4_i77 <= c4_eb_loop_ub; c4_i77++) {
      c4_inds->data[c4_i77] = true;
    }
  }

  c4_c_end = c4_inds->size[1] - 1;
  c4_c_trueCount = 0;
  for (c4_f_i = 0; c4_f_i <= c4_c_end; c4_f_i++) {
    if (c4_inds->data[c4_f_i]) {
      c4_c_trueCount++;
    }
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r4, 2, &c4_if_emlrtRTEI);
  c4_i81 = c4_r4->size[0] * c4_r4->size[1];
  c4_r4->size[0] = 1;
  c4_r4->size[1] = c4_c_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r4, c4_i81, &c4_me_emlrtRTEI);
  c4_c_partialTrueCount = 0;
  for (c4_g_i = 0; c4_g_i <= c4_c_end; c4_g_i++) {
    if (c4_inds->data[c4_g_i]) {
      c4_r4->data[c4_c_partialTrueCount] = c4_g_i + 1;
      c4_c_partialTrueCount++;
    }
  }

  c4_emxInit_uint32_T(chartInstance, &c4_d_indexPairs, 2, &c4_oe_emlrtRTEI);
  c4_i85 = c4_b_indexPairs->size[1];
  c4_i86 = c4_d_indexPairs->size[0] * c4_d_indexPairs->size[1];
  c4_d_indexPairs->size[0] = 2;
  c4_d_indexPairs->size[1] = c4_r4->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_d_indexPairs, c4_i86,
    &c4_oe_emlrtRTEI);
  c4_ib_loop_ub = c4_r4->size[1] - 1;
  for (c4_i88 = 0; c4_i88 <= c4_ib_loop_ub; c4_i88++) {
    for (c4_i89 = 0; c4_i89 < 2; c4_i89++) {
      c4_d_indexPairs->data[c4_i89 + (c4_i88 << 1)] = c4_b_indexPairs->
        data[c4_i89 + ((sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0,
        0, MAX_uint32_T, c4_r4->data[c4_i88], 1, c4_i85) - 1) << 1)];
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_r4);
  c4_i90 = c4_b_indexPairs->size[0] * c4_b_indexPairs->size[1];
  c4_b_indexPairs->size[0] = 2;
  c4_b_indexPairs->size[1] = c4_d_indexPairs->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_b_indexPairs, c4_i90,
    &c4_qe_emlrtRTEI);
  c4_jb_loop_ub = c4_d_indexPairs->size[0] * c4_d_indexPairs->size[1] - 1;
  for (c4_i91 = 0; c4_i91 <= c4_jb_loop_ub; c4_i91++) {
    c4_b_indexPairs->data[c4_i91] = c4_d_indexPairs->data[c4_i91];
  }

  c4_emxFree_uint32_T(chartInstance, &c4_d_indexPairs);
  sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1, 1,
    c4_topTwoMetrics->size[0]);
  c4_e_end = c4_inds->size[1] - 1;
  c4_e_trueCount = 0;
  for (c4_j_i = 0; c4_j_i <= c4_e_end; c4_j_i++) {
    if (c4_inds->data[c4_j_i]) {
      c4_e_trueCount++;
    }
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r6, 2, &c4_jf_emlrtRTEI);
  c4_i96 = c4_r6->size[0] * c4_r6->size[1];
  c4_r6->size[0] = 1;
  c4_r6->size[1] = c4_e_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r6, c4_i96, &c4_me_emlrtRTEI);
  c4_e_partialTrueCount = 0;
  for (c4_k_i = 0; c4_k_i <= c4_e_end; c4_k_i++) {
    if (c4_inds->data[c4_k_i]) {
      c4_r6->data[c4_e_partialTrueCount] = c4_k_i + 1;
      c4_e_partialTrueCount++;
    }
  }

  c4_c_topTwoMetrics = c4_topTwoMetrics->size[1];
  c4_i101 = c4_i_y->size[0] * c4_i_y->size[1];
  c4_i_y->size[0] = 1;
  c4_i_y->size[1] = c4_r6->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_i_y, c4_i101, &c4_se_emlrtRTEI);
  c4_ob_loop_ub = c4_r6->size[1] - 1;
  for (c4_i103 = 0; c4_i103 <= c4_ob_loop_ub; c4_i103++) {
    c4_i_y->data[c4_i103] = c4_topTwoMetrics->data[c4_topTwoMetrics->size[0] *
      (sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T,
        c4_r6->data[c4_i103], 1, c4_c_topTwoMetrics) - 1)];
  }

  c4_emxFree_int32_T(chartInstance, &c4_r6);
  c4_emxFree_real32_T(chartInstance, &c4_topTwoMetrics);
  c4_i105 = c4_inds->size[0] * c4_inds->size[1];
  c4_inds->size[0] = 1;
  c4_inds->size[1] = c4_b_indexPairs->size[1];
  c4_emxEnsureCapacity_boolean_T1(chartInstance, c4_inds, c4_i105,
    &c4_ue_emlrtRTEI);
  c4_pb_loop_ub = c4_b_indexPairs->size[1] - 1;
  for (c4_i107 = 0; c4_i107 <= c4_pb_loop_ub; c4_i107++) {
    c4_inds->data[c4_i107] = true;
  }

  c4_sizes[0] = 1;
  c4_sizes[1] = c4_b_indexPairs->size[1];
  c4_f_end = c4_sizes[1] - 1;
  c4_f_trueCount = 0;
  for (c4_l_i = 0; c4_l_i <= c4_f_end; c4_l_i++) {
    c4_f_trueCount++;
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r7, 2, &c4_cf_emlrtRTEI);
  c4_i108 = c4_r7->size[0] * c4_r7->size[1];
  c4_r7->size[0] = 1;
  c4_r7->size[1] = c4_f_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r7, c4_i108, &c4_ve_emlrtRTEI);
  c4_f_partialTrueCount = 0;
  for (c4_m_i = 1; c4_m_i - 1 <= c4_f_end; c4_m_i++) {
    c4_r7->data[c4_f_partialTrueCount] = c4_m_i;
    c4_f_partialTrueCount++;
  }

  c4_e_indexPairs = c4_b_indexPairs->size[1];
  c4_i113 = c4_indexPairs->size[0] * c4_indexPairs->size[1];
  c4_indexPairs->size[0] = 2;
  c4_indexPairs->size[1] = c4_r7->size[1];
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_indexPairs, c4_i113,
    &c4_we_emlrtRTEI);
  c4_rb_loop_ub = c4_r7->size[1] - 1;
  for (c4_i115 = 0; c4_i115 <= c4_rb_loop_ub; c4_i115++) {
    for (c4_i117 = 0; c4_i117 < 2; c4_i117++) {
      c4_indexPairs->data[c4_i117 + (c4_i115 << 1)] = c4_b_indexPairs->
        data[c4_i117 + ((sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0,
        0, MAX_uint32_T, c4_r7->data[c4_i115], 1, c4_e_indexPairs) - 1) << 1)];
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_r7);
  c4_emxFree_uint32_T(chartInstance, &c4_b_indexPairs);
  c4_g_end = c4_inds->size[1] - 1;
  c4_g_trueCount = 0;
  for (c4_n_i = 0; c4_n_i <= c4_g_end; c4_n_i++) {
    if (c4_inds->data[c4_n_i]) {
      c4_g_trueCount++;
    }
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r8, 2, &c4_df_emlrtRTEI);
  c4_i118 = c4_r8->size[0] * c4_r8->size[1];
  c4_r8->size[0] = 1;
  c4_r8->size[1] = c4_g_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r8, c4_i118, &c4_ve_emlrtRTEI);
  c4_g_partialTrueCount = 0;
  for (c4_o_i = 0; c4_o_i <= c4_g_end; c4_o_i++) {
    if (c4_inds->data[c4_o_i]) {
      c4_r8->data[c4_g_partialTrueCount] = c4_o_i + 1;
      c4_g_partialTrueCount++;
    }
  }

  c4_emxFree_boolean_T(chartInstance, &c4_inds);
  c4_l_y = c4_i_y->size[1];
  c4_i119 = c4_matchMetric->size[0] * c4_matchMetric->size[1];
  c4_matchMetric->size[0] = 1;
  c4_matchMetric->size[1] = c4_r8->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_matchMetric, c4_i119,
    &c4_af_emlrtRTEI);
  c4_tb_loop_ub = c4_r8->size[1] - 1;
  for (c4_i120 = 0; c4_i120 <= c4_tb_loop_ub; c4_i120++) {
    c4_matchMetric->data[c4_i120] = c4_i_y->data[sf_eml_array_bounds_check(NULL,
      chartInstance->S, 1U, 0, 0, MAX_uint32_T, c4_r8->data[c4_i120], 1, c4_l_y)
      - 1];
  }

  c4_emxFree_real32_T(chartInstance, &c4_i_y);
  c4_emxFree_int32_T(chartInstance, &c4_r8);
}

static void c4_partialSort(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_x, c4_emxArray_real32_T *c4_values,
  c4_emxArray_uint32_T *c4_indices)
{
  real_T c4_n;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_emxArray_real_T *c4_b_indices;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  boolean_T c4_b;
  boolean_T c4_b1;
  real_T c4_b_x;
  int32_T c4_i4;
  real_T c4_c_x;
  real_T c4_d_x;
  real_T c4_e_x;
  int32_T c4_c_loop_ub;
  real_T c4_f_x;
  real_T c4_f;
  int32_T c4_i5;
  real_T c4_fdbl;
  int32_T c4_eint;
  real_T c4_t;
  real_T c4_d;
  real_T c4_inte;
  c4_emxArray_real32_T *c4_xSorted;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_b_i;
  c4_emxArray_real_T *c4_inds;
  uint32_T c4_c_u;
  c4_emxArray_real_T *c4_indx;
  c4_emxArray_real_T *c4_varargin_2;
  int32_T c4_d_loop_ub;
  c4_emxArray_int32_T *c4_idx;
  int32_T c4_i8;
  c4_emxArray_int32_T *c4_b_b;
  c4_emxArray_real32_T *c4_ex;
  c4_emxArray_real_T *c4_b_inds;
  c4_emxArray_int32_T *c4_b_idx;
  c4_emxArray_int32_T *c4_iidx;
  c4_emxArray_real_T *c4_b_varargin_2;
  c4_emxArray_real_T *c4_c_inds;
  int32_T c4_i9;
  real_T c4_c_i;
  int32_T c4_e_loop_ub;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i10;
  int32_T c4_m;
  static char_T c4_b_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T c4_b_n;
  const mxArray *c4_e_y = NULL;
  int32_T c4_siz[2];
  boolean_T c4_b2;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_i17;
  int32_T c4_h_loop_ub;
  int32_T c4_i18;
  int32_T c4_i19;
  real_T c4_d1;
  int32_T c4_c_b;
  int32_T c4_i_loop_ub;
  int32_T c4_i20;
  int32_T c4_d_b;
  boolean_T c4_b3;
  int32_T c4_i21;
  uint32_T c4_u1;
  boolean_T c4_overflow;
  int32_T c4_i22;
  int32_T c4_j_loop_ub;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_d_i;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_e_b;
  int32_T c4_e_i;
  int32_T c4_k_loop_ub;
  int32_T c4_f_b;
  int32_T c4_i29;
  int32_T c4_l_loop_ub;
  int32_T c4_i30;
  boolean_T c4_b_overflow;
  int32_T c4_m_loop_ub;
  int32_T c4_i31;
  int32_T c4_iv[2];
  int32_T c4_j;
  int32_T c4_iv1[2];
  int32_T c4_i32;
  int32_T c4_g_b;
  int32_T c4_n_loop_ub;
  int32_T c4_h_b;
  int32_T c4_i33;
  boolean_T c4_c_overflow;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_f_i;
  int32_T c4_o_loop_ub;
  int32_T c4_i37;
  real32_T c4_a;
  int32_T c4_iv2[2];
  real32_T c4_i_b;
  real32_T c4_b_a;
  real32_T c4_j_b;
  int32_T c4_iv3[2];
  real32_T c4_g_x;
  boolean_T c4_k_b;
  int32_T c4_i38;
  int32_T c4_p_loop_ub;
  real32_T c4_h_x;
  boolean_T c4_p;
  int32_T c4_i39;
  boolean_T c4_l_b;
  real_T c4_b_d;
  real_T c4_m_b;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_q_loop_ub;
  int32_T c4_i42;
  int32_T c4_i43;
  real_T c4_b_siz[2];
  int32_T c4_g_i;
  int32_T c4_i44;
  int32_T c4_r_loop_ub;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_hi;
  int32_T c4_i47;
  int32_T c4_s_loop_ub;
  int32_T c4_i48;
  const mxArray *c4_f_y = NULL;
  int32_T c4_i49;
  static char_T c4_b_cv1[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O',
    'f', 'R', 'a', 'n', 'g', 'e' };

  const mxArray *c4_g_y = NULL;
  int32_T c4_i50;
  boolean_T c4_b_p;
  real_T c4_c_varargin_2[2];
  boolean_T c4_c_p;
  int32_T c4_k;
  boolean_T c4_exitg1;
  real_T c4_b_k;
  real_T c4_x1;
  real_T c4_x2;
  const mxArray *c4_h_y = NULL;
  boolean_T c4_d_p;
  static char_T c4_b_cv2[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't',
    'V', 'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

  int32_T c4_i51;
  const mxArray *c4_i_y = NULL;
  int32_T c4_t_loop_ub;
  int32_T c4_i52;
  const mxArray *c4_j_y = NULL;
  int32_T c4_psiz;
  int32_T c4_i53;
  const mxArray *c4_k_y = NULL;
  int32_T c4_u_loop_ub;
  int32_T c4_i54;
  int32_T c4_c_a;
  int32_T c4_i55;
  int32_T c4_v_loop_ub;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_w_loop_ub;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_x_loop_ub;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_y_loop_ub;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i_x;
  int32_T c4_ab_loop_ub;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_bb_loop_ub;
  int32_T c4_i70;
  c4_n = 2.0;
  if (2.0 > (real_T)c4_x->size[1]) {
    c4_n = (real_T)c4_x->size[1];
  }

  c4_i = c4_values->size[0] * c4_values->size[1];
  c4_values->size[0] = (int32_T)c4_n;
  c4_values->size[1] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_values, c4_i, &c4_nf_emlrtRTEI);
  c4_loop_ub = (int32_T)c4_n * c4_x->size[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_values->data[c4_i1] = 0.0F;
  }

  c4_emxInit_real_T(chartInstance, &c4_b_indices, 2, &c4_kg_emlrtRTEI);
  c4_i2 = c4_b_indices->size[0] * c4_b_indices->size[1];
  c4_b_indices->size[0] = (int32_T)c4_n;
  c4_b_indices->size[1] = c4_x->size[0];
  c4_emxEnsureCapacity_real_T(chartInstance, c4_b_indices, c4_i2,
    &c4_of_emlrtRTEI);
  c4_b_loop_ub = (int32_T)c4_n * c4_x->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_indices->data[c4_i3] = 0.0;
  }

  c4_b = (c4_x->size[0] == 0);
  c4_b1 = (c4_x->size[1] == 0);
  if (c4_b || c4_b1) {
    c4_i4 = c4_indices->size[0] * c4_indices->size[1];
    c4_indices->size[0] = c4_b_indices->size[0];
    c4_indices->size[1] = c4_b_indices->size[1];
    c4_emxEnsureCapacity_uint32_T(chartInstance, c4_indices, c4_i4,
      &c4_pf_emlrtRTEI);
    c4_c_loop_ub = c4_b_indices->size[0] * c4_b_indices->size[1] - 1;
    for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
      c4_d = muDoubleScalarRound(c4_b_indices->data[c4_i5]);
      if (c4_d < 4.294967296E+9) {
        if (c4_d >= 0.0) {
          c4_c_u = (uint32_T)c4_d;
        } else {
          c4_c_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c4_d >= 4.294967296E+9) {
        c4_c_u = MAX_uint32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c4_c_u = 0U;
      }

      c4_indices->data[c4_i5] = c4_c_u;
    }
  } else {
    c4_b_x = (real_T)c4_x->size[1];
    c4_c_x = c4_b_x;
    c4_d_x = c4_c_x;
    c4_e_x = c4_d_x;
    if (c4_e_x == 0.0) {
      c4_f = rtMinusInf;
    } else {
      c4_f_x = c4_e_x;
      c4_fdbl = frexp(c4_f_x, &c4_eint);
      c4_t = c4_fdbl;
      c4_inte = (real_T)c4_eint;
      if (c4_t == 0.5) {
        c4_f = c4_inte - 1.0;
      } else if ((c4_inte == 1.0) && (c4_t < 0.75)) {
        c4_f = muDoubleScalarLog(2.0 * c4_t) / 0.69314718055994529;
      } else {
        c4_f = muDoubleScalarLog(c4_t) / 0.69314718055994529 + c4_inte;
      }
    }

    if (c4_n < c4_f) {
      c4_i6 = (int32_T)c4_n - 1;
      c4_b_i = 0;
      c4_emxInit_real_T(chartInstance, &c4_inds, 2, &c4_hg_emlrtRTEI);
      c4_emxInit_real_T1(chartInstance, &c4_indx, 1, &c4_jg_emlrtRTEI);
      c4_emxInit_real_T(chartInstance, &c4_varargin_2, 2, &c4_bg_emlrtRTEI);
      c4_emxInit_int32_T1(chartInstance, &c4_idx, 2, &c4_lg_emlrtRTEI);
      c4_emxInit_int32_T1(chartInstance, &c4_b_b, 2, &c4_eg_emlrtRTEI);
      c4_emxInit_real32_T1(chartInstance, &c4_ex, 1, &c4_jg_emlrtRTEI);
      c4_emxInit_int32_T(chartInstance, &c4_b_idx, 1, &c4_jg_emlrtRTEI);
      c4_emxInit_real_T(chartInstance, &c4_b_varargin_2, 2, &c4_cg_emlrtRTEI);
      c4_emxInit_real_T(chartInstance, &c4_c_inds, 2, &c4_cg_emlrtRTEI);
      while (c4_b_i <= c4_i6) {
        c4_c_i = (real_T)c4_b_i + 1.0;
        if (!((real_T)c4_x->size[1] >= 1.0)) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_d_y,
                      14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U,
            1U, 14, c4_e_y)));
        }

        c4_m = c4_x->size[0];
        c4_b_n = c4_x->size[1];
        c4_siz[0] = c4_m;
        c4_siz[1] = 1;
        c4_i11 = c4_ex->size[0];
        c4_ex->size[0] = c4_siz[0];
        c4_emxEnsureCapacity_real32_T1(chartInstance, c4_ex, c4_i11,
          &c4_tf_emlrtRTEI);
        c4_i15 = c4_b_idx->size[0];
        c4_b_idx->size[0] = c4_m;
        c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_idx, c4_i15,
          &c4_uf_emlrtRTEI);
        c4_f_loop_ub = c4_m - 1;
        for (c4_i17 = 0; c4_i17 <= c4_f_loop_ub; c4_i17++) {
          c4_b_idx->data[c4_i17] = 1;
        }

        if (c4_m >= 1) {
          c4_c_b = c4_m;
          c4_d_b = c4_c_b;
          if (1 > c4_d_b) {
            c4_overflow = false;
          } else {
            c4_overflow = (c4_d_b > 2147483646);
          }

          if (c4_overflow) {
            c4_check_forloop_overflow_error(chartInstance, true);
          }

          for (c4_d_i = 1; c4_d_i - 1 < c4_m; c4_d_i++) {
            c4_e_i = c4_d_i - 1;
            c4_ex->data[c4_e_i] = c4_x->data[c4_e_i];
          }

          c4_e_b = c4_b_n;
          c4_f_b = c4_e_b;
          if (2 > c4_f_b) {
            c4_b_overflow = false;
          } else {
            c4_b_overflow = (c4_f_b > 2147483646);
          }

          if (c4_b_overflow) {
            c4_check_forloop_overflow_error(chartInstance, true);
          }

          for (c4_j = 1; c4_j < c4_b_n; c4_j++) {
            c4_g_b = c4_m;
            c4_h_b = c4_g_b;
            if (1 > c4_h_b) {
              c4_c_overflow = false;
            } else {
              c4_c_overflow = (c4_h_b > 2147483646);
            }

            if (c4_c_overflow) {
              c4_check_forloop_overflow_error(chartInstance, true);
            }

            for (c4_f_i = 1; c4_f_i - 1 < c4_m; c4_f_i++) {
              c4_e_i = c4_f_i - 1;
              c4_a = c4_ex->data[c4_e_i];
              c4_i_b = c4_x->data[c4_e_i + c4_x->size[0] * c4_j];
              c4_b_a = c4_a;
              c4_j_b = c4_i_b;
              c4_g_x = c4_j_b;
              c4_k_b = muSingleScalarIsNaN(c4_g_x);
              if (c4_k_b) {
                c4_p = false;
              } else {
                c4_h_x = c4_b_a;
                c4_l_b = muSingleScalarIsNaN(c4_h_x);
                if (c4_l_b) {
                  c4_p = true;
                } else {
                  c4_p = (c4_b_a > c4_j_b);
                }
              }

              if (c4_p) {
                c4_ex->data[c4_e_i] = c4_x->data[c4_e_i + c4_x->size[0] * c4_j];
                c4_b_idx->data[c4_e_i] = c4_j + 1;
              }
            }
          }
        }

        c4_i20 = c4_indx->size[0];
        c4_indx->size[0] = c4_b_idx->size[0];
        c4_emxEnsureCapacity_real_T1(chartInstance, c4_indx, c4_i20,
          &c4_vf_emlrtRTEI);
        c4_j_loop_ub = c4_b_idx->size[0] - 1;
        for (c4_i23 = 0; c4_i23 <= c4_j_loop_ub; c4_i23++) {
          c4_indx->data[c4_i23] = (real_T)c4_b_idx->data[c4_i23];
        }

        c4_i26 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c4_c_i, 1, c4_values->size[0]);
        c4_i27 = c4_values->size[1] - 1;
        c4_i28 = c4_b_idx->size[0];
        c4_b_idx->size[0] = c4_i27 + 1;
        c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_idx, c4_i28,
          &c4_xf_emlrtRTEI);
        c4_l_loop_ub = c4_i27;
        for (c4_i30 = 0; c4_i30 <= c4_l_loop_ub; c4_i30++) {
          c4_b_idx->data[c4_i30] = c4_i30;
        }

        c4_iv[0] = 1;
        c4_iv[1] = c4_b_idx->size[0];
        sf_mex_lw_sub_assign_size_check_nd(c4_iv, 2, *(int32_T (*)[1])
          c4_ex->size, 1);
        c4_iv1[0] = 1;
        c4_iv1[1] = c4_b_idx->size[0];
        c4_i32 = c4_i26 - 1;
        c4_n_loop_ub = c4_iv1[1] - 1;
        for (c4_i33 = 0; c4_i33 <= c4_n_loop_ub; c4_i33++) {
          c4_values->data[c4_i32 + c4_values->size[0] * c4_b_idx->data[c4_i33]] =
            c4_ex->data[c4_i33];
        }

        c4_i34 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c4_c_i, 1, c4_b_indices->size[0]);
        c4_i35 = c4_b_indices->size[1] - 1;
        c4_i36 = c4_b_idx->size[0];
        c4_b_idx->size[0] = c4_i35 + 1;
        c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_idx, c4_i36,
          &c4_ag_emlrtRTEI);
        c4_o_loop_ub = c4_i35;
        for (c4_i37 = 0; c4_i37 <= c4_o_loop_ub; c4_i37++) {
          c4_b_idx->data[c4_i37] = c4_i37;
        }

        c4_iv2[0] = 1;
        c4_iv2[1] = c4_b_idx->size[0];
        sf_mex_lw_sub_assign_size_check_nd(c4_iv2, 2, *(int32_T (*)[1])
          c4_indx->size, 1);
        c4_iv3[0] = 1;
        c4_iv3[1] = c4_b_idx->size[0];
        c4_i38 = c4_i34 - 1;
        c4_p_loop_ub = c4_iv3[1] - 1;
        for (c4_i39 = 0; c4_i39 <= c4_p_loop_ub; c4_i39++) {
          c4_b_indices->data[c4_i38 + c4_b_indices->size[0] * c4_b_idx->
            data[c4_i39]] = c4_indx->data[c4_i39];
        }

        c4_b_d = (real_T)c4_x->size[0];
        c4_m_b = c4_b_d;
        if (c4_m_b < 1.0) {
          c4_inds->size[0] = 1;
          c4_inds->size[1] = 0;
        } else {
          c4_i40 = c4_inds->size[0] * c4_inds->size[1];
          c4_inds->size[0] = 1;
          c4_inds->size[1] = (int32_T)muDoubleScalarFloor(c4_m_b - 1.0) + 1;
          c4_emxEnsureCapacity_real_T(chartInstance, c4_inds, c4_i40,
            &c4_wd_emlrtRTEI);
          c4_q_loop_ub = (int32_T)muDoubleScalarFloor(c4_m_b - 1.0);
          for (c4_i42 = 0; c4_i42 <= c4_q_loop_ub; c4_i42++) {
            c4_inds->data[c4_i42] = 1.0 + (real_T)c4_i42;
          }
        }

        for (c4_i41 = 0; c4_i41 < 2; c4_i41++) {
          c4_b_siz[c4_i41] = (real_T)c4_x->size[c4_i41];
        }

        c4_i43 = c4_b_indices->size[1] - 1;
        c4_g_i = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c4_c_i, 1, c4_b_indices->size[0]) - 1;
        c4_i44 = c4_varargin_2->size[0] * c4_varargin_2->size[1];
        c4_varargin_2->size[0] = 1;
        c4_varargin_2->size[1] = c4_i43 + 1;
        c4_emxEnsureCapacity_real_T(chartInstance, c4_varargin_2, c4_i44,
          &c4_bg_emlrtRTEI);
        c4_r_loop_ub = c4_i43;
        for (c4_i45 = 0; c4_i45 <= c4_r_loop_ub; c4_i45++) {
          c4_varargin_2->data[c4_i45] = c4_b_indices->data[c4_g_i +
            c4_b_indices->size[0] * c4_i45];
        }

        for (c4_i46 = 0; c4_i46 < 2; c4_i46++) {
          c4_siz[c4_i46] = (int32_T)c4_b_siz[c4_i46];
        }

        c4_hi = c4_siz[0];
        c4_i47 = c4_c_inds->size[0] * c4_c_inds->size[1];
        c4_c_inds->size[0] = 1;
        c4_c_inds->size[1] = c4_inds->size[1];
        c4_emxEnsureCapacity_real_T(chartInstance, c4_c_inds, c4_i47,
          &c4_cg_emlrtRTEI);
        c4_s_loop_ub = c4_inds->size[0] * c4_inds->size[1] - 1;
        for (c4_i48 = 0; c4_i48 <= c4_s_loop_ub; c4_i48++) {
          c4_c_inds->data[c4_i48] = c4_inds->data[c4_i48];
        }

        if (!c4_allinrange(chartInstance, c4_c_inds, 1.0, c4_hi)) {
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_f_y,
                      14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U,
            1U, 14, c4_g_y)));
        }

        for (c4_i49 = 0; c4_i49 < 2; c4_i49++) {
          c4_b_siz[c4_i49] = (real_T)c4_inds->size[c4_i49];
        }

        for (c4_i50 = 0; c4_i50 < 2; c4_i50++) {
          c4_c_varargin_2[c4_i50] = (real_T)c4_varargin_2->size[c4_i50];
        }

        c4_b_p = false;
        c4_c_p = true;
        c4_k = 0;
        c4_exitg1 = false;
        while ((!c4_exitg1) && (c4_k < 2)) {
          c4_b_k = (real_T)c4_k + 1.0;
          c4_x1 = c4_b_siz[(int32_T)c4_b_k - 1];
          c4_x2 = c4_c_varargin_2[(int32_T)c4_b_k - 1];
          c4_d_p = (c4_x1 == c4_x2);
          if (!c4_d_p) {
            c4_c_p = false;
            c4_exitg1 = true;
          } else {
            c4_k++;
          }
        }

        if (c4_c_p) {
          c4_b_p = true;
        }

        if (!c4_b_p) {
          c4_h_y = NULL;
          sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 34), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 34), false);
          sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_h_y,
                      14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U,
            1U, 14, c4_i_y)));
        }

        c4_hi = c4_siz[1];
        c4_i51 = c4_b_varargin_2->size[0] * c4_b_varargin_2->size[1];
        c4_b_varargin_2->size[0] = 1;
        c4_b_varargin_2->size[1] = c4_varargin_2->size[1];
        c4_emxEnsureCapacity_real_T(chartInstance, c4_b_varargin_2, c4_i51,
          &c4_cg_emlrtRTEI);
        c4_t_loop_ub = c4_varargin_2->size[0] * c4_varargin_2->size[1] - 1;
        for (c4_i52 = 0; c4_i52 <= c4_t_loop_ub; c4_i52++) {
          c4_b_varargin_2->data[c4_i52] = c4_varargin_2->data[c4_i52];
        }

        if (!c4_allinrange(chartInstance, c4_b_varargin_2, 1.0, c4_hi)) {
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_j_y,
                      14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U,
            1U, 14, c4_k_y)));
        }

        c4_psiz = c4_siz[0];
        c4_i53 = c4_idx->size[0] * c4_idx->size[1];
        c4_idx->size[0] = 1;
        c4_idx->size[1] = c4_inds->size[1];
        c4_emxEnsureCapacity_int32_T1(chartInstance, c4_idx, c4_i53,
          &c4_dg_emlrtRTEI);
        c4_u_loop_ub = c4_inds->size[0] * c4_inds->size[1] - 1;
        for (c4_i54 = 0; c4_i54 <= c4_u_loop_ub; c4_i54++) {
          c4_idx->data[c4_i54] = (int32_T)c4_inds->data[c4_i54];
        }

        c4_c_a = c4_psiz;
        c4_i55 = c4_b_b->size[0] * c4_b_b->size[1];
        c4_b_b->size[0] = 1;
        c4_b_b->size[1] = c4_varargin_2->size[1];
        c4_emxEnsureCapacity_int32_T1(chartInstance, c4_b_b, c4_i55,
          &c4_eg_emlrtRTEI);
        c4_v_loop_ub = c4_varargin_2->size[0] * c4_varargin_2->size[1] - 1;
        for (c4_i56 = 0; c4_i56 <= c4_v_loop_ub; c4_i56++) {
          c4_b_b->data[c4_i56] = (int32_T)c4_varargin_2->data[c4_i56] - 1;
        }

        c4_i57 = c4_b_b->size[0] * c4_b_b->size[1];
        c4_i58 = c4_b_b->size[0] * c4_b_b->size[1];
        c4_b_b->size[0] = 1;
        c4_emxEnsureCapacity_int32_T1(chartInstance, c4_b_b, c4_i58,
          &c4_fg_emlrtRTEI);
        c4_i59 = c4_i57;
        c4_w_loop_ub = c4_i59 - 1;
        for (c4_i60 = 0; c4_i60 <= c4_w_loop_ub; c4_i60++) {
          c4_b_b->data[c4_i60] *= c4_c_a;
        }

        c4_i61 = c4_idx->size[0] * c4_idx->size[1];
        c4_i62 = c4_idx->size[0] * c4_idx->size[1];
        c4_idx->size[0] = 1;
        c4_emxEnsureCapacity_int32_T1(chartInstance, c4_idx, c4_i62,
          &c4_gg_emlrtRTEI);
        c4_i63 = c4_i61;
        c4_x_loop_ub = c4_i63 - 1;
        for (c4_i64 = 0; c4_i64 <= c4_x_loop_ub; c4_i64++) {
          c4_idx->data[c4_i64] += c4_b_b->data[c4_i64];
        }

        c4_i65 = c4_inds->size[0] * c4_inds->size[1];
        c4_inds->size[0] = 1;
        c4_inds->size[1] = c4_idx->size[1];
        c4_emxEnsureCapacity_real_T(chartInstance, c4_inds, c4_i65,
          &c4_hg_emlrtRTEI);
        c4_y_loop_ub = c4_idx->size[0] * c4_idx->size[1] - 1;
        for (c4_i66 = 0; c4_i66 <= c4_y_loop_ub; c4_i66++) {
          c4_inds->data[c4_i66] = (real_T)c4_idx->data[c4_i66];
        }

        c4_i67 = c4_idx->size[0] * c4_idx->size[1];
        c4_idx->size[0] = 1;
        c4_idx->size[1] = c4_inds->size[1];
        c4_emxEnsureCapacity_int32_T1(chartInstance, c4_idx, c4_i67,
          &c4_ig_emlrtRTEI);
        c4_i_x = c4_x->size[0] * c4_x->size[1];
        c4_ab_loop_ub = c4_inds->size[0] * c4_inds->size[1] - 1;
        for (c4_i68 = 0; c4_i68 <= c4_ab_loop_ub; c4_i68++) {
          c4_idx->data[c4_i68] = sf_eml_array_bounds_check(NULL,
            chartInstance->S, 1U, 0, 0, MAX_uint32_T, (int32_T)c4_inds->
            data[c4_i68], 1, c4_i_x);
        }

        c4_i69 = c4_idx->size[0] * c4_idx->size[1];
        c4_bb_loop_ub = c4_i69 - 1;
        for (c4_i70 = 0; c4_i70 <= c4_bb_loop_ub; c4_i70++) {
          c4_x->data[c4_idx->data[c4_i70] - 1] = rtInfF;
        }

        c4_b_i++;
      }

      c4_emxFree_real_T(chartInstance, &c4_c_inds);
      c4_emxFree_real_T(chartInstance, &c4_b_varargin_2);
      c4_emxFree_int32_T(chartInstance, &c4_b_idx);
      c4_emxFree_real32_T(chartInstance, &c4_ex);
      c4_emxFree_int32_T(chartInstance, &c4_b_b);
      c4_emxFree_int32_T(chartInstance, &c4_idx);
      c4_emxFree_real_T(chartInstance, &c4_varargin_2);
      c4_emxFree_real_T(chartInstance, &c4_indx);
      c4_emxFree_real_T(chartInstance, &c4_inds);
    } else {
      c4_emxInit_real32_T(chartInstance, &c4_xSorted, 2, &c4_jg_emlrtRTEI);
      c4_i7 = c4_xSorted->size[0] * c4_xSorted->size[1];
      c4_xSorted->size[0] = c4_x->size[0];
      c4_xSorted->size[1] = c4_x->size[1];
      c4_emxEnsureCapacity_real32_T(chartInstance, c4_xSorted, c4_i7,
        &c4_qf_emlrtRTEI);
      c4_d_loop_ub = c4_x->size[0] * c4_x->size[1] - 1;
      for (c4_i8 = 0; c4_i8 <= c4_d_loop_ub; c4_i8++) {
        c4_xSorted->data[c4_i8] = c4_x->data[c4_i8];
      }

      c4_emxInit_real_T(chartInstance, &c4_b_inds, 2, &c4_jg_emlrtRTEI);
      c4_emxInit_int32_T1(chartInstance, &c4_iidx, 2, &c4_jg_emlrtRTEI);
      c4_b_sort(chartInstance, c4_xSorted, c4_iidx);
      c4_i9 = c4_b_inds->size[0] * c4_b_inds->size[1];
      c4_b_inds->size[0] = c4_iidx->size[0];
      c4_b_inds->size[1] = c4_iidx->size[1];
      c4_emxEnsureCapacity_real_T(chartInstance, c4_b_inds, c4_i9,
        &c4_sf_emlrtRTEI);
      c4_e_loop_ub = c4_iidx->size[0] * c4_iidx->size[1] - 1;
      for (c4_i10 = 0; c4_i10 <= c4_e_loop_ub; c4_i10++) {
        c4_b_inds->data[c4_i10] = (real_T)c4_iidx->data[c4_i10];
      }

      c4_emxFree_int32_T(chartInstance, &c4_iidx);
      c4_b2 = (1.0 > c4_n);
      if (c4_b2) {
        c4_i12 = -1;
      } else {
        sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T,
          1, 1, c4_xSorted->size[1]);
        c4_i12 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c4_n, 1, c4_xSorted->size[1]) - 1;
      }

      c4_i13 = c4_xSorted->size[0] - 1;
      c4_i16 = c4_values->size[0] * c4_values->size[1];
      c4_values->size[0] = c4_i12 + 1;
      c4_values->size[1] = c4_i13 + 1;
      c4_emxEnsureCapacity_real32_T(chartInstance, c4_values, c4_i16,
        &c4_wf_emlrtRTEI);
      c4_h_loop_ub = c4_i13;
      for (c4_i19 = 0; c4_i19 <= c4_h_loop_ub; c4_i19++) {
        c4_i_loop_ub = c4_i12;
        for (c4_i21 = 0; c4_i21 <= c4_i_loop_ub; c4_i21++) {
          c4_values->data[c4_i21 + c4_values->size[0] * c4_i19] =
            c4_xSorted->data[c4_i19 + c4_xSorted->size[0] * c4_i21];
        }
      }

      c4_emxFree_real32_T(chartInstance, &c4_xSorted);
      c4_b3 = (1.0 > c4_n);
      if (c4_b3) {
        c4_i22 = -1;
      } else {
        sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T,
          1, 1, c4_b_inds->size[1]);
        c4_i22 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c4_n, 1, c4_b_inds->size[1]) - 1;
      }

      c4_i24 = c4_b_inds->size[0] - 1;
      c4_i25 = c4_b_indices->size[0] * c4_b_indices->size[1];
      c4_b_indices->size[0] = c4_i22 + 1;
      c4_b_indices->size[1] = c4_i24 + 1;
      c4_emxEnsureCapacity_real_T(chartInstance, c4_b_indices, c4_i25,
        &c4_yf_emlrtRTEI);
      c4_k_loop_ub = c4_i24;
      for (c4_i29 = 0; c4_i29 <= c4_k_loop_ub; c4_i29++) {
        c4_m_loop_ub = c4_i22;
        for (c4_i31 = 0; c4_i31 <= c4_m_loop_ub; c4_i31++) {
          c4_b_indices->data[c4_i31 + c4_b_indices->size[0] * c4_i29] =
            c4_b_inds->data[c4_i29 + c4_b_inds->size[0] * c4_i31];
        }
      }

      c4_emxFree_real_T(chartInstance, &c4_b_inds);
    }

    c4_i14 = c4_indices->size[0] * c4_indices->size[1];
    c4_indices->size[0] = c4_b_indices->size[0];
    c4_indices->size[1] = c4_b_indices->size[1];
    c4_emxEnsureCapacity_uint32_T(chartInstance, c4_indices, c4_i14,
      &c4_rf_emlrtRTEI);
    c4_g_loop_ub = c4_b_indices->size[0] * c4_b_indices->size[1] - 1;
    for (c4_i18 = 0; c4_i18 <= c4_g_loop_ub; c4_i18++) {
      c4_d1 = muDoubleScalarRound(c4_b_indices->data[c4_i18]);
      if (c4_d1 < 4.294967296E+9) {
        if (c4_d1 >= 0.0) {
          c4_u1 = (uint32_T)c4_d1;
        } else {
          c4_u1 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c4_d1 >= 4.294967296E+9) {
        c4_u1 = MAX_uint32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c4_u1 = 0U;
      }

      c4_indices->data[c4_i18] = c4_u1;
    }
  }

  c4_emxFree_real_T(chartInstance, &c4_b_indices);
}

static boolean_T c4_allinrange(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T *c4_x, real_T c4_lo, int32_T c4_hi)
{
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  int32_T c4_exitg1;
  real_T c4_b_k;
  boolean_T c4_b;
  (void)chartInstance;
  (void)c4_lo;
  c4_d = (real_T)c4_x->size[1];
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  do {
    c4_exitg1 = 0;
    if (c4_k <= c4_i) {
      c4_b_k = (real_T)c4_k + 1.0;
      if ((c4_x->data[(int32_T)c4_b_k - 1] >= 1.0) && (c4_x->data[(int32_T)
           c4_b_k - 1] <= (real_T)c4_hi)) {
        c4_b = true;
      } else {
        c4_b = false;
      }

      if (!c4_b) {
        c4_p = false;
        c4_exitg1 = 1;
      } else {
        c4_k++;
      }
    } else {
      c4_p = true;
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  return c4_p;
}

static void c4_sort(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
                    c4_emxArray_real32_T *c4_x, c4_emxArray_real32_T *c4_b_x,
                    c4_emxArray_int32_T *c4_idx)
{
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_i = c4_b_x->size[0] * c4_b_x->size[1];
  c4_b_x->size[0] = c4_x->size[0];
  c4_b_x->size[1] = c4_x->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_b_x, c4_i, &c4_mg_emlrtRTEI);
  c4_loop_ub = c4_x->size[0] * c4_x->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_x->data[c4_i1] = c4_x->data[c4_i1];
  }

  c4_b_sort(chartInstance, c4_b_x, c4_idx);
}

static void c4_sortIdx(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_x, c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *
  c4_b_x)
{
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_i = c4_b_x->size[0];
  c4_b_x->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_x, c4_i, &c4_ng_emlrtRTEI);
  c4_loop_ub = c4_x->size[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_x->data[c4_i1] = c4_x->data[c4_i1];
  }

  c4_b_sortIdx(chartInstance, c4_b_x, c4_idx);
}

static void c4_merge_block(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x,
  int32_T c4_offset, int32_T c4_n, int32_T c4_preSortLevel, c4_emxArray_int32_T *
  c4_iwork, c4_emxArray_real32_T *c4_xwork, c4_emxArray_int32_T *c4_b_idx,
  c4_emxArray_real32_T *c4_b_x, c4_emxArray_int32_T *c4_b_iwork,
  c4_emxArray_real32_T *c4_b_xwork)
{
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_c_loop_ub;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_d_loop_ub;
  int32_T c4_i7;
  c4_i = c4_b_idx->size[0];
  c4_b_idx->size[0] = c4_idx->size[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_idx, c4_i, &c4_og_emlrtRTEI);
  c4_loop_ub = c4_idx->size[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_idx->data[c4_i1] = c4_idx->data[c4_i1];
  }

  c4_i2 = c4_b_x->size[0];
  c4_b_x->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_x, c4_i2, &c4_og_emlrtRTEI);
  c4_b_loop_ub = c4_x->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_x->data[c4_i3] = c4_x->data[c4_i3];
  }

  c4_i4 = c4_b_iwork->size[0];
  c4_b_iwork->size[0] = c4_iwork->size[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_iwork, c4_i4,
    &c4_og_emlrtRTEI);
  c4_c_loop_ub = c4_iwork->size[0] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_b_iwork->data[c4_i5] = c4_iwork->data[c4_i5];
  }

  c4_i6 = c4_b_xwork->size[0];
  c4_b_xwork->size[0] = c4_xwork->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_xwork, c4_i6,
    &c4_og_emlrtRTEI);
  c4_d_loop_ub = c4_xwork->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
    c4_b_xwork->data[c4_i7] = c4_xwork->data[c4_i7];
  }

  c4_b_merge_block(chartInstance, c4_b_idx, c4_b_x, c4_offset, c4_n,
                   c4_preSortLevel, c4_b_iwork, c4_b_xwork);
}

static void c4_merge(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
                     c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x,
                     int32_T c4_offset, int32_T c4_np, int32_T c4_nq,
                     c4_emxArray_int32_T *c4_iwork, c4_emxArray_real32_T
                     *c4_xwork, c4_emxArray_int32_T *c4_b_idx,
                     c4_emxArray_real32_T *c4_b_x, c4_emxArray_int32_T
                     *c4_b_iwork, c4_emxArray_real32_T *c4_b_xwork)
{
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_b_loop_ub;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_c_loop_ub;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_d_loop_ub;
  int32_T c4_i7;
  c4_i = c4_b_idx->size[0];
  c4_b_idx->size[0] = c4_idx->size[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_idx, c4_i, &c4_pg_emlrtRTEI);
  c4_loop_ub = c4_idx->size[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_idx->data[c4_i1] = c4_idx->data[c4_i1];
  }

  c4_i2 = c4_b_x->size[0];
  c4_b_x->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_x, c4_i2, &c4_pg_emlrtRTEI);
  c4_b_loop_ub = c4_x->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_x->data[c4_i3] = c4_x->data[c4_i3];
  }

  c4_i4 = c4_b_iwork->size[0];
  c4_b_iwork->size[0] = c4_iwork->size[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_b_iwork, c4_i4,
    &c4_pg_emlrtRTEI);
  c4_c_loop_ub = c4_iwork->size[0] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_b_iwork->data[c4_i5] = c4_iwork->data[c4_i5];
  }

  c4_i6 = c4_b_xwork->size[0];
  c4_b_xwork->size[0] = c4_xwork->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_b_xwork, c4_i6,
    &c4_pg_emlrtRTEI);
  c4_d_loop_ub = c4_xwork->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_d_loop_ub; c4_i7++) {
    c4_b_xwork->data[c4_i7] = c4_xwork->data[c4_i7];
  }

  c4_b_merge(chartInstance, c4_b_idx, c4_b_x, c4_offset, c4_np, c4_nq,
             c4_b_iwork, c4_b_xwork);
}

static uint8_T c4_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_MotionObjectDetector, const
  char_T *c4_identifier)
{
  uint8_T c4_d_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_MotionObjectDetector), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_MotionObjectDetector);
  return c4_d_y;
}

static uint8_T c4_b_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_d_y;
  uint8_T c4_d_u;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_c_u), &c4_d_u, 1, 3, 0U, 0, 0U, 0);
  c4_d_y = c4_d_u;
  sf_mex_destroy(&c4_c_u);
  return c4_d_y;
}

static const mxArray *c4_sf_marshallOut_matrix500x500x3_real32_T(void
  *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  int32_T c4_i;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 3; c4_i1++) {
    c4_i2 = 0;
    for (c4_i3 = 0; c4_i3 < 500; c4_i3++) {
      for (c4_i4 = 0; c4_i4 < 500; c4_i4++) {
        chartInstance->c4_u[(c4_i4 + c4_i2) + c4_i] = (*(real32_T (*)[750000])
          c4_inData)[(c4_i4 + c4_i2) + c4_i];
      }

      c4_i2 += 500;
    }

    c4_i += 250000;
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", chartInstance->c4_u, 1, 0U, 1U, 0U,
    3, 500, 500, 3), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  return c4_mxArrayOutData;
}

static void c4_c_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  real32_T c4_d_y[750000])
{
  int32_T c4_i;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_c_u), chartInstance->c4_fv, 0, 1, 0U,
                1, 0U, 3, 500, 500, 3);
  for (c4_i = 0; c4_i < 750000; c4_i++) {
    c4_d_y[c4_i] = chartInstance->c4_fv[c4_i];
  }

  sf_mex_destroy(&c4_c_u);
}

static void c4_sf_marshallIn_matrix500x500x3_real32_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_c_Image;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_c_Image = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_c_Image), &c4_thisId,
                        chartInstance->c4_y);
  sf_mex_destroy(&c4_c_Image);
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 3; c4_i1++) {
    c4_i2 = 0;
    for (c4_i3 = 0; c4_i3 < 500; c4_i3++) {
      for (c4_i4 = 0; c4_i4 < 500; c4_i4++) {
        (*(real32_T (*)[750000])c4_outData)[(c4_i4 + c4_i2) + c4_i] =
          chartInstance->c4_y[(c4_i4 + c4_i2) + c4_i];
      }

      c4_i2 += 500;
    }

    c4_i += 250000;
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_sf_marshallOut_matrix189x267x3_uint8_T(void
  *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  int32_T c4_i;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i2;
  uint8_T c4_c_u[151389];
  int32_T c4_i3;
  int32_T c4_i4;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 3; c4_i1++) {
    c4_i2 = 0;
    for (c4_i3 = 0; c4_i3 < 267; c4_i3++) {
      for (c4_i4 = 0; c4_i4 < 189; c4_i4++) {
        c4_c_u[(c4_i4 + c4_i2) + c4_i] = (*(uint8_T (*)[151389])c4_inData)
          [(c4_i4 + c4_i2) + c4_i];
      }

      c4_i2 += 189;
    }

    c4_i += 50463;
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u, 3, 0U, 1U, 0U, 3, 189, 267,
    3), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  return c4_mxArrayOutData;
}

static void c4_d_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  uint8_T c4_d_y[151389])
{
  uint8_T c4_uv[151389];
  int32_T c4_i;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_c_u), c4_uv, 1, 3, 0U, 1, 0U, 3, 189,
                267, 3);
  for (c4_i = 0; c4_i < 151389; c4_i++) {
    c4_d_y[c4_i] = c4_uv[c4_i];
  }

  sf_mex_destroy(&c4_c_u);
}

static void c4_sf_marshallIn_matrix189x267x3_uint8_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_c_redcrab;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_c_redcrab = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_c_redcrab), &c4_thisId,
                        chartInstance->c4_c_y);
  sf_mex_destroy(&c4_c_redcrab);
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 3; c4_i1++) {
    c4_i2 = 0;
    for (c4_i3 = 0; c4_i3 < 267; c4_i3++) {
      for (c4_i4 = 0; c4_i4 < 189; c4_i4++) {
        (*(uint8_T (*)[151389])c4_outData)[(c4_i4 + c4_i2) + c4_i] =
          chartInstance->c4_c_y[(c4_i4 + c4_i2) + c4_i];
      }

      c4_i2 += 189;
    }

    c4_i += 50463;
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_sf_marshallOut_matrix189x267_uint8_T(void
  *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  int32_T c4_i;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i2;
  uint8_T c4_c_u[50463];
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 267; c4_i1++) {
    for (c4_i2 = 0; c4_i2 < 189; c4_i2++) {
      c4_c_u[c4_i2 + c4_i] = (*(uint8_T (*)[50463])c4_inData)[c4_i2 + c4_i];
    }

    c4_i += 189;
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u, 3, 0U, 1U, 0U, 2, 189, 267),
                false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  return c4_mxArrayOutData;
}

static void c4_e_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  uint8_T c4_d_y[50463])
{
  uint8_T c4_uv[50463];
  int32_T c4_i;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_c_u), c4_uv, 1, 3, 0U, 1, 0U, 2, 189,
                267);
  for (c4_i = 0; c4_i < 50463; c4_i++) {
    c4_d_y[c4_i] = c4_uv[c4_i];
  }

  sf_mex_destroy(&c4_c_u);
}

static void c4_sf_marshallIn_matrix189x267_uint8_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_redcrabGray;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_d_y[50463];
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_b_redcrabGray = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_redcrabGray), &c4_thisId,
                        c4_d_y);
  sf_mex_destroy(&c4_b_redcrabGray);
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 267; c4_i1++) {
    for (c4_i2 = 0; c4_i2 < 189; c4_i2++) {
      (*(uint8_T (*)[50463])c4_outData)[c4_i2 + c4_i] = c4_d_y[c4_i2 + c4_i];
    }

    c4_i += 189;
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_sf_marshallOut_matrix500x500_real32_T(void
  *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  int32_T c4_i;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  int32_T c4_i2;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 500; c4_i1++) {
    for (c4_i2 = 0; c4_i2 < 500; c4_i2++) {
      chartInstance->c4_b_u[c4_i2 + c4_i] = (*(real32_T (*)[250000])c4_inData)
        [c4_i2 + c4_i];
    }

    c4_i += 500;
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", chartInstance->c4_b_u, 1, 0U, 1U, 0U,
    2, 500, 500), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  return c4_mxArrayOutData;
}

static void c4_f_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  real32_T c4_d_y[250000])
{
  int32_T c4_i;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_c_u), chartInstance->c4_b_fv, 0, 1,
                0U, 1, 0U, 2, 500, 500);
  for (c4_i = 0; c4_i < 250000; c4_i++) {
    c4_d_y[c4_i] = chartInstance->c4_b_fv[c4_i];
  }

  sf_mex_destroy(&c4_c_u);
}

static void c4_sf_marshallIn_matrix500x500_real32_T(void *chartInstanceVoid,
  const mxArray *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_ImageGray;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_b_ImageGray = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_ImageGray), &c4_thisId,
                        chartInstance->c4_b_y);
  sf_mex_destroy(&c4_b_ImageGray);
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 500; c4_i1++) {
    for (c4_i2 = 0; c4_i2 < 500; c4_i2++) {
      (*(real32_T (*)[250000])c4_outData)[c4_i2 + c4_i] = chartInstance->
        c4_b_y[c4_i2 + c4_i];
    }

    c4_i += 500;
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_sf_marshallOut_real_T(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  real_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_c_u = *(real_T *)c4_inData;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  return c4_mxArrayOutData;
}

static real_T c4_g_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d_y;
  real_T c4_d;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_c_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_d_y = c4_d;
  sf_mex_destroy(&c4_c_u);
  return c4_d_y;
}

static void c4_sf_marshallIn_real_T(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_nargin;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_d_y;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_nargin = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_y = c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nargin),
    &c4_thisId);
  sf_mex_destroy(&c4_nargin);
  *(real_T *)c4_outData = c4_d_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_emlrt_marshallOut
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const
   c4_emxArray_real32_T *c4_c_u)
{
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u->data, 1, 0U, 1U, 0U, 2,
    c4_c_u->size[0], c4_c_u->size[1]), false);
  return c4_d_y;
}

static const mxArray *c4_b_emlrt_marshallOut
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const
   c4_emxArray_real32_T *c4_c_u)
{
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u->data, 1, 0U, 1U, 0U, 1,
    c4_c_u->size[0]), false);
  return c4_d_y;
}

static const mxArray *c4_c_emlrt_marshallOut
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, const
   c4_emxArray_int8_T *c4_c_u)
{
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u->data, 2, 0U, 1U, 0U, 1,
    c4_c_u->size[0]), false);
  return c4_d_y;
}

static const mxArray *c4_sf_marshallOut_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, c4_vision_internal_SURFPoints_cg *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  c4_vision_internal_SURFPoints_cg c4_c_u;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_propValues[5];
  const char * c4_propNames[5] = { "pLocation", "pMetric", "pScale",
    "pSignOfLaplacian", "pOrientation" };

  const char * c4_propClasses[5] = { "vision.internal.FeaturePointsImpl",
    "vision.internal.FeaturePointsImpl", "vision.internal.SURFPointsImpl",
    "vision.internal.SURFPointsImpl", "vision.internal.SURFPointsImpl" };

  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_c_u, (emlrtRTEInfo *)
    NULL);
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_emxCopyStruct_vision_internal_S(chartInstance, &c4_c_u, c4_inData,
    (emlrtRTEInfo *)NULL);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create_class_instance(
    "vision.internal.SURFPoints_cg"), false);
  c4_propValues[0] = c4_emlrt_marshallOut(chartInstance, c4_c_u.pLocation);
  c4_propValues[1] = c4_b_emlrt_marshallOut(chartInstance, c4_c_u.pMetric);
  c4_propValues[2] = c4_b_emlrt_marshallOut(chartInstance, c4_c_u.pScale);
  c4_propValues[3] = c4_c_emlrt_marshallOut(chartInstance,
    c4_c_u.pSignOfLaplacian);
  c4_propValues[4] = c4_b_emlrt_marshallOut(chartInstance, c4_c_u.pOrientation);
  sf_mex_set_all_properties(&c4_d_y, 0, 5, c4_propNames, c4_propClasses,
    c4_propValues);
  sf_mex_assign(&c4_d_y, sf_mex_convert_to_redirect_source(c4_d_y, 0,
    "vision.internal.SURFPoints_cg"), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_c_u);
  return c4_mxArrayOutData;
}

static void c4_h_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_vision_internal_SURFPoints_cg *c4_d_y)
{
  emlrtMsgIdentifier c4_thisId;
  const char * c4_propNames[5] = { "pLocation", "pMetric", "pScale",
    "pSignOfLaplacian", "pOrientation" };

  const char * c4_propClasses[5] = { "vision.internal.FeaturePointsImpl",
    "vision.internal.FeaturePointsImpl", "vision.internal.SURFPointsImpl",
    "vision.internal.SURFPointsImpl", "vision.internal.SURFPointsImpl" };

  const mxArray *c4_propValues[5];
  c4_thisId.fParent = c4_parentId;
  c4_thisId.bParentIsCell = false;
  sf_mex_check_mcos_class(c4_parentId, c4_c_u, "SURFPoints");
  sf_mex_assign(&c4_c_u, sf_mex_convert_to_redirect_target(c4_c_u, 0,
    "vision.internal.SURFPoints_cg"), false);
  sf_mex_check_mcos_class(c4_parentId, c4_c_u, "vision.internal.SURFPoints_cg");
  sf_mex_get_all_properties(c4_c_u, 0, 5, c4_propNames, c4_propClasses,
    c4_propValues);
  c4_thisId.fIdentifier = "pLocation";
  c4_i_emlrt_marshallIn(chartInstance, c4_propValues[0], &c4_thisId,
                        c4_d_y->pLocation);
  c4_thisId.fIdentifier = "pMetric";
  c4_j_emlrt_marshallIn(chartInstance, c4_propValues[1], &c4_thisId,
                        c4_d_y->pMetric);
  c4_thisId.fIdentifier = "pScale";
  c4_j_emlrt_marshallIn(chartInstance, c4_propValues[2], &c4_thisId,
                        c4_d_y->pScale);
  c4_thisId.fIdentifier = "pSignOfLaplacian";
  c4_k_emlrt_marshallIn(chartInstance, c4_propValues[3], &c4_thisId,
                        c4_d_y->pSignOfLaplacian);
  c4_thisId.fIdentifier = "pOrientation";
  c4_j_emlrt_marshallIn(chartInstance, c4_propValues[4], &c4_thisId,
                        c4_d_y->pOrientation);
  sf_mex_destroy(&c4_c_u);
}

static void c4_i_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_real32_T *c4_d_y)
{
  c4_emxArray_real32_T *c4_r;
  int32_T c4_i;
  int32_T c4_i1;
  uint32_T c4_uv[2];
  static uint32_T c4_uv1[2] = { MAX_uint32_T, 2U };

  int32_T c4_i2;
  boolean_T c4_bv[2];
  static boolean_T c4_bv1[2] = { true, false };

  int32_T c4_i3;
  int32_T c4_loop_ub;
  int32_T c4_i4;
  c4_emxInit_real32_T(chartInstance, &c4_r, 2, (emlrtRTEInfo *)NULL);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_uv[c4_i] = c4_uv1[c4_i];
  }

  c4_i1 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = sf_mex_get_dimension(c4_c_u, 0);
  c4_r->size[1] = sf_mex_get_dimension(c4_c_u, 1);
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_r, c4_i1, (emlrtRTEInfo *)NULL);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_bv[c4_i2] = c4_bv1[c4_i2];
  }

  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_c_u), c4_r->data, 0, 1, 0U, 1, 0U,
                   2, c4_bv, c4_uv, c4_r->size);
  c4_i3 = c4_d_y->size[0] * c4_d_y->size[1];
  c4_d_y->size[0] = c4_r->size[0];
  c4_d_y->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_d_y, c4_i3, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_r->size[0] * c4_r->size[1] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
    c4_d_y->data[c4_i4] = c4_r->data[c4_i4];
  }

  sf_mex_destroy(&c4_c_u);
  c4_emxFree_real32_T(chartInstance, &c4_r);
}

static void c4_j_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_real32_T *c4_d_y)
{
  c4_emxArray_real32_T *c4_r;
  uint32_T c4_uv[1];
  int32_T c4_i;
  boolean_T c4_bv[1];
  int32_T c4_i1;
  int32_T c4_loop_ub;
  int32_T c4_i2;
  c4_emxInit_real32_T1(chartInstance, &c4_r, 1, (emlrtRTEInfo *)NULL);
  c4_uv[0] = MAX_uint32_T;
  c4_i = c4_r->size[0];
  c4_r->size[0] = sf_mex_get_dimension(c4_c_u, 0);
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_r, c4_i, (emlrtRTEInfo *)NULL);
  c4_bv[0] = true;
  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_c_u), c4_r->data, 0, 1, 0U, 1, 0U,
                   1, c4_bv, c4_uv, c4_r->size);
  c4_i1 = c4_d_y->size[0];
  c4_d_y->size[0] = c4_r->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_d_y, c4_i1, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_r->size[0] - 1;
  for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
    c4_d_y->data[c4_i2] = c4_r->data[c4_i2];
  }

  sf_mex_destroy(&c4_c_u);
  c4_emxFree_real32_T(chartInstance, &c4_r);
}

static void c4_k_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_int8_T *c4_d_y)
{
  c4_emxArray_int8_T *c4_r;
  uint32_T c4_uv[1];
  int32_T c4_i;
  boolean_T c4_bv[1];
  int32_T c4_i1;
  int32_T c4_loop_ub;
  int32_T c4_i2;
  c4_emxInit_int8_T(chartInstance, &c4_r, 1, (emlrtRTEInfo *)NULL);
  c4_uv[0] = MAX_uint32_T;
  c4_i = c4_r->size[0];
  c4_r->size[0] = sf_mex_get_dimension(c4_c_u, 0);
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_r, c4_i, (emlrtRTEInfo *)NULL);
  c4_bv[0] = true;
  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_c_u), c4_r->data, 1, 2, 0U, 1, 0U,
                   1, c4_bv, c4_uv, c4_r->size);
  c4_i1 = c4_d_y->size[0];
  c4_d_y->size[0] = c4_r->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_d_y, c4_i1, (emlrtRTEInfo *)NULL);
  c4_loop_ub = c4_r->size[0] - 1;
  for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
    c4_d_y->data[c4_i2] = c4_r->data[c4_i2];
  }

  sf_mex_destroy(&c4_c_u);
  c4_emxFree_int8_T(chartInstance, &c4_r);
}

static void c4_sf_marshallIn_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, const mxArray *c4_mxArrayInData, const char_T *c4_varName,
  c4_vision_internal_SURFPoints_cg *c4_outData)
{
  c4_vision_internal_SURFPoints_cg c4_d_y;
  const mxArray *c4_RedCrabPoints;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_emxInitStruct_vision_internal_S(chartInstance, &c4_d_y, (emlrtRTEInfo *)
    NULL);
  c4_RedCrabPoints = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_RedCrabPoints), &c4_thisId,
                        &c4_d_y);
  sf_mex_destroy(&c4_RedCrabPoints);
  c4_emxCopyStruct_vision_internal_S(chartInstance, c4_outData, &c4_d_y,
    (emlrtRTEInfo *)NULL);
  sf_mex_destroy(&c4_mxArrayInData);
  c4_emxFreeStruct_vision_internal_S(chartInstance, &c4_d_y);
}

static const mxArray *c4_sf_marshallOut_dynamicmatrix(void *chartInstanceVoid,
  c4_emxArray_real32_T *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  c4_emxArray_real32_T *c4_c_u;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_emxInit_real32_T(chartInstance, &c4_c_u, 2, (emlrtRTEInfo *)NULL);
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_i = c4_c_u->size[0] * c4_c_u->size[1];
  c4_c_u->size[0] = c4_inData->size[0];
  c4_c_u->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_u, c4_i, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_inData->size[0] * c4_inData->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_c_u->data[c4_i1] = c4_inData->data[c4_i1];
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u->data, 1, 0U, 1U, 0U, 2,
    c4_c_u->size[0], c4_c_u->size[1]), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  c4_emxFree_real32_T(chartInstance, &c4_c_u);
  return c4_mxArrayOutData;
}

static void c4_l_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_real32_T *c4_d_y)
{
  c4_emxArray_real32_T *c4_r;
  int32_T c4_i;
  int32_T c4_i1;
  uint32_T c4_uv[2];
  static uint32_T c4_uv1[2] = { MAX_uint32_T, 64U };

  int32_T c4_i2;
  boolean_T c4_bv[2];
  static boolean_T c4_bv1[2] = { true, false };

  int32_T c4_i3;
  int32_T c4_loop_ub;
  int32_T c4_i4;
  c4_emxInit_real32_T(chartInstance, &c4_r, 2, (emlrtRTEInfo *)NULL);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_uv[c4_i] = c4_uv1[c4_i];
  }

  c4_i1 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = sf_mex_get_dimension(c4_c_u, 0);
  c4_r->size[1] = sf_mex_get_dimension(c4_c_u, 1);
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_r, c4_i1, (emlrtRTEInfo *)NULL);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_bv[c4_i2] = c4_bv1[c4_i2];
  }

  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_c_u), c4_r->data, 0, 1, 0U, 1, 0U,
                   2, c4_bv, c4_uv, c4_r->size);
  c4_i3 = c4_d_y->size[0] * c4_d_y->size[1];
  c4_d_y->size[0] = c4_r->size[0];
  c4_d_y->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_d_y, c4_i3, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_r->size[0] * c4_r->size[1] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
    c4_d_y->data[c4_i4] = c4_r->data[c4_i4];
  }

  sf_mex_destroy(&c4_c_u);
  c4_emxFree_real32_T(chartInstance, &c4_r);
}

static void c4_sf_marshallIn_dynamicmatrix(void *chartInstanceVoid, const
  mxArray *c4_mxArrayInData, const char_T *c4_varName, c4_emxArray_real32_T
  *c4_outData)
{
  c4_emxArray_real32_T *c4_d_y;
  const mxArray *c4_RedCrabFeatures;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_loop_ub;
  int32_T c4_i2;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_emxInit_real32_T(chartInstance, &c4_d_y, 2, (emlrtRTEInfo *)NULL);
  c4_RedCrabFeatures = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_RedCrabFeatures),
                        &c4_thisId, c4_d_y);
  sf_mex_destroy(&c4_RedCrabFeatures);
  c4_i = c4_outData->size[0] * c4_outData->size[1];
  c4_outData->size[0] = c4_d_y->size[0];
  c4_outData->size[1] = 64;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_outData, c4_i, (emlrtRTEInfo *)
    NULL);
  for (c4_i1 = 0; c4_i1 < 64; c4_i1++) {
    c4_loop_ub = c4_d_y->size[0] - 1;
    for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
      c4_outData->data[c4_i2 + c4_outData->size[0] * c4_i1] = c4_d_y->data[c4_i2
        + c4_d_y->size[0] * c4_i1];
    }
  }

  c4_emxFree_real32_T(chartInstance, &c4_d_y);
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_sf_marshallOut_dynamicmatrix_1(void *chartInstanceVoid,
  c4_emxArray_uint32_T *c4_inData)
{
  const mxArray *c4_mxArrayOutData;
  c4_emxArray_uint32_T *c4_c_u;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  const mxArray *c4_d_y = NULL;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_emxInit_uint32_T(chartInstance, &c4_c_u, 2, (emlrtRTEInfo *)NULL);
  c4_mxArrayOutData = NULL;
  c4_mxArrayOutData = NULL;
  c4_i = c4_c_u->size[0] * c4_c_u->size[1];
  c4_c_u->size[0] = c4_inData->size[0];
  c4_c_u->size[1] = 2;
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_c_u, c4_i, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_inData->size[0] * c4_inData->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_c_u->data[c4_i1] = c4_inData->data[c4_i1];
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u->data, 7, 0U, 1U, 0U, 2,
    c4_c_u->size[0], c4_c_u->size[1]), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_d_y, false);
  c4_emxFree_uint32_T(chartInstance, &c4_c_u);
  return c4_mxArrayOutData;
}

static void c4_m_emlrt_marshallIn(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c4_c_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_uint32_T *c4_d_y)
{
  c4_emxArray_uint32_T *c4_r;
  int32_T c4_i;
  int32_T c4_i1;
  uint32_T c4_uv[2];
  static uint32_T c4_uv1[2] = { MAX_uint32_T, 2U };

  int32_T c4_i2;
  boolean_T c4_bv[2];
  static boolean_T c4_bv1[2] = { true, false };

  int32_T c4_i3;
  int32_T c4_loop_ub;
  int32_T c4_i4;
  c4_emxInit_uint32_T(chartInstance, &c4_r, 2, (emlrtRTEInfo *)NULL);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_uv[c4_i] = c4_uv1[c4_i];
  }

  c4_i1 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = sf_mex_get_dimension(c4_c_u, 0);
  c4_r->size[1] = sf_mex_get_dimension(c4_c_u, 1);
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_r, c4_i1, (emlrtRTEInfo *)NULL);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_bv[c4_i2] = c4_bv1[c4_i2];
  }

  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_c_u), c4_r->data, 1, 7, 0U, 1, 0U,
                   2, c4_bv, c4_uv, c4_r->size);
  c4_i3 = c4_d_y->size[0] * c4_d_y->size[1];
  c4_d_y->size[0] = c4_r->size[0];
  c4_d_y->size[1] = 2;
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_d_y, c4_i3, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_r->size[0] * c4_r->size[1] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
    c4_d_y->data[c4_i4] = c4_r->data[c4_i4];
  }

  sf_mex_destroy(&c4_c_u);
  c4_emxFree_uint32_T(chartInstance, &c4_r);
}

static void c4_sf_marshallIn_dynamicmatrix_1(void *chartInstanceVoid, const
  mxArray *c4_mxArrayInData, const char_T *c4_varName, c4_emxArray_uint32_T
  *c4_outData)
{
  c4_emxArray_uint32_T *c4_d_y;
  const mxArray *c4_RedCrabPairs;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_loop_ub;
  int32_T c4_i2;
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c4_emxInit_uint32_T(chartInstance, &c4_d_y, 2, (emlrtRTEInfo *)NULL);
  c4_RedCrabPairs = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = (const char *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_RedCrabPairs), &c4_thisId,
                        c4_d_y);
  sf_mex_destroy(&c4_RedCrabPairs);
  c4_i = c4_outData->size[0] * c4_outData->size[1];
  c4_outData->size[0] = c4_d_y->size[0];
  c4_outData->size[1] = 2;
  c4_emxEnsureCapacity_uint32_T(chartInstance, c4_outData, c4_i, (emlrtRTEInfo *)
    NULL);
  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_loop_ub = c4_d_y->size[0] - 1;
    for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
      c4_outData->data[c4_i2 + c4_outData->size[0] * c4_i1] = c4_d_y->data[c4_i2
        + c4_d_y->size[0] * c4_i1];
    }
  }

  c4_emxFree_uint32_T(chartInstance, &c4_d_y);
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_chart_data_browse_helper
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, int32_T c4_ssIdNumber)
{
  const mxArray *c4_mxData = NULL;
  c4_mxData = NULL;
  switch (c4_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", *chartInstance->c4_b_Image,
      1, 0U, 1U, 0U, 3, 500, 500, 3), false);
    break;

   case 6U:
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData",
      *chartInstance->c4_b_redcrab, 3, 0U, 1U, 0U, 3, 189, 267, 3), false);
    break;
  }

  return c4_mxData;
}

static void c4_c_SURFPointsImpl_configure
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_this, c4_sTGP517nzdmMmY48RaBsM6E
   c4_inputs)
{
  real_T c4_n;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_emxArray_real32_T *c4_x;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_b_loop_ub;
  int32_T c4_i4;
  real_T c4_N;
  c4_emxArray_boolean_T *c4_tile;
  real32_T c4_a_data[1];
  real_T c4_varargin_1;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_c_loop_ub;
  int32_T c4_i7;
  int32_T c4_d_loop_ub;
  int32_T c4_i8;
  c4_emxArray_real32_T *c4_r;
  int32_T c4_i9;
  int32_T c4_outsize[2];
  const mxArray *c4_d_y = NULL;
  int32_T c4_i10;
  int32_T c4_e_loop_ub;
  int32_T c4_i11;
  int32_T c4_ntilerows;
  real_T c4_b_n;
  int32_T c4_b;
  int32_T c4_i12;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_itilerow;
  int32_T c4_i15;
  int32_T c4_b_itilerow;
  int32_T c4_ibcol;
  int32_T c4_f_loop_ub;
  int32_T c4_i16;
  real_T c4_b_N;
  real_T c4_b_varargin_1;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_g_loop_ub;
  int32_T c4_i19;
  int32_T c4_h_loop_ub;
  int32_T c4_i20;
  real_T c4_c_N;
  real_T c4_c_varargin_1;
  int32_T c4_b_outsize[2];
  int32_T c4_i21;
  const mxArray *c4_e_y = NULL;
  int32_T c4_i22;
  int32_T c4_i_loop_ub;
  int32_T c4_i23;
  int32_T c4_b_ntilerows;
  int32_T c4_c_b;
  int32_T c4_c_outsize[2];
  int32_T c4_d_b;
  const mxArray *c4_f_y = NULL;
  boolean_T c4_b_overflow;
  int32_T c4_i24;
  int32_T c4_j_loop_ub;
  int32_T c4_c_itilerow;
  int32_T c4_i25;
  int32_T c4_d_itilerow;
  int32_T c4_i26;
  int32_T c4_b_ibcol;
  int32_T c4_k_loop_ub;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_l_loop_ub;
  int32_T c4_i29;
  real_T c4_d_N;
  real_T c4_d_varargin_1;
  c4_emxArray_int8_T *c4_r1;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_i32;
  int32_T c4_i33;
  real32_T c4_f;
  int32_T c4_d_outsize[2];
  int32_T c4_i34;
  const mxArray *c4_g_y = NULL;
  int8_T c4_i35;
  int32_T c4_i36;
  int32_T c4_o_loop_ub;
  int32_T c4_i37;
  int32_T c4_c_ntilerows;
  int32_T c4_e_b;
  int32_T c4_f_b;
  boolean_T c4_c_overflow;
  int32_T c4_e_itilerow;
  int32_T c4_f_itilerow;
  int32_T c4_c_ibcol;
  c4_n = (real_T)c4_inputs.Location->size[0];
  c4_i = c4_this->pLocation->size[0] * c4_this->pLocation->size[1];
  c4_this->pLocation->size[0] = c4_inputs.Location->size[0];
  c4_this->pLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_this->pLocation, c4_i,
    &c4_qg_emlrtRTEI);
  c4_loop_ub = c4_inputs.Location->size[0] * c4_inputs.Location->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_this->pLocation->data[c4_i1] = c4_inputs.Location->data[c4_i1];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_x, 1, &c4_sg_emlrtRTEI);
  c4_i2 = c4_this->pMetric->size[0];
  c4_this->pMetric->size[0] = (int32_T)c4_n;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pMetric, c4_i2,
    &c4_rg_emlrtRTEI);
  c4_i3 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i3, &c4_sg_emlrtRTEI);
  c4_b_loop_ub = c4_inputs.Metric->size[0] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
    c4_x->data[c4_i4] = c4_inputs.Metric->data[c4_i4];
  }

  c4_N = c4_n;
  c4_emxInit_boolean_T(chartInstance, &c4_tile, 1, &c4_vg_emlrtRTEI);
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_varargin_1 = c4_N;
    c4_assertValidSizeArg(chartInstance, c4_varargin_1);
    c4_i6 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i6,
      &c4_vg_emlrtRTEI);
    c4_d_loop_ub = (int32_T)c4_varargin_1 - 1;
    for (c4_i8 = 0; c4_i8 <= c4_d_loop_ub; c4_i8++) {
      c4_tile->data[c4_i8] = false;
    }

    c4_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_d_y);
    }

    c4_i10 = c4_x->size[0];
    c4_x->size[0] = c4_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i10, &c4_xg_emlrtRTEI);
    c4_ntilerows = c4_tile->size[0];
    c4_b = c4_ntilerows;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_itilerow = 1; c4_itilerow - 1 < c4_ntilerows; c4_itilerow++) {
      c4_b_itilerow = c4_itilerow - 1;
      c4_ibcol = c4_b_itilerow;
      c4_x->data[c4_ibcol] = c4_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c4_this->pMetric->size[0], c4_x->size[0]);
  c4_i5 = c4_this->pMetric->size[0];
  c4_this->pMetric->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pMetric, c4_i5,
    &c4_ug_emlrtRTEI);
  c4_c_loop_ub = c4_x->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
    c4_this->pMetric->data[c4_i7] = c4_x->data[c4_i7];
  }

  c4_emxInit_real32_T(chartInstance, &c4_r, 2, &c4_ad_emlrtRTEI);
  c4_i9 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = c4_this->pLocation->size[0];
  c4_r->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_r, c4_i9, &c4_wg_emlrtRTEI);
  c4_e_loop_ub = c4_this->pLocation->size[0] * c4_this->pLocation->size[1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_r->data[c4_i11] = c4_this->pLocation->data[c4_i11];
  }

  c4_b_n = (real_T)c4_r->size[0];
  c4_i12 = c4_this->pScale->size[0];
  c4_this->pScale->size[0] = (int32_T)c4_b_n;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pScale, c4_i12,
    &c4_ad_emlrtRTEI);
  c4_i13 = c4_this->pOrientation->size[0];
  c4_this->pOrientation->size[0] = (int32_T)c4_b_n;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pOrientation, c4_i13,
    &c4_ad_emlrtRTEI);
  c4_i14 = c4_this->pSignOfLaplacian->size[0];
  c4_this->pSignOfLaplacian->size[0] = (int32_T)c4_b_n;
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_this->pSignOfLaplacian, c4_i14,
    &c4_ad_emlrtRTEI);
  c4_i15 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i15, &c4_yg_emlrtRTEI);
  c4_f_loop_ub = c4_inputs.Scale->size[0] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_r);
  for (c4_i16 = 0; c4_i16 <= c4_f_loop_ub; c4_i16++) {
    c4_x->data[c4_i16] = c4_inputs.Scale->data[c4_i16];
  }

  c4_b_N = c4_b_n;
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_b_varargin_1 = c4_b_N;
    c4_assertValidSizeArg(chartInstance, c4_b_varargin_1);
    c4_i18 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_b_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i18,
      &c4_vg_emlrtRTEI);
    c4_h_loop_ub = (int32_T)c4_b_varargin_1 - 1;
    for (c4_i20 = 0; c4_i20 <= c4_h_loop_ub; c4_i20++) {
      c4_tile->data[c4_i20] = false;
    }

    c4_b_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_b_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_e_y);
    }

    c4_i22 = c4_x->size[0];
    c4_x->size[0] = c4_b_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i22, &c4_xg_emlrtRTEI);
    c4_b_ntilerows = c4_tile->size[0];
    c4_c_b = c4_b_ntilerows;
    c4_d_b = c4_c_b;
    if (1 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_c_itilerow = 1; c4_c_itilerow - 1 < c4_b_ntilerows; c4_c_itilerow++)
    {
      c4_d_itilerow = c4_c_itilerow - 1;
      c4_b_ibcol = c4_d_itilerow;
      c4_x->data[c4_b_ibcol] = c4_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c4_this->pScale->size[0], c4_x->size[0]);
  c4_i17 = c4_this->pScale->size[0];
  c4_this->pScale->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pScale, c4_i17,
    &c4_ah_emlrtRTEI);
  c4_g_loop_ub = c4_x->size[0] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_g_loop_ub; c4_i19++) {
    c4_this->pScale->data[c4_i19] = c4_x->data[c4_i19];
  }

  c4_c_N = c4_b_n;
  c4_c_varargin_1 = c4_c_N;
  c4_assertValidSizeArg(chartInstance, c4_c_varargin_1);
  c4_i21 = c4_tile->size[0];
  c4_tile->size[0] = (int32_T)c4_c_varargin_1;
  c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i21,
    &c4_vg_emlrtRTEI);
  c4_i_loop_ub = (int32_T)c4_c_varargin_1 - 1;
  for (c4_i23 = 0; c4_i23 <= c4_i_loop_ub; c4_i23++) {
    c4_tile->data[c4_i23] = false;
  }

  c4_c_outsize[0] = c4_tile->size[0];
  if (!((real_T)c4_c_outsize[0] == (real_T)c4_tile->size[0])) {
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_f_y);
  }

  c4_i24 = c4_x->size[0];
  c4_x->size[0] = c4_c_outsize[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i24, &c4_bh_emlrtRTEI);
  c4_j_loop_ub = c4_c_outsize[0] - 1;
  for (c4_i25 = 0; c4_i25 <= c4_j_loop_ub; c4_i25++) {
    c4_x->data[c4_i25] = 0.0F;
  }

  sf_mex_lw_sub_assign_size_check_1d(c4_this->pOrientation->size[0], c4_x->size
    [0]);
  c4_i26 = c4_this->pOrientation->size[0];
  c4_this->pOrientation->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pOrientation, c4_i26,
    &c4_ch_emlrtRTEI);
  c4_k_loop_ub = c4_x->size[0] - 1;
  for (c4_i27 = 0; c4_i27 <= c4_k_loop_ub; c4_i27++) {
    c4_this->pOrientation->data[c4_i27] = c4_x->data[c4_i27];
  }

  c4_i28 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i28, &c4_dh_emlrtRTEI);
  c4_l_loop_ub = c4_inputs.SignOfLaplacian->size[0] - 1;
  for (c4_i29 = 0; c4_i29 <= c4_l_loop_ub; c4_i29++) {
    c4_x->data[c4_i29] = (real32_T)c4_inputs.SignOfLaplacian->data[c4_i29];
  }

  c4_d_N = c4_b_n;
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_d_varargin_1 = c4_d_N;
    c4_assertValidSizeArg(chartInstance, c4_d_varargin_1);
    c4_i31 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_d_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i31,
      &c4_vg_emlrtRTEI);
    c4_n_loop_ub = (int32_T)c4_d_varargin_1 - 1;
    for (c4_i33 = 0; c4_i33 <= c4_n_loop_ub; c4_i33++) {
      c4_tile->data[c4_i33] = false;
    }

    c4_d_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_d_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_g_y = NULL;
      sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_g_y);
    }

    c4_i36 = c4_x->size[0];
    c4_x->size[0] = c4_d_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i36, &c4_xg_emlrtRTEI);
    c4_c_ntilerows = c4_tile->size[0];
    c4_e_b = c4_c_ntilerows;
    c4_f_b = c4_e_b;
    if (1 > c4_f_b) {
      c4_c_overflow = false;
    } else {
      c4_c_overflow = (c4_f_b > 2147483646);
    }

    if (c4_c_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_e_itilerow = 1; c4_e_itilerow - 1 < c4_c_ntilerows; c4_e_itilerow++)
    {
      c4_f_itilerow = c4_e_itilerow - 1;
      c4_c_ibcol = c4_f_itilerow;
      c4_x->data[c4_c_ibcol] = c4_a_data[0];
    }
  }

  c4_emxFree_boolean_T(chartInstance, &c4_tile);
  c4_emxInit_int8_T(chartInstance, &c4_r1, 1, &c4_ad_emlrtRTEI);
  c4_i30 = c4_r1->size[0];
  c4_r1->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_r1, c4_i30, &c4_eh_emlrtRTEI);
  c4_m_loop_ub = c4_x->size[0] - 1;
  for (c4_i32 = 0; c4_i32 <= c4_m_loop_ub; c4_i32++) {
    c4_f = muSingleScalarRound(c4_x->data[c4_i32]);
    if (c4_f < 128.0F) {
      if (c4_f >= -128.0F) {
        c4_i35 = (int8_T)c4_f;
      } else {
        c4_i35 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c4_f >= 128.0F) {
      c4_i35 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c4_i35 = 0;
    }

    c4_r1->data[c4_i32] = c4_i35;
  }

  c4_emxFree_real32_T(chartInstance, &c4_x);
  sf_mex_lw_sub_assign_size_check_1d(c4_this->pSignOfLaplacian->size[0],
    c4_r1->size[0]);
  c4_i34 = c4_this->pSignOfLaplacian->size[0];
  c4_this->pSignOfLaplacian->size[0] = c4_r1->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_this->pSignOfLaplacian, c4_i34,
    &c4_eh_emlrtRTEI);
  c4_o_loop_ub = c4_r1->size[0] - 1;
  for (c4_i37 = 0; c4_i37 <= c4_o_loop_ub; c4_i37++) {
    c4_this->pSignOfLaplacian->data[c4_i37] = c4_r1->data[c4_i37];
  }

  c4_emxFree_int8_T(chartInstance, &c4_r1);
}

static void c4_d_SURFPointsImpl_configure
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_this, c4_sGhH0Msgf1shDAvf5CNZg6B
   c4_inputs)
{
  real_T c4_n;
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  c4_emxArray_real32_T *c4_x;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_b_loop_ub;
  int32_T c4_i4;
  real_T c4_N;
  c4_emxArray_boolean_T *c4_tile;
  real32_T c4_a_data[1];
  real_T c4_varargin_1;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_c_loop_ub;
  int32_T c4_i7;
  int32_T c4_d_loop_ub;
  int32_T c4_i8;
  c4_emxArray_real32_T *c4_r;
  int32_T c4_i9;
  int32_T c4_outsize[2];
  const mxArray *c4_d_y = NULL;
  int32_T c4_i10;
  int32_T c4_e_loop_ub;
  int32_T c4_i11;
  int32_T c4_ntilerows;
  real_T c4_b_n;
  int32_T c4_b;
  int32_T c4_i12;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_itilerow;
  int32_T c4_i15;
  int32_T c4_b_itilerow;
  int32_T c4_ibcol;
  int32_T c4_f_loop_ub;
  int32_T c4_i16;
  real_T c4_b_N;
  real_T c4_b_varargin_1;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_g_loop_ub;
  int32_T c4_i19;
  int32_T c4_h_loop_ub;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_b_outsize[2];
  int32_T c4_i_loop_ub;
  const mxArray *c4_e_y = NULL;
  int32_T c4_i22;
  int32_T c4_i23;
  real_T c4_c_N;
  int32_T c4_b_ntilerows;
  int32_T c4_c_b;
  real_T c4_c_varargin_1;
  int32_T c4_d_b;
  int32_T c4_i24;
  int32_T c4_i25;
  boolean_T c4_b_overflow;
  int32_T c4_j_loop_ub;
  int32_T c4_i26;
  int32_T c4_k_loop_ub;
  int32_T c4_i27;
  int32_T c4_c_itilerow;
  int32_T c4_i28;
  int32_T c4_c_outsize[2];
  int32_T c4_d_itilerow;
  int32_T c4_l_loop_ub;
  const mxArray *c4_f_y = NULL;
  int32_T c4_b_ibcol;
  int32_T c4_i29;
  int32_T c4_i30;
  real_T c4_d_N;
  int32_T c4_c_ntilerows;
  int32_T c4_e_b;
  real_T c4_d_varargin_1;
  int32_T c4_f_b;
  c4_emxArray_int8_T *c4_r1;
  int32_T c4_i31;
  int32_T c4_i32;
  boolean_T c4_c_overflow;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_e_itilerow;
  real32_T c4_f;
  int32_T c4_d_outsize[2];
  int32_T c4_f_itilerow;
  int32_T c4_i35;
  const mxArray *c4_g_y = NULL;
  int32_T c4_c_ibcol;
  int8_T c4_i36;
  int32_T c4_i37;
  int32_T c4_o_loop_ub;
  int32_T c4_i38;
  int32_T c4_d_ntilerows;
  int32_T c4_g_b;
  int32_T c4_h_b;
  boolean_T c4_d_overflow;
  int32_T c4_g_itilerow;
  int32_T c4_h_itilerow;
  int32_T c4_d_ibcol;
  c4_n = (real_T)c4_inputs.Location->size[0];
  c4_i = c4_this->pLocation->size[0] * c4_this->pLocation->size[1];
  c4_this->pLocation->size[0] = c4_inputs.Location->size[0];
  c4_this->pLocation->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_this->pLocation, c4_i,
    &c4_qg_emlrtRTEI);
  c4_loop_ub = c4_inputs.Location->size[0] * c4_inputs.Location->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_this->pLocation->data[c4_i1] = c4_inputs.Location->data[c4_i1];
  }

  c4_emxInit_real32_T1(chartInstance, &c4_x, 1, &c4_sg_emlrtRTEI);
  c4_i2 = c4_this->pMetric->size[0];
  c4_this->pMetric->size[0] = (int32_T)c4_n;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pMetric, c4_i2,
    &c4_rg_emlrtRTEI);
  c4_i3 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.Metric->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i3, &c4_sg_emlrtRTEI);
  c4_b_loop_ub = c4_inputs.Metric->size[0] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
    c4_x->data[c4_i4] = c4_inputs.Metric->data[c4_i4];
  }

  c4_N = c4_n;
  c4_emxInit_boolean_T(chartInstance, &c4_tile, 1, &c4_vg_emlrtRTEI);
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_varargin_1 = c4_N;
    c4_assertValidSizeArg(chartInstance, c4_varargin_1);
    c4_i6 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i6,
      &c4_vg_emlrtRTEI);
    c4_d_loop_ub = (int32_T)c4_varargin_1 - 1;
    for (c4_i8 = 0; c4_i8 <= c4_d_loop_ub; c4_i8++) {
      c4_tile->data[c4_i8] = false;
    }

    c4_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_d_y);
    }

    c4_i10 = c4_x->size[0];
    c4_x->size[0] = c4_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i10, &c4_xg_emlrtRTEI);
    c4_ntilerows = c4_tile->size[0];
    c4_b = c4_ntilerows;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_itilerow = 1; c4_itilerow - 1 < c4_ntilerows; c4_itilerow++) {
      c4_b_itilerow = c4_itilerow - 1;
      c4_ibcol = c4_b_itilerow;
      c4_x->data[c4_ibcol] = c4_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c4_this->pMetric->size[0], c4_x->size[0]);
  c4_i5 = c4_this->pMetric->size[0];
  c4_this->pMetric->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pMetric, c4_i5,
    &c4_ug_emlrtRTEI);
  c4_c_loop_ub = c4_x->size[0] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
    c4_this->pMetric->data[c4_i7] = c4_x->data[c4_i7];
  }

  c4_emxInit_real32_T(chartInstance, &c4_r, 2, &c4_ad_emlrtRTEI);
  c4_i9 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = c4_this->pLocation->size[0];
  c4_r->size[1] = 2;
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_r, c4_i9, &c4_wg_emlrtRTEI);
  c4_e_loop_ub = c4_this->pLocation->size[0] * c4_this->pLocation->size[1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_r->data[c4_i11] = c4_this->pLocation->data[c4_i11];
  }

  c4_b_n = (real_T)c4_r->size[0];
  c4_i12 = c4_this->pScale->size[0];
  c4_this->pScale->size[0] = (int32_T)c4_b_n;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pScale, c4_i12,
    &c4_ad_emlrtRTEI);
  c4_i13 = c4_this->pOrientation->size[0];
  c4_this->pOrientation->size[0] = (int32_T)c4_b_n;
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pOrientation, c4_i13,
    &c4_ad_emlrtRTEI);
  c4_i14 = c4_this->pSignOfLaplacian->size[0];
  c4_this->pSignOfLaplacian->size[0] = (int32_T)c4_b_n;
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_this->pSignOfLaplacian, c4_i14,
    &c4_ad_emlrtRTEI);
  c4_i15 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.Scale->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i15, &c4_yg_emlrtRTEI);
  c4_f_loop_ub = c4_inputs.Scale->size[0] - 1;
  c4_emxFree_real32_T(chartInstance, &c4_r);
  for (c4_i16 = 0; c4_i16 <= c4_f_loop_ub; c4_i16++) {
    c4_x->data[c4_i16] = c4_inputs.Scale->data[c4_i16];
  }

  c4_b_N = c4_b_n;
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_b_varargin_1 = c4_b_N;
    c4_assertValidSizeArg(chartInstance, c4_b_varargin_1);
    c4_i18 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_b_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i18,
      &c4_vg_emlrtRTEI);
    c4_h_loop_ub = (int32_T)c4_b_varargin_1 - 1;
    for (c4_i20 = 0; c4_i20 <= c4_h_loop_ub; c4_i20++) {
      c4_tile->data[c4_i20] = false;
    }

    c4_b_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_b_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_e_y);
    }

    c4_i23 = c4_x->size[0];
    c4_x->size[0] = c4_b_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i23, &c4_xg_emlrtRTEI);
    c4_b_ntilerows = c4_tile->size[0];
    c4_c_b = c4_b_ntilerows;
    c4_d_b = c4_c_b;
    if (1 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_c_itilerow = 1; c4_c_itilerow - 1 < c4_b_ntilerows; c4_c_itilerow++)
    {
      c4_d_itilerow = c4_c_itilerow - 1;
      c4_b_ibcol = c4_d_itilerow;
      c4_x->data[c4_b_ibcol] = c4_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c4_this->pScale->size[0], c4_x->size[0]);
  c4_i17 = c4_this->pScale->size[0];
  c4_this->pScale->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pScale, c4_i17,
    &c4_ah_emlrtRTEI);
  c4_g_loop_ub = c4_x->size[0] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_g_loop_ub; c4_i19++) {
    c4_this->pScale->data[c4_i19] = c4_x->data[c4_i19];
  }

  c4_i21 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.Orientation->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i21, &c4_fh_emlrtRTEI);
  c4_i_loop_ub = c4_inputs.Orientation->size[0] - 1;
  for (c4_i22 = 0; c4_i22 <= c4_i_loop_ub; c4_i22++) {
    c4_x->data[c4_i22] = c4_inputs.Orientation->data[c4_i22];
  }

  c4_c_N = c4_b_n;
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_c_varargin_1 = c4_c_N;
    c4_assertValidSizeArg(chartInstance, c4_c_varargin_1);
    c4_i25 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_c_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i25,
      &c4_vg_emlrtRTEI);
    c4_k_loop_ub = (int32_T)c4_c_varargin_1 - 1;
    for (c4_i27 = 0; c4_i27 <= c4_k_loop_ub; c4_i27++) {
      c4_tile->data[c4_i27] = false;
    }

    c4_c_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_c_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_f_y);
    }

    c4_i30 = c4_x->size[0];
    c4_x->size[0] = c4_c_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i30, &c4_xg_emlrtRTEI);
    c4_c_ntilerows = c4_tile->size[0];
    c4_e_b = c4_c_ntilerows;
    c4_f_b = c4_e_b;
    if (1 > c4_f_b) {
      c4_c_overflow = false;
    } else {
      c4_c_overflow = (c4_f_b > 2147483646);
    }

    if (c4_c_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_e_itilerow = 1; c4_e_itilerow - 1 < c4_c_ntilerows; c4_e_itilerow++)
    {
      c4_f_itilerow = c4_e_itilerow - 1;
      c4_c_ibcol = c4_f_itilerow;
      c4_x->data[c4_c_ibcol] = c4_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c4_this->pOrientation->size[0], c4_x->size
    [0]);
  c4_i24 = c4_this->pOrientation->size[0];
  c4_this->pOrientation->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_this->pOrientation, c4_i24,
    &c4_ch_emlrtRTEI);
  c4_j_loop_ub = c4_x->size[0] - 1;
  for (c4_i26 = 0; c4_i26 <= c4_j_loop_ub; c4_i26++) {
    c4_this->pOrientation->data[c4_i26] = c4_x->data[c4_i26];
  }

  c4_i28 = c4_x->size[0];
  c4_x->size[0] = c4_inputs.SignOfLaplacian->size[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i28, &c4_dh_emlrtRTEI);
  c4_l_loop_ub = c4_inputs.SignOfLaplacian->size[0] - 1;
  for (c4_i29 = 0; c4_i29 <= c4_l_loop_ub; c4_i29++) {
    c4_x->data[c4_i29] = (real32_T)c4_inputs.SignOfLaplacian->data[c4_i29];
  }

  c4_d_N = c4_b_n;
  if (c4_x->size[0] == 1) {
    c4_a_data[0] = c4_x->data[0];
    c4_d_varargin_1 = c4_d_N;
    c4_assertValidSizeArg(chartInstance, c4_d_varargin_1);
    c4_i32 = c4_tile->size[0];
    c4_tile->size[0] = (int32_T)c4_d_varargin_1;
    c4_emxEnsureCapacity_boolean_T(chartInstance, c4_tile, c4_i32,
      &c4_vg_emlrtRTEI);
    c4_n_loop_ub = (int32_T)c4_d_varargin_1 - 1;
    for (c4_i34 = 0; c4_i34 <= c4_n_loop_ub; c4_i34++) {
      c4_tile->data[c4_i34] = false;
    }

    c4_d_outsize[0] = c4_tile->size[0];
    if (!((real_T)c4_d_outsize[0] == (real_T)c4_tile->size[0])) {
      c4_g_y = NULL;
      sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 1U, 14, c4_g_y);
    }

    c4_i37 = c4_x->size[0];
    c4_x->size[0] = c4_d_outsize[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_x, c4_i37, &c4_xg_emlrtRTEI);
    c4_d_ntilerows = c4_tile->size[0];
    c4_g_b = c4_d_ntilerows;
    c4_h_b = c4_g_b;
    if (1 > c4_h_b) {
      c4_d_overflow = false;
    } else {
      c4_d_overflow = (c4_h_b > 2147483646);
    }

    if (c4_d_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_g_itilerow = 1; c4_g_itilerow - 1 < c4_d_ntilerows; c4_g_itilerow++)
    {
      c4_h_itilerow = c4_g_itilerow - 1;
      c4_d_ibcol = c4_h_itilerow;
      c4_x->data[c4_d_ibcol] = c4_a_data[0];
    }
  }

  c4_emxFree_boolean_T(chartInstance, &c4_tile);
  c4_emxInit_int8_T(chartInstance, &c4_r1, 1, &c4_ad_emlrtRTEI);
  c4_i31 = c4_r1->size[0];
  c4_r1->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_r1, c4_i31, &c4_eh_emlrtRTEI);
  c4_m_loop_ub = c4_x->size[0] - 1;
  for (c4_i33 = 0; c4_i33 <= c4_m_loop_ub; c4_i33++) {
    c4_f = muSingleScalarRound(c4_x->data[c4_i33]);
    if (c4_f < 128.0F) {
      if (c4_f >= -128.0F) {
        c4_i36 = (int8_T)c4_f;
      } else {
        c4_i36 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c4_f >= 128.0F) {
      c4_i36 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c4_i36 = 0;
    }

    c4_r1->data[c4_i33] = c4_i36;
  }

  c4_emxFree_real32_T(chartInstance, &c4_x);
  sf_mex_lw_sub_assign_size_check_1d(c4_this->pSignOfLaplacian->size[0],
    c4_r1->size[0]);
  c4_i35 = c4_this->pSignOfLaplacian->size[0];
  c4_this->pSignOfLaplacian->size[0] = c4_r1->size[0];
  c4_emxEnsureCapacity_int8_T(chartInstance, c4_this->pSignOfLaplacian, c4_i35,
    &c4_eh_emlrtRTEI);
  c4_o_loop_ub = c4_r1->size[0] - 1;
  for (c4_i38 = 0; c4_i38 <= c4_o_loop_ub; c4_i38++) {
    c4_this->pSignOfLaplacian->data[c4_i38] = c4_r1->data[c4_i38];
  }

  c4_emxFree_int8_T(chartInstance, &c4_r1);
}

static void c4_b_normalizeX(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T *c4_c_X)
{
  c4_emxArray_real32_T *c4_ztemp;
  int32_T c4_i;
  int32_T c4_i1;
  real_T c4_sz[2];
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_iv[2];
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_nx;
  int32_T c4_b;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_k;
  c4_emxArray_real32_T *c4_Xnorm;
  int32_T c4_b_k;
  boolean_T c4_c_b;
  real32_T c4_a;
  real32_T c4_d_y;
  int32_T c4_npages;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_loop_ub;
  int32_T c4_d_b;
  int32_T c4_i12;
  int32_T c4_e_b;
  boolean_T c4_b_overflow;
  boolean_T c4_p;
  real_T c4_d;
  int32_T c4_i13;
  int32_T c4_c_k;
  int32_T c4_xi;
  real_T c4_d_k;
  int32_T c4_b_xi;
  const mxArray *c4_e_y = NULL;
  int32_T c4_xpageoffset;
  int32_T c4_b_nx;
  static char_T c4_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  boolean_T c4_b_p;
  int32_T c4_ypageoffset;
  int32_T c4_f_b;
  const mxArray *c4_f_y = NULL;
  int32_T c4_ix;
  int32_T c4_g_b;
  int32_T c4_iy;
  const mxArray *c4_g_y = NULL;
  boolean_T c4_c_overflow;
  static char_T c4_b_cv1[4] = { 's', 'q', 'r', 't' };

  int32_T c4_e_k;
  int32_T c4_xoffset;
  int32_T c4_f_k;
  int32_T c4_i14;
  int32_T c4_g_k;
  real32_T c4_x;
  real32_T c4_b_x;
  int32_T c4_b_loop_ub;
  int32_T c4_i15;
  boolean_T c4_iscompatible;
  int32_T c4_sak;
  int32_T c4_sbk;
  int32_T c4_sck;
  int32_T c4_csz[2];
  const mxArray *c4_h_y = NULL;
  int32_T c4_i16;
  static char_T c4_b_cv2[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 's',
    'x', 'f', 'u', 'n', ':', 'a', 'r', 'r', 'a', 'y', 'D', 'i', 'm', 'e', 'n',
    's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't', 'M', 'a', 't', 'c', 'h' };

  const mxArray *c4_i_y = NULL;
  boolean_T c4_b1;
  int32_T c4_sza;
  int32_T c4_szb;
  int32_T c4_i17;
  int32_T c4_szc;
  int32_T c4_acoef;
  c4_emxArray_boolean_T *c4_r;
  int32_T c4_tmp_data[64];
  int32_T c4_bcoef;
  int32_T c4_exponent;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_h_k;
  int32_T c4_ia;
  int32_T c4_c_loop_ub;
  int32_T c4_ib;
  int32_T c4_i20;
  int32_T c4_ic;
  int32_T c4_varargin_1;
  int32_T c4_varargin_2;
  int32_T c4_end;
  int32_T c4_varargin_3;
  int32_T c4_trueCount;
  int32_T c4_i_k;
  int32_T c4_b_i;
  int32_T c4_b_ia;
  int32_T c4_b_ic;
  c4_emxArray_int32_T *c4_r1;
  int32_T c4_b_varargin_1;
  int32_T c4_i21;
  int32_T c4_b_varargin_2;
  int32_T c4_b_varargin_3;
  int32_T c4_varargin_4;
  int32_T c4_varargin_6;
  int32_T c4_partialTrueCount;
  real32_T c4_c_x;
  int32_T c4_c_i;
  real32_T c4_j_y;
  real32_T c4_d_x;
  real32_T c4_k_y;
  real32_T c4_z;
  int32_T c4_iv1[2];
  int32_T c4_i22;
  int32_T c4_d_loop_ub;
  int32_T c4_i23;
  int32_T c4_i24;
  c4_emxInit_real32_T(chartInstance, &c4_ztemp, 2, &c4_rh_emlrtRTEI);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_sz[c4_i] = (real_T)c4_c_X->size[c4_i];
  }

  c4_i1 = c4_ztemp->size[0] * c4_ztemp->size[1];
  c4_ztemp->size[0] = 64;
  c4_ztemp->size[1] = (int32_T)c4_sz[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ztemp, c4_i1, &c4_gh_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_iv[c4_i2] = c4_ztemp->size[c4_i2];
  }

  c4_i3 = c4_ztemp->size[0] * c4_ztemp->size[1];
  c4_ztemp->size[0] = c4_iv[0];
  c4_ztemp->size[1] = c4_iv[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ztemp, c4_i3, &c4_hh_emlrtRTEI);
  for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
    c4_iv[c4_i4] = c4_ztemp->size[c4_i4];
  }

  c4_i5 = c4_ztemp->size[0] * c4_ztemp->size[1];
  c4_ztemp->size[0] = c4_iv[0];
  c4_ztemp->size[1] = c4_iv[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ztemp, c4_i5, &c4_ih_emlrtRTEI);
  for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
    c4_iv[c4_i6] = c4_ztemp->size[c4_i6];
  }

  c4_i7 = c4_ztemp->size[0] * c4_ztemp->size[1];
  c4_ztemp->size[0] = c4_iv[0];
  c4_ztemp->size[1] = c4_iv[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ztemp, c4_i7, &c4_jh_emlrtRTEI);
  c4_nx = c4_ztemp->size[1] << 6;
  c4_b = c4_nx;
  c4_b_b = c4_b;
  if (1 > c4_b_b) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_b_b > 2147483646);
  }

  if (c4_overflow) {
    c4_check_forloop_overflow_error(chartInstance, true);
  }

  for (c4_k = 1; c4_k - 1 < c4_nx; c4_k++) {
    c4_b_k = c4_k - 1;
    c4_a = c4_c_X->data[c4_b_k];
    c4_d_y = c4_a * c4_a;
    c4_ztemp->data[c4_b_k] = c4_d_y;
  }

  c4_emxInit_real32_T(chartInstance, &c4_Xnorm, 2, &c4_qh_emlrtRTEI);
  c4_c_b = (c4_ztemp->size[1] == 0);
  if (c4_c_b) {
    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_sz[c4_i8] = (real_T)c4_ztemp->size[c4_i8];
    }

    c4_i10 = c4_Xnorm->size[0] * c4_Xnorm->size[1];
    c4_Xnorm->size[0] = 1;
    c4_Xnorm->size[1] = (int32_T)c4_sz[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, c4_Xnorm, c4_i10,
      &c4_kh_emlrtRTEI);
    c4_loop_ub = (int32_T)c4_sz[1] - 1;
    for (c4_i12 = 0; c4_i12 <= c4_loop_ub; c4_i12++) {
      c4_Xnorm->data[c4_i12] = 0.0F;
    }
  } else {
    c4_npages = c4_ztemp->size[1];
    for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
      c4_sz[c4_i9] = (real_T)c4_ztemp->size[c4_i9];
    }

    c4_i11 = c4_Xnorm->size[0] * c4_Xnorm->size[1];
    c4_Xnorm->size[0] = 1;
    c4_Xnorm->size[1] = (int32_T)c4_sz[1];
    c4_emxEnsureCapacity_real32_T(chartInstance, c4_Xnorm, c4_i11,
      &c4_lh_emlrtRTEI);
    c4_d_b = c4_npages;
    c4_e_b = c4_d_b;
    if (1 > c4_e_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_e_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_xi = 1; c4_xi - 1 < c4_npages; c4_xi++) {
      c4_b_xi = c4_xi - 1;
      c4_xpageoffset = (c4_b_xi << 6) + 1;
      c4_ypageoffset = c4_b_xi + 1;
      c4_ix = c4_xpageoffset - 1;
      c4_iy = c4_ypageoffset - 1;
      c4_Xnorm->data[c4_iy] = c4_ztemp->data[c4_ix];
      for (c4_e_k = 0; c4_e_k < 63; c4_e_k++) {
        c4_xoffset = (c4_xpageoffset + c4_e_k) + 1;
        c4_ix = c4_xoffset - 1;
        c4_iy = c4_ypageoffset - 1;
        c4_Xnorm->data[c4_iy] += c4_ztemp->data[c4_ix];
      }
    }
  }

  c4_p = false;
  c4_d = (real_T)c4_Xnorm->size[1];
  c4_i13 = (int32_T)c4_d - 1;
  for (c4_c_k = 0; c4_c_k <= c4_i13; c4_c_k++) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    if (c4_p || (c4_Xnorm->data[(int32_T)c4_d_k - 1] < 0.0F)) {
      c4_b_p = true;
    } else {
      c4_b_p = false;
    }

    c4_p = c4_b_p;
  }

  if (c4_p) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 2U, 14, c4_f_y, 14,
                  c4_g_y)));
  }

  c4_b_nx = c4_Xnorm->size[1];
  c4_f_b = c4_b_nx;
  c4_g_b = c4_f_b;
  if (1 > c4_g_b) {
    c4_c_overflow = false;
  } else {
    c4_c_overflow = (c4_g_b > 2147483646);
  }

  if (c4_c_overflow) {
    c4_check_forloop_overflow_error(chartInstance, true);
  }

  for (c4_f_k = 1; c4_f_k - 1 < c4_b_nx; c4_f_k++) {
    c4_g_k = c4_f_k - 1;
    c4_x = c4_Xnorm->data[c4_g_k];
    c4_b_x = c4_x;
    c4_b_x = muSingleScalarSqrt(c4_b_x);
    c4_Xnorm->data[c4_g_k] = c4_b_x;
  }

  c4_i14 = c4_ztemp->size[0] * c4_ztemp->size[1];
  c4_ztemp->size[0] = 64;
  c4_ztemp->size[1] = c4_c_X->size[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_ztemp, c4_i14,
    &c4_mh_emlrtRTEI);
  c4_b_loop_ub = c4_c_X->size[0] * c4_c_X->size[1] - 1;
  for (c4_i15 = 0; c4_i15 <= c4_b_loop_ub; c4_i15++) {
    c4_ztemp->data[c4_i15] = c4_c_X->data[c4_i15];
  }

  c4_iscompatible = true;
  c4_sak = c4_ztemp->size[1];
  c4_sbk = c4_Xnorm->size[1];
  if (c4_sbk == 1) {
    c4_sck = c4_sak;
  } else if (c4_sak == 1) {
    c4_sck = c4_sbk;
  } else if (c4_sak == c4_sbk) {
    c4_sck = c4_sak;
  } else {
    c4_iscompatible = false;
    if (c4_sbk < c4_sak) {
      c4_sck = c4_sbk;
    } else {
      c4_sck = c4_sak;
    }
  }

  c4_csz[1] = c4_sck;
  if (!c4_iscompatible) {
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    sf_mex_call(chartInstance->c4_fEmlrtCtx, "error", 0U, 2U, 14, c4_h_y, 14,
                sf_mex_call(chartInstance->c4_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c4_fEmlrtCtx, "message", 1U, 1U, 14, c4_i_y)));
  }

  c4_i16 = c4_c_X->size[0] * c4_c_X->size[1];
  c4_c_X->size[0] = 64;
  c4_c_X->size[1] = c4_csz[1];
  c4_emxEnsureCapacity_real32_T(chartInstance, c4_c_X, c4_i16, &c4_nh_emlrtRTEI);
  c4_b1 = (c4_c_X->size[1] == 0);
  if (!c4_b1) {
    c4_sza = c4_ztemp->size[1];
    c4_szb = c4_Xnorm->size[1];
    c4_szc = c4_c_X->size[1] - 1;
    c4_acoef = (c4_sza != 1);
    c4_bcoef = (c4_szb != 1);
    c4_i18 = c4_szc;
    for (c4_h_k = 0; c4_h_k <= c4_i18; c4_h_k++) {
      c4_ia = c4_acoef * c4_h_k;
      c4_ib = c4_bcoef * c4_h_k;
      c4_ic = c4_h_k;
      c4_varargin_1 = c4_ic + 1;
      c4_varargin_2 = c4_ia + 1;
      c4_varargin_3 = c4_ib + 1;
      for (c4_i_k = 0; c4_i_k < 64; c4_i_k++) {
        c4_b_ia = c4_i_k;
        c4_b_ic = c4_i_k;
        c4_b_varargin_1 = c4_b_ic;
        c4_b_varargin_2 = c4_varargin_1 - 1;
        c4_b_varargin_3 = c4_b_ia;
        c4_varargin_4 = c4_varargin_2 - 1;
        c4_varargin_6 = c4_varargin_3 - 1;
        c4_c_x = c4_ztemp->data[c4_b_varargin_3 + (c4_varargin_4 << 6)];
        c4_j_y = c4_Xnorm->data[c4_varargin_6];
        c4_d_x = c4_c_x;
        c4_k_y = c4_j_y;
        c4_z = c4_d_x / c4_k_y;
        c4_c_X->data[c4_b_varargin_1 + (c4_b_varargin_2 << 6)] = c4_z;
      }
    }
  }

  c4_emxFree_real32_T(chartInstance, &c4_ztemp);
  for (c4_i17 = 0; c4_i17 < 64; c4_i17++) {
    c4_tmp_data[c4_i17] = 1 + c4_i17;
  }

  c4_emxInit_boolean_T1(chartInstance, &c4_r, 2, &c4_ph_emlrtRTEI);
  frexp(1.0, &c4_exponent);
  c4_i19 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = 1;
  c4_r->size[1] = c4_Xnorm->size[1];
  c4_emxEnsureCapacity_boolean_T1(chartInstance, c4_r, c4_i19, &c4_ph_emlrtRTEI);
  c4_c_loop_ub = c4_Xnorm->size[0] * c4_Xnorm->size[1] - 1;
  for (c4_i20 = 0; c4_i20 <= c4_c_loop_ub; c4_i20++) {
    c4_r->data[c4_i20] = (c4_Xnorm->data[c4_i20] <= 1.1920929E-7F);
  }

  c4_emxFree_real32_T(chartInstance, &c4_Xnorm);
  c4_end = c4_r->size[1] - 1;
  c4_trueCount = 0;
  for (c4_b_i = 0; c4_b_i <= c4_end; c4_b_i++) {
    if (c4_r->data[c4_b_i]) {
      c4_trueCount++;
    }
  }

  c4_emxInit_int32_T1(chartInstance, &c4_r1, 2, &c4_jd_emlrtRTEI);
  c4_i21 = c4_r1->size[0] * c4_r1->size[1];
  c4_r1->size[0] = 1;
  c4_r1->size[1] = c4_trueCount;
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_r1, c4_i21, &c4_jd_emlrtRTEI);
  c4_partialTrueCount = 0;
  for (c4_c_i = 0; c4_c_i <= c4_end; c4_c_i++) {
    if (c4_r->data[c4_c_i]) {
      c4_r1->data[c4_partialTrueCount] = c4_c_i + 1;
      c4_partialTrueCount++;
    }
  }

  c4_emxFree_boolean_T(chartInstance, &c4_r);
  c4_iv1[0] = 64;
  c4_iv1[1] = c4_r1->size[1];
  c4_i22 = c4_c_X->size[1];
  c4_d_loop_ub = c4_iv1[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_d_loop_ub; c4_i23++) {
    for (c4_i24 = 0; c4_i24 < 64; c4_i24++) {
      c4_c_X->data[(c4_tmp_data[c4_i24] + ((sf_eml_array_bounds_check(NULL,
        chartInstance->S, 1U, 0, 0, MAX_uint32_T, c4_r1->data[c4_i23], 1, c4_i22)
        - 1) << 6)) - 1] = 0.0F;
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_r1);
}

static void c4_b_sort(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
                      c4_emxArray_real32_T *c4_x, c4_emxArray_int32_T *c4_idx)
{
  c4_emxArray_real32_T *c4_vwork;
  int32_T c4_vlen;
  int32_T c4_iv[2];
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  real_T c4_dv[2];
  int32_T c4_vstride;
  int32_T c4_b;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_j;
  c4_emxArray_int32_T *c4_iidx;
  int32_T c4_b_j;
  int32_T c4_c_b;
  int32_T c4_d_b;
  boolean_T c4_b_overflow;
  int32_T c4_k;
  int32_T c4_b_k;
  int32_T c4_e_b;
  int32_T c4_f_b;
  boolean_T c4_c_overflow;
  int32_T c4_c_k;
  c4_emxInit_real32_T1(chartInstance, &c4_vwork, 1, &c4_sh_emlrtRTEI);
  c4_vlen = c4_x->size[1];
  c4_iv[0] = c4_vlen;
  c4_iv[1] = 1;
  c4_i = c4_vwork->size[0];
  c4_vwork->size[0] = c4_iv[0];
  c4_emxEnsureCapacity_real32_T1(chartInstance, c4_vwork, c4_i, &c4_mg_emlrtRTEI);
  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_dv[c4_i1] = (real_T)c4_x->size[c4_i1];
  }

  c4_i2 = c4_idx->size[0] * c4_idx->size[1];
  c4_idx->size[0] = (int32_T)c4_dv[0];
  c4_idx->size[1] = (int32_T)c4_dv[1];
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_idx, c4_i2, &c4_mg_emlrtRTEI);
  c4_vstride = c4_x->size[0];
  c4_b = c4_vstride;
  c4_b_b = c4_b;
  if (1 > c4_b_b) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_b_b > 2147483646);
  }

  if (c4_overflow) {
    c4_check_forloop_overflow_error(chartInstance, true);
  }

  c4_j = 1;
  c4_emxInit_int32_T(chartInstance, &c4_iidx, 1, &c4_mg_emlrtRTEI);
  while (c4_j - 1 <= c4_vstride - 1) {
    c4_b_j = c4_j - 1;
    c4_c_b = c4_vlen;
    c4_d_b = c4_c_b;
    if (1 > c4_d_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_k = 1; c4_k - 1 < c4_vlen; c4_k++) {
      c4_b_k = c4_k - 1;
      c4_vwork->data[c4_b_k] = c4_x->data[c4_b_j + c4_b_k * c4_vstride];
    }

    c4_b_sortIdx(chartInstance, c4_vwork, c4_iidx);
    c4_e_b = c4_vlen;
    c4_f_b = c4_e_b;
    if (1 > c4_f_b) {
      c4_c_overflow = false;
    } else {
      c4_c_overflow = (c4_f_b > 2147483646);
    }

    if (c4_c_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_vlen; c4_c_k++) {
      c4_b_k = c4_c_k - 1;
      c4_x->data[c4_b_j + c4_b_k * c4_vstride] = c4_vwork->data[c4_b_k];
      c4_idx->data[c4_b_j + c4_b_k * c4_vstride] = c4_iidx->data[c4_b_k];
    }

    c4_j++;
  }

  c4_emxFree_int32_T(chartInstance, &c4_iidx);
  c4_emxFree_real32_T(chartInstance, &c4_vwork);
}

static void c4_b_sortIdx(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_real32_T *c4_x, c4_emxArray_int32_T *c4_idx)
{
  real_T c4_dv[2];
  int32_T c4_i;
  int32_T c4_loop_ub;
  int32_T c4_i1;
  int32_T c4_n;
  int32_T c4_b_n;
  int32_T c4_i2;
  int32_T c4_i3;
  real32_T c4_x4[4];
  c4_emxArray_int32_T *c4_iwork;
  int32_T c4_idx4[4];
  int32_T c4_i4;
  int32_T c4_iv[1];
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_b_loop_ub;
  int32_T c4_i8;
  c4_emxArray_real32_T *c4_xwork;
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_c_loop_ub;
  int32_T c4_i13;
  int32_T c4_nNaNs;
  int32_T c4_ib;
  int32_T c4_b;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_k;
  int32_T c4_wOffset;
  int32_T c4_b_k;
  real32_T c4_b_x;
  int32_T c4_c_n;
  boolean_T c4_c_b;
  int32_T c4_m;
  int32_T c4_i14;
  int32_T c4_d_b;
  int32_T c4_e_b;
  int32_T c4_perm[4];
  boolean_T c4_b_overflow;
  int32_T c4_f_b;
  int32_T c4_quartetOffset;
  int32_T c4_g_b;
  int32_T c4_b_i1;
  int32_T c4_c_k;
  boolean_T c4_c_overflow;
  int32_T c4_b_i2;
  int32_T c4_b_i3;
  int32_T c4_itmp;
  int32_T c4_d_k;
  int32_T c4_b_i4;
  int32_T c4_nNonNaN;
  int32_T c4_preSortLevel;
  int32_T c4_nBlocks;
  int32_T c4_h_b;
  int32_T c4_i_b;
  boolean_T c4_d_overflow;
  int32_T c4_j_b;
  int32_T c4_tailOffset;
  int32_T c4_k_b;
  int32_T c4_nLastBlock;
  int32_T c4_offset;
  int32_T c4_l_b;
  int32_T c4_bLen;
  int32_T c4_bLen2;
  int32_T c4_nPairs;
  int32_T c4_m_b;
  int32_T c4_n_b;
  boolean_T c4_e_overflow;
  int32_T c4_e_k;
  int32_T c4_f_k;
  int32_T c4_blockOffset;
  int32_T c4_o_b;
  int32_T c4_p_b;
  boolean_T c4_f_overflow;
  int32_T c4_j;
  int32_T c4_p;
  int32_T c4_b_j;
  int32_T c4_q;
  int32_T c4_b_iwork[256];
  int32_T c4_iout;
  real32_T c4_b_xwork[256];
  int32_T c4_exitg1;
  int32_T c4_offset1;
  int32_T c4_a;
  int32_T c4_q_b;
  int32_T c4_b_a;
  int32_T c4_r_b;
  boolean_T c4_g_overflow;
  int32_T c4_c_j;
  c4_dv[0] = (real_T)c4_x->size[0];
  c4_dv[1] = 1.0;
  c4_i = c4_idx->size[0];
  c4_idx->size[0] = (int32_T)c4_dv[0];
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_idx, c4_i, &c4_th_emlrtRTEI);
  c4_loop_ub = (int32_T)c4_dv[0] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_idx->data[c4_i1] = 0;
  }

  if (c4_x->size[0] != 0) {
    c4_n = c4_x->size[0];
    c4_b_n = c4_x->size[0];
    for (c4_i2 = 0; c4_i2 < 4; c4_i2++) {
      c4_x4[c4_i2] = 0.0F;
    }

    for (c4_i3 = 0; c4_i3 < 4; c4_i3++) {
      c4_idx4[c4_i3] = 0;
    }

    c4_emxInit_int32_T(chartInstance, &c4_iwork, 1, &c4_uh_emlrtRTEI);
    c4_i4 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_idx->size[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, c4_iwork, c4_i4,
      &c4_uh_emlrtRTEI);
    c4_iv[0] = c4_iwork->size[0];
    c4_i5 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_iv[0];
    c4_emxEnsureCapacity_int32_T(chartInstance, c4_iwork, c4_i5,
      &c4_vh_emlrtRTEI);
    c4_i6 = c4_iwork->size[0];
    c4_i7 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_i6;
    c4_emxEnsureCapacity_int32_T(chartInstance, c4_iwork, c4_i7,
      &c4_wh_emlrtRTEI);
    c4_b_loop_ub = c4_i6 - 1;
    for (c4_i8 = 0; c4_i8 <= c4_b_loop_ub; c4_i8++) {
      c4_iwork->data[c4_i8] = 0;
    }

    c4_emxInit_real32_T1(chartInstance, &c4_xwork, 1, &c4_xh_emlrtRTEI);
    c4_dv[0] = (real_T)c4_x->size[0];
    c4_dv[1] = 1.0;
    c4_i9 = c4_xwork->size[0];
    c4_xwork->size[0] = (int32_T)c4_dv[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_xwork, c4_i9,
      &c4_xh_emlrtRTEI);
    c4_iv[0] = c4_xwork->size[0];
    c4_i10 = c4_xwork->size[0];
    c4_xwork->size[0] = c4_iv[0];
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_xwork, c4_i10,
      &c4_vh_emlrtRTEI);
    c4_i11 = c4_xwork->size[0];
    c4_i12 = c4_xwork->size[0];
    c4_xwork->size[0] = c4_i11;
    c4_emxEnsureCapacity_real32_T1(chartInstance, c4_xwork, c4_i12,
      &c4_yh_emlrtRTEI);
    c4_c_loop_ub = c4_i11 - 1;
    for (c4_i13 = 0; c4_i13 <= c4_c_loop_ub; c4_i13++) {
      c4_xwork->data[c4_i13] = 0.0F;
    }

    c4_nNaNs = 0;
    c4_ib = 0;
    c4_b = c4_b_n;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_k = 1; c4_k - 1 < c4_b_n; c4_k++) {
      c4_b_k = c4_k - 1;
      c4_b_x = c4_x->data[c4_b_k];
      c4_c_b = muSingleScalarIsNaN(c4_b_x);
      if (c4_c_b) {
        c4_idx->data[(c4_b_n - c4_nNaNs) - 1] = c4_b_k + 1;
        c4_xwork->data[(c4_b_n - c4_nNaNs) - 1] = c4_x->data[c4_b_k];
        c4_nNaNs++;
      } else {
        c4_ib++;
        c4_idx4[c4_ib - 1] = c4_b_k + 1;
        c4_x4[c4_ib - 1] = c4_x->data[c4_b_k];
        if (c4_ib == 4) {
          c4_quartetOffset = c4_b_k - c4_nNaNs;
          if (c4_x4[0] <= c4_x4[1]) {
            c4_b_i1 = 1;
            c4_b_i2 = 2;
          } else {
            c4_b_i1 = 2;
            c4_b_i2 = 1;
          }

          if (c4_x4[2] <= c4_x4[3]) {
            c4_b_i3 = 3;
            c4_b_i4 = 4;
          } else {
            c4_b_i3 = 4;
            c4_b_i4 = 3;
          }

          if (c4_x4[c4_b_i1 - 1] <= c4_x4[c4_b_i3 - 1]) {
            if (c4_x4[c4_b_i2 - 1] <= c4_x4[c4_b_i3 - 1]) {
              c4_perm[0] = c4_b_i1;
              c4_perm[1] = c4_b_i2;
              c4_perm[2] = c4_b_i3;
              c4_perm[3] = c4_b_i4;
            } else if (c4_x4[c4_b_i2 - 1] <= c4_x4[c4_b_i4 - 1]) {
              c4_perm[0] = c4_b_i1;
              c4_perm[1] = c4_b_i3;
              c4_perm[2] = c4_b_i2;
              c4_perm[3] = c4_b_i4;
            } else {
              c4_perm[0] = c4_b_i1;
              c4_perm[1] = c4_b_i3;
              c4_perm[2] = c4_b_i4;
              c4_perm[3] = c4_b_i2;
            }
          } else if (c4_x4[c4_b_i1 - 1] <= c4_x4[c4_b_i4 - 1]) {
            if (c4_x4[c4_b_i2 - 1] <= c4_x4[c4_b_i4 - 1]) {
              c4_perm[0] = c4_b_i3;
              c4_perm[1] = c4_b_i1;
              c4_perm[2] = c4_b_i2;
              c4_perm[3] = c4_b_i4;
            } else {
              c4_perm[0] = c4_b_i3;
              c4_perm[1] = c4_b_i1;
              c4_perm[2] = c4_b_i4;
              c4_perm[3] = c4_b_i2;
            }
          } else {
            c4_perm[0] = c4_b_i3;
            c4_perm[1] = c4_b_i4;
            c4_perm[2] = c4_b_i1;
            c4_perm[3] = c4_b_i2;
          }

          c4_idx->data[c4_quartetOffset - 3] = c4_idx4[c4_perm[0] - 1];
          c4_idx->data[c4_quartetOffset - 2] = c4_idx4[c4_perm[1] - 1];
          c4_idx->data[c4_quartetOffset - 1] = c4_idx4[c4_perm[2] - 1];
          c4_idx->data[c4_quartetOffset] = c4_idx4[c4_perm[3] - 1];
          c4_x->data[c4_quartetOffset - 3] = c4_x4[c4_perm[0] - 1];
          c4_x->data[c4_quartetOffset - 2] = c4_x4[c4_perm[1] - 1];
          c4_x->data[c4_quartetOffset - 1] = c4_x4[c4_perm[2] - 1];
          c4_x->data[c4_quartetOffset] = c4_x4[c4_perm[3] - 1];
          c4_ib = 0;
        }
      }
    }

    c4_wOffset = (c4_b_n - c4_nNaNs) - 1;
    if (c4_ib > 0) {
      c4_c_n = c4_ib;
      for (c4_i14 = 0; c4_i14 < 4; c4_i14++) {
        c4_perm[c4_i14] = 0;
      }

      if (c4_c_n == 1) {
        c4_perm[0] = 1;
      } else if (c4_c_n == 2) {
        if (c4_x4[0] <= c4_x4[1]) {
          c4_perm[0] = 1;
          c4_perm[1] = 2;
        } else {
          c4_perm[0] = 2;
          c4_perm[1] = 1;
        }
      } else if (c4_x4[0] <= c4_x4[1]) {
        if (c4_x4[1] <= c4_x4[2]) {
          c4_perm[0] = 1;
          c4_perm[1] = 2;
          c4_perm[2] = 3;
        } else if (c4_x4[0] <= c4_x4[2]) {
          c4_perm[0] = 1;
          c4_perm[1] = 3;
          c4_perm[2] = 2;
        } else {
          c4_perm[0] = 3;
          c4_perm[1] = 1;
          c4_perm[2] = 2;
        }
      } else if (c4_x4[0] <= c4_x4[2]) {
        c4_perm[0] = 2;
        c4_perm[1] = 1;
        c4_perm[2] = 3;
      } else if (c4_x4[1] <= c4_x4[2]) {
        c4_perm[0] = 2;
        c4_perm[1] = 3;
        c4_perm[2] = 1;
      } else {
        c4_perm[0] = 3;
        c4_perm[1] = 2;
        c4_perm[2] = 1;
      }

      c4_f_b = c4_ib;
      c4_g_b = c4_f_b;
      if (1 > c4_g_b) {
        c4_c_overflow = false;
      } else {
        c4_c_overflow = (c4_g_b > 2147483646);
      }

      if (c4_c_overflow) {
        c4_check_forloop_overflow_error(chartInstance, true);
      }

      for (c4_d_k = 1; c4_d_k - 1 < c4_ib; c4_d_k++) {
        c4_b_k = c4_d_k;
        c4_idx->data[(c4_wOffset - c4_ib) + c4_b_k] = c4_idx4[c4_perm[c4_b_k - 1]
          - 1];
        c4_x->data[(c4_wOffset - c4_ib) + c4_b_k] = c4_x4[c4_perm[c4_b_k - 1] -
          1];
      }
    }

    c4_m = c4_nNaNs >> 1;
    c4_d_b = c4_m;
    c4_e_b = c4_d_b;
    if (1 > c4_e_b) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_e_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_c_k = 1; c4_c_k - 1 < c4_m; c4_c_k++) {
      c4_b_k = c4_c_k;
      c4_itmp = c4_idx->data[c4_wOffset + c4_b_k];
      c4_idx->data[c4_wOffset + c4_b_k] = c4_idx->data[c4_b_n - c4_b_k];
      c4_idx->data[c4_b_n - c4_b_k] = c4_itmp;
      c4_x->data[c4_wOffset + c4_b_k] = c4_xwork->data[c4_b_n - c4_b_k];
      c4_x->data[c4_b_n - c4_b_k] = c4_xwork->data[c4_wOffset + c4_b_k];
    }

    if ((c4_nNaNs & 1) != 0) {
      c4_x->data[(c4_wOffset + c4_m) + 1] = c4_xwork->data[(c4_wOffset + c4_m) +
        1];
    }

    c4_nNonNaN = c4_n - c4_nNaNs;
    c4_preSortLevel = 2;
    if (c4_nNonNaN > 1) {
      if (c4_n >= 256) {
        c4_nBlocks = c4_nNonNaN >> 8;
        if (c4_nBlocks > 0) {
          c4_h_b = c4_nBlocks;
          c4_i_b = c4_h_b;
          if (1 > c4_i_b) {
            c4_d_overflow = false;
          } else {
            c4_d_overflow = (c4_i_b > 2147483646);
          }

          if (c4_d_overflow) {
            c4_check_forloop_overflow_error(chartInstance, true);
          }

          for (c4_j_b = 1; c4_j_b - 1 < c4_nBlocks; c4_j_b++) {
            c4_k_b = c4_j_b - 1;
            c4_offset = c4_k_b << 8;
            for (c4_l_b = 0; c4_l_b < 6; c4_l_b++) {
              c4_bLen = 1 << (c4_l_b + 2);
              c4_bLen2 = c4_bLen << 1;
              c4_nPairs = 256 >> (c4_l_b + 3);
              c4_m_b = c4_nPairs;
              c4_n_b = c4_m_b;
              if (1 > c4_n_b) {
                c4_e_overflow = false;
              } else {
                c4_e_overflow = (c4_n_b > 2147483646);
              }

              if (c4_e_overflow) {
                c4_check_forloop_overflow_error(chartInstance, true);
              }

              for (c4_e_k = 1; c4_e_k - 1 < c4_nPairs; c4_e_k++) {
                c4_f_k = c4_e_k - 1;
                c4_blockOffset = (c4_offset + c4_f_k * c4_bLen2) - 1;
                c4_o_b = c4_bLen2;
                c4_p_b = c4_o_b;
                if (1 > c4_p_b) {
                  c4_f_overflow = false;
                } else {
                  c4_f_overflow = (c4_p_b > 2147483646);
                }

                if (c4_f_overflow) {
                  c4_check_forloop_overflow_error(chartInstance, true);
                }

                for (c4_j = 1; c4_j - 1 < c4_bLen2; c4_j++) {
                  c4_b_j = c4_j;
                  c4_b_iwork[c4_b_j - 1] = c4_idx->data[c4_blockOffset + c4_b_j];
                  c4_b_xwork[c4_b_j - 1] = c4_x->data[c4_blockOffset + c4_b_j];
                }

                c4_p = 0;
                c4_q = c4_bLen;
                c4_iout = c4_blockOffset;
                do {
                  c4_exitg1 = 0;
                  c4_iout++;
                  if (c4_b_xwork[c4_p] <= c4_b_xwork[c4_q]) {
                    c4_idx->data[c4_iout] = c4_b_iwork[c4_p];
                    c4_x->data[c4_iout] = c4_b_xwork[c4_p];
                    if (c4_p + 1 < c4_bLen) {
                      c4_p++;
                    } else {
                      c4_exitg1 = 1;
                    }
                  } else {
                    c4_idx->data[c4_iout] = c4_b_iwork[c4_q];
                    c4_x->data[c4_iout] = c4_b_xwork[c4_q];
                    if (c4_q + 1 < c4_bLen2) {
                      c4_q++;
                    } else {
                      c4_offset1 = c4_iout - c4_p;
                      c4_a = c4_p + 1;
                      c4_q_b = c4_bLen;
                      c4_b_a = c4_a;
                      c4_r_b = c4_q_b;
                      if (c4_b_a > c4_r_b) {
                        c4_g_overflow = false;
                      } else {
                        c4_g_overflow = (c4_r_b > 2147483646);
                      }

                      if (c4_g_overflow) {
                        c4_check_forloop_overflow_error(chartInstance, true);
                      }

                      for (c4_c_j = c4_p + 1; c4_c_j <= c4_bLen; c4_c_j++) {
                        c4_idx->data[c4_offset1 + c4_c_j] = c4_b_iwork[c4_c_j -
                          1];
                        c4_x->data[c4_offset1 + c4_c_j] = c4_b_xwork[c4_c_j - 1];
                      }

                      c4_exitg1 = 1;
                    }
                  }
                } while (c4_exitg1 == 0);
              }
            }
          }

          c4_tailOffset = c4_nBlocks << 8;
          c4_nLastBlock = c4_nNonNaN - c4_tailOffset;
          if (c4_nLastBlock > 0) {
            c4_b_merge_block(chartInstance, c4_idx, c4_x, c4_tailOffset,
                             c4_nLastBlock, 2, c4_iwork, c4_xwork);
          }

          c4_preSortLevel = 8;
        }
      }

      c4_b_merge_block(chartInstance, c4_idx, c4_x, 0, c4_nNonNaN,
                       c4_preSortLevel, c4_iwork, c4_xwork);
    }

    c4_emxFree_real32_T(chartInstance, &c4_xwork);
    c4_emxFree_int32_T(chartInstance, &c4_iwork);
  }
}

static void c4_b_merge_block(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x,
  int32_T c4_offset, int32_T c4_n, int32_T c4_preSortLevel, c4_emxArray_int32_T *
  c4_iwork, c4_emxArray_real32_T *c4_xwork)
{
  int32_T c4_nBlocks;
  int32_T c4_bLen;
  int32_T c4_bLen2;
  int32_T c4_tailOffset;
  int32_T c4_nPairs;
  int32_T c4_nTail;
  int32_T c4_b;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_k;
  int32_T c4_b_k;
  c4_nBlocks = c4_n >> c4_preSortLevel;
  c4_bLen = 1 << c4_preSortLevel;
  while (c4_nBlocks > 1) {
    if ((c4_nBlocks & 1) != 0) {
      c4_nBlocks--;
      c4_tailOffset = c4_bLen * c4_nBlocks;
      c4_nTail = c4_n - c4_tailOffset;
      if (c4_nTail > c4_bLen) {
        c4_b_merge(chartInstance, c4_idx, c4_x, c4_offset + c4_tailOffset,
                   c4_bLen, c4_nTail - c4_bLen, c4_iwork, c4_xwork);
      }
    }

    c4_bLen2 = c4_bLen << 1;
    c4_nPairs = c4_nBlocks >> 1;
    c4_b = c4_nPairs;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_k = 1; c4_k - 1 < c4_nPairs; c4_k++) {
      c4_b_k = c4_k - 1;
      c4_b_merge(chartInstance, c4_idx, c4_x, c4_offset + c4_b_k * c4_bLen2,
                 c4_bLen, c4_bLen, c4_iwork, c4_xwork);
    }

    c4_bLen = c4_bLen2;
    c4_nBlocks = c4_nPairs;
  }

  if (c4_n > c4_bLen) {
    c4_b_merge(chartInstance, c4_idx, c4_x, c4_offset, c4_bLen, c4_n - c4_bLen,
               c4_iwork, c4_xwork);
  }
}

static void c4_b_merge(SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
  c4_emxArray_int32_T *c4_idx, c4_emxArray_real32_T *c4_x, int32_T c4_offset,
  int32_T c4_np, int32_T c4_nq, c4_emxArray_int32_T *c4_iwork,
  c4_emxArray_real32_T *c4_xwork)
{
  int32_T c4_n;
  int32_T c4_b;
  int32_T c4_b_b;
  boolean_T c4_overflow;
  int32_T c4_j;
  int32_T c4_p;
  int32_T c4_b_j;
  int32_T c4_q;
  int32_T c4_qend;
  int32_T c4_iout;
  int32_T c4_exitg1;
  int32_T c4_offset1;
  int32_T c4_a;
  int32_T c4_c_b;
  int32_T c4_b_a;
  int32_T c4_d_b;
  boolean_T c4_b_overflow;
  int32_T c4_c_j;
  if (c4_nq != 0) {
    c4_n = c4_np + c4_nq;
    c4_b = c4_n;
    c4_b_b = c4_b;
    if (1 > c4_b_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_check_forloop_overflow_error(chartInstance, true);
    }

    for (c4_j = 1; c4_j - 1 < c4_n; c4_j++) {
      c4_b_j = c4_j - 1;
      c4_iwork->data[c4_b_j] = c4_idx->data[c4_offset + c4_b_j];
      c4_xwork->data[c4_b_j] = c4_x->data[c4_offset + c4_b_j];
    }

    c4_p = 0;
    c4_q = c4_np;
    c4_qend = c4_np + c4_nq;
    c4_iout = c4_offset - 1;
    do {
      c4_exitg1 = 0;
      c4_iout++;
      if (c4_xwork->data[c4_p] <= c4_xwork->data[c4_q]) {
        c4_idx->data[c4_iout] = c4_iwork->data[c4_p];
        c4_x->data[c4_iout] = c4_xwork->data[c4_p];
        if (c4_p + 1 < c4_np) {
          c4_p++;
        } else {
          c4_exitg1 = 1;
        }
      } else {
        c4_idx->data[c4_iout] = c4_iwork->data[c4_q];
        c4_x->data[c4_iout] = c4_xwork->data[c4_q];
        if (c4_q + 1 < c4_qend) {
          c4_q++;
        } else {
          c4_offset1 = c4_iout - c4_p;
          c4_a = c4_p + 1;
          c4_c_b = c4_np;
          c4_b_a = c4_a;
          c4_d_b = c4_c_b;
          if (c4_b_a > c4_d_b) {
            c4_b_overflow = false;
          } else {
            c4_b_overflow = (c4_d_b > 2147483646);
          }

          if (c4_b_overflow) {
            c4_check_forloop_overflow_error(chartInstance, true);
          }

          for (c4_c_j = c4_p + 1; c4_c_j <= c4_np; c4_c_j++) {
            c4_idx->data[c4_offset1 + c4_c_j] = c4_iwork->data[c4_c_j - 1];
            c4_x->data[c4_offset1 + c4_c_j] = c4_xwork->data[c4_c_j - 1];
          }

          c4_exitg1 = 1;
        }
      }
    } while (c4_exitg1 == 0);
  }
}

static void c4_emxEnsureCapacity_real32_T
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_real32_T1
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_real32_T *
   c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_int8_T(SFc4_MotionObjectDetectorInstanceStruct *
  chartInstance, c4_emxArray_int8_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(int8_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(int8_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (int8_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxCopyStruct_sJTMl20J2MtSHoTgq
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sJTMl20J2MtSHoTgqrNGwiD *c4_dst, const c4_sJTMl20J2MtSHoTgqrNGwiD *c4_src,
   const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_real32_T(chartInstance, &c4_dst->Location, &c4_src->Location,
                      c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Scale, &c4_src->Scale,
                       c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Metric, &c4_src->Metric,
                       c4_srcLocation);
  c4_emxCopy_int8_T(chartInstance, &c4_dst->SignOfLaplacian,
                    &c4_src->SignOfLaplacian, c4_srcLocation);
}

static void c4_emxCopy_real32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_dst, c4_emxArray_real32_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  int32_T c4_i;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_real32_T(chartInstance, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxCopy_real32_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_dst, c4_emxArray_real32_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  int32_T c4_i;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_real32_T1(chartInstance, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxCopy_int8_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int8_T **c4_dst, c4_emxArray_int8_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  int32_T c4_i;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_int8_T(chartInstance, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxCopyStruct_vision_internal_S
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_dst, const
   c4_vision_internal_SURFPoints_cg *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_real32_T(chartInstance, &c4_dst->pLocation, &c4_src->pLocation,
                      c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->pMetric, &c4_src->pMetric,
                       c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->pScale, &c4_src->pScale,
                       c4_srcLocation);
  c4_emxCopy_int8_T(chartInstance, &c4_dst->pSignOfLaplacian,
                    &c4_src->pSignOfLaplacian, c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->pOrientation,
                       &c4_src->pOrientation, c4_srcLocation);
}

static void c4_emxEnsureCapacity_int32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(int32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(int32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (int32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxCopyStruct_s2rdWZ6jAA0S8hk59
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_dst, const c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_src,
   const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_real32_T(chartInstance, &c4_dst->Location, &c4_src->Location,
                      c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Scale, &c4_src->Scale,
                       c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Metric, &c4_src->Metric,
                       c4_srcLocation);
  c4_emxCopy_int8_T(chartInstance, &c4_dst->SignOfLaplacian,
                    &c4_src->SignOfLaplacian, c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Orientation, &c4_src->Orientation,
                       c4_srcLocation);
}

static void c4_emxEnsureCapacity_uint32_T
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_uint32_T *
   c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(uint32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(uint32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (uint32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInitStruct_vision_internal_S
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_pStruct, const emlrtRTEInfo
   *c4_srcLocation)
{
  c4_emxInit_real32_T(chartInstance, &c4_pStruct->pLocation, 2, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->pMetric, 1, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->pScale, 1, c4_srcLocation);
  c4_emxInit_int8_T(chartInstance, &c4_pStruct->pSignOfLaplacian, 1,
                    c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->pOrientation, 1,
                       c4_srcLocation);
}

static void c4_emxInit_real32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real32_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_real32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real32_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real32_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_real32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_int8_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int8_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_int8_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_int8_T *)emlrtMallocMex(sizeof(c4_emxArray_int8_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (int8_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_uint32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_uint32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_uint32_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_uint32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_uint32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (uint32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInitStruct_sJTMl20J2MtSHoTgq
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sJTMl20J2MtSHoTgqrNGwiD *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_real32_T(chartInstance, &c4_pStruct->Location, 2, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Scale, 1, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Metric, 1, c4_srcLocation);
  c4_emxInit_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian, 1,
                    c4_srcLocation);
}

static void c4_emxInitStruct_s2rdWZ6jAA0S8hk59
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_real32_T(chartInstance, &c4_pStruct->Location, 2, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Scale, 1, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Metric, 1, c4_srcLocation);
  c4_emxInit_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian, 1,
                    c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Orientation, 1,
                       c4_srcLocation);
}

static void c4_emxInit_int32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_int32_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_int32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (int32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_real32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real32_T *)NULL;
  }
}

static void c4_emxFreeStruct_vision_internal_S
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_vision_internal_SURFPoints_cg *c4_pStruct)
{
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->pLocation);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->pMetric);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->pScale);
  c4_emxFree_int8_T(chartInstance, &c4_pStruct->pSignOfLaplacian);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->pOrientation);
}

static void c4_emxFree_int8_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int8_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_int8_T *)NULL) {
    if (((*c4_pEmxArray)->data != (int8_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_int8_T *)NULL;
  }
}

static void c4_emxFree_uint32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_uint32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_uint32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (uint32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_uint32_T *)NULL;
  }
}

static void c4_emxFreeStruct_sJTMl20J2MtSHoTgq
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sJTMl20J2MtSHoTgqrNGwiD *c4_pStruct)
{
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Location);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Scale);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Metric);
  c4_emxFree_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian);
}

static void c4_emxFreeStruct_s2rdWZ6jAA0S8hk59
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_s2rdWZ6jAA0S8hk59zYLzBC *c4_pStruct)
{
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Location);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Scale);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Metric);
  c4_emxFree_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Orientation);
}

static void c4_emxFree_int32_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_int32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (int32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_int32_T *)NULL;
  }
}

static void c4_emxEnsureCapacity_boolean_T
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_boolean_T
   *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(boolean_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (boolean_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInitStruct_sTGP517nzdmMmY48R
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sTGP517nzdmMmY48RaBsM6E *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_real32_T(chartInstance, &c4_pStruct->Location, 2, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Metric, 1, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Scale, 1, c4_srcLocation);
  c4_emxInit_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian, 1,
                    c4_srcLocation);
}

static void c4_emxInit_boolean_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_boolean_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c4_emxArray_boolean_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (boolean_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFreeStruct_sTGP517nzdmMmY48R
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sTGP517nzdmMmY48RaBsM6E *c4_pStruct)
{
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Location);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Metric);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Scale);
  c4_emxFree_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian);
}

static void c4_emxFree_boolean_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_boolean_T *)NULL) {
    if (((*c4_pEmxArray)->data != (boolean_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_boolean_T *)NULL;
  }
}

static void c4_emxCopyStruct_sTGP517nzdmMmY48R
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sTGP517nzdmMmY48RaBsM6E *c4_dst, const c4_sTGP517nzdmMmY48RaBsM6E *c4_src,
   const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_real32_T(chartInstance, &c4_dst->Location, &c4_src->Location,
                      c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Metric, &c4_src->Metric,
                       c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Scale, &c4_src->Scale,
                       c4_srcLocation);
  c4_emxCopy_int8_T(chartInstance, &c4_dst->SignOfLaplacian,
                    &c4_src->SignOfLaplacian, c4_srcLocation);
  c4_dst->Orientation = c4_src->Orientation;
}

static void c4_emxInitStruct_sGhH0Msgf1shDAvf5
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sGhH0Msgf1shDAvf5CNZg6B *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_real32_T(chartInstance, &c4_pStruct->Location, 2, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Metric, 1, c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Scale, 1, c4_srcLocation);
  c4_emxInit_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian, 1,
                    c4_srcLocation);
  c4_emxInit_real32_T1(chartInstance, &c4_pStruct->Orientation, 1,
                       c4_srcLocation);
}

static void c4_emxFreeStruct_sGhH0Msgf1shDAvf5
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sGhH0Msgf1shDAvf5CNZg6B *c4_pStruct)
{
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Location);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Metric);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Scale);
  c4_emxFree_int8_T(chartInstance, &c4_pStruct->SignOfLaplacian);
  c4_emxFree_real32_T(chartInstance, &c4_pStruct->Orientation);
}

static void c4_emxCopyStruct_sGhH0Msgf1shDAvf5
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance,
   c4_sGhH0Msgf1shDAvf5CNZg6B *c4_dst, const c4_sGhH0Msgf1shDAvf5CNZg6B *c4_src,
   const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_real32_T(chartInstance, &c4_dst->Location, &c4_src->Location,
                      c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Metric, &c4_src->Metric,
                       c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Scale, &c4_src->Scale,
                       c4_srcLocation);
  c4_emxCopy_int8_T(chartInstance, &c4_dst->SignOfLaplacian,
                    &c4_src->SignOfLaplacian, c4_srcLocation);
  c4_emxCopy_real32_T1(chartInstance, &c4_dst->Orientation, &c4_src->Orientation,
                       c4_srcLocation);
}

static void c4_emxEnsureCapacity_real_T(SFc4_MotionObjectDetectorInstanceStruct *
  chartInstance, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_boolean_T1
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_boolean_T
   *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(boolean_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (boolean_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_int32_T1
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_emxArray_int32_T
   *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(int32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(int32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (int32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_int32_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_int32_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_int32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (int32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_boolean_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_boolean_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c4_emxArray_boolean_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (boolean_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInitMatrix_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   c4_pMatrix[2], const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_emxInitStruct_cell_wrap_21(chartInstance, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxInitStruct_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_uint32_T(chartInstance, &c4_pStruct->f1, 2, c4_srcLocation);
}

static void c4_emxFree_real_T(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real_T *)NULL;
  }
}

static void c4_emxFreeMatrix_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   c4_pMatrix[2])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_emxFreeStruct_cell_wrap_21(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_emxFreeStruct_cell_wrap_21
  (SFc4_MotionObjectDetectorInstanceStruct *chartInstance, c4_cell_wrap_21
   *c4_pStruct)
{
  c4_emxFree_uint32_T(chartInstance, &c4_pStruct->f1);
}

static void c4_emxEnsureCapacity_real_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel, const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  int32_T c4_i;
  int32_T c4_newCapacity;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_real_T1(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, chartInstance->c4_fEmlrtCtx);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void init_dsm_address_info(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_MotionObjectDetectorInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_b_Image = (real32_T (*)[750000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_b_redcrab = (uint8_T (*)[151389])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_MotionObjectDetector_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4115747864U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(522674899U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4238919381U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3868815687U);
}

mxArray *sf_c4_MotionObjectDetector_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "vision.internal.buildable.fastHessianDetectorBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "vision.internal.buildable.extractSurfBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "vision.internal.buildable.ComputeMetricBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_MotionObjectDetector_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2gray_tbb_uint8");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_MotionObjectDetector_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_MotionObjectDetector(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB2YGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYcABQfK9EP8F4GknwWLfkUk/QJQfmZxfGJySWZZanyySbxvfklmfp"
    "5/UlZqcolLagmQzC9CMh8EAFP5GLs="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_MotionObjectDetector_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sldfQaPnTPp6cBXvBZVgQQG";
}

static void sf_opaque_initialize_c4_MotionObjectDetector(void *chartInstanceVar)
{
  initialize_params_c4_MotionObjectDetector
    ((SFc4_MotionObjectDetectorInstanceStruct*) chartInstanceVar);
  initialize_c4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_MotionObjectDetector(void *chartInstanceVar)
{
  enable_c4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_MotionObjectDetector(void *chartInstanceVar)
{
  disable_c4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_MotionObjectDetector(void *chartInstanceVar)
{
  sf_gateway_c4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_MotionObjectDetector(SimStruct*
  S)
{
  return get_sim_state_c4_MotionObjectDetector
    ((SFc4_MotionObjectDetectorInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_MotionObjectDetector(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c4_MotionObjectDetector(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_MotionObjectDetectorInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_MotionObjectDetector_optimization_info();
    }

    finalize_c4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_MotionObjectDetector((SFc4_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_MotionObjectDetector(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_MotionObjectDetector
      ((SFc4_MotionObjectDetectorInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc4_MotionObjectDetector
      ((SFc4_MotionObjectDetectorInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_MotionObjectDetector_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [16] = {
    "eNrdVstu00AUtaNSUQmq7tgg1K5gyQJBlyWvEimhKWlLxaaa2jfxkPGMmYfbfgRfgSrxB0hs2SD",
    "+on/Ahj137Lxw7KQhgFAnGjtjn3vuc+7YcRstB8c6zq94WcX7bZwlJx23Bmt3YqbPV5yHg/UHBH",
    "ETtokkoXJmDk5CeAVKMKOp4A3eFbkwyrsggXuIjYTURWyKhoZR3q8b7lk+9TqgXtAJhGF+GWWJv",
    "8fZBbJFRreRp0oleLoO4OtACtML6oz0RhZLfVYJwOsrE85yQYHumMiapVqGaRoxqJ2D1+BKE7RY",
    "jW3raKKhos8L3bSeqs4QKMKIUcJzvQ2I6kCEAdZwGPl43TMancrCvIBIXYaAxKCatJ9wCg5ZTqr",
    "wxSnlRAtJCauFrGIFp21rM7SnJXxgMwKCtpUlkH4kKNfF+e/U0dMaJ6cMqnBqesVsHXhnbPKPKJ",
    "yBLIxbtyJikKQHe7xQaRKQ2nmSrVGVTMM0DeGIyOce5k+BX1i9WDmqQzBPcIASRTBInGyoA0ljD",
    "G8hmwkbtjLnbRkTpslW82AJWy2GWVkYsdU9XiGMqULYgYiaEANLWKtEk9mwlDUfF0kRkR5WrY9B",
    "tiVeEdynU7nwjNIirGC5VZvNl9gp8o0bwxpcg+wSD/L2rfIC8A0DdBQ7k07U5ZD6VNlszUENcjo",
    "P5aiu4dUzIfvo6IxtP3bB5qAQGKoeRh9r91Bhmc+C2ejPxQ37/GNn3OfvXKPPD+Wy90cTPG4Ojz",
    "Nxz+pdK/2KL2X0lvDnuqnczoTc3YyelYycxW3gPHn/Zfvz7rMHn66+/bj8eHk1T787pd9N/lu57",
    "+5i5+L6YH1/2IBG5RlPVYXFvpiwayWH/94E/8ZgrZjf3SdtftCOnnrl47j85qi3v7+bxmtBe4fP",
    "N20nvIiSvqak1/AHB7ZdE5MeY5Z/e8Le1Tn8a4Pn6djcWU4+jdfxnHhtZeK1lZwXJwS7fwwn3pO",
    "TlrAbeO/0LX4NVEHjVcic+v7dellUzvnHcu4N13fT7fyT/l2n/5eWPDf+d7ll/Vv0HFzm3Mz2Oy",
    "eD31hCz9/GL/v9sAj+J7Q8X/c=",
    ""
  };

  static char newstr [1077] = "";
  newstr[0] = '\0';
  for (i = 0; i < 16; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_MotionObjectDetector(SimStruct *S)
{
  const char* newstr = sf_c4_MotionObjectDetector_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(952339807U));
  ssSetChecksum1(S,(506939322U));
  ssSetChecksum2(S,(4123713975U));
  ssSetChecksum3(S,(3785730213U));
}

static void mdlRTW_c4_MotionObjectDetector(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c4_MotionObjectDetector(SimStruct *S)
{
  SFc4_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc4_MotionObjectDetectorInstanceStruct *)utMalloc(sizeof
    (SFc4_MotionObjectDetectorInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_MotionObjectDetectorInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_MotionObjectDetector;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_MotionObjectDetector;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_MotionObjectDetector;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_MotionObjectDetector;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_MotionObjectDetector;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_MotionObjectDetector;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_MotionObjectDetector;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_MotionObjectDetector;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_MotionObjectDetector;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_MotionObjectDetector;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_MotionObjectDetector;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c4_MotionObjectDetector(chartInstance);
}

void c4_MotionObjectDetector_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_MotionObjectDetector(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_MotionObjectDetector(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_MotionObjectDetector(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_MotionObjectDetector_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
