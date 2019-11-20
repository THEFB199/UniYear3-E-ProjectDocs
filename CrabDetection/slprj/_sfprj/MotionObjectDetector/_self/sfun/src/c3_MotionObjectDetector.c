/* Include files */

#include "MotionObjectDetector_sfun.h"
#include "c3_MotionObjectDetector.h"
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
static void *c3_fcnDataPtrs[13];
static char_T *c3_dataNames[13];
static uint32_T c3_ssIds[13];
static uint32_T c3_statuses[13];
static void *c3_outMexFcns[13];
static void *c3_inMexFcns[13];
static emlrtRTEInfo c3_emlrtRTEI = { 111,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_b_emlrtRTEI = { 111,/* lineNo */
  6,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_c_emlrtRTEI = { 116,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_d_emlrtRTEI = { 117,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_e_emlrtRTEI = { 118,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_f_emlrtRTEI = { 119,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_g_emlrtRTEI = { 122,/* lineNo */
  63,                                  /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_h_emlrtRTEI = { 122,/* lineNo */
  1,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_i_emlrtRTEI = { 124,/* lineNo */
  18,                                  /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_j_emlrtRTEI = { 124,/* lineNo */
  38,                                  /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_k_emlrtRTEI = { 7,/* lineNo */
  65,                                  /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_l_emlrtRTEI = { 7,/* lineNo */
  2,                                   /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_m_emlrtRTEI = { 7,/* lineNo */
  19,                                  /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_n_emlrtRTEI = { 10,/* lineNo */
  55,                                  /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_o_emlrtRTEI = { 186,/* lineNo */
  13,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_p_emlrtRTEI = { 471,/* lineNo */
  22,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_q_emlrtRTEI = { 762,/* lineNo */
  1,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_r_emlrtRTEI = { 478,/* lineNo */
  17,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_s_emlrtRTEI = { 478,/* lineNo */
  29,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_t_emlrtRTEI = { 478,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_u_emlrtRTEI = { 479,/* lineNo */
  14,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_v_emlrtRTEI = { 479,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_w_emlrtRTEI = { 480,/* lineNo */
  15,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_x_emlrtRTEI = { 480,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_y_emlrtRTEI = { 481,/* lineNo */
  24,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ab_emlrtRTEI = { 481,/* lineNo */
  41,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_bb_emlrtRTEI = { 483,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_cb_emlrtRTEI = { 484,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_db_emlrtRTEI = { 485,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_eb_emlrtRTEI = { 486,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_fb_emlrtRTEI = { 780,/* lineNo */
  9,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_gb_emlrtRTEI = { 780,/* lineNo */
  29,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_hb_emlrtRTEI = { 780,/* lineNo */
  46,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ib_emlrtRTEI = { 781,/* lineNo */
  9,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_jb_emlrtRTEI = { 778,/* lineNo */
  6,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_kb_emlrtRTEI = { 778,/* lineNo */
  76,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_lb_emlrtRTEI = { 783,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_mb_emlrtRTEI = { 784,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_nb_emlrtRTEI = { 785,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ob_emlrtRTEI = { 786,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_pb_emlrtRTEI = { 787,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_qb_emlrtRTEI = { 792,/* lineNo */
  1,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_rb_emlrtRTEI = { 803,/* lineNo */
  31,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_sb_emlrtRTEI = { 803,/* lineNo */
  46,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_tb_emlrtRTEI = { 10,/* lineNo */
  2,                                   /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_ub_emlrtRTEI = { 10,/* lineNo */
  15,                                  /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_vb_emlrtRTEI = { 13,/* lineNo */
  30,                                  /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_wb_emlrtRTEI = { 13,/* lineNo */
  47,                                  /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_xb_emlrtRTEI = { 165,/* lineNo */
  6,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_yb_emlrtRTEI = { 165,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ac_emlrtRTEI = { 185,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_bc_emlrtRTEI = { 185,/* lineNo */
  5,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_cc_emlrtRTEI = { 186,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_dc_emlrtRTEI = { 186,/* lineNo */
  5,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ec_emlrtRTEI = { 188,/* lineNo */
  28,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_fc_emlrtRTEI = { 188,/* lineNo */
  39,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_gc_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_hc_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_ic_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "Function-Call Subsystem/MATLAB Function",/* fName */
  "#MotionObjectDetector:238"          /* pName */
};

static emlrtRTEInfo c3_jc_emlrtRTEI = { 87,/* lineNo */
  5,                                   /* colNo */
  "detectSURFFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pName */
};

static emlrtRTEInfo c3_kc_emlrtRTEI = { 768,/* lineNo */
  6,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_lc_emlrtRTEI = { 473,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_mc_emlrtRTEI = { 474,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_nc_emlrtRTEI = { 475,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_oc_emlrtRTEI = { 476,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_pc_emlrtRTEI = { 158,/* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_qc_emlrtRTEI = { 24,/* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_rc_emlrtRTEI = { 240,/* lineNo */
  32,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_sc_emlrtRTEI = { 241,/* lineNo */
  30,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_tc_emlrtRTEI = { 204,/* lineNo */
  29,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_uc_emlrtRTEI = { 206,/* lineNo */
  39,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_vc_emlrtRTEI = { 224,/* lineNo */
  43,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_wc_emlrtRTEI = { 224,/* lineNo */
  61,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_xc_emlrtRTEI = { 12,/* lineNo */
  49,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtRTEInfo c3_yc_emlrtRTEI = { 11,/* lineNo */
  43,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtRTEInfo c3_ad_emlrtRTEI = { 179,/* lineNo */
  25,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_bd_emlrtRTEI = { 1,/* lineNo */
  37,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo c3_cd_emlrtRTEI = { 40,/* lineNo */
  20,                                  /* colNo */
  "checkPoints",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pName */
};

static emlrtRTEInfo c3_dd_emlrtRTEI = { 63,/* lineNo */
  15,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c3_ed_emlrtRTEI = { 63,/* lineNo */
  27,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c3_fd_emlrtRTEI = { 63,/* lineNo */
  36,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c3_gd_emlrtRTEI = { 63,/* lineNo */
  46,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c3_hd_emlrtRTEI = { 43,/* lineNo */
  18,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m"/* pName */
};

static emlrtRTEInfo c3_id_emlrtRTEI = { 205,/* lineNo */
  35,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_jd_emlrtRTEI = { 608,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_kd_emlrtRTEI = { 199,/* lineNo */
  28,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ld_emlrtRTEI = { 199,/* lineNo */
  39,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_md_emlrtRTEI = { 526,/* lineNo */
  21,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_nd_emlrtRTEI = { 526,/* lineNo */
  9,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_od_emlrtRTEI = { 527,/* lineNo */
  21,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_pd_emlrtRTEI = { 527,/* lineNo */
  9,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_qd_emlrtRTEI = { 528,/* lineNo */
  86,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_rd_emlrtRTEI = { 528,/* lineNo */
  96,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_sd_emlrtRTEI = { 150,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_td_emlrtRTEI = { 42,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo c3_ud_emlrtRTEI = { 43,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo c3_vd_emlrtRTEI = { 179,/* lineNo */
  66,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_wd_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c3_xd_emlrtRTEI = { 182,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_yd_emlrtRTEI = { 182,/* lineNo */
  48,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ae_emlrtRTEI = { 110,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c3_be_emlrtRTEI = { 117,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c3_ce_emlrtRTEI = { 182,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_de_emlrtRTEI = { 599,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ee_emlrtRTEI = { 154,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_fe_emlrtRTEI = { 602,/* lineNo */
  11,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ge_emlrtRTEI = { 602,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_he_emlrtRTEI = { 603,/* lineNo */
  15,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ie_emlrtRTEI = { 603,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_je_emlrtRTEI = { 272,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ke_emlrtRTEI = { 266,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_le_emlrtRTEI = { 421,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_me_emlrtRTEI = { 157,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ne_emlrtRTEI = { 422,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_oe_emlrtRTEI = { 275,/* lineNo */
  15,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_pe_emlrtRTEI = { 270,/* lineNo */
  26,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_qe_emlrtRTEI = { 275,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_re_emlrtRTEI = { 423,/* lineNo */
  10,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_se_emlrtRTEI = { 276,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_te_emlrtRTEI = { 423,/* lineNo */
  32,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ue_emlrtRTEI = { 164,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ve_emlrtRTEI = { 141,/* lineNo */
  38,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_we_emlrtRTEI = { 166,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_xe_emlrtRTEI = { 423,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ye_emlrtRTEI = { 270,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_af_emlrtRTEI = { 167,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_bf_emlrtRTEI = { 152,/* lineNo */
  2,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_cf_emlrtRTEI = { 166,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_df_emlrtRTEI = { 167,/* lineNo */
  30,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ef_emlrtRTEI = { 152,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ff_emlrtRTEI = { 597,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_gf_emlrtRTEI = { 602,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_hf_emlrtRTEI = { 603,/* lineNo */
  30,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_if_emlrtRTEI = { 275,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_jf_emlrtRTEI = { 276,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_kf_emlrtRTEI = { 182,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_lf_emlrtRTEI = { 422,/* lineNo */
  17,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_mf_emlrtRTEI = { 105,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c3_nf_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_of_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_pf_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_qf_emlrtRTEI = { 1,/* lineNo */
  25,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c3_rf_emlrtRTEI = { 44,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_sf_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c3_tf_emlrtRTEI = { 398,/* lineNo */
  9,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c3_uf_emlrtRTEI = { 495,/* lineNo */
  5,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c3_vf_emlrtRTEI = { 18,/* lineNo */
  5,                                   /* colNo */
  "minOrMax",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtRTEInfo c3_wf_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_xf_emlrtRTEI = { 27,/* lineNo */
  24,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_yf_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_ag_emlrtRTEI = { 27,/* lineNo */
  39,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_bg_emlrtRTEI = { 28,/* lineNo */
  51,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_cg_emlrtRTEI = { 41,/* lineNo */
  30,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c3_dg_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c3_eg_emlrtRTEI = { 48,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c3_fg_emlrtRTEI = { 48,/* lineNo */
  17,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c3_gg_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c3_hg_emlrtRTEI = { 28,/* lineNo */
  13,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_ig_emlrtRTEI = { 29,/* lineNo */
  15,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_jg_emlrtRTEI = { 5,/* lineNo */
  30,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_kg_emlrtRTEI = { 5,/* lineNo */
  19,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo c3_lg_emlrtRTEI = { 16,/* lineNo */
  14,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c3_mg_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c3_ng_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_og_emlrtRTEI = { 482,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_pg_emlrtRTEI = { 520,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_qg_emlrtRTEI = { 278,/* lineNo */
  13,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_rg_emlrtRTEI = { 181,/* lineNo */
  20,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_sg_emlrtRTEI = { 283,/* lineNo */
  70,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_tg_emlrtRTEI = { 343,/* lineNo */
  28,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_ug_emlrtRTEI = { 181,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_vg_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c3_wg_emlrtRTEI = { 183,/* lineNo */
  22,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_xg_emlrtRTEI = { 343,/* lineNo */
  21,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_yg_emlrtRTEI = { 190,/* lineNo */
  70,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_ah_emlrtRTEI = { 189,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_bh_emlrtRTEI = { 193,/* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_ch_emlrtRTEI = { 192,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_dh_emlrtRTEI = { 196,/* lineNo */
  63,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_eh_emlrtRTEI = { 195,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_fh_emlrtRTEI = { 193,/* lineNo */
  70,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo c3_gh_emlrtRTEI = { 20,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c3_hh_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo c3_ih_emlrtRTEI = { 46,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo c3_jh_emlrtRTEI = { 55,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRTEInfo c3_kh_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "sum",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pName */
};

static emlrtRTEInfo c3_lh_emlrtRTEI = { 81,/* lineNo */
  13,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

static emlrtRTEInfo c3_mh_emlrtRTEI = { 610,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_nh_emlrtRTEI = { 610,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_oh_emlrtRTEI = { 613,/* lineNo */
  3,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_ph_emlrtRTEI = { 613,/* lineNo */
  7,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_qh_emlrtRTEI = { 609,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo c3_rh_emlrtRTEI = { 36,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo c3_sh_emlrtRTEI = { 56,/* lineNo */
  1,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c3_th_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_uh_emlrtRTEI = { 385,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_vh_emlrtRTEI = { 308,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_wh_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_xh_emlrtRTEI = { 387,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c3_yh_emlrtRTEI = { 388,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static const char_T c3_cv[36] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x',
  't', 'r', 'a', 'c', 't', 'F', 'e', 'a', 't', 'u', 'r', 'e', 's', ':', 'i', 'n',
  'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

static const char_T c3_cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't',
  'S', 'i', 'z', 'e' };

static const char_T c3_cv2[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'F', 'e',
  'a', 't', 'u', 'r', 'e', 'P', 'o', 'i', 'n', 't', 's', ':', 'i', 'n', 'v', 'a',
  'l', 'i', 'd', 'P', 'a', 'r', 'a', 'm', 'L', 'e', 'n', 'g', 't', 'h' };

static const char_T c3_cv3[40] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'S', 'U',
  'R', 'F', 'P', 'o', 'i', 'n', 't', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
  'S', 'i', 'g', 'n', 'O', 'f', 'L', 'a', 'p', 'l', 'a', 'c', 'i', 'a', 'n' };

static const char_T c3_cv4[15] = { 'S', 'i', 'g', 'n', 'O', 'f', 'L', 'a', 'p',
  'l', 'a', 'c', 'i', 'a', 'n' };

static const char_T c3_cv5[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
  's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S', 'U',
  'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'e', 'x', 'p', 'e',
  'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

static const char_T c3_cv6[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'N', 'a', 'N' };

static const char_T c3_cv7[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
  's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S', 'U',
  'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'e', 'x', 'p', 'e',
  'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

static const char_T c3_cv8[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F',
  'i', 'n', 'i', 't', 'e' };

static const char_T c3_cv9[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
  'a', 'x', 's', 'i', 'z', 'e' };

/* Function Declarations */
static void initialize_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void initialize_params_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void enable_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void disable_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void c3_update_jit_animation_state_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void c3_do_animation_call_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void ext_mode_exec_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void set_sim_state_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const mxArray *c3_st);
static void finalize_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void sf_gateway_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void mdl_start_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void c3_chartstep_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void initSimStructsc3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance);
static void c3_SURFPoints_cg_SURFPoints_cg
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_varargin_1, c3_sJTMl20J2MtSHoTgqrNGwiD c3_varargin_2,
   c3_vision_internal_SURFPoints_cg *c3_this);
static void c3_FeaturePointsImpl_checkLocation
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_location);
static boolean_T c3_inputMeetsSizeRequirement
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_a);
static void c3_FeaturePointsImpl_checkMetric
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_metric);
static boolean_T c3_all(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_a);
static void c3_SURFPointsImpl_checkScale(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_scale);
static boolean_T c3_b_all(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_boolean_T *c3_x);
static void c3_check_forloop_overflow_error
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, boolean_T c3_overflow);
static void c3_SURFPointsImpl_configure(SFc3_MotionObjectDetectorInstanceStruct *
  chartInstance, c3_vision_internal_SURFPoints_cg c3_this,
  c3_sTGP517nzdmMmY48RaBsM6E c3_inputs, c3_vision_internal_SURFPoints_cg
  *c3_b_this);
static void c3_assertValidSizeArg(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, real_T c3_varargin_1);
static void c3_extractFeatures(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, uint8_T c3_I[50463], c3_vision_internal_SURFPoints_cg
  c3_points, c3_emxArray_real32_T *c3_features, c3_vision_internal_SURFPoints_cg
  *c3_valid_points);
static void c3_extractSurfBuildable_extractSurf_uint8
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c3_b_Iu8T
   [50463], c3_emxArray_real32_T *c3_inLocation, c3_emxArray_real32_T
   *c3_inScale, c3_emxArray_real32_T *c3_inMetric, c3_emxArray_int8_T
   *c3_inSignOfLaplacian, boolean_T c3_isExtended, boolean_T c3_isUpright,
   c3_emxArray_real32_T *c3_outLocation, c3_emxArray_real32_T *c3_outScale,
   c3_emxArray_real32_T *c3_outMetric, c3_emxArray_int8_T *c3_outSignOfLaplacian,
   c3_emxArray_real32_T *c3_outOrientation, c3_emxArray_real32_T *c3_outFeatures);
static void c3_b_SURFPoints_cg_SURFPoints_cg
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_varargin_1, c3_s2rdWZ6jAA0S8hk59zYLzBC c3_varargin_2,
   c3_vision_internal_SURFPoints_cg *c3_this);
static void c3_b_SURFPointsImpl_configure
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg c3_this, c3_sGhH0Msgf1shDAvf5CNZg6B
   c3_inputs, c3_vision_internal_SURFPoints_cg *c3_b_this);
static void c3_b_extractSurfBuildable_extractSurf_uint8
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c3_b_Iu8T
   [250000], c3_emxArray_real32_T *c3_inLocation, c3_emxArray_real32_T
   *c3_inScale, c3_emxArray_real32_T *c3_inMetric, c3_emxArray_int8_T
   *c3_inSignOfLaplacian, boolean_T c3_isExtended, boolean_T c3_isUpright,
   c3_emxArray_real32_T *c3_outLocation, c3_emxArray_real32_T *c3_outScale,
   c3_emxArray_real32_T *c3_outMetric, c3_emxArray_int8_T *c3_outSignOfLaplacian,
   c3_emxArray_real32_T *c3_outOrientation, c3_emxArray_real32_T *c3_outFeatures);
static void c3_normalizeX(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_c_X, c3_emxArray_real32_T *c3_d_X);
static void c3_findMatchesExhaustive(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_features1, c3_emxArray_real32_T
  *c3_features2, real32_T c3_matchThreshold, c3_emxArray_uint32_T *c3_indexPairs,
  c3_emxArray_real32_T *c3_matchMetric);
static void c3_partialSort(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_x, c3_emxArray_real32_T *c3_values,
  c3_emxArray_uint32_T *c3_indices);
static boolean_T c3_allinrange(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T *c3_x, real_T c3_lo, int32_T c3_hi);
static void c3_sort(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
                    c3_emxArray_real32_T *c3_x, c3_emxArray_real32_T *c3_b_x,
                    c3_emxArray_int32_T *c3_idx);
static void c3_sortIdx(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_x, c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *
  c3_b_x);
static void c3_merge_block(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x,
  int32_T c3_offset, int32_T c3_n, int32_T c3_preSortLevel, c3_emxArray_int32_T *
  c3_iwork, c3_emxArray_real32_T *c3_xwork, c3_emxArray_int32_T *c3_b_idx,
  c3_emxArray_real32_T *c3_b_x, c3_emxArray_int32_T *c3_b_iwork,
  c3_emxArray_real32_T *c3_b_xwork);
static void c3_merge(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
                     c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x,
                     int32_T c3_offset, int32_T c3_np, int32_T c3_nq,
                     c3_emxArray_int32_T *c3_iwork, c3_emxArray_real32_T
                     *c3_xwork, c3_emxArray_int32_T *c3_b_idx,
                     c3_emxArray_real32_T *c3_b_x, c3_emxArray_int32_T
                     *c3_b_iwork, c3_emxArray_real32_T *c3_b_xwork);
static uint8_T c3_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_b_is_active_c3_MotionObjectDetector, const
  char_T *c3_identifier);
static uint8_T c3_b_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *c3_sf_marshallOut_matrix500x500x3_uint8_T(void
  *chartInstanceVoid, void *c3_inData);
static void c3_c_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[750000]);
static void c3_sf_marshallIn_matrix500x500x3_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_sf_marshallOut_matrix189x267x3_uint8_T(void
  *chartInstanceVoid, void *c3_inData);
static void c3_d_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[151389]);
static void c3_sf_marshallIn_matrix189x267x3_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_sf_marshallOut_matrix189x267_uint8_T(void
  *chartInstanceVoid, void *c3_inData);
static void c3_e_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[50463]);
static void c3_sf_marshallIn_matrix189x267_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_sf_marshallOut_matrix500x500_uint8_T(void
  *chartInstanceVoid, void *c3_inData);
static void c3_f_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[250000]);
static void c3_sf_marshallIn_matrix500x500_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_sf_marshallOut_real_T(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_g_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn_real_T(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_emlrt_marshallOut
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const
   c3_emxArray_real32_T *c3_c_u);
static const mxArray *c3_b_emlrt_marshallOut
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const
   c3_emxArray_real32_T *c3_c_u);
static const mxArray *c3_c_emlrt_marshallOut
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const
   c3_emxArray_int8_T *c3_c_u);
static const mxArray *c3_sf_marshallOut_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, c3_vision_internal_SURFPoints_cg *c3_inData);
static void c3_h_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_vision_internal_SURFPoints_cg *c3_d_y);
static void c3_i_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_real32_T *c3_d_y);
static void c3_j_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_real32_T *c3_d_y);
static void c3_k_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_int8_T *c3_d_y);
static void c3_sf_marshallIn_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, const mxArray *c3_mxArrayInData, const char_T *c3_varName,
  c3_vision_internal_SURFPoints_cg *c3_outData);
static const mxArray *c3_sf_marshallOut_dynamicmatrix(void *chartInstanceVoid,
  c3_emxArray_real32_T *c3_inData);
static void c3_l_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_real32_T *c3_d_y);
static void c3_sf_marshallIn_dynamicmatrix(void *chartInstanceVoid, const
  mxArray *c3_mxArrayInData, const char_T *c3_varName, c3_emxArray_real32_T
  *c3_outData);
static const mxArray *c3_sf_marshallOut_dynamicmatrix_1(void *chartInstanceVoid,
  c3_emxArray_uint32_T *c3_inData);
static void c3_m_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_uint32_T *c3_d_y);
static void c3_sf_marshallIn_dynamicmatrix_1(void *chartInstanceVoid, const
  mxArray *c3_mxArrayInData, const char_T *c3_varName, c3_emxArray_uint32_T
  *c3_outData);
static const mxArray *c3_chart_data_browse_helper
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, int32_T c3_ssIdNumber);
static void c3_c_SURFPointsImpl_configure
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_this, c3_sTGP517nzdmMmY48RaBsM6E
   c3_inputs);
static void c3_d_SURFPointsImpl_configure
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_this, c3_sGhH0Msgf1shDAvf5CNZg6B
   c3_inputs);
static void c3_b_normalizeX(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_c_X);
static void c3_b_sort(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
                      c3_emxArray_real32_T *c3_x, c3_emxArray_int32_T *c3_idx);
static void c3_b_sortIdx(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_x, c3_emxArray_int32_T *c3_idx);
static void c3_b_merge_block(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x,
  int32_T c3_offset, int32_T c3_n, int32_T c3_preSortLevel, c3_emxArray_int32_T *
  c3_iwork, c3_emxArray_real32_T *c3_xwork);
static void c3_b_merge(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x, int32_T c3_offset,
  int32_T c3_np, int32_T c3_nq, c3_emxArray_int32_T *c3_iwork,
  c3_emxArray_real32_T *c3_xwork);
static void c3_emxEnsureCapacity_real32_T
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_real32_T1
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_int8_T(SFc3_MotionObjectDetectorInstanceStruct *
  chartInstance, c3_emxArray_int8_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation);
static void c3_emxCopyStruct_sJTMl20J2MtSHoTgq
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sJTMl20J2MtSHoTgqrNGwiD *c3_dst, const c3_sJTMl20J2MtSHoTgqrNGwiD *c3_src,
   const emlrtRTEInfo *c3_srcLocation);
static void c3_emxCopy_real32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_dst, c3_emxArray_real32_T * const
  *c3_src, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxCopy_real32_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_dst, c3_emxArray_real32_T * const
  *c3_src, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxCopy_int8_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int8_T **c3_dst, c3_emxArray_int8_T * const
  *c3_src, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxCopyStruct_vision_internal_S
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_dst, const
   c3_vision_internal_SURFPoints_cg *c3_src, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_int32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation);
static void c3_emxCopyStruct_s2rdWZ6jAA0S8hk59
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_dst, const c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_src,
   const emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_uint32_T
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_uint32_T *
   c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitStruct_vision_internal_S
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_pStruct, const emlrtRTEInfo
   *c3_srcLocation);
static void c3_emxInit_real32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_real32_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_int8_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int8_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_uint32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_uint32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitStruct_sJTMl20J2MtSHoTgq
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sJTMl20J2MtSHoTgqrNGwiD *c3_pStruct, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitStruct_s2rdWZ6jAA0S8hk59
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_pStruct, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_int32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxFree_real32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_pEmxArray);
static void c3_emxFreeStruct_vision_internal_S
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_pStruct);
static void c3_emxFree_int8_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int8_T **c3_pEmxArray);
static void c3_emxFree_uint32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_uint32_T **c3_pEmxArray);
static void c3_emxFreeStruct_sJTMl20J2MtSHoTgq
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sJTMl20J2MtSHoTgqrNGwiD *c3_pStruct);
static void c3_emxFreeStruct_s2rdWZ6jAA0S8hk59
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_pStruct);
static void c3_emxFree_int32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T **c3_pEmxArray);
static void c3_emxEnsureCapacity_boolean_T
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_boolean_T
   *c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitStruct_sTGP517nzdmMmY48R
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sTGP517nzdmMmY48RaBsM6E *c3_pStruct, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_boolean_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_boolean_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxFreeStruct_sTGP517nzdmMmY48R
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sTGP517nzdmMmY48RaBsM6E *c3_pStruct);
static void c3_emxFree_boolean_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_boolean_T **c3_pEmxArray);
static void c3_emxCopyStruct_sTGP517nzdmMmY48R
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sTGP517nzdmMmY48RaBsM6E *c3_dst, const c3_sTGP517nzdmMmY48RaBsM6E *c3_src,
   const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitStruct_sGhH0Msgf1shDAvf5
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sGhH0Msgf1shDAvf5CNZg6B *c3_pStruct, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxFreeStruct_sGhH0Msgf1shDAvf5
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sGhH0Msgf1shDAvf5CNZg6B *c3_pStruct);
static void c3_emxCopyStruct_sGhH0Msgf1shDAvf5
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sGhH0Msgf1shDAvf5CNZg6B *c3_dst, const c3_sGhH0Msgf1shDAvf5CNZg6B *c3_src,
   const emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_real_T(SFc3_MotionObjectDetectorInstanceStruct *
  chartInstance, c3_emxArray_real_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_boolean_T1
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_boolean_T
   *c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxEnsureCapacity_int32_T1
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_int32_T
   *c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_int32_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_boolean_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_boolean_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_real_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitMatrix_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   c3_pMatrix[2], const emlrtRTEInfo *c3_srcLocation);
static void c3_emxInitStruct_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   *c3_pStruct, const emlrtRTEInfo *c3_srcLocation);
static void c3_emxFree_real_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T **c3_pEmxArray);
static void c3_emxFreeMatrix_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   c3_pMatrix[2]);
static void c3_emxFreeStruct_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   *c3_pStruct);
static void c3_emxEnsureCapacity_real_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation);
static void c3_emxInit_real_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation);
static void init_dsm_address_info(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  emlrtLicenseCheckR2012b(chartInstance->c3_fEmlrtCtx,
    "Video_and_Image_Blockset", 2);
  emlrtLicenseCheckR2012b(chartInstance->c3_fEmlrtCtx, "Image_Toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_is_active_c3_MotionObjectDetector = 0U;
}

static void initialize_params_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_jit_animation_state_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_do_animation_call_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  const mxArray *c3_st = NULL;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_e_y = NULL;
  c3_st = NULL;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_createcellmatrix(1, 1), false);
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y",
    &chartInstance->c3_is_active_c3_MotionObjectDetector, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_d_y, 0, c3_e_y);
  sf_mex_assign(&c3_st, c3_d_y, false);
  return c3_st;
}

static void set_sim_state_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_c_u;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_c_u = sf_mex_dup(c3_st);
  chartInstance->c3_is_active_c3_MotionObjectDetector = c3_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_c_u, 0)),
     "is_active_c3_MotionObjectDetector");
  sf_mex_destroy(&c3_c_u);
  sf_mex_destroy(&c3_st);
}

static void finalize_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  sfListenerTerminate(chartInstance->c3_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c3_covrtInstance);
}

static void sf_gateway_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  int32_T c3_i;
  int32_T c3_i1;
  chartInstance->c3_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c3_i = 0; c3_i < 151389; c3_i++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 1U, (real_T)
                      (*chartInstance->c3_b_redcrab)[c3_i]);
  }

  for (c3_i1 = 0; c3_i1 < 750000; c3_i1++) {
    covrtSigUpdateFcn(chartInstance->c3_covrtInstance, 0U, (real_T)
                      (*chartInstance->c3_b_Image)[c3_i1]);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_MotionObjectDetector(chartInstance);
  c3_do_animation_call_c3_MotionObjectDetector(chartInstance);
}

static void mdl_start_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  static const uint32_T c3_decisionTxtStartIdx = 0U;
  static const uint32_T c3_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c3_chart_data_browse_helper);
  chartInstance->c3_RuntimeVar = sfListenerInitializeUsingSimStruct
    (chartInstance->S);
  chartInstance->c3_SequenceViewerOptimization = 1;
  sfListenerInitializeRuntimeVars(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_IsDebuggerActive,
    &chartInstance->c3_IsSequenceViewerPresent, 1, 0,
    &chartInstance->c3_mlFcnLineNumber);
  sfListenerInitializeIsStmtByStmtModeVar(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_IsStmtByStmtMode);
  sfListenerInitializeRuntimeFcnVarsJitOff(chartInstance->c3_RuntimeVar,
    &chartInstance->c3_numFcnVars, c3_dataNames, c3_ssIds, c3_fcnDataPtrs,
    c3_outMexFcns, c3_inMexFcns, c3_statuses);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c3_covrtInstance, 1U, 0U, 1U,
    9U);
  covrtChartInitFcn(chartInstance->c3_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c3_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c3_decisionTxtStartIdx, &c3_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c3_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c3_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c3_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 617);
}

static void c3_chartstep_c3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  c3_vision_internal_SURFPoints_cg c3_RedCrabPoints;
  c3_emxArray_real32_T *c3_RedCrabFeatures;
  c3_vision_internal_SURFPoints_cg c3_ROIPoints;
  c3_emxArray_real32_T *c3_ROIFeatures;
  c3_emxArray_uint32_T *c3_RedCrabPairs;
  c3_vision_internal_SURFPoints_cg c3_b_RedCrabPoints;
  c3_vision_internal_SURFPoints_cg c3_b_ROIPoints;
  c3_s2rdWZ6jAA0S8hk59zYLzBC c3_vPts;
  c3_sJTMl20J2MtSHoTgqrNGwiD c3_PtsStruct;
  c3_vision_internal_SURFPoints_cg c3_c_RedCrabPoints;
  c3_sJTMl20J2MtSHoTgqrNGwiD c3_b_PtsStruct;
  int32_T c3_i;
  int32_T c3_i1;
  real_T c3_nargin = 2.0;
  real_T c3_nargout = 0.0;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_i10;
  c3_emxArray_real32_T *c3_PtsStruct_Location;
  int32_T c3_i11;
  c3_emxArray_real32_T *c3_valLocation;
  int32_T c3_i12;
  c3_emxArray_real32_T *c3_valScale;
  c3_emxArray_real32_T *c3_valMetric;
  uint8_T c3_c_Iu8[50463];
  c3_emxArray_int8_T *c3_valSignOfLaplacian;
  void * c3_ptrKeypoint;
  int32_T c3_outNumRows;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_i15;
  int32_T c3_i16;
  int32_T c3_i17;
  int32_T c3_loop_ub;
  int32_T c3_i18;
  c3_sJTMl20J2MtSHoTgqrNGwiD c3_c_PtsStruct;
  int32_T c3_i19;
  int32_T c3_b_loop_ub;
  int32_T c3_i20;
  int32_T c3_i21;
  int32_T c3_c_loop_ub;
  int32_T c3_i22;
  int32_T c3_i23;
  int32_T c3_d_loop_ub;
  int32_T c3_i24;
  int32_T c3_i25;
  int32_T c3_e_loop_ub;
  int32_T c3_i26;
  int32_T c3_i27;
  int32_T c3_f_loop_ub;
  int32_T c3_i28;
  int32_T c3_i29;
  int32_T c3_g_loop_ub;
  int32_T c3_i30;
  c3_emxArray_real32_T *c3_d_PtsStruct;
  int32_T c3_i31;
  int32_T c3_h_loop_ub;
  int32_T c3_i32;
  int32_T c3_i33;
  c3_emxArray_real32_T *c3_b_RedCrabFeatures;
  uint8_T c3_b_redcrabGray[50463];
  c3_vision_internal_SURFPoints_cg c3_d_RedCrabPoints;
  int32_T c3_i34;
  int32_T c3_i_loop_ub;
  int32_T c3_i35;
  int32_T c3_i36;
  int32_T c3_i37;
  int32_T c3_i38;
  int32_T c3_i39;
  void * c3_b_ptrKeypoint;
  int32_T c3_i40;
  int32_T c3_b_outNumRows;
  int32_T c3_i41;
  int32_T c3_i42;
  int32_T c3_i43;
  int32_T c3_i44;
  int32_T c3_i45;
  int32_T c3_i46;
  int32_T c3_j_loop_ub;
  int32_T c3_i47;
  c3_sJTMl20J2MtSHoTgqrNGwiD c3_e_PtsStruct;
  int32_T c3_i48;
  int32_T c3_k_loop_ub;
  int32_T c3_i49;
  int32_T c3_i50;
  int32_T c3_l_loop_ub;
  int32_T c3_i51;
  int32_T c3_i52;
  int32_T c3_m_loop_ub;
  int32_T c3_i53;
  int32_T c3_i54;
  int32_T c3_n_loop_ub;
  int32_T c3_i55;
  int32_T c3_i56;
  int32_T c3_o_loop_ub;
  int32_T c3_i57;
  int32_T c3_i58;
  int32_T c3_p_loop_ub;
  int32_T c3_i59;
  c3_emxArray_real32_T *c3_f_PtsStruct;
  int32_T c3_i60;
  int32_T c3_q_loop_ub;
  int32_T c3_i61;
  int32_T c3_i62;
  int32_T c3_i63;
  int32_T c3_r_loop_ub;
  int32_T c3_i64;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i65;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  int32_T c3_s_loop_ub;
  static char_T c3_b_cv[6] = { 'P', 'O', 'I', 'N', 'T', 'S' };

  int32_T c3_i66;
  real_T c3_out_numel;
  int32_T c3_i67;
  int32_T c3_i68;
  int32_T c3_i69;
  int32_T c3_i70;
  boolean_T c3_b;
  int32_T c3_i71;
  c3_emxArray_int32_T *c3_r;
  int32_T c3_i72;
  int32_T c3_t_loop_ub;
  int32_T c3_i73;
  int32_T c3_i74;
  int32_T c3_i75;
  int32_T c3_tmp_data[2];
  int32_T c3_u_loop_ub;
  int32_T c3_i76;
  int32_T c3_iv[2];
  int32_T c3_i77;
  boolean_T c3_b1;
  int32_T c3_v_loop_ub;
  int32_T c3_i78;
  int32_T c3_i79;
  int32_T c3_i80;
  int32_T c3_w_loop_ub;
  int32_T c3_i81;
  c3_emxArray_real32_T *c3_outOrientation;
  int32_T c3_i82;
  int32_T c3_x_loop_ub;
  int32_T c3_i83;
  int32_T c3_iv1[1];
  int32_T c3_y_loop_ub;
  int32_T c3_i84;
  boolean_T c3_b2;
  int32_T c3_i85;
  int32_T c3_i86;
  int32_T c3_ab_loop_ub;
  int32_T c3_i87;
  int32_T c3_i88;
  int32_T c3_bb_loop_ub;
  int32_T c3_i89;
  int32_T c3_iv2[1];
  int32_T c3_cb_loop_ub;
  int32_T c3_i90;
  boolean_T c3_b3;
  int32_T c3_i91;
  int32_T c3_i92;
  int32_T c3_db_loop_ub;
  int32_T c3_i93;
  c3_emxArray_int8_T *c3_r1;
  int32_T c3_i94;
  int32_T c3_eb_loop_ub;
  int32_T c3_i95;
  int32_T c3_iv3[1];
  int32_T c3_fb_loop_ub;
  int32_T c3_i96;
  c3_sJTMl20J2MtSHoTgqrNGwiD c3_ptsStruct;
  int32_T c3_i97;
  int32_T c3_gb_loop_ub;
  int32_T c3_i98;
  int32_T c3_i99;
  int32_T c3_hb_loop_ub;
  int32_T c3_i100;
  int32_T c3_i101;
  int32_T c3_ib_loop_ub;
  int32_T c3_i102;
  int32_T c3_i103;
  int32_T c3_jb_loop_ub;
  int32_T c3_i104;
  int32_T c3_i105;
  int32_T c3_i106;
  c3_emxArray_real32_T *c3_b_ptsStruct;
  int32_T c3_i107;
  int32_T c3_i108;
  int32_T c3_i109;
  int32_T c3_kb_loop_ub;
  int32_T c3_i110;
  c3_emxArray_real32_T *c3_c_ptsStruct;
  int32_T c3_i111;
  int32_T c3_lb_loop_ub;
  int32_T c3_i112;
  c3_emxArray_real32_T *c3_d_ptsStruct;
  int32_T c3_i113;
  int32_T c3_mb_loop_ub;
  int32_T c3_i114;
  c3_emxArray_int8_T *c3_e_ptsStruct;
  int32_T c3_i115;
  int32_T c3_nb_loop_ub;
  int32_T c3_i116;
  c3_emxArray_real32_T *c3_features;
  int32_T c3_i117;
  int32_T c3_ob_loop_ub;
  int32_T c3_i118;
  int32_T c3_i119;
  int32_T c3_pb_loop_ub;
  int32_T c3_i120;
  c3_s2rdWZ6jAA0S8hk59zYLzBC c3_b_vPts;
  int32_T c3_i121;
  int32_T c3_qb_loop_ub;
  int32_T c3_i122;
  int32_T c3_i123;
  int32_T c3_rb_loop_ub;
  int32_T c3_i124;
  int32_T c3_i125;
  int32_T c3_sb_loop_ub;
  int32_T c3_i126;
  int32_T c3_i127;
  int32_T c3_tb_loop_ub;
  int32_T c3_i128;
  int32_T c3_i129;
  int32_T c3_ub_loop_ub;
  int32_T c3_i130;
  int32_T c3_i131;
  int32_T c3_vb_loop_ub;
  int32_T c3_i132;
  c3_emxArray_real32_T *c3_c_vPts;
  int32_T c3_i133;
  int32_T c3_wb_loop_ub;
  int32_T c3_i134;
  int32_T c3_i135;
  int32_T c3_xb_loop_ub;
  int32_T c3_i136;
  int32_T c3_i137;
  int32_T c3_yb_loop_ub;
  int32_T c3_i138;
  c3_emxArray_real32_T *c3_varargin_2;
  int32_T c3_i139;
  int32_T c3_ac_loop_ub;
  int32_T c3_i140;
  c3_emxArray_real32_T *c3_features1;
  int32_T c3_i141;
  int32_T c3_bc_loop_ub;
  int32_T c3_i142;
  c3_emxArray_real32_T *c3_features2;
  int32_T c3_i143;
  int32_T c3_cc_loop_ub;
  int32_T c3_i144;
  c3_emxArray_real32_T *c3_b_features1;
  int32_T c3_i145;
  int32_T c3_i146;
  int32_T c3_i147;
  int32_T c3_dc_loop_ub;
  int32_T c3_i148;
  int32_T c3_iv4[2];
  int32_T c3_ec_loop_ub;
  int32_T c3_i149;
  int32_T c3_i150;
  int32_T c3_fc_loop_ub;
  int32_T c3_i151;
  c3_emxArray_real32_T *c3_b_features2;
  int32_T c3_i152;
  int32_T c3_i153;
  int32_T c3_i154;
  int32_T c3_gc_loop_ub;
  int32_T c3_i155;
  int32_T c3_iv5[2];
  int32_T c3_hc_loop_ub;
  int32_T c3_i156;
  int32_T c3_i157;
  int32_T c3_ic_loop_ub;
  int32_T c3_i158;
  c3_emxArray_real32_T *c3_features1in;
  int32_T c3_i159;
  int32_T c3_jc_loop_ub;
  int32_T c3_i160;
  c3_emxArray_real32_T *c3_features2in;
  int32_T c3_i161;
  int32_T c3_kc_loop_ub;
  int32_T c3_i162;
  boolean_T c3_b4;
  c3_emxArray_uint32_T *c3_indexPairs;
  c3_emxArray_real32_T *c3_matchMetric;
  boolean_T c3_guard1 = false;
  boolean_T c3_b5;
  int32_T c3_i163;
  int32_T c3_i164;
  int32_T c3_lc_loop_ub;
  int32_T c3_i165;
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_RedCrabPoints,
    &c3_hc_emlrtRTEI);
  c3_emxInit_real32_T(chartInstance, &c3_RedCrabFeatures, 2, &c3_l_emlrtRTEI);
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_ROIPoints,
    &c3_ic_emlrtRTEI);
  c3_emxInit_real32_T(chartInstance, &c3_ROIFeatures, 2, &c3_tb_emlrtRTEI);
  c3_emxInit_uint32_T(chartInstance, &c3_RedCrabPairs, 2, &c3_gc_emlrtRTEI);
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_b_RedCrabPoints,
    &c3_hc_emlrtRTEI);
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_b_ROIPoints,
    &c3_ic_emlrtRTEI);
  c3_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_vPts, &c3_sb_emlrtRTEI);
  c3_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_PtsStruct,
    &c3_j_emlrtRTEI);
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_c_RedCrabPoints,
    &c3_k_emlrtRTEI);
  c3_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_b_PtsStruct,
    &c3_j_emlrtRTEI);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportStartingSection(chartInstance->c3_RuntimeVar, 0, 1);
  }

  for (c3_i = 0; c3_i < 750000; c3_i++) {
    chartInstance->c3_Image[c3_i] = (*chartInstance->c3_b_Image)[c3_i];
  }

  for (c3_i1 = 0; c3_i1 < 151389; c3_i1++) {
    chartInstance->c3_redcrab[c3_i1] = (*chartInstance->c3_b_redcrab)[c3_i1];
  }

  chartInstance->c3_numFcnVars = 6U;
  c3_fcnDataPtrs[0] = (void *)&chartInstance->c3_Image;
  c3_fcnDataPtrs[1] = (void *)&chartInstance->c3_redcrab;
  c3_fcnDataPtrs[2] = (void *)&chartInstance->c3_redcrabGray;
  c3_fcnDataPtrs[3] = (void *)&chartInstance->c3_ImageGray;
  c3_fcnDataPtrs[4] = (void *)&c3_nargin;
  c3_fcnDataPtrs[5] = (void *)&c3_nargout;
  c3_statuses[0] = 0U;
  c3_statuses[1] = 0U;
  c3_statuses[2] = 0U;
  c3_statuses[3] = 0U;
  c3_statuses[4] = 0U;
  c3_statuses[5] = 0U;
  c3_inMexFcns[0] = (void *)c3_sf_marshallIn_matrix500x500x3_uint8_T;
  c3_inMexFcns[1] = (void *)c3_sf_marshallIn_matrix189x267x3_uint8_T;
  c3_inMexFcns[2] = (void *)c3_sf_marshallIn_matrix189x267_uint8_T;
  c3_inMexFcns[3] = (void *)c3_sf_marshallIn_matrix500x500_uint8_T;
  c3_inMexFcns[4] = (void *)c3_sf_marshallIn_real_T;
  c3_inMexFcns[5] = (void *)c3_sf_marshallIn_real_T;
  c3_outMexFcns[0] = (void *)c3_sf_marshallOut_matrix500x500x3_uint8_T;
  c3_outMexFcns[1] = (void *)c3_sf_marshallOut_matrix189x267x3_uint8_T;
  c3_outMexFcns[2] = (void *)c3_sf_marshallOut_matrix189x267_uint8_T;
  c3_outMexFcns[3] = (void *)c3_sf_marshallOut_matrix500x500_uint8_T;
  c3_outMexFcns[4] = (void *)c3_sf_marshallOut_real_T;
  c3_outMexFcns[5] = (void *)c3_sf_marshallOut_real_T;
  c3_ssIds[0] = 0U;
  c3_ssIds[1] = 0U;
  c3_ssIds[2] = 0U;
  c3_ssIds[3] = 0U;
  c3_ssIds[4] = 0U;
  c3_ssIds[5] = 0U;
  c3_dataNames[0] = (char_T *)"Image";
  c3_dataNames[1] = (char_T *)"redcrab";
  c3_dataNames[2] = (char_T *)"redcrabGray";
  c3_dataNames[3] = (char_T *)"ImageGray";
  c3_dataNames[4] = (char_T *)"nargin";
  c3_dataNames[5] = (char_T *)"nargout";
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportStartingSection(chartInstance->c3_RuntimeVar, 0, 4);
  }

  covrtEmlFcnEval(chartInstance->c3_covrtInstance, 4U, 0, 0);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 3);
  }

  for (c3_i2 = 0; c3_i2 < 151389; c3_i2++) {
    chartInstance->c3_b_X[c3_i2] = chartInstance->c3_redcrab[c3_i2];
  }

  for (c3_i3 = 0; c3_i3 < 50463; c3_i3++) {
    chartInstance->c3_b_Iu8[c3_i3] = chartInstance->c3_redcrabGray[c3_i3];
  }

  for (c3_i4 = 0; c3_i4 < 50463; c3_i4++) {
    chartInstance->c3_redcrabGray[c3_i4] = chartInstance->c3_b_Iu8[c3_i4];
  }

  rgb2gray_tbb_uint8(chartInstance->c3_b_X, 50463.0,
                     chartInstance->c3_redcrabGray, true);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 4);
  }

  for (c3_i5 = 0; c3_i5 < 750000; c3_i5++) {
    chartInstance->c3_X[c3_i5] = chartInstance->c3_Image[c3_i5];
  }

  for (c3_i6 = 0; c3_i6 < 250000; c3_i6++) {
    chartInstance->c3_Iu8[c3_i6] = chartInstance->c3_ImageGray[c3_i6];
  }

  for (c3_i7 = 0; c3_i7 < 250000; c3_i7++) {
    chartInstance->c3_ImageGray[c3_i7] = chartInstance->c3_Iu8[c3_i7];
  }

  rgb2gray_tbb_uint8(chartInstance->c3_X, 250000.0, chartInstance->c3_ImageGray,
                     true);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 5);
  }

  for (c3_i8 = 0; c3_i8 < 50463; c3_i8++) {
    chartInstance->c3_b_Iu8[c3_i8] = chartInstance->c3_redcrabGray[c3_i8];
  }

  c3_i9 = 0;
  for (c3_i10 = 0; c3_i10 < 189; c3_i10++) {
    c3_i11 = 0;
    for (c3_i12 = 0; c3_i12 < 267; c3_i12++) {
      c3_c_Iu8[c3_i12 + c3_i9] = chartInstance->c3_b_Iu8[c3_i11 + c3_i10];
      c3_i11 += 189;
    }

    c3_i9 += 267;
  }

  c3_emxInit_real32_T(chartInstance, &c3_PtsStruct_Location, 2, &c3_g_emlrtRTEI);
  c3_emxInit_real32_T(chartInstance, &c3_valLocation, 2, &c3_lc_emlrtRTEI);
  c3_emxInit_real32_T1(chartInstance, &c3_valScale, 1, &c3_mc_emlrtRTEI);
  c3_emxInit_real32_T1(chartInstance, &c3_valMetric, 1, &c3_nc_emlrtRTEI);
  c3_emxInit_int8_T(chartInstance, &c3_valSignOfLaplacian, 1, &c3_oc_emlrtRTEI);
  c3_ptrKeypoint = NULL;
  c3_outNumRows = fastHessianDetector_uint8(c3_c_Iu8, 189, 267, 2, 2, 3, 1000,
    &c3_ptrKeypoint);
  c3_i13 = c3_valLocation->size[0] * c3_valLocation->size[1];
  c3_valLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_outNumRows);
  c3_valLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_valLocation, c3_i13,
    &c3_emlrtRTEI);
  c3_i14 = c3_valScale->size[0];
  c3_valScale->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_outNumRows);
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valScale, c3_i14,
    &c3_emlrtRTEI);
  c3_i15 = c3_valMetric->size[0];
  c3_valMetric->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_outNumRows);
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valMetric, c3_i15,
    &c3_emlrtRTEI);
  c3_i16 = c3_valSignOfLaplacian->size[0];
  c3_valSignOfLaplacian->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_outNumRows);
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_valSignOfLaplacian, c3_i16,
    &c3_emlrtRTEI);
  fastHessianDetector_keyPoints2field(c3_ptrKeypoint, &c3_valLocation->data[0],
    &c3_valScale->data[0], &c3_valMetric->data[0], &c3_valSignOfLaplacian->data
    [0]);
  fastHessianDetector_deleteKeypoint(c3_ptrKeypoint);
  c3_i17 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_valLocation->size[0];
  c3_PtsStruct_Location->size[1] = c3_valLocation->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i17,
    &c3_b_emlrtRTEI);
  c3_loop_ub = c3_valLocation->size[0] * c3_valLocation->size[1] - 1;
  for (c3_i18 = 0; c3_i18 <= c3_loop_ub; c3_i18++) {
    c3_PtsStruct_Location->data[c3_i18] = c3_valLocation->data[c3_i18];
  }

  c3_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_c_PtsStruct,
    &c3_jc_emlrtRTEI);
  c3_i19 = c3_c_PtsStruct.Location->size[0] * c3_c_PtsStruct.Location->size[1];
  c3_c_PtsStruct.Location->size[0] = c3_PtsStruct_Location->size[0];
  c3_c_PtsStruct.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_PtsStruct.Location, c3_i19,
    &c3_c_emlrtRTEI);
  c3_b_loop_ub = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1]
    - 1;
  for (c3_i20 = 0; c3_i20 <= c3_b_loop_ub; c3_i20++) {
    c3_c_PtsStruct.Location->data[c3_i20] = c3_PtsStruct_Location->data[c3_i20];
  }

  c3_i21 = c3_c_PtsStruct.Scale->size[0];
  c3_c_PtsStruct.Scale->size[0] = c3_valScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_c_PtsStruct.Scale, c3_i21,
    &c3_d_emlrtRTEI);
  c3_c_loop_ub = c3_valScale->size[0] - 1;
  for (c3_i22 = 0; c3_i22 <= c3_c_loop_ub; c3_i22++) {
    c3_c_PtsStruct.Scale->data[c3_i22] = c3_valScale->data[c3_i22];
  }

  c3_i23 = c3_c_PtsStruct.Metric->size[0];
  c3_c_PtsStruct.Metric->size[0] = c3_valMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_c_PtsStruct.Metric, c3_i23,
    &c3_e_emlrtRTEI);
  c3_d_loop_ub = c3_valMetric->size[0] - 1;
  for (c3_i24 = 0; c3_i24 <= c3_d_loop_ub; c3_i24++) {
    c3_c_PtsStruct.Metric->data[c3_i24] = c3_valMetric->data[c3_i24];
  }

  c3_i25 = c3_c_PtsStruct.SignOfLaplacian->size[0];
  c3_c_PtsStruct.SignOfLaplacian->size[0] = c3_valSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_c_PtsStruct.SignOfLaplacian,
    c3_i25, &c3_f_emlrtRTEI);
  c3_e_loop_ub = c3_valSignOfLaplacian->size[0] - 1;
  for (c3_i26 = 0; c3_i26 <= c3_e_loop_ub; c3_i26++) {
    c3_c_PtsStruct.SignOfLaplacian->data[c3_i26] = c3_valSignOfLaplacian->
      data[c3_i26];
  }

  c3_i27 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_c_PtsStruct.Location->size[0];
  c3_PtsStruct_Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i27,
    &c3_g_emlrtRTEI);
  c3_f_loop_ub = c3_c_PtsStruct.Location->size[0] *
    c3_c_PtsStruct.Location->size[1] - 1;
  for (c3_i28 = 0; c3_i28 <= c3_f_loop_ub; c3_i28++) {
    c3_PtsStruct_Location->data[c3_i28] = c3_c_PtsStruct.Location->data[c3_i28];
  }

  c3_i29 = c3_c_PtsStruct.Location->size[0] * c3_c_PtsStruct.Location->size[1];
  c3_c_PtsStruct.Location->size[0] = c3_PtsStruct_Location->size[0];
  c3_c_PtsStruct.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_PtsStruct.Location, c3_i29,
    &c3_h_emlrtRTEI);
  c3_g_loop_ub = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1]
    - 1;
  for (c3_i30 = 0; c3_i30 <= c3_g_loop_ub; c3_i30++) {
    c3_c_PtsStruct.Location->data[c3_i30] = c3_PtsStruct_Location->data[c3_i30];
  }

  c3_emxInit_real32_T(chartInstance, &c3_d_PtsStruct, 2, &c3_i_emlrtRTEI);
  c3_i31 = c3_d_PtsStruct->size[0] * c3_d_PtsStruct->size[1];
  c3_d_PtsStruct->size[0] = c3_c_PtsStruct.Location->size[0];
  c3_d_PtsStruct->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_d_PtsStruct, c3_i31,
    &c3_i_emlrtRTEI);
  c3_h_loop_ub = c3_c_PtsStruct.Location->size[0] *
    c3_c_PtsStruct.Location->size[1] - 1;
  for (c3_i32 = 0; c3_i32 <= c3_h_loop_ub; c3_i32++) {
    c3_d_PtsStruct->data[c3_i32] = c3_c_PtsStruct.Location->data[c3_i32];
  }

  c3_emxCopyStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_b_PtsStruct,
    &c3_c_PtsStruct, &c3_j_emlrtRTEI);
  c3_SURFPoints_cg_SURFPoints_cg(chartInstance, c3_d_PtsStruct, c3_b_PtsStruct,
    &c3_RedCrabPoints);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "RedCrabPoints", &c3_RedCrabPoints, (void *)
    c3_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c3_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 7);
  }

  c3_emxFree_real32_T(chartInstance, &c3_d_PtsStruct);
  c3_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_c_PtsStruct);
  for (c3_i33 = 0; c3_i33 < 50463; c3_i33++) {
    c3_b_redcrabGray[c3_i33] = chartInstance->c3_redcrabGray[c3_i33];
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_RedCrabFeatures, 2, &c3_vb_emlrtRTEI);
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_d_RedCrabPoints,
    &c3_n_emlrtRTEI);
  c3_emxCopyStruct_vision_internal_S(chartInstance, &c3_c_RedCrabPoints,
    &c3_RedCrabPoints, &c3_k_emlrtRTEI);
  c3_extractFeatures(chartInstance, c3_b_redcrabGray, c3_c_RedCrabPoints,
                     c3_b_RedCrabFeatures, &c3_d_RedCrabPoints);
  c3_i34 = c3_RedCrabFeatures->size[0] * c3_RedCrabFeatures->size[1];
  c3_RedCrabFeatures->size[0] = c3_b_RedCrabFeatures->size[0];
  c3_RedCrabFeatures->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_RedCrabFeatures, c3_i34,
    &c3_l_emlrtRTEI);
  c3_i_loop_ub = c3_b_RedCrabFeatures->size[0] * c3_b_RedCrabFeatures->size[1] -
    1;
  for (c3_i35 = 0; c3_i35 <= c3_i_loop_ub; c3_i35++) {
    c3_RedCrabFeatures->data[c3_i35] = c3_b_RedCrabFeatures->data[c3_i35];
  }

  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "RedCrabFeatures", c3_RedCrabFeatures, (void *)
    c3_sf_marshallOut_dynamicmatrix, (void *)c3_sf_marshallIn_dynamicmatrix, 0U);
  c3_emxCopyStruct_vision_internal_S(chartInstance, &c3_b_RedCrabPoints,
    &c3_d_RedCrabPoints, &c3_m_emlrtRTEI);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "RedCrabPoints", &c3_b_RedCrabPoints, (void *)
    c3_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c3_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 9);
  }

  for (c3_i36 = 0; c3_i36 < 250000; c3_i36++) {
    chartInstance->c3_Iu8[c3_i36] = chartInstance->c3_ImageGray[c3_i36];
  }

  for (c3_i37 = 0; c3_i37 < 250000; c3_i37++) {
    chartInstance->c3_Iu8T[c3_i37] = chartInstance->c3_Iu8[c3_i37];
  }

  c3_i38 = 0;
  for (c3_i39 = 0; c3_i39 < 500; c3_i39++) {
    c3_i40 = 0;
    for (c3_i41 = 0; c3_i41 < 500; c3_i41++) {
      chartInstance->c3_Iu8[c3_i41 + c3_i38] = chartInstance->c3_Iu8T[c3_i40 +
        c3_i39];
      c3_i40 += 500;
    }

    c3_i38 += 500;
  }

  c3_b_ptrKeypoint = NULL;
  c3_b_outNumRows = fastHessianDetector_uint8(chartInstance->c3_Iu8, 500, 500, 2,
    2, 3, 1000, &c3_b_ptrKeypoint);
  c3_i42 = c3_valLocation->size[0] * c3_valLocation->size[1];
  c3_valLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_b_outNumRows);
  c3_valLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_valLocation, c3_i42,
    &c3_emlrtRTEI);
  c3_i43 = c3_valScale->size[0];
  c3_valScale->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_b_outNumRows);
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valScale, c3_i43,
    &c3_emlrtRTEI);
  c3_i44 = c3_valMetric->size[0];
  c3_valMetric->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_b_outNumRows);
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valMetric, c3_i44,
    &c3_emlrtRTEI);
  c3_i45 = c3_valSignOfLaplacian->size[0];
  c3_valSignOfLaplacian->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_b_outNumRows);
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_valSignOfLaplacian, c3_i45,
    &c3_emlrtRTEI);
  fastHessianDetector_keyPoints2field(c3_b_ptrKeypoint, &c3_valLocation->data[0],
    &c3_valScale->data[0], &c3_valMetric->data[0], &c3_valSignOfLaplacian->data
    [0]);
  fastHessianDetector_deleteKeypoint(c3_b_ptrKeypoint);
  c3_i46 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_valLocation->size[0];
  c3_PtsStruct_Location->size[1] = c3_valLocation->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i46,
    &c3_b_emlrtRTEI);
  c3_j_loop_ub = c3_valLocation->size[0] * c3_valLocation->size[1] - 1;
  for (c3_i47 = 0; c3_i47 <= c3_j_loop_ub; c3_i47++) {
    c3_PtsStruct_Location->data[c3_i47] = c3_valLocation->data[c3_i47];
  }

  c3_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_e_PtsStruct,
    &c3_jc_emlrtRTEI);
  c3_i48 = c3_e_PtsStruct.Location->size[0] * c3_e_PtsStruct.Location->size[1];
  c3_e_PtsStruct.Location->size[0] = c3_PtsStruct_Location->size[0];
  c3_e_PtsStruct.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_e_PtsStruct.Location, c3_i48,
    &c3_c_emlrtRTEI);
  c3_k_loop_ub = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1]
    - 1;
  for (c3_i49 = 0; c3_i49 <= c3_k_loop_ub; c3_i49++) {
    c3_e_PtsStruct.Location->data[c3_i49] = c3_PtsStruct_Location->data[c3_i49];
  }

  c3_i50 = c3_e_PtsStruct.Scale->size[0];
  c3_e_PtsStruct.Scale->size[0] = c3_valScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_e_PtsStruct.Scale, c3_i50,
    &c3_d_emlrtRTEI);
  c3_l_loop_ub = c3_valScale->size[0] - 1;
  for (c3_i51 = 0; c3_i51 <= c3_l_loop_ub; c3_i51++) {
    c3_e_PtsStruct.Scale->data[c3_i51] = c3_valScale->data[c3_i51];
  }

  c3_i52 = c3_e_PtsStruct.Metric->size[0];
  c3_e_PtsStruct.Metric->size[0] = c3_valMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_e_PtsStruct.Metric, c3_i52,
    &c3_e_emlrtRTEI);
  c3_m_loop_ub = c3_valMetric->size[0] - 1;
  for (c3_i53 = 0; c3_i53 <= c3_m_loop_ub; c3_i53++) {
    c3_e_PtsStruct.Metric->data[c3_i53] = c3_valMetric->data[c3_i53];
  }

  c3_i54 = c3_e_PtsStruct.SignOfLaplacian->size[0];
  c3_e_PtsStruct.SignOfLaplacian->size[0] = c3_valSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_e_PtsStruct.SignOfLaplacian,
    c3_i54, &c3_f_emlrtRTEI);
  c3_n_loop_ub = c3_valSignOfLaplacian->size[0] - 1;
  for (c3_i55 = 0; c3_i55 <= c3_n_loop_ub; c3_i55++) {
    c3_e_PtsStruct.SignOfLaplacian->data[c3_i55] = c3_valSignOfLaplacian->
      data[c3_i55];
  }

  c3_i56 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_e_PtsStruct.Location->size[0];
  c3_PtsStruct_Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i56,
    &c3_g_emlrtRTEI);
  c3_o_loop_ub = c3_e_PtsStruct.Location->size[0] *
    c3_e_PtsStruct.Location->size[1] - 1;
  for (c3_i57 = 0; c3_i57 <= c3_o_loop_ub; c3_i57++) {
    c3_PtsStruct_Location->data[c3_i57] = c3_e_PtsStruct.Location->data[c3_i57];
  }

  c3_i58 = c3_e_PtsStruct.Location->size[0] * c3_e_PtsStruct.Location->size[1];
  c3_e_PtsStruct.Location->size[0] = c3_PtsStruct_Location->size[0];
  c3_e_PtsStruct.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_e_PtsStruct.Location, c3_i58,
    &c3_h_emlrtRTEI);
  c3_p_loop_ub = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1]
    - 1;
  for (c3_i59 = 0; c3_i59 <= c3_p_loop_ub; c3_i59++) {
    c3_e_PtsStruct.Location->data[c3_i59] = c3_PtsStruct_Location->data[c3_i59];
  }

  c3_emxInit_real32_T(chartInstance, &c3_f_PtsStruct, 2, &c3_i_emlrtRTEI);
  c3_i60 = c3_f_PtsStruct->size[0] * c3_f_PtsStruct->size[1];
  c3_f_PtsStruct->size[0] = c3_e_PtsStruct.Location->size[0];
  c3_f_PtsStruct->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_f_PtsStruct, c3_i60,
    &c3_i_emlrtRTEI);
  c3_q_loop_ub = c3_e_PtsStruct.Location->size[0] *
    c3_e_PtsStruct.Location->size[1] - 1;
  for (c3_i61 = 0; c3_i61 <= c3_q_loop_ub; c3_i61++) {
    c3_f_PtsStruct->data[c3_i61] = c3_e_PtsStruct.Location->data[c3_i61];
  }

  c3_emxCopyStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_PtsStruct,
    &c3_e_PtsStruct, &c3_j_emlrtRTEI);
  c3_SURFPoints_cg_SURFPoints_cg(chartInstance, c3_f_PtsStruct, c3_PtsStruct,
    &c3_ROIPoints);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "ROIPoints", &c3_ROIPoints, (void *)
    c3_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c3_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 10);
  }

  c3_emxFree_real32_T(chartInstance, &c3_f_PtsStruct);
  c3_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_e_PtsStruct);
  for (c3_i62 = 0; c3_i62 < 250000; c3_i62++) {
    chartInstance->c3_Iu8[c3_i62] = chartInstance->c3_ImageGray[c3_i62];
  }

  c3_emxCopyStruct_vision_internal_S(chartInstance, &c3_d_RedCrabPoints,
    &c3_ROIPoints, &c3_n_emlrtRTEI);
  c3_i63 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_d_RedCrabPoints.pLocation->size[0];
  c3_PtsStruct_Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i63,
    &c3_o_emlrtRTEI);
  c3_r_loop_ub = c3_d_RedCrabPoints.pLocation->size[0] *
    c3_d_RedCrabPoints.pLocation->size[1] - 1;
  for (c3_i64 = 0; c3_i64 <= c3_r_loop_ub; c3_i64++) {
    c3_PtsStruct_Location->data[c3_i64] = c3_d_RedCrabPoints.pLocation->
      data[c3_i64];
  }

  if (!c3_inputMeetsSizeRequirement(chartInstance, c3_PtsStruct_Location)) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_i65 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_d_RedCrabPoints.pLocation->size[0];
  c3_PtsStruct_Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i65,
    &c3_p_emlrtRTEI);
  c3_s_loop_ub = c3_d_RedCrabPoints.pLocation->size[0] *
    c3_d_RedCrabPoints.pLocation->size[1] - 1;
  for (c3_i66 = 0; c3_i66 <= c3_s_loop_ub; c3_i66++) {
    c3_PtsStruct_Location->data[c3_i66] = c3_d_RedCrabPoints.pLocation->
      data[c3_i66];
  }

  c3_out_numel = (real_T)c3_PtsStruct_Location->size[0];
  c3_i67 = c3_valLocation->size[0] * c3_valLocation->size[1];
  c3_valLocation->size[0] = (int32_T)c3_out_numel;
  c3_valLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_valLocation, c3_i67,
    &c3_q_emlrtRTEI);
  c3_i68 = c3_valScale->size[0];
  c3_valScale->size[0] = (int32_T)c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valScale, c3_i68,
    &c3_q_emlrtRTEI);
  c3_i69 = c3_valMetric->size[0];
  c3_valMetric->size[0] = (int32_T)c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valMetric, c3_i69,
    &c3_q_emlrtRTEI);
  c3_i70 = c3_valSignOfLaplacian->size[0];
  c3_valSignOfLaplacian->size[0] = (int32_T)c3_out_numel;
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_valSignOfLaplacian, c3_i70,
    &c3_q_emlrtRTEI);
  c3_b = (1.0 > c3_out_numel);
  if (c3_b) {
    c3_i71 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c3_valLocation->size[0]);
    c3_i71 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valLocation->size[0]) - 1;
  }

  c3_emxInit_int32_T(chartInstance, &c3_r, 1, (emlrtRTEInfo *)NULL);
  c3_i72 = c3_r->size[0];
  c3_r->size[0] = c3_i71 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i72, &c3_r_emlrtRTEI);
  c3_t_loop_ub = c3_i71;
  for (c3_i73 = 0; c3_i73 <= c3_t_loop_ub; c3_i73++) {
    c3_r->data[c3_i73] = c3_i73;
  }

  for (c3_i74 = 0; c3_i74 < 2; c3_i74++) {
    c3_tmp_data[c3_i74] = c3_i74;
  }

  c3_i75 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_d_RedCrabPoints.pLocation->size[0];
  c3_PtsStruct_Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i75,
    &c3_t_emlrtRTEI);
  c3_u_loop_ub = c3_d_RedCrabPoints.pLocation->size[0] *
    c3_d_RedCrabPoints.pLocation->size[1] - 1;
  for (c3_i76 = 0; c3_i76 <= c3_u_loop_ub; c3_i76++) {
    c3_PtsStruct_Location->data[c3_i76] = c3_d_RedCrabPoints.pLocation->
      data[c3_i76];
  }

  c3_iv[0] = c3_r->size[0];
  c3_iv[1] = 2;
  sf_mex_lw_sub_assign_size_check_nd(c3_iv, 2, *(int32_T (*)[2])
    c3_PtsStruct_Location->size, 2);
  for (c3_i77 = 0; c3_i77 < 2; c3_i77++) {
    c3_v_loop_ub = c3_PtsStruct_Location->size[0] - 1;
    for (c3_i78 = 0; c3_i78 <= c3_v_loop_ub; c3_i78++) {
      c3_valLocation->data[c3_r->data[c3_i78] + c3_valLocation->size[0] *
        c3_tmp_data[c3_i77]] = c3_PtsStruct_Location->data[c3_i78 +
        c3_PtsStruct_Location->size[0] * c3_i77];
    }
  }

  c3_b1 = (1.0 > c3_out_numel);
  if (c3_b1) {
    c3_i79 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c3_valScale->size[0]);
    c3_i79 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valScale->size[0]) - 1;
  }

  c3_i80 = c3_r->size[0];
  c3_r->size[0] = c3_i79 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i80, &c3_u_emlrtRTEI);
  c3_w_loop_ub = c3_i79;
  for (c3_i81 = 0; c3_i81 <= c3_w_loop_ub; c3_i81++) {
    c3_r->data[c3_i81] = c3_i81;
  }

  c3_emxInit_real32_T1(chartInstance, &c3_outOrientation, 1, (emlrtRTEInfo *)
                       NULL);
  c3_i82 = c3_outOrientation->size[0];
  c3_outOrientation->size[0] = c3_d_RedCrabPoints.pScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outOrientation, c3_i82,
    &c3_v_emlrtRTEI);
  c3_x_loop_ub = c3_d_RedCrabPoints.pScale->size[0] - 1;
  for (c3_i83 = 0; c3_i83 <= c3_x_loop_ub; c3_i83++) {
    c3_outOrientation->data[c3_i83] = c3_d_RedCrabPoints.pScale->data[c3_i83];
  }

  c3_iv1[0] = c3_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c3_iv1, 1, *(int32_T (*)[1])
    c3_outOrientation->size, 1);
  c3_y_loop_ub = c3_outOrientation->size[0] - 1;
  for (c3_i84 = 0; c3_i84 <= c3_y_loop_ub; c3_i84++) {
    c3_valScale->data[c3_r->data[c3_i84]] = c3_outOrientation->data[c3_i84];
  }

  c3_b2 = (1.0 > c3_out_numel);
  if (c3_b2) {
    c3_i85 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c3_valMetric->size[0]);
    c3_i85 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valMetric->size[0]) - 1;
  }

  c3_i86 = c3_r->size[0];
  c3_r->size[0] = c3_i85 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i86, &c3_w_emlrtRTEI);
  c3_ab_loop_ub = c3_i85;
  for (c3_i87 = 0; c3_i87 <= c3_ab_loop_ub; c3_i87++) {
    c3_r->data[c3_i87] = c3_i87;
  }

  c3_i88 = c3_outOrientation->size[0];
  c3_outOrientation->size[0] = c3_d_RedCrabPoints.pMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outOrientation, c3_i88,
    &c3_x_emlrtRTEI);
  c3_bb_loop_ub = c3_d_RedCrabPoints.pMetric->size[0] - 1;
  for (c3_i89 = 0; c3_i89 <= c3_bb_loop_ub; c3_i89++) {
    c3_outOrientation->data[c3_i89] = c3_d_RedCrabPoints.pMetric->data[c3_i89];
  }

  c3_iv2[0] = c3_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c3_iv2, 1, *(int32_T (*)[1])
    c3_outOrientation->size, 1);
  c3_cb_loop_ub = c3_outOrientation->size[0] - 1;
  for (c3_i90 = 0; c3_i90 <= c3_cb_loop_ub; c3_i90++) {
    c3_valMetric->data[c3_r->data[c3_i90]] = c3_outOrientation->data[c3_i90];
  }

  c3_b3 = (1.0 > c3_out_numel);
  if (c3_b3) {
    c3_i91 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64, MAX_uint32_T,
      1, 1, c3_valSignOfLaplacian->size[0]);
    c3_i91 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 266, 64,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valSignOfLaplacian->size[0]) -
      1;
  }

  c3_i92 = c3_r->size[0];
  c3_r->size[0] = c3_i91 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i92, &c3_y_emlrtRTEI);
  c3_db_loop_ub = c3_i91;
  for (c3_i93 = 0; c3_i93 <= c3_db_loop_ub; c3_i93++) {
    c3_r->data[c3_i93] = c3_i93;
  }

  c3_emxInit_int8_T(chartInstance, &c3_r1, 1, (emlrtRTEInfo *)NULL);
  c3_i94 = c3_r1->size[0];
  c3_r1->size[0] = c3_d_RedCrabPoints.pSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_r1, c3_i94, &c3_ab_emlrtRTEI);
  c3_eb_loop_ub = c3_d_RedCrabPoints.pSignOfLaplacian->size[0] - 1;
  for (c3_i95 = 0; c3_i95 <= c3_eb_loop_ub; c3_i95++) {
    c3_r1->data[c3_i95] = c3_d_RedCrabPoints.pSignOfLaplacian->data[c3_i95];
  }

  c3_iv3[0] = c3_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c3_iv3, 1, *(int32_T (*)[1])c3_r1->size, 1);
  c3_fb_loop_ub = c3_r1->size[0] - 1;
  for (c3_i96 = 0; c3_i96 <= c3_fb_loop_ub; c3_i96++) {
    c3_valSignOfLaplacian->data[c3_r->data[c3_i96]] = c3_r1->data[c3_i96];
  }

  c3_emxFree_int8_T(chartInstance, &c3_r1);
  c3_emxFree_int32_T(chartInstance, &c3_r);
  c3_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_ptsStruct, (emlrtRTEInfo
    *)NULL);
  c3_i97 = c3_ptsStruct.Location->size[0] * c3_ptsStruct.Location->size[1];
  c3_ptsStruct.Location->size[0] = c3_valLocation->size[0];
  c3_ptsStruct.Location->size[1] = c3_valLocation->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ptsStruct.Location, c3_i97,
    &c3_bb_emlrtRTEI);
  c3_gb_loop_ub = c3_valLocation->size[0] * c3_valLocation->size[1] - 1;
  for (c3_i98 = 0; c3_i98 <= c3_gb_loop_ub; c3_i98++) {
    c3_ptsStruct.Location->data[c3_i98] = c3_valLocation->data[c3_i98];
  }

  c3_i99 = c3_ptsStruct.Scale->size[0];
  c3_ptsStruct.Scale->size[0] = c3_valScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_ptsStruct.Scale, c3_i99,
    &c3_cb_emlrtRTEI);
  c3_hb_loop_ub = c3_valScale->size[0] - 1;
  for (c3_i100 = 0; c3_i100 <= c3_hb_loop_ub; c3_i100++) {
    c3_ptsStruct.Scale->data[c3_i100] = c3_valScale->data[c3_i100];
  }

  c3_i101 = c3_ptsStruct.Metric->size[0];
  c3_ptsStruct.Metric->size[0] = c3_valMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_ptsStruct.Metric, c3_i101,
    &c3_db_emlrtRTEI);
  c3_ib_loop_ub = c3_valMetric->size[0] - 1;
  for (c3_i102 = 0; c3_i102 <= c3_ib_loop_ub; c3_i102++) {
    c3_ptsStruct.Metric->data[c3_i102] = c3_valMetric->data[c3_i102];
  }

  c3_i103 = c3_ptsStruct.SignOfLaplacian->size[0];
  c3_ptsStruct.SignOfLaplacian->size[0] = c3_valSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_ptsStruct.SignOfLaplacian,
    c3_i103, &c3_eb_emlrtRTEI);
  c3_jb_loop_ub = c3_valSignOfLaplacian->size[0] - 1;
  for (c3_i104 = 0; c3_i104 <= c3_jb_loop_ub; c3_i104++) {
    c3_ptsStruct.SignOfLaplacian->data[c3_i104] = c3_valSignOfLaplacian->
      data[c3_i104];
  }

  c3_i105 = 0;
  for (c3_i106 = 0; c3_i106 < 500; c3_i106++) {
    c3_i107 = 0;
    for (c3_i109 = 0; c3_i109 < 500; c3_i109++) {
      chartInstance->c3_Iu8T[c3_i109 + c3_i105] = chartInstance->c3_Iu8[c3_i107
        + c3_i106];
      c3_i107 += 500;
    }

    c3_i105 += 500;
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_ptsStruct, 2, &c3_fb_emlrtRTEI);
  c3_i108 = c3_b_ptsStruct->size[0] * c3_b_ptsStruct->size[1];
  c3_b_ptsStruct->size[0] = c3_ptsStruct.Location->size[0];
  c3_b_ptsStruct->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_ptsStruct, c3_i108,
    &c3_fb_emlrtRTEI);
  c3_kb_loop_ub = c3_ptsStruct.Location->size[0] * c3_ptsStruct.Location->size[1]
    - 1;
  for (c3_i110 = 0; c3_i110 <= c3_kb_loop_ub; c3_i110++) {
    c3_b_ptsStruct->data[c3_i110] = c3_ptsStruct.Location->data[c3_i110];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_c_ptsStruct, 1, &c3_gb_emlrtRTEI);
  c3_i111 = c3_c_ptsStruct->size[0];
  c3_c_ptsStruct->size[0] = c3_ptsStruct.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_c_ptsStruct, c3_i111,
    &c3_gb_emlrtRTEI);
  c3_lb_loop_ub = c3_ptsStruct.Scale->size[0] - 1;
  for (c3_i112 = 0; c3_i112 <= c3_lb_loop_ub; c3_i112++) {
    c3_c_ptsStruct->data[c3_i112] = c3_ptsStruct.Scale->data[c3_i112];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_d_ptsStruct, 1, &c3_hb_emlrtRTEI);
  c3_i113 = c3_d_ptsStruct->size[0];
  c3_d_ptsStruct->size[0] = c3_ptsStruct.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_d_ptsStruct, c3_i113,
    &c3_hb_emlrtRTEI);
  c3_mb_loop_ub = c3_ptsStruct.Metric->size[0] - 1;
  for (c3_i114 = 0; c3_i114 <= c3_mb_loop_ub; c3_i114++) {
    c3_d_ptsStruct->data[c3_i114] = c3_ptsStruct.Metric->data[c3_i114];
  }

  c3_emxInit_int8_T(chartInstance, &c3_e_ptsStruct, 1, &c3_ib_emlrtRTEI);
  c3_i115 = c3_e_ptsStruct->size[0];
  c3_e_ptsStruct->size[0] = c3_ptsStruct.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_e_ptsStruct, c3_i115,
    &c3_ib_emlrtRTEI);
  c3_nb_loop_ub = c3_ptsStruct.SignOfLaplacian->size[0] - 1;
  for (c3_i116 = 0; c3_i116 <= c3_nb_loop_ub; c3_i116++) {
    c3_e_ptsStruct->data[c3_i116] = c3_ptsStruct.SignOfLaplacian->data[c3_i116];
  }

  c3_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_ptsStruct);
  c3_emxInit_real32_T(chartInstance, &c3_features, 2, (emlrtRTEInfo *)NULL);
  c3_b_extractSurfBuildable_extractSurf_uint8(chartInstance,
    chartInstance->c3_Iu8T, c3_b_ptsStruct, c3_c_ptsStruct, c3_d_ptsStruct,
    c3_e_ptsStruct, false, false, c3_valLocation, c3_valScale, c3_valMetric,
    c3_valSignOfLaplacian, c3_outOrientation, c3_features);
  c3_i117 = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1];
  c3_PtsStruct_Location->size[0] = c3_valLocation->size[0];
  c3_PtsStruct_Location->size[1] = c3_valLocation->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_PtsStruct_Location, c3_i117,
    &c3_jb_emlrtRTEI);
  c3_ob_loop_ub = c3_valLocation->size[0] * c3_valLocation->size[1] - 1;
  c3_emxFree_int8_T(chartInstance, &c3_e_ptsStruct);
  c3_emxFree_real32_T(chartInstance, &c3_d_ptsStruct);
  c3_emxFree_real32_T(chartInstance, &c3_c_ptsStruct);
  c3_emxFree_real32_T(chartInstance, &c3_b_ptsStruct);
  for (c3_i118 = 0; c3_i118 <= c3_ob_loop_ub; c3_i118++) {
    c3_PtsStruct_Location->data[c3_i118] = c3_valLocation->data[c3_i118];
  }

  c3_emxFree_real32_T(chartInstance, &c3_valLocation);
  c3_i119 = c3_b_RedCrabFeatures->size[0] * c3_b_RedCrabFeatures->size[1];
  c3_b_RedCrabFeatures->size[0] = c3_features->size[0];
  c3_b_RedCrabFeatures->size[1] = c3_features->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_RedCrabFeatures, c3_i119,
    &c3_kb_emlrtRTEI);
  c3_pb_loop_ub = c3_features->size[0] * c3_features->size[1] - 1;
  for (c3_i120 = 0; c3_i120 <= c3_pb_loop_ub; c3_i120++) {
    c3_b_RedCrabFeatures->data[c3_i120] = c3_features->data[c3_i120];
  }

  c3_emxFree_real32_T(chartInstance, &c3_features);
  c3_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_b_vPts, &c3_kc_emlrtRTEI);
  c3_i121 = c3_b_vPts.Location->size[0] * c3_b_vPts.Location->size[1];
  c3_b_vPts.Location->size[0] = c3_PtsStruct_Location->size[0];
  c3_b_vPts.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_vPts.Location, c3_i121,
    &c3_lb_emlrtRTEI);
  c3_qb_loop_ub = c3_PtsStruct_Location->size[0] * c3_PtsStruct_Location->size[1]
    - 1;
  for (c3_i122 = 0; c3_i122 <= c3_qb_loop_ub; c3_i122++) {
    c3_b_vPts.Location->data[c3_i122] = c3_PtsStruct_Location->data[c3_i122];
  }

  c3_emxFree_real32_T(chartInstance, &c3_PtsStruct_Location);
  c3_i123 = c3_b_vPts.Scale->size[0];
  c3_b_vPts.Scale->size[0] = c3_valScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Scale, c3_i123,
    &c3_mb_emlrtRTEI);
  c3_rb_loop_ub = c3_valScale->size[0] - 1;
  for (c3_i124 = 0; c3_i124 <= c3_rb_loop_ub; c3_i124++) {
    c3_b_vPts.Scale->data[c3_i124] = c3_valScale->data[c3_i124];
  }

  c3_emxFree_real32_T(chartInstance, &c3_valScale);
  c3_i125 = c3_b_vPts.Metric->size[0];
  c3_b_vPts.Metric->size[0] = c3_valMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Metric, c3_i125,
    &c3_nb_emlrtRTEI);
  c3_sb_loop_ub = c3_valMetric->size[0] - 1;
  for (c3_i126 = 0; c3_i126 <= c3_sb_loop_ub; c3_i126++) {
    c3_b_vPts.Metric->data[c3_i126] = c3_valMetric->data[c3_i126];
  }

  c3_emxFree_real32_T(chartInstance, &c3_valMetric);
  c3_i127 = c3_b_vPts.SignOfLaplacian->size[0];
  c3_b_vPts.SignOfLaplacian->size[0] = c3_valSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_b_vPts.SignOfLaplacian, c3_i127,
    &c3_ob_emlrtRTEI);
  c3_tb_loop_ub = c3_valSignOfLaplacian->size[0] - 1;
  for (c3_i128 = 0; c3_i128 <= c3_tb_loop_ub; c3_i128++) {
    c3_b_vPts.SignOfLaplacian->data[c3_i128] = c3_valSignOfLaplacian->
      data[c3_i128];
  }

  c3_emxFree_int8_T(chartInstance, &c3_valSignOfLaplacian);
  c3_i129 = c3_b_vPts.Orientation->size[0];
  c3_b_vPts.Orientation->size[0] = c3_outOrientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Orientation, c3_i129,
    &c3_pb_emlrtRTEI);
  c3_ub_loop_ub = c3_outOrientation->size[0] - 1;
  for (c3_i130 = 0; c3_i130 <= c3_ub_loop_ub; c3_i130++) {
    c3_b_vPts.Orientation->data[c3_i130] = c3_outOrientation->data[c3_i130];
  }

  c3_emxFree_real32_T(chartInstance, &c3_outOrientation);
  c3_i131 = c3_b_vPts.Orientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Orientation, c3_i131,
    &c3_qb_emlrtRTEI);
  c3_vb_loop_ub = c3_b_vPts.Orientation->size[0] - 1;
  for (c3_i132 = 0; c3_i132 <= c3_vb_loop_ub; c3_i132++) {
    c3_b_vPts.Orientation->data[c3_i132] = 6.28318548F -
      c3_b_vPts.Orientation->data[c3_i132];
  }

  c3_emxInit_real32_T(chartInstance, &c3_c_vPts, 2, &c3_rb_emlrtRTEI);
  c3_i133 = c3_c_vPts->size[0] * c3_c_vPts->size[1];
  c3_c_vPts->size[0] = c3_b_vPts.Location->size[0];
  c3_c_vPts->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_vPts, c3_i133,
    &c3_rb_emlrtRTEI);
  c3_wb_loop_ub = c3_b_vPts.Location->size[0] * c3_b_vPts.Location->size[1] - 1;
  for (c3_i134 = 0; c3_i134 <= c3_wb_loop_ub; c3_i134++) {
    c3_c_vPts->data[c3_i134] = c3_b_vPts.Location->data[c3_i134];
  }

  c3_emxCopyStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_vPts, &c3_b_vPts,
    &c3_sb_emlrtRTEI);
  c3_b_SURFPoints_cg_SURFPoints_cg(chartInstance, c3_c_vPts, c3_vPts,
    &c3_d_RedCrabPoints);
  c3_i135 = c3_ROIFeatures->size[0] * c3_ROIFeatures->size[1];
  c3_ROIFeatures->size[0] = c3_b_RedCrabFeatures->size[0];
  c3_ROIFeatures->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ROIFeatures, c3_i135,
    &c3_tb_emlrtRTEI);
  c3_xb_loop_ub = c3_b_RedCrabFeatures->size[0] * c3_b_RedCrabFeatures->size[1]
    - 1;
  c3_emxFree_real32_T(chartInstance, &c3_c_vPts);
  c3_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_b_vPts);
  for (c3_i136 = 0; c3_i136 <= c3_xb_loop_ub; c3_i136++) {
    c3_ROIFeatures->data[c3_i136] = c3_b_RedCrabFeatures->data[c3_i136];
  }

  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "ROIFeatures", c3_ROIFeatures, (void *)c3_sf_marshallOut_dynamicmatrix,
    (void *)c3_sf_marshallIn_dynamicmatrix, 0U);
  c3_emxCopyStruct_vision_internal_S(chartInstance, &c3_b_ROIPoints,
    &c3_d_RedCrabPoints, &c3_ub_emlrtRTEI);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "ROIPoints", &c3_b_ROIPoints, (void *)
    c3_sf_marshallOut_vision_internal_SURFPoints_cg, (void *)
    c3_sf_marshallIn_vision_internal_SURFPoints_cg, 0U);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, 13);
  }

  c3_i137 = c3_b_RedCrabFeatures->size[0] * c3_b_RedCrabFeatures->size[1];
  c3_b_RedCrabFeatures->size[0] = c3_RedCrabFeatures->size[0];
  c3_b_RedCrabFeatures->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_RedCrabFeatures, c3_i137,
    &c3_vb_emlrtRTEI);
  c3_yb_loop_ub = c3_RedCrabFeatures->size[0] * c3_RedCrabFeatures->size[1] - 1;
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_d_RedCrabPoints);
  for (c3_i138 = 0; c3_i138 <= c3_yb_loop_ub; c3_i138++) {
    c3_b_RedCrabFeatures->data[c3_i138] = c3_RedCrabFeatures->data[c3_i138];
  }

  c3_emxInit_real32_T(chartInstance, &c3_varargin_2, 2, &c3_wb_emlrtRTEI);
  c3_i139 = c3_varargin_2->size[0] * c3_varargin_2->size[1];
  c3_varargin_2->size[0] = c3_ROIFeatures->size[0];
  c3_varargin_2->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_varargin_2, c3_i139,
    &c3_wb_emlrtRTEI);
  c3_ac_loop_ub = c3_ROIFeatures->size[0] * c3_ROIFeatures->size[1] - 1;
  for (c3_i140 = 0; c3_i140 <= c3_ac_loop_ub; c3_i140++) {
    c3_varargin_2->data[c3_i140] = c3_ROIFeatures->data[c3_i140];
  }

  c3_emxInit_real32_T(chartInstance, &c3_features1, 2, &c3_xb_emlrtRTEI);
  c3_i141 = c3_features1->size[0] * c3_features1->size[1];
  c3_features1->size[0] = c3_b_RedCrabFeatures->size[0];
  c3_features1->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features1, c3_i141,
    &c3_xb_emlrtRTEI);
  c3_bc_loop_ub = c3_b_RedCrabFeatures->size[0] * c3_b_RedCrabFeatures->size[1]
    - 1;
  for (c3_i142 = 0; c3_i142 <= c3_bc_loop_ub; c3_i142++) {
    c3_features1->data[c3_i142] = c3_b_RedCrabFeatures->data[c3_i142];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_RedCrabFeatures);
  c3_emxInit_real32_T(chartInstance, &c3_features2, 2, &c3_yb_emlrtRTEI);
  c3_i143 = c3_features2->size[0] * c3_features2->size[1];
  c3_features2->size[0] = c3_varargin_2->size[0];
  c3_features2->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features2, c3_i143,
    &c3_yb_emlrtRTEI);
  c3_cc_loop_ub = c3_varargin_2->size[0] * c3_varargin_2->size[1] - 1;
  for (c3_i144 = 0; c3_i144 <= c3_cc_loop_ub; c3_i144++) {
    c3_features2->data[c3_i144] = c3_varargin_2->data[c3_i144];
  }

  c3_emxFree_real32_T(chartInstance, &c3_varargin_2);
  c3_emxInit_real32_T(chartInstance, &c3_b_features1, 2, &c3_ac_emlrtRTEI);
  c3_i145 = c3_features1->size[1];
  c3_i146 = c3_features1->size[0];
  c3_i147 = c3_b_features1->size[0] * c3_b_features1->size[1];
  c3_b_features1->size[0] = c3_features1->size[1];
  c3_b_features1->size[1] = c3_features1->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_features1, c3_i147,
    &c3_ac_emlrtRTEI);
  c3_dc_loop_ub = c3_features1->size[0] - 1;
  for (c3_i148 = 0; c3_i148 <= c3_dc_loop_ub; c3_i148++) {
    c3_ec_loop_ub = c3_features1->size[1] - 1;
    for (c3_i149 = 0; c3_i149 <= c3_ec_loop_ub; c3_i149++) {
      c3_b_features1->data[c3_i149 + c3_b_features1->size[0] * c3_i148] =
        c3_features1->data[c3_i148 + c3_features1->size[0] * c3_i149];
    }
  }

  c3_iv4[0] = c3_i145;
  c3_iv4[1] = c3_i146;
  c3_i150 = c3_features1->size[0] * c3_features1->size[1];
  c3_features1->size[0] = c3_iv4[0];
  c3_features1->size[1] = c3_iv4[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features1, c3_i150,
    &c3_bc_emlrtRTEI);
  c3_fc_loop_ub = c3_iv4[0] * c3_iv4[1] - 1;
  for (c3_i151 = 0; c3_i151 <= c3_fc_loop_ub; c3_i151++) {
    c3_features1->data[c3_i151] = c3_b_features1->data[c3_i151];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_features1);
  c3_emxInit_real32_T(chartInstance, &c3_b_features2, 2, &c3_cc_emlrtRTEI);
  c3_i152 = c3_features2->size[1];
  c3_i153 = c3_features2->size[0];
  c3_i154 = c3_b_features2->size[0] * c3_b_features2->size[1];
  c3_b_features2->size[0] = c3_features2->size[1];
  c3_b_features2->size[1] = c3_features2->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_features2, c3_i154,
    &c3_cc_emlrtRTEI);
  c3_gc_loop_ub = c3_features2->size[0] - 1;
  for (c3_i155 = 0; c3_i155 <= c3_gc_loop_ub; c3_i155++) {
    c3_hc_loop_ub = c3_features2->size[1] - 1;
    for (c3_i156 = 0; c3_i156 <= c3_hc_loop_ub; c3_i156++) {
      c3_b_features2->data[c3_i156 + c3_b_features2->size[0] * c3_i155] =
        c3_features2->data[c3_i155 + c3_features2->size[0] * c3_i156];
    }
  }

  c3_iv5[0] = c3_i152;
  c3_iv5[1] = c3_i153;
  c3_i157 = c3_features2->size[0] * c3_features2->size[1];
  c3_features2->size[0] = c3_iv5[0];
  c3_features2->size[1] = c3_iv5[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features2, c3_i157,
    &c3_dc_emlrtRTEI);
  c3_ic_loop_ub = c3_iv5[0] * c3_iv5[1] - 1;
  for (c3_i158 = 0; c3_i158 <= c3_ic_loop_ub; c3_i158++) {
    c3_features2->data[c3_i158] = c3_b_features2->data[c3_i158];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_features2);
  c3_emxInit_real32_T(chartInstance, &c3_features1in, 2, &c3_ec_emlrtRTEI);
  c3_i159 = c3_features1in->size[0] * c3_features1in->size[1];
  c3_features1in->size[0] = c3_features1->size[0];
  c3_features1in->size[1] = c3_features1->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features1in, c3_i159,
    &c3_ec_emlrtRTEI);
  c3_jc_loop_ub = c3_features1->size[0] * c3_features1->size[1] - 1;
  for (c3_i160 = 0; c3_i160 <= c3_jc_loop_ub; c3_i160++) {
    c3_features1in->data[c3_i160] = c3_features1->data[c3_i160];
  }

  c3_emxFree_real32_T(chartInstance, &c3_features1);
  c3_emxInit_real32_T(chartInstance, &c3_features2in, 2, &c3_fc_emlrtRTEI);
  c3_i161 = c3_features2in->size[0] * c3_features2in->size[1];
  c3_features2in->size[0] = c3_features2->size[0];
  c3_features2in->size[1] = c3_features2->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features2in, c3_i161,
    &c3_fc_emlrtRTEI);
  c3_kc_loop_ub = c3_features2->size[0] * c3_features2->size[1] - 1;
  for (c3_i162 = 0; c3_i162 <= c3_kc_loop_ub; c3_i162++) {
    c3_features2in->data[c3_i162] = c3_features2->data[c3_i162];
  }

  c3_emxFree_real32_T(chartInstance, &c3_features2);
  c3_b4 = (c3_features1in->size[1] == 0);
  c3_emxInit_uint32_T(chartInstance, &c3_indexPairs, 2, (emlrtRTEInfo *)NULL);
  c3_emxInit_real32_T(chartInstance, &c3_matchMetric, 2, (emlrtRTEInfo *)NULL);
  c3_guard1 = false;
  if (c3_b4) {
    c3_guard1 = true;
  } else {
    c3_b5 = (c3_features2in->size[1] == 0);
    if (c3_b5) {
      c3_guard1 = true;
    } else {
      c3_b_normalizeX(chartInstance, c3_features1in);
      c3_b_normalizeX(chartInstance, c3_features2in);
      c3_findMatchesExhaustive(chartInstance, c3_features1in, c3_features2in,
        0.04F, c3_indexPairs, c3_matchMetric);
    }
  }

  if (c3_guard1) {
    c3_indexPairs->size[0] = 2;
    c3_indexPairs->size[1] = 0;
  }

  c3_emxFree_real32_T(chartInstance, &c3_matchMetric);
  c3_emxFree_real32_T(chartInstance, &c3_features2in);
  c3_emxFree_real32_T(chartInstance, &c3_features1in);
  c3_i163 = c3_RedCrabPairs->size[0] * c3_RedCrabPairs->size[1];
  c3_RedCrabPairs->size[0] = c3_indexPairs->size[1];
  c3_RedCrabPairs->size[1] = 2;
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_RedCrabPairs, c3_i163,
    &c3_gc_emlrtRTEI);
  for (c3_i164 = 0; c3_i164 < 2; c3_i164++) {
    c3_lc_loop_ub = c3_indexPairs->size[1] - 1;
    for (c3_i165 = 0; c3_i165 <= c3_lc_loop_ub; c3_i165++) {
      c3_RedCrabPairs->data[c3_i165 + c3_RedCrabPairs->size[0] * c3_i164] =
        c3_indexPairs->data[c3_i164 + (c3_i165 << 1)];
    }
  }

  c3_emxFree_uint32_T(chartInstance, &c3_indexPairs);
  sfListenerPushScopeForDynamicMatricesJitOff(chartInstance->c3_RuntimeVar, 1U,
    "RedCrabPairs", c3_RedCrabPairs, (void *)c3_sf_marshallOut_dynamicmatrix_1,
    (void *)c3_sf_marshallIn_dynamicmatrix_1, 0U);
  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportLineNumber(chartInstance->c3_RuntimeVar, 0, -13);
  }

  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportEndingSection(chartInstance->c3_RuntimeVar, 0, 4);
  }

  if ((chartInstance->c3_IsDebuggerActive == 1) ||
      (chartInstance->c3_IsSequenceViewerPresent == 1)) {
    sfListenerReportEndingSection(chartInstance->c3_RuntimeVar, 0, 1);
  }

  c3_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_b_PtsStruct);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_c_RedCrabPoints);
  c3_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_PtsStruct);
  c3_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_vPts);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_b_ROIPoints);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_b_RedCrabPoints);
  c3_emxFree_uint32_T(chartInstance, &c3_RedCrabPairs);
  c3_emxFree_real32_T(chartInstance, &c3_ROIFeatures);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_ROIPoints);
  c3_emxFree_real32_T(chartInstance, &c3_RedCrabFeatures);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_RedCrabPoints);
}

static void initSimStructsc3_MotionObjectDetector
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c3_MotionObjectDetector_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static void c3_SURFPoints_cg_SURFPoints_cg
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_varargin_1, c3_sJTMl20J2MtSHoTgqrNGwiD c3_varargin_2,
   c3_vision_internal_SURFPoints_cg *c3_this)
{
  c3_sTGP517nzdmMmY48RaBsM6E c3_inputs;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_c_loop_ub;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_d_loop_ub;
  int32_T c3_i7;
  c3_emxArray_real32_T *c3_b_inputs;
  int32_T c3_i8;
  int32_T c3_e_loop_ub;
  int32_T c3_i9;
  c3_emxArray_real32_T *c3_c_inputs;
  int32_T c3_i10;
  int32_T c3_f_loop_ub;
  int32_T c3_i11;
  real_T c3_numPts;
  real_T c3_numelParam;
  real_T c3_b_numPts;
  boolean_T c3_b;
  const mxArray *c3_d_y = NULL;
  c3_emxArray_real32_T *c3_d_inputs;
  int32_T c3_i12;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  int32_T c3_g_loop_ub;
  static char_T c3_b_cv[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  int32_T c3_i13;
  c3_emxArray_int8_T *c3_in;
  int32_T c3_i14;
  int32_T c3_h_loop_ub;
  int32_T c3_i15;
  c3_emxArray_boolean_T *c3_b_in;
  int32_T c3_i16;
  int32_T c3_i_loop_ub;
  int32_T c3_i17;
  c3_emxArray_boolean_T *c3_c_in;
  boolean_T c3_b1;
  int32_T c3_i18;
  int32_T c3_j_loop_ub;
  int32_T c3_i19;
  const mxArray *c3_g_y = NULL;
  real_T c3_c_numPts;
  real_T c3_b_numelParam;
  const mxArray *c3_h_y = NULL;
  real_T c3_d_numPts;
  boolean_T c3_b2;
  const mxArray *c3_i_y = NULL;
  real_T c3_c_numelParam;
  real_T c3_e_numPts;
  const mxArray *c3_j_y = NULL;
  boolean_T c3_b3;
  const mxArray *c3_k_y = NULL;
  static char_T c3_b_cv1[5] = { 'S', 'c', 'a', 'l', 'e' };

  const mxArray *c3_l_y = NULL;
  const mxArray *c3_m_y = NULL;
  const mxArray *c3_n_y = NULL;
  c3_emxInitStruct_sTGP517nzdmMmY48R(chartInstance, &c3_inputs, &c3_qc_emlrtRTEI);
  c3_this->pLocation->size[0] = 0;
  c3_this->pLocation->size[1] = 2;
  c3_this->pMetric->size[0] = 0;
  c3_this->pScale->size[0] = 0;
  c3_this->pSignOfLaplacian->size[0] = 0;
  c3_this->pOrientation->size[0] = 0;
  c3_i = c3_inputs.Location->size[0] * c3_inputs.Location->size[1];
  c3_inputs.Location->size[0] = c3_varargin_1->size[0];
  c3_inputs.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_inputs.Location, c3_i,
    &c3_pc_emlrtRTEI);
  c3_loop_ub = c3_varargin_1->size[0] * c3_varargin_1->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_inputs.Location->data[c3_i1] = c3_varargin_1->data[c3_i1];
  }

  c3_i2 = c3_inputs.Metric->size[0];
  c3_inputs.Metric->size[0] = c3_varargin_2.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_inputs.Metric, c3_i2,
    &c3_qc_emlrtRTEI);
  c3_b_loop_ub = c3_varargin_2.Metric->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_inputs.Metric->data[c3_i3] = c3_varargin_2.Metric->data[c3_i3];
  }

  c3_i4 = c3_inputs.Scale->size[0];
  c3_inputs.Scale->size[0] = c3_varargin_2.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_inputs.Scale, c3_i4,
    &c3_qc_emlrtRTEI);
  c3_c_loop_ub = c3_varargin_2.Scale->size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
    c3_inputs.Scale->data[c3_i5] = c3_varargin_2.Scale->data[c3_i5];
  }

  c3_i6 = c3_inputs.SignOfLaplacian->size[0];
  c3_inputs.SignOfLaplacian->size[0] = c3_varargin_2.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_inputs.SignOfLaplacian, c3_i6,
    &c3_qc_emlrtRTEI);
  c3_d_loop_ub = c3_varargin_2.SignOfLaplacian->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_inputs.SignOfLaplacian->data[c3_i7] = c3_varargin_2.SignOfLaplacian->
      data[c3_i7];
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_inputs, 2, &c3_rc_emlrtRTEI);
  c3_inputs.Orientation = 0.0F;
  c3_i8 = c3_b_inputs->size[0] * c3_b_inputs->size[1];
  c3_b_inputs->size[0] = c3_inputs.Location->size[0];
  c3_b_inputs->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_inputs, c3_i8,
    &c3_rc_emlrtRTEI);
  c3_e_loop_ub = c3_inputs.Location->size[0] * c3_inputs.Location->size[1] - 1;
  for (c3_i9 = 0; c3_i9 <= c3_e_loop_ub; c3_i9++) {
    c3_b_inputs->data[c3_i9] = c3_inputs.Location->data[c3_i9];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_c_inputs, 1, &c3_sc_emlrtRTEI);
  c3_FeaturePointsImpl_checkLocation(chartInstance, c3_b_inputs);
  c3_i10 = c3_c_inputs->size[0];
  c3_c_inputs->size[0] = c3_inputs.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_c_inputs, c3_i10,
    &c3_sc_emlrtRTEI);
  c3_f_loop_ub = c3_inputs.Metric->size[0] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_b_inputs);
  for (c3_i11 = 0; c3_i11 <= c3_f_loop_ub; c3_i11++) {
    c3_c_inputs->data[c3_i11] = c3_inputs.Metric->data[c3_i11];
  }

  c3_FeaturePointsImpl_checkMetric(chartInstance, c3_c_inputs);
  c3_numPts = (real_T)c3_inputs.Location->size[0];
  c3_numelParam = (real_T)c3_inputs.Metric->size[0];
  c3_b_numPts = c3_numPts;
  c3_emxFree_real32_T(chartInstance, &c3_c_inputs);
  if ((c3_numelParam == 1.0) || (c3_numelParam == c3_b_numPts)) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_emxInit_real32_T1(chartInstance, &c3_d_inputs, 1, &c3_tc_emlrtRTEI);
  c3_i12 = c3_d_inputs->size[0];
  c3_d_inputs->size[0] = c3_inputs.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_d_inputs, c3_i12,
    &c3_tc_emlrtRTEI);
  c3_g_loop_ub = c3_inputs.Scale->size[0] - 1;
  for (c3_i13 = 0; c3_i13 <= c3_g_loop_ub; c3_i13++) {
    c3_d_inputs->data[c3_i13] = c3_inputs.Scale->data[c3_i13];
  }

  c3_emxInit_int8_T(chartInstance, &c3_in, 1, &c3_uc_emlrtRTEI);
  c3_SURFPointsImpl_checkScale(chartInstance, c3_d_inputs);
  c3_i14 = c3_in->size[0];
  c3_in->size[0] = c3_inputs.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_in, c3_i14, &c3_uc_emlrtRTEI);
  c3_h_loop_ub = c3_inputs.SignOfLaplacian->size[0] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_d_inputs);
  for (c3_i15 = 0; c3_i15 <= c3_h_loop_ub; c3_i15++) {
    c3_in->data[c3_i15] = c3_inputs.SignOfLaplacian->data[c3_i15];
  }

  c3_emxInit_boolean_T(chartInstance, &c3_b_in, 1, &c3_vc_emlrtRTEI);
  c3_i16 = c3_b_in->size[0];
  c3_b_in->size[0] = c3_in->size[0];
  c3_emxEnsureCapacity_boolean_T(chartInstance, c3_b_in, c3_i16,
    &c3_vc_emlrtRTEI);
  c3_i_loop_ub = c3_in->size[0] - 1;
  for (c3_i17 = 0; c3_i17 <= c3_i_loop_ub; c3_i17++) {
    c3_b_in->data[c3_i17] = ((real_T)c3_in->data[c3_i17] >= -1.0);
  }

  c3_emxInit_boolean_T(chartInstance, &c3_c_in, 1, &c3_wc_emlrtRTEI);
  if (c3_b_all(chartInstance, c3_b_in)) {
    c3_i18 = c3_c_in->size[0];
    c3_c_in->size[0] = c3_in->size[0];
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_c_in, c3_i18,
      &c3_wc_emlrtRTEI);
    c3_j_loop_ub = c3_in->size[0] - 1;
    for (c3_i19 = 0; c3_i19 <= c3_j_loop_ub; c3_i19++) {
      c3_c_in->data[c3_i19] = ((real_T)c3_in->data[c3_i19] <= 1.0);
    }

    if (c3_b_all(chartInstance, c3_c_in)) {
      c3_b1 = true;
    } else {
      c3_b1 = false;
    }
  } else {
    c3_b1 = false;
  }

  c3_emxFree_boolean_T(chartInstance, &c3_b_in);
  c3_emxFree_boolean_T(chartInstance, &c3_c_in);
  c3_emxFree_int8_T(chartInstance, &c3_in);
  if (!c3_b1) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14, c3_h_y)));
  }

  c3_c_numPts = (real_T)c3_inputs.Location->size[0];
  c3_b_numelParam = (real_T)c3_inputs.Scale->size[0];
  c3_d_numPts = c3_c_numPts;
  if ((c3_b_numelParam == 1.0) || (c3_b_numelParam == c3_d_numPts)) {
    c3_b2 = true;
  } else {
    c3_b2 = false;
  }

  if (!c3_b2) {
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_j_y = NULL;
    sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_k_y = NULL;
    sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_i_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_j_y, 14,
                  c3_k_y)));
  }

  c3_c_numelParam = (real_T)c3_inputs.SignOfLaplacian->size[0];
  c3_e_numPts = c3_c_numPts;
  if ((c3_c_numelParam == 1.0) || (c3_c_numelParam == c3_e_numPts)) {
    c3_b3 = true;
  } else {
    c3_b3 = false;
  }

  if (!c3_b3) {
    c3_l_y = NULL;
    sf_mex_assign(&c3_l_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_m_y = NULL;
    sf_mex_assign(&c3_m_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_n_y = NULL;
    sf_mex_assign(&c3_n_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_l_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_m_y, 14,
                  c3_n_y)));
  }

  c3_c_SURFPointsImpl_configure(chartInstance, c3_this, c3_inputs);
  c3_emxFreeStruct_sTGP517nzdmMmY48R(chartInstance, &c3_inputs);
}

static void c3_FeaturePointsImpl_checkLocation
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_location)
{
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i;
  int32_T c3_k;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  boolean_T c3_b;
  real32_T c3_x;
  real32_T c3_b_x;
  boolean_T c3_b_b;
  const mxArray *c3_d_y = NULL;
  boolean_T c3_b_p;
  boolean_T c3_c_p;
  real_T c3_d1;
  const mxArray *c3_e_y = NULL;
  int32_T c3_i1;
  int32_T c3_c_k;
  const mxArray *c3_f_y = NULL;
  static char_T c3_b_cv[5] = { 'i', 'n', 'p', 'u', 't' };

  real_T c3_d_k;
  boolean_T c3_b1;
  real32_T c3_c_x;
  real32_T c3_d_x;
  boolean_T c3_c_b;
  const mxArray *c3_g_y = NULL;
  boolean_T c3_b2;
  boolean_T c3_d_p;
  real32_T c3_e_x;
  real_T c3_d2;
  const mxArray *c3_h_y = NULL;
  boolean_T c3_d_b;
  int32_T c3_i2;
  boolean_T c3_b3;
  int32_T c3_e_k;
  const mxArray *c3_i_y = NULL;
  boolean_T c3_e_b;
  static char_T c3_b_cv1[5] = { 'i', 'n', 'p', 'u', 't' };

  real_T c3_f_k;
  boolean_T c3_b4;
  real32_T c3_f_x;
  boolean_T c3_e_p;
  const mxArray *c3_j_y = NULL;
  c3_emxArray_real32_T *c3_b_location;
  static char_T c3_b_cv2[53] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
    's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S',
    'U', 'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  int32_T c3_i3;
  const mxArray *c3_k_y = NULL;
  static char_T c3_b_cv3[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  const mxArray *c3_l_y = NULL;
  static char_T c3_b_cv4[5] = { 'i', 'n', 'p', 'u', 't' };

  int32_T c3_loop_ub;
  int32_T c3_i4;
  const mxArray *c3_m_y = NULL;
  static char_T c3_b_cv5[50] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
    's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S',
    'U', 'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  const mxArray *c3_n_y = NULL;
  const mxArray *c3_o_y = NULL;
  static char_T c3_b_cv6[5] = { 'I', 'n', 'p', 'u', 't' };

  c3_p = true;
  c3_d = (real_T)(c3_location->size[0] << 1);
  c3_i = (int32_T)c3_d - 1;
  c3_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_k <= c3_i)) {
    c3_b_k = (real_T)c3_k + 1.0;
    c3_x = c3_location->data[(int32_T)c3_b_k - 1];
    c3_b_x = c3_x;
    c3_b_b = muSingleScalarIsNaN(c3_b_x);
    c3_b_p = !c3_b_b;
    if (c3_b_p) {
      c3_k++;
    } else {
      c3_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_p) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_c_p = true;
  c3_d1 = (real_T)(c3_location->size[0] << 1);
  c3_i1 = (int32_T)c3_d1 - 1;
  c3_c_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_c_k <= c3_i1)) {
    c3_d_k = (real_T)c3_c_k + 1.0;
    c3_c_x = c3_location->data[(int32_T)c3_d_k - 1];
    c3_d_x = c3_c_x;
    c3_c_b = muSingleScalarIsInf(c3_d_x);
    c3_b2 = !c3_c_b;
    c3_e_x = c3_c_x;
    c3_d_b = muSingleScalarIsNaN(c3_e_x);
    c3_b3 = !c3_d_b;
    c3_e_b = (c3_b2 && c3_b3);
    if (c3_e_b) {
      c3_c_k++;
    } else {
      c3_c_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_c_p) {
    c3_b1 = true;
  } else {
    c3_b1 = false;
  }

  if (!c3_b1) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_h_y, 14,
                  c3_i_y)));
  }

  c3_d_p = true;
  c3_d2 = (real_T)(c3_location->size[0] << 1);
  c3_i2 = (int32_T)c3_d2 - 1;
  c3_e_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_e_k <= c3_i2)) {
    c3_f_k = (real_T)c3_e_k + 1.0;
    c3_f_x = c3_location->data[(int32_T)c3_f_k - 1];
    c3_e_p = !(c3_f_x <= 0.0F);
    if (c3_e_p) {
      c3_e_k++;
    } else {
      c3_d_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_d_p) {
    c3_b4 = true;
  } else {
    c3_b4 = false;
  }

  if (!c3_b4) {
    c3_j_y = NULL;
    sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2, 1, 53),
                  false);
    c3_k_y = NULL;
    sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_b_cv3, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c3_l_y = NULL;
    sf_mex_assign(&c3_l_y, sf_mex_create("y", c3_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_j_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_k_y, 14,
                  c3_l_y)));
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_location, 2, &c3_xc_emlrtRTEI);
  c3_i3 = c3_b_location->size[0] * c3_b_location->size[1];
  c3_b_location->size[0] = c3_location->size[0];
  c3_b_location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_location, c3_i3,
    &c3_xc_emlrtRTEI);
  c3_loop_ub = c3_location->size[0] * c3_location->size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_b_location->data[c3_i4] = c3_location->data[c3_i4];
  }

  if (!c3_inputMeetsSizeRequirement(chartInstance, c3_b_location)) {
    c3_m_y = NULL;
    sf_mex_assign(&c3_m_y, sf_mex_create("y", c3_b_cv5, 10, 0U, 1U, 0U, 2, 1, 50),
                  false);
    c3_n_y = NULL;
    sf_mex_assign(&c3_n_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c3_o_y = NULL;
    sf_mex_assign(&c3_o_y, sf_mex_create("y", c3_b_cv6, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_m_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_n_y, 14,
                  c3_o_y)));
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_location);
}

static boolean_T c3_inputMeetsSizeRequirement
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_a)
{
  boolean_T c3_p;
  static real_T c3_dv[2] = { 0.0, 2.0 };

  int32_T c3_k;
  real_T c3_b_k;
  boolean_T c3_b_p;
  real_T c3_d;
  (void)chartInstance;
  c3_dv[0U] = rtNaN;
  c3_p = true;
  for (c3_k = 0; c3_k < 2; c3_k++) {
    c3_b_k = (real_T)c3_k + 1.0;
    if (c3_p) {
      if (c3_dv[(int32_T)c3_b_k - 1] != c3_dv[(int32_T)c3_b_k - 1]) {
        c3_b_p = true;
      } else {
        c3_d = (real_T)c3_a->size[(int32_T)c3_b_k - 1];
        if (c3_dv[(int32_T)c3_b_k - 1] == c3_d) {
          c3_b_p = true;
        } else {
          c3_b_p = false;
        }
      }
    } else {
      c3_b_p = false;
    }

    c3_p = c3_b_p;
  }

  return c3_p;
}

static void c3_FeaturePointsImpl_checkMetric
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_metric)
{
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i;
  int32_T c3_k;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  boolean_T c3_b;
  real32_T c3_x;
  real32_T c3_b_x;
  boolean_T c3_b_b;
  const mxArray *c3_d_y = NULL;
  boolean_T c3_b_p;
  c3_emxArray_real32_T *c3_b_metric;
  int32_T c3_i1;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  int32_T c3_loop_ub;
  static char_T c3_b_cv[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  int32_T c3_i2;
  boolean_T c3_b1;
  const mxArray *c3_g_y = NULL;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  static char_T c3_b_cv1[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  c3_p = true;
  c3_d = (real_T)c3_metric->size[0];
  c3_i = (int32_T)c3_d - 1;
  c3_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_k <= c3_i)) {
    c3_b_k = (real_T)c3_k + 1.0;
    c3_x = c3_metric->data[(int32_T)c3_b_k - 1];
    c3_b_x = c3_x;
    c3_b_b = muSingleScalarIsNaN(c3_b_x);
    c3_b_p = !c3_b_b;
    if (c3_b_p) {
      c3_k++;
    } else {
      c3_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_p) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_emxInit_real32_T1(chartInstance, &c3_b_metric, 1, &c3_yc_emlrtRTEI);
  c3_i1 = c3_b_metric->size[0];
  c3_b_metric->size[0] = c3_metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_metric, c3_i1,
    &c3_yc_emlrtRTEI);
  c3_loop_ub = c3_metric->size[0] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
    c3_b_metric->data[c3_i2] = c3_metric->data[c3_i2];
  }

  if (c3_all(chartInstance, c3_b_metric)) {
    c3_b1 = true;
  } else {
    c3_b1 = false;
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_metric);
  if (!c3_b1) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_h_y, 14,
                  c3_i_y)));
  }
}

static boolean_T c3_all(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_a)
{
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i;
  int32_T c3_k;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  real32_T c3_x;
  real32_T c3_b_x;
  boolean_T c3_b;
  boolean_T c3_b_b;
  real32_T c3_c_x;
  boolean_T c3_c_b;
  boolean_T c3_b1;
  boolean_T c3_d_b;
  (void)chartInstance;
  c3_p = true;
  c3_d = (real_T)c3_a->size[0];
  c3_i = (int32_T)c3_d - 1;
  c3_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_k <= c3_i)) {
    c3_b_k = (real_T)c3_k + 1.0;
    c3_x = c3_a->data[(int32_T)c3_b_k - 1];
    c3_b_x = c3_x;
    c3_b = muSingleScalarIsInf(c3_b_x);
    c3_b_b = !c3_b;
    c3_c_x = c3_x;
    c3_c_b = muSingleScalarIsNaN(c3_c_x);
    c3_b1 = !c3_c_b;
    c3_d_b = (c3_b_b && c3_b1);
    if (c3_d_b) {
      c3_k++;
    } else {
      c3_p = false;
      c3_exitg1 = true;
    }
  }

  return c3_p;
}

static void c3_SURFPointsImpl_checkScale(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_scale)
{
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i;
  int32_T c3_k;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  boolean_T c3_b;
  real32_T c3_x;
  real32_T c3_b_x;
  boolean_T c3_b_b;
  const mxArray *c3_d_y = NULL;
  boolean_T c3_b_p;
  c3_emxArray_real32_T *c3_b_scale;
  int32_T c3_i1;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  int32_T c3_loop_ub;
  static char_T c3_b_cv[5] = { 'S', 'c', 'a', 'l', 'e' };

  int32_T c3_i2;
  boolean_T c3_b1;
  const mxArray *c3_g_y = NULL;
  boolean_T c3_c_p;
  real_T c3_d1;
  const mxArray *c3_h_y = NULL;
  int32_T c3_i3;
  int32_T c3_c_k;
  const mxArray *c3_i_y = NULL;
  static char_T c3_b_cv1[5] = { 'S', 'c', 'a', 'l', 'e' };

  real_T c3_d_k;
  const mxArray *c3_j_y = NULL;
  static char_T c3_b_cv2[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'i',
    's', 'i', 'o', 'n', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'S',
    'U', 'R', 'F', 'P', 'o', 'i', 'n', 't', 's', '_', 'c', 'g', ':', 'n', 'o',
    't', 'G', 'r', 'e', 'a', 't', 'e', 'r', 'E', 'q', 'u', 'a', 'l' };

  const mxArray *c3_k_y = NULL;
  static char_T c3_b_cv3[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'A', 'r', 'r', 'a', 'y' };

  const mxArray *c3_l_y = NULL;
  static char_T c3_b_cv4[5] = { 'S', 'c', 'a', 'l', 'e' };

  const mxArray *c3_m_y = NULL;
  static char_T c3_b_cv5[2] = { '>', '=' };

  const mxArray *c3_n_y = NULL;
  static char_T c3_b_cv6[3] = { '1', '.', '6' };

  c3_p = true;
  c3_d = (real_T)c3_scale->size[0];
  c3_i = (int32_T)c3_d - 1;
  c3_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_k <= c3_i)) {
    c3_b_k = (real_T)c3_k + 1.0;
    c3_x = c3_scale->data[(int32_T)c3_b_k - 1];
    c3_b_x = c3_x;
    c3_b_b = muSingleScalarIsNaN(c3_b_x);
    c3_b_p = !c3_b_b;
    if (c3_b_p) {
      c3_k++;
    } else {
      c3_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_p) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_emxInit_real32_T1(chartInstance, &c3_b_scale, 1, &c3_yc_emlrtRTEI);
  c3_i1 = c3_b_scale->size[0];
  c3_b_scale->size[0] = c3_scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_scale, c3_i1,
    &c3_yc_emlrtRTEI);
  c3_loop_ub = c3_scale->size[0] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
    c3_b_scale->data[c3_i2] = c3_scale->data[c3_i2];
  }

  if (c3_all(chartInstance, c3_b_scale)) {
    c3_b1 = true;
  } else {
    c3_b1 = false;
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_scale);
  if (!c3_b1) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_h_y, 14,
                  c3_i_y)));
  }

  c3_c_p = true;
  c3_d1 = (real_T)c3_scale->size[0];
  c3_i3 = (int32_T)c3_d1 - 1;
  c3_c_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_c_k <= c3_i3)) {
    c3_d_k = (real_T)c3_c_k + 1.0;
    if ((real_T)c3_scale->data[(int32_T)c3_d_k - 1] >= 1.6) {
      c3_c_k++;
    } else {
      c3_c_p = false;
      c3_exitg1 = true;
    }
  }

  if (!c3_c_p) {
    c3_j_y = NULL;
    sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c3_k_y = NULL;
    sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_b_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_l_y = NULL;
    sf_mex_assign(&c3_l_y, sf_mex_create("y", c3_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    c3_m_y = NULL;
    sf_mex_assign(&c3_m_y, sf_mex_create("y", c3_b_cv5, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    c3_n_y = NULL;
    sf_mex_assign(&c3_n_y, sf_mex_create("y", c3_b_cv6, 10, 0U, 1U, 0U, 2, 1, 3),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_j_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 4U, 14, c3_k_y, 14,
                  c3_l_y, 14, c3_m_y, 14, c3_n_y)));
  }
}

static boolean_T c3_b_all(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_boolean_T *c3_x)
{
  boolean_T c3_d_y;
  boolean_T c3_b;
  const mxArray *c3_e_y = NULL;
  static char_T c3_b_cv[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  real_T c3_vlen;
  const mxArray *c3_f_y = NULL;
  real_T c3_a;
  int32_T c3_c;
  int32_T c3_b_a;
  int32_T c3_vspread;
  int32_T c3_b_b;
  int32_T c3_i2;
  int32_T c3_c_a;
  int32_T c3_c_b;
  int32_T c3_d_b;
  boolean_T c3_overflow;
  int32_T c3_ix;
  boolean_T c3_exitg1;
  if ((c3_x->size[0] == 1) || ((real_T)c3_x->size[0] != 1.0)) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_e_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14, c3_f_y)));
  }

  c3_d_y = true;
  c3_vlen = (real_T)c3_x->size[0];
  c3_a = c3_vlen;
  c3_c = (int32_T)c3_a;
  c3_b_a = c3_c - 1;
  c3_vspread = c3_b_a;
  c3_b_b = c3_vspread;
  c3_i2 = c3_b_b;
  c3_c_a = c3_i2 + 1;
  c3_i2 = c3_c_a;
  c3_c_b = c3_i2;
  c3_d_b = c3_c_b;
  if (1 > c3_d_b) {
    c3_overflow = false;
  } else {
    c3_overflow = (c3_d_b > 2147483646);
  }

  if (c3_overflow) {
    c3_check_forloop_overflow_error(chartInstance, true);
  }

  c3_ix = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_ix + 1 <= c3_i2)) {
    if (!c3_x->data[c3_ix]) {
      c3_d_y = false;
      c3_exitg1 = true;
    } else {
      c3_ix++;
    }
  }

  return c3_d_y;
}

static void c3_check_forloop_overflow_error
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, boolean_T c3_overflow)
{
  const mxArray *c3_d_y = NULL;
  static char_T c3_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  static char_T c3_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)c3_overflow;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
              sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                c3_f_y)));
}

static void c3_SURFPointsImpl_configure(SFc3_MotionObjectDetectorInstanceStruct *
  chartInstance, c3_vision_internal_SURFPoints_cg c3_this,
  c3_sTGP517nzdmMmY48RaBsM6E c3_inputs, c3_vision_internal_SURFPoints_cg
  *c3_b_this)
{
  c3_sTGP517nzdmMmY48RaBsM6E c3_b_inputs;
  c3_emxInitStruct_sTGP517nzdmMmY48R(chartInstance, &c3_b_inputs,
    &c3_ad_emlrtRTEI);
  c3_emxCopyStruct_vision_internal_S(chartInstance, c3_b_this, &c3_this,
    &c3_ad_emlrtRTEI);
  c3_emxCopyStruct_sTGP517nzdmMmY48R(chartInstance, &c3_b_inputs, &c3_inputs,
    &c3_ad_emlrtRTEI);
  c3_c_SURFPointsImpl_configure(chartInstance, c3_b_this, c3_b_inputs);
  c3_emxFreeStruct_sTGP517nzdmMmY48R(chartInstance, &c3_b_inputs);
}

static void c3_assertValidSizeArg(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, real_T c3_varargin_1)
{
  real_T c3_arg;
  boolean_T c3_p;
  boolean_T c3_b;
  const mxArray *c3_d_y = NULL;
  static char_T c3_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  const mxArray *c3_e_y = NULL;
  int32_T c3_c_u;
  const mxArray *c3_f_y = NULL;
  int32_T c3_d_u;
  const mxArray *c3_g_y = NULL;
  c3_arg = c3_varargin_1;
  if (c3_arg != c3_arg) {
    c3_p = false;
  } else {
    c3_p = true;
  }

  if (c3_p) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c3_c_u = MIN_int32_T;
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_c_u, 6, 0U, 0U, 0U, 0), false);
    c3_d_u = MAX_int32_T;
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_d_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 3U, 14, c3_e_y, 14,
                  c3_f_y, 14, c3_g_y)));
  }
}

static void c3_extractFeatures(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, uint8_T c3_I[50463], c3_vision_internal_SURFPoints_cg
  c3_points, c3_emxArray_real32_T *c3_features, c3_vision_internal_SURFPoints_cg
  *c3_valid_points)
{
  c3_emxArray_real32_T *c3_out;
  c3_s2rdWZ6jAA0S8hk59zYLzBC c3_vPts;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i2;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  int32_T c3_b_loop_ub;
  static char_T c3_b_cv[6] = { 'P', 'O', 'I', 'N', 'T', 'S' };

  int32_T c3_i3;
  c3_emxArray_real32_T *c3_valLocation;
  c3_emxArray_real32_T *c3_valScale;
  c3_emxArray_real32_T *c3_valMetric;
  c3_emxArray_int8_T *c3_valSignOfLaplacian;
  real_T c3_out_numel;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  boolean_T c3_b;
  int32_T c3_i8;
  c3_emxArray_int32_T *c3_r;
  int32_T c3_i9;
  int32_T c3_c_loop_ub;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_tmp_data[2];
  int32_T c3_d_loop_ub;
  int32_T c3_i13;
  int32_T c3_iv[2];
  int32_T c3_i14;
  boolean_T c3_b1;
  int32_T c3_e_loop_ub;
  int32_T c3_i15;
  int32_T c3_i16;
  int32_T c3_i17;
  int32_T c3_f_loop_ub;
  int32_T c3_i18;
  c3_emxArray_real32_T *c3_outOrientation;
  int32_T c3_i19;
  int32_T c3_g_loop_ub;
  int32_T c3_i20;
  int32_T c3_iv1[1];
  int32_T c3_h_loop_ub;
  int32_T c3_i21;
  boolean_T c3_b2;
  int32_T c3_i22;
  int32_T c3_i23;
  int32_T c3_i_loop_ub;
  int32_T c3_i24;
  int32_T c3_i25;
  int32_T c3_j_loop_ub;
  int32_T c3_i26;
  int32_T c3_iv2[1];
  int32_T c3_k_loop_ub;
  int32_T c3_i27;
  boolean_T c3_b3;
  int32_T c3_i28;
  int32_T c3_i29;
  int32_T c3_l_loop_ub;
  int32_T c3_i30;
  c3_emxArray_int8_T *c3_r1;
  int32_T c3_i31;
  int32_T c3_m_loop_ub;
  int32_T c3_i32;
  int32_T c3_iv3[1];
  int32_T c3_n_loop_ub;
  int32_T c3_i33;
  c3_sJTMl20J2MtSHoTgqrNGwiD c3_ptsStruct;
  int32_T c3_i34;
  int32_T c3_o_loop_ub;
  int32_T c3_i35;
  int32_T c3_i36;
  int32_T c3_p_loop_ub;
  int32_T c3_i37;
  int32_T c3_i38;
  int32_T c3_q_loop_ub;
  int32_T c3_i39;
  int32_T c3_i40;
  int32_T c3_r_loop_ub;
  int32_T c3_i41;
  int32_T c3_i42;
  int32_T c3_i43;
  c3_emxArray_real32_T *c3_b_ptsStruct;
  int32_T c3_i44;
  int32_T c3_i45;
  int32_T c3_i46;
  uint8_T c3_b_Iu8T[50463];
  int32_T c3_s_loop_ub;
  int32_T c3_i47;
  c3_emxArray_real32_T *c3_c_ptsStruct;
  int32_T c3_i48;
  int32_T c3_t_loop_ub;
  int32_T c3_i49;
  c3_emxArray_real32_T *c3_d_ptsStruct;
  int32_T c3_i50;
  int32_T c3_u_loop_ub;
  int32_T c3_i51;
  c3_emxArray_int8_T *c3_e_ptsStruct;
  int32_T c3_i52;
  int32_T c3_v_loop_ub;
  int32_T c3_i53;
  c3_emxArray_real32_T *c3_b_features;
  int32_T c3_i54;
  int32_T c3_w_loop_ub;
  int32_T c3_i55;
  int32_T c3_i56;
  int32_T c3_x_loop_ub;
  int32_T c3_i57;
  c3_s2rdWZ6jAA0S8hk59zYLzBC c3_b_vPts;
  int32_T c3_i58;
  int32_T c3_y_loop_ub;
  int32_T c3_i59;
  int32_T c3_i60;
  int32_T c3_ab_loop_ub;
  int32_T c3_i61;
  int32_T c3_i62;
  int32_T c3_bb_loop_ub;
  int32_T c3_i63;
  int32_T c3_i64;
  int32_T c3_cb_loop_ub;
  int32_T c3_i65;
  int32_T c3_i66;
  int32_T c3_db_loop_ub;
  int32_T c3_i67;
  int32_T c3_i68;
  int32_T c3_eb_loop_ub;
  int32_T c3_i69;
  c3_emxArray_real32_T *c3_c_vPts;
  int32_T c3_i70;
  int32_T c3_fb_loop_ub;
  int32_T c3_i71;
  c3_emxInit_real32_T(chartInstance, &c3_out, 2, &c3_cd_emlrtRTEI);
  c3_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_vPts, &c3_sb_emlrtRTEI);
  c3_i = c3_out->size[0] * c3_out->size[1];
  c3_out->size[0] = c3_points.pLocation->size[0];
  c3_out->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_out, c3_i, &c3_o_emlrtRTEI);
  c3_loop_ub = c3_points.pLocation->size[0] * c3_points.pLocation->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_out->data[c3_i1] = c3_points.pLocation->data[c3_i1];
  }

  if (!c3_inputMeetsSizeRequirement(chartInstance, c3_out)) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv1, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_i2 = c3_out->size[0] * c3_out->size[1];
  c3_out->size[0] = c3_points.pLocation->size[0];
  c3_out->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_out, c3_i2, &c3_p_emlrtRTEI);
  c3_b_loop_ub = c3_points.pLocation->size[0] * c3_points.pLocation->size[1] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_out->data[c3_i3] = c3_points.pLocation->data[c3_i3];
  }

  c3_emxInit_real32_T(chartInstance, &c3_valLocation, 2, &c3_lc_emlrtRTEI);
  c3_emxInit_real32_T1(chartInstance, &c3_valScale, 1, &c3_mc_emlrtRTEI);
  c3_emxInit_real32_T1(chartInstance, &c3_valMetric, 1, &c3_nc_emlrtRTEI);
  c3_emxInit_int8_T(chartInstance, &c3_valSignOfLaplacian, 1, &c3_oc_emlrtRTEI);
  c3_out_numel = (real_T)c3_out->size[0];
  c3_i4 = c3_valLocation->size[0] * c3_valLocation->size[1];
  c3_valLocation->size[0] = (int32_T)c3_out_numel;
  c3_valLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_valLocation, c3_i4,
    &c3_q_emlrtRTEI);
  c3_i5 = c3_valScale->size[0];
  c3_valScale->size[0] = (int32_T)c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valScale, c3_i5,
    &c3_q_emlrtRTEI);
  c3_i6 = c3_valMetric->size[0];
  c3_valMetric->size[0] = (int32_T)c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_valMetric, c3_i6,
    &c3_q_emlrtRTEI);
  c3_i7 = c3_valSignOfLaplacian->size[0];
  c3_valSignOfLaplacian->size[0] = (int32_T)c3_out_numel;
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_valSignOfLaplacian, c3_i7,
    &c3_q_emlrtRTEI);
  c3_b = (1.0 > c3_out_numel);
  if (c3_b) {
    c3_i8 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c3_valLocation->size[0]);
    c3_i8 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valLocation->size[0]) - 1;
  }

  c3_emxInit_int32_T(chartInstance, &c3_r, 1, &c3_bd_emlrtRTEI);
  c3_i9 = c3_r->size[0];
  c3_r->size[0] = c3_i8 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i9, &c3_r_emlrtRTEI);
  c3_c_loop_ub = c3_i8;
  for (c3_i10 = 0; c3_i10 <= c3_c_loop_ub; c3_i10++) {
    c3_r->data[c3_i10] = c3_i10;
  }

  for (c3_i11 = 0; c3_i11 < 2; c3_i11++) {
    c3_tmp_data[c3_i11] = c3_i11;
  }

  c3_i12 = c3_out->size[0] * c3_out->size[1];
  c3_out->size[0] = c3_points.pLocation->size[0];
  c3_out->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_out, c3_i12, &c3_t_emlrtRTEI);
  c3_d_loop_ub = c3_points.pLocation->size[0] * c3_points.pLocation->size[1] - 1;
  for (c3_i13 = 0; c3_i13 <= c3_d_loop_ub; c3_i13++) {
    c3_out->data[c3_i13] = c3_points.pLocation->data[c3_i13];
  }

  c3_iv[0] = c3_r->size[0];
  c3_iv[1] = 2;
  sf_mex_lw_sub_assign_size_check_nd(c3_iv, 2, *(int32_T (*)[2])c3_out->size, 2);
  for (c3_i14 = 0; c3_i14 < 2; c3_i14++) {
    c3_e_loop_ub = c3_out->size[0] - 1;
    for (c3_i15 = 0; c3_i15 <= c3_e_loop_ub; c3_i15++) {
      c3_valLocation->data[c3_r->data[c3_i15] + c3_valLocation->size[0] *
        c3_tmp_data[c3_i14]] = c3_out->data[c3_i15 + c3_out->size[0] * c3_i14];
    }
  }

  c3_b1 = (1.0 > c3_out_numel);
  if (c3_b1) {
    c3_i16 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c3_valScale->size[0]);
    c3_i16 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valScale->size[0]) - 1;
  }

  c3_i17 = c3_r->size[0];
  c3_r->size[0] = c3_i16 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i17, &c3_u_emlrtRTEI);
  c3_f_loop_ub = c3_i16;
  for (c3_i18 = 0; c3_i18 <= c3_f_loop_ub; c3_i18++) {
    c3_r->data[c3_i18] = c3_i18;
  }

  c3_emxInit_real32_T1(chartInstance, &c3_outOrientation, 1, &c3_bd_emlrtRTEI);
  c3_i19 = c3_outOrientation->size[0];
  c3_outOrientation->size[0] = c3_points.pScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outOrientation, c3_i19,
    &c3_v_emlrtRTEI);
  c3_g_loop_ub = c3_points.pScale->size[0] - 1;
  for (c3_i20 = 0; c3_i20 <= c3_g_loop_ub; c3_i20++) {
    c3_outOrientation->data[c3_i20] = c3_points.pScale->data[c3_i20];
  }

  c3_iv1[0] = c3_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c3_iv1, 1, *(int32_T (*)[1])
    c3_outOrientation->size, 1);
  c3_h_loop_ub = c3_outOrientation->size[0] - 1;
  for (c3_i21 = 0; c3_i21 <= c3_h_loop_ub; c3_i21++) {
    c3_valScale->data[c3_r->data[c3_i21]] = c3_outOrientation->data[c3_i21];
  }

  c3_b2 = (1.0 > c3_out_numel);
  if (c3_b2) {
    c3_i22 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c3_valMetric->size[0]);
    c3_i22 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valMetric->size[0]) - 1;
  }

  c3_i23 = c3_r->size[0];
  c3_r->size[0] = c3_i22 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i23, &c3_w_emlrtRTEI);
  c3_i_loop_ub = c3_i22;
  for (c3_i24 = 0; c3_i24 <= c3_i_loop_ub; c3_i24++) {
    c3_r->data[c3_i24] = c3_i24;
  }

  c3_i25 = c3_outOrientation->size[0];
  c3_outOrientation->size[0] = c3_points.pMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outOrientation, c3_i25,
    &c3_x_emlrtRTEI);
  c3_j_loop_ub = c3_points.pMetric->size[0] - 1;
  for (c3_i26 = 0; c3_i26 <= c3_j_loop_ub; c3_i26++) {
    c3_outOrientation->data[c3_i26] = c3_points.pMetric->data[c3_i26];
  }

  c3_iv2[0] = c3_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c3_iv2, 1, *(int32_T (*)[1])
    c3_outOrientation->size, 1);
  c3_k_loop_ub = c3_outOrientation->size[0] - 1;
  for (c3_i27 = 0; c3_i27 <= c3_k_loop_ub; c3_i27++) {
    c3_valMetric->data[c3_r->data[c3_i27]] = c3_outOrientation->data[c3_i27];
  }

  c3_b3 = (1.0 > c3_out_numel);
  if (c3_b3) {
    c3_i28 = -1;
  } else {
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c3_valSignOfLaplacian->size[0]);
    c3_i28 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
      MAX_uint32_T, (int32_T)c3_out_numel, 1, c3_valSignOfLaplacian->size[0]) -
      1;
  }

  c3_i29 = c3_r->size[0];
  c3_r->size[0] = c3_i28 + 1;
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_r, c3_i29, &c3_y_emlrtRTEI);
  c3_l_loop_ub = c3_i28;
  for (c3_i30 = 0; c3_i30 <= c3_l_loop_ub; c3_i30++) {
    c3_r->data[c3_i30] = c3_i30;
  }

  c3_emxInit_int8_T(chartInstance, &c3_r1, 1, &c3_bd_emlrtRTEI);
  c3_i31 = c3_r1->size[0];
  c3_r1->size[0] = c3_points.pSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_r1, c3_i31, &c3_ab_emlrtRTEI);
  c3_m_loop_ub = c3_points.pSignOfLaplacian->size[0] - 1;
  for (c3_i32 = 0; c3_i32 <= c3_m_loop_ub; c3_i32++) {
    c3_r1->data[c3_i32] = c3_points.pSignOfLaplacian->data[c3_i32];
  }

  c3_iv3[0] = c3_r->size[0];
  sf_mex_lw_sub_assign_size_check_nd(c3_iv3, 1, *(int32_T (*)[1])c3_r1->size, 1);
  c3_n_loop_ub = c3_r1->size[0] - 1;
  for (c3_i33 = 0; c3_i33 <= c3_n_loop_ub; c3_i33++) {
    c3_valSignOfLaplacian->data[c3_r->data[c3_i33]] = c3_r1->data[c3_i33];
  }

  c3_emxFree_int8_T(chartInstance, &c3_r1);
  c3_emxFree_int32_T(chartInstance, &c3_r);
  c3_emxInitStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_ptsStruct,
    &c3_bd_emlrtRTEI);
  c3_i34 = c3_ptsStruct.Location->size[0] * c3_ptsStruct.Location->size[1];
  c3_ptsStruct.Location->size[0] = c3_valLocation->size[0];
  c3_ptsStruct.Location->size[1] = c3_valLocation->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ptsStruct.Location, c3_i34,
    &c3_bb_emlrtRTEI);
  c3_o_loop_ub = c3_valLocation->size[0] * c3_valLocation->size[1] - 1;
  for (c3_i35 = 0; c3_i35 <= c3_o_loop_ub; c3_i35++) {
    c3_ptsStruct.Location->data[c3_i35] = c3_valLocation->data[c3_i35];
  }

  c3_i36 = c3_ptsStruct.Scale->size[0];
  c3_ptsStruct.Scale->size[0] = c3_valScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_ptsStruct.Scale, c3_i36,
    &c3_cb_emlrtRTEI);
  c3_p_loop_ub = c3_valScale->size[0] - 1;
  for (c3_i37 = 0; c3_i37 <= c3_p_loop_ub; c3_i37++) {
    c3_ptsStruct.Scale->data[c3_i37] = c3_valScale->data[c3_i37];
  }

  c3_i38 = c3_ptsStruct.Metric->size[0];
  c3_ptsStruct.Metric->size[0] = c3_valMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_ptsStruct.Metric, c3_i38,
    &c3_db_emlrtRTEI);
  c3_q_loop_ub = c3_valMetric->size[0] - 1;
  for (c3_i39 = 0; c3_i39 <= c3_q_loop_ub; c3_i39++) {
    c3_ptsStruct.Metric->data[c3_i39] = c3_valMetric->data[c3_i39];
  }

  c3_i40 = c3_ptsStruct.SignOfLaplacian->size[0];
  c3_ptsStruct.SignOfLaplacian->size[0] = c3_valSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_ptsStruct.SignOfLaplacian,
    c3_i40, &c3_eb_emlrtRTEI);
  c3_r_loop_ub = c3_valSignOfLaplacian->size[0] - 1;
  for (c3_i41 = 0; c3_i41 <= c3_r_loop_ub; c3_i41++) {
    c3_ptsStruct.SignOfLaplacian->data[c3_i41] = c3_valSignOfLaplacian->
      data[c3_i41];
  }

  c3_i42 = 0;
  for (c3_i43 = 0; c3_i43 < 189; c3_i43++) {
    c3_i44 = 0;
    for (c3_i46 = 0; c3_i46 < 267; c3_i46++) {
      c3_b_Iu8T[c3_i46 + c3_i42] = c3_I[c3_i44 + c3_i43];
      c3_i44 += 189;
    }

    c3_i42 += 267;
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_ptsStruct, 2, &c3_fb_emlrtRTEI);
  c3_i45 = c3_b_ptsStruct->size[0] * c3_b_ptsStruct->size[1];
  c3_b_ptsStruct->size[0] = c3_ptsStruct.Location->size[0];
  c3_b_ptsStruct->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_ptsStruct, c3_i45,
    &c3_fb_emlrtRTEI);
  c3_s_loop_ub = c3_ptsStruct.Location->size[0] * c3_ptsStruct.Location->size[1]
    - 1;
  for (c3_i47 = 0; c3_i47 <= c3_s_loop_ub; c3_i47++) {
    c3_b_ptsStruct->data[c3_i47] = c3_ptsStruct.Location->data[c3_i47];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_c_ptsStruct, 1, &c3_gb_emlrtRTEI);
  c3_i48 = c3_c_ptsStruct->size[0];
  c3_c_ptsStruct->size[0] = c3_ptsStruct.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_c_ptsStruct, c3_i48,
    &c3_gb_emlrtRTEI);
  c3_t_loop_ub = c3_ptsStruct.Scale->size[0] - 1;
  for (c3_i49 = 0; c3_i49 <= c3_t_loop_ub; c3_i49++) {
    c3_c_ptsStruct->data[c3_i49] = c3_ptsStruct.Scale->data[c3_i49];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_d_ptsStruct, 1, &c3_hb_emlrtRTEI);
  c3_i50 = c3_d_ptsStruct->size[0];
  c3_d_ptsStruct->size[0] = c3_ptsStruct.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_d_ptsStruct, c3_i50,
    &c3_hb_emlrtRTEI);
  c3_u_loop_ub = c3_ptsStruct.Metric->size[0] - 1;
  for (c3_i51 = 0; c3_i51 <= c3_u_loop_ub; c3_i51++) {
    c3_d_ptsStruct->data[c3_i51] = c3_ptsStruct.Metric->data[c3_i51];
  }

  c3_emxInit_int8_T(chartInstance, &c3_e_ptsStruct, 1, &c3_ib_emlrtRTEI);
  c3_i52 = c3_e_ptsStruct->size[0];
  c3_e_ptsStruct->size[0] = c3_ptsStruct.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_e_ptsStruct, c3_i52,
    &c3_ib_emlrtRTEI);
  c3_v_loop_ub = c3_ptsStruct.SignOfLaplacian->size[0] - 1;
  for (c3_i53 = 0; c3_i53 <= c3_v_loop_ub; c3_i53++) {
    c3_e_ptsStruct->data[c3_i53] = c3_ptsStruct.SignOfLaplacian->data[c3_i53];
  }

  c3_emxFreeStruct_sJTMl20J2MtSHoTgq(chartInstance, &c3_ptsStruct);
  c3_emxInit_real32_T(chartInstance, &c3_b_features, 2, &c3_bd_emlrtRTEI);
  c3_extractSurfBuildable_extractSurf_uint8(chartInstance, c3_b_Iu8T,
    c3_b_ptsStruct, c3_c_ptsStruct, c3_d_ptsStruct, c3_e_ptsStruct, false, false,
    c3_valLocation, c3_valScale, c3_valMetric, c3_valSignOfLaplacian,
    c3_outOrientation, c3_b_features);
  c3_i54 = c3_out->size[0] * c3_out->size[1];
  c3_out->size[0] = c3_valLocation->size[0];
  c3_out->size[1] = c3_valLocation->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_out, c3_i54, &c3_jb_emlrtRTEI);
  c3_w_loop_ub = c3_valLocation->size[0] * c3_valLocation->size[1] - 1;
  c3_emxFree_int8_T(chartInstance, &c3_e_ptsStruct);
  c3_emxFree_real32_T(chartInstance, &c3_d_ptsStruct);
  c3_emxFree_real32_T(chartInstance, &c3_c_ptsStruct);
  c3_emxFree_real32_T(chartInstance, &c3_b_ptsStruct);
  for (c3_i55 = 0; c3_i55 <= c3_w_loop_ub; c3_i55++) {
    c3_out->data[c3_i55] = c3_valLocation->data[c3_i55];
  }

  c3_emxFree_real32_T(chartInstance, &c3_valLocation);
  c3_i56 = c3_features->size[0] * c3_features->size[1];
  c3_features->size[0] = c3_b_features->size[0];
  c3_features->size[1] = c3_b_features->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_features, c3_i56,
    &c3_kb_emlrtRTEI);
  c3_x_loop_ub = c3_b_features->size[0] * c3_b_features->size[1] - 1;
  for (c3_i57 = 0; c3_i57 <= c3_x_loop_ub; c3_i57++) {
    c3_features->data[c3_i57] = c3_b_features->data[c3_i57];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_features);
  c3_emxInitStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_b_vPts, &c3_kc_emlrtRTEI);
  c3_i58 = c3_b_vPts.Location->size[0] * c3_b_vPts.Location->size[1];
  c3_b_vPts.Location->size[0] = c3_out->size[0];
  c3_b_vPts.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_vPts.Location, c3_i58,
    &c3_lb_emlrtRTEI);
  c3_y_loop_ub = c3_out->size[0] * c3_out->size[1] - 1;
  for (c3_i59 = 0; c3_i59 <= c3_y_loop_ub; c3_i59++) {
    c3_b_vPts.Location->data[c3_i59] = c3_out->data[c3_i59];
  }

  c3_emxFree_real32_T(chartInstance, &c3_out);
  c3_i60 = c3_b_vPts.Scale->size[0];
  c3_b_vPts.Scale->size[0] = c3_valScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Scale, c3_i60,
    &c3_mb_emlrtRTEI);
  c3_ab_loop_ub = c3_valScale->size[0] - 1;
  for (c3_i61 = 0; c3_i61 <= c3_ab_loop_ub; c3_i61++) {
    c3_b_vPts.Scale->data[c3_i61] = c3_valScale->data[c3_i61];
  }

  c3_emxFree_real32_T(chartInstance, &c3_valScale);
  c3_i62 = c3_b_vPts.Metric->size[0];
  c3_b_vPts.Metric->size[0] = c3_valMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Metric, c3_i62,
    &c3_nb_emlrtRTEI);
  c3_bb_loop_ub = c3_valMetric->size[0] - 1;
  for (c3_i63 = 0; c3_i63 <= c3_bb_loop_ub; c3_i63++) {
    c3_b_vPts.Metric->data[c3_i63] = c3_valMetric->data[c3_i63];
  }

  c3_emxFree_real32_T(chartInstance, &c3_valMetric);
  c3_i64 = c3_b_vPts.SignOfLaplacian->size[0];
  c3_b_vPts.SignOfLaplacian->size[0] = c3_valSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_b_vPts.SignOfLaplacian, c3_i64,
    &c3_ob_emlrtRTEI);
  c3_cb_loop_ub = c3_valSignOfLaplacian->size[0] - 1;
  for (c3_i65 = 0; c3_i65 <= c3_cb_loop_ub; c3_i65++) {
    c3_b_vPts.SignOfLaplacian->data[c3_i65] = c3_valSignOfLaplacian->data[c3_i65];
  }

  c3_emxFree_int8_T(chartInstance, &c3_valSignOfLaplacian);
  c3_i66 = c3_b_vPts.Orientation->size[0];
  c3_b_vPts.Orientation->size[0] = c3_outOrientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Orientation, c3_i66,
    &c3_pb_emlrtRTEI);
  c3_db_loop_ub = c3_outOrientation->size[0] - 1;
  for (c3_i67 = 0; c3_i67 <= c3_db_loop_ub; c3_i67++) {
    c3_b_vPts.Orientation->data[c3_i67] = c3_outOrientation->data[c3_i67];
  }

  c3_emxFree_real32_T(chartInstance, &c3_outOrientation);
  c3_i68 = c3_b_vPts.Orientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_vPts.Orientation, c3_i68,
    &c3_qb_emlrtRTEI);
  c3_eb_loop_ub = c3_b_vPts.Orientation->size[0] - 1;
  for (c3_i69 = 0; c3_i69 <= c3_eb_loop_ub; c3_i69++) {
    c3_b_vPts.Orientation->data[c3_i69] = 6.28318548F -
      c3_b_vPts.Orientation->data[c3_i69];
  }

  c3_emxInit_real32_T(chartInstance, &c3_c_vPts, 2, &c3_rb_emlrtRTEI);
  c3_i70 = c3_c_vPts->size[0] * c3_c_vPts->size[1];
  c3_c_vPts->size[0] = c3_b_vPts.Location->size[0];
  c3_c_vPts->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_vPts, c3_i70,
    &c3_rb_emlrtRTEI);
  c3_fb_loop_ub = c3_b_vPts.Location->size[0] * c3_b_vPts.Location->size[1] - 1;
  for (c3_i71 = 0; c3_i71 <= c3_fb_loop_ub; c3_i71++) {
    c3_c_vPts->data[c3_i71] = c3_b_vPts.Location->data[c3_i71];
  }

  c3_emxCopyStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_vPts, &c3_b_vPts,
    &c3_sb_emlrtRTEI);
  c3_b_SURFPoints_cg_SURFPoints_cg(chartInstance, c3_c_vPts, c3_vPts,
    c3_valid_points);
  c3_emxFree_real32_T(chartInstance, &c3_c_vPts);
  c3_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_b_vPts);
  c3_emxFreeStruct_s2rdWZ6jAA0S8hk59(chartInstance, &c3_vPts);
}

static void c3_extractSurfBuildable_extractSurf_uint8
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c3_b_Iu8T
   [50463], c3_emxArray_real32_T *c3_inLocation, c3_emxArray_real32_T
   *c3_inScale, c3_emxArray_real32_T *c3_inMetric, c3_emxArray_int8_T
   *c3_inSignOfLaplacian, boolean_T c3_isExtended, boolean_T c3_isUpright,
   c3_emxArray_real32_T *c3_outLocation, c3_emxArray_real32_T *c3_outScale,
   c3_emxArray_real32_T *c3_outMetric, c3_emxArray_int8_T *c3_outSignOfLaplacian,
   c3_emxArray_real32_T *c3_outOrientation, c3_emxArray_real32_T *c3_outFeatures)
{
  c3_emxArray_real32_T *c3_b_inLocation;
  void * c3_ptrKeypoints;
  void * c3_ptrDescriptors;
  int32_T c3_numel;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_emxArray_real32_T *c3_b_inScale;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  c3_emxArray_real32_T *c3_b_inMetric;
  int32_T c3_i4;
  int32_T c3_c_loop_ub;
  int32_T c3_i5;
  c3_emxArray_int8_T *c3_b_inSignOfLaplacian;
  int32_T c3_i6;
  int32_T c3_d_loop_ub;
  int32_T c3_i7;
  int32_T c3_out_numel;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i13;
  (void)c3_isExtended;
  (void)c3_isUpright;
  c3_emxInit_real32_T(chartInstance, &c3_b_inLocation, 2, &c3_hd_emlrtRTEI);
  c3_ptrKeypoints = NULL;
  c3_ptrDescriptors = NULL;
  c3_numel = c3_inLocation->size[0];
  c3_i = c3_b_inLocation->size[0] * c3_b_inLocation->size[1];
  c3_b_inLocation->size[0] = c3_inLocation->size[0];
  c3_b_inLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_inLocation, c3_i,
    &c3_dd_emlrtRTEI);
  c3_loop_ub = c3_inLocation->size[0] * c3_inLocation->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_inLocation->data[c3_i1] = c3_inLocation->data[c3_i1];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_b_inScale, 1, &c3_hd_emlrtRTEI);
  c3_i2 = c3_b_inScale->size[0];
  c3_b_inScale->size[0] = c3_inScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_inScale, c3_i2,
    &c3_ed_emlrtRTEI);
  c3_b_loop_ub = c3_inScale->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_b_inScale->data[c3_i3] = c3_inScale->data[c3_i3];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_b_inMetric, 1, &c3_hd_emlrtRTEI);
  c3_i4 = c3_b_inMetric->size[0];
  c3_b_inMetric->size[0] = c3_inMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_inMetric, c3_i4,
    &c3_fd_emlrtRTEI);
  c3_c_loop_ub = c3_inMetric->size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
    c3_b_inMetric->data[c3_i5] = c3_inMetric->data[c3_i5];
  }

  c3_emxInit_int8_T(chartInstance, &c3_b_inSignOfLaplacian, 1, &c3_hd_emlrtRTEI);
  c3_i6 = c3_b_inSignOfLaplacian->size[0];
  c3_b_inSignOfLaplacian->size[0] = c3_inSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_b_inSignOfLaplacian, c3_i6,
    &c3_gd_emlrtRTEI);
  c3_d_loop_ub = c3_inSignOfLaplacian->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_b_inSignOfLaplacian->data[c3_i7] = c3_inSignOfLaplacian->data[c3_i7];
  }

  c3_out_numel = extractSurf_compute(c3_b_Iu8T, 189, 267, 2,
    &c3_b_inLocation->data[0], &c3_b_inScale->data[0], &c3_b_inMetric->data[0],
    &c3_b_inSignOfLaplacian->data[0], c3_numel, false, false, &c3_ptrKeypoints,
    &c3_ptrDescriptors);
  c3_i8 = c3_outLocation->size[0] * c3_outLocation->size[1];
  c3_outLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_out_numel);
  c3_outLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_outLocation, c3_i8,
    &c3_hd_emlrtRTEI);
  c3_i9 = c3_outScale->size[0];
  c3_outScale->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outScale, c3_i9,
    &c3_hd_emlrtRTEI);
  c3_i10 = c3_outMetric->size[0];
  c3_outMetric->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outMetric, c3_i10,
    &c3_hd_emlrtRTEI);
  c3_i11 = c3_outSignOfLaplacian->size[0];
  c3_outSignOfLaplacian->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_outSignOfLaplacian, c3_i11,
    &c3_hd_emlrtRTEI);
  c3_i12 = c3_outOrientation->size[0];
  c3_outOrientation->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outOrientation, c3_i12,
    &c3_hd_emlrtRTEI);
  c3_i13 = c3_outFeatures->size[0] * c3_outFeatures->size[1];
  c3_outFeatures->size[0] = c3_out_numel;
  c3_outFeatures->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_outFeatures, c3_i13,
    &c3_hd_emlrtRTEI);
  extractSurf_assignOutput(c3_ptrKeypoints, c3_ptrDescriptors,
    &c3_outLocation->data[0], &c3_outScale->data[0], &c3_outMetric->data[0],
    &c3_outSignOfLaplacian->data[0], &c3_outOrientation->data[0],
    &c3_outFeatures->data[0]);
  c3_emxFree_int8_T(chartInstance, &c3_b_inSignOfLaplacian);
  c3_emxFree_real32_T(chartInstance, &c3_b_inMetric);
  c3_emxFree_real32_T(chartInstance, &c3_b_inScale);
  c3_emxFree_real32_T(chartInstance, &c3_b_inLocation);
}

static void c3_b_SURFPoints_cg_SURFPoints_cg
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_varargin_1, c3_s2rdWZ6jAA0S8hk59zYLzBC c3_varargin_2,
   c3_vision_internal_SURFPoints_cg *c3_this)
{
  c3_sGhH0Msgf1shDAvf5CNZg6B c3_inputs;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_c_loop_ub;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_d_loop_ub;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_e_loop_ub;
  int32_T c3_i9;
  c3_emxArray_real32_T *c3_b_inputs;
  int32_T c3_i10;
  int32_T c3_f_loop_ub;
  int32_T c3_i11;
  c3_emxArray_real32_T *c3_c_inputs;
  int32_T c3_i12;
  int32_T c3_g_loop_ub;
  int32_T c3_i13;
  real_T c3_numPts;
  real_T c3_numelParam;
  real_T c3_b_numPts;
  boolean_T c3_b;
  const mxArray *c3_d_y = NULL;
  c3_emxArray_real32_T *c3_d_inputs;
  int32_T c3_i14;
  const mxArray *c3_e_y = NULL;
  const mxArray *c3_f_y = NULL;
  int32_T c3_h_loop_ub;
  static char_T c3_b_cv[6] = { 'M', 'e', 't', 'r', 'i', 'c' };

  int32_T c3_i15;
  c3_emxArray_real32_T *c3_orientation;
  int32_T c3_i16;
  int32_T c3_i_loop_ub;
  int32_T c3_i17;
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i18;
  int32_T c3_k;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  boolean_T c3_b1;
  real32_T c3_x;
  real32_T c3_b_x;
  boolean_T c3_b_b;
  const mxArray *c3_g_y = NULL;
  boolean_T c3_b_p;
  boolean_T c3_b2;
  const mxArray *c3_h_y = NULL;
  const mxArray *c3_i_y = NULL;
  static char_T c3_b_cv1[11] = { 'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i',
    'o', 'n' };

  const mxArray *c3_j_y = NULL;
  c3_emxArray_int8_T *c3_in;
  int32_T c3_i19;
  const mxArray *c3_k_y = NULL;
  const mxArray *c3_l_y = NULL;
  int32_T c3_j_loop_ub;
  static char_T c3_b_cv2[11] = { 'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i',
    'o', 'n' };

  int32_T c3_i20;
  c3_emxArray_boolean_T *c3_b_in;
  int32_T c3_i21;
  int32_T c3_k_loop_ub;
  int32_T c3_i22;
  c3_emxArray_boolean_T *c3_c_in;
  boolean_T c3_b3;
  int32_T c3_i23;
  int32_T c3_l_loop_ub;
  int32_T c3_i24;
  const mxArray *c3_m_y = NULL;
  real_T c3_c_numPts;
  real_T c3_b_numelParam;
  const mxArray *c3_n_y = NULL;
  real_T c3_d_numPts;
  boolean_T c3_b4;
  const mxArray *c3_o_y = NULL;
  real_T c3_c_numelParam;
  real_T c3_e_numPts;
  const mxArray *c3_p_y = NULL;
  boolean_T c3_b5;
  const mxArray *c3_q_y = NULL;
  static char_T c3_b_cv3[5] = { 'S', 'c', 'a', 'l', 'e' };

  const mxArray *c3_r_y = NULL;
  real_T c3_d_numelParam;
  real_T c3_f_numPts;
  const mxArray *c3_s_y = NULL;
  boolean_T c3_b6;
  const mxArray *c3_t_y = NULL;
  const mxArray *c3_u_y = NULL;
  const mxArray *c3_v_y = NULL;
  const mxArray *c3_w_y = NULL;
  static char_T c3_b_cv4[11] = { 'O', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i',
    'o', 'n' };

  c3_emxInitStruct_sGhH0Msgf1shDAvf5(chartInstance, &c3_inputs, &c3_qc_emlrtRTEI);
  c3_this->pLocation->size[0] = 0;
  c3_this->pLocation->size[1] = 2;
  c3_this->pMetric->size[0] = 0;
  c3_this->pScale->size[0] = 0;
  c3_this->pSignOfLaplacian->size[0] = 0;
  c3_this->pOrientation->size[0] = 0;
  c3_i = c3_inputs.Location->size[0] * c3_inputs.Location->size[1];
  c3_inputs.Location->size[0] = c3_varargin_1->size[0];
  c3_inputs.Location->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_inputs.Location, c3_i,
    &c3_pc_emlrtRTEI);
  c3_loop_ub = c3_varargin_1->size[0] * c3_varargin_1->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_inputs.Location->data[c3_i1] = c3_varargin_1->data[c3_i1];
  }

  c3_i2 = c3_inputs.Metric->size[0];
  c3_inputs.Metric->size[0] = c3_varargin_2.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_inputs.Metric, c3_i2,
    &c3_qc_emlrtRTEI);
  c3_b_loop_ub = c3_varargin_2.Metric->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_inputs.Metric->data[c3_i3] = c3_varargin_2.Metric->data[c3_i3];
  }

  c3_i4 = c3_inputs.Scale->size[0];
  c3_inputs.Scale->size[0] = c3_varargin_2.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_inputs.Scale, c3_i4,
    &c3_qc_emlrtRTEI);
  c3_c_loop_ub = c3_varargin_2.Scale->size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
    c3_inputs.Scale->data[c3_i5] = c3_varargin_2.Scale->data[c3_i5];
  }

  c3_i6 = c3_inputs.SignOfLaplacian->size[0];
  c3_inputs.SignOfLaplacian->size[0] = c3_varargin_2.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_inputs.SignOfLaplacian, c3_i6,
    &c3_qc_emlrtRTEI);
  c3_d_loop_ub = c3_varargin_2.SignOfLaplacian->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_inputs.SignOfLaplacian->data[c3_i7] = c3_varargin_2.SignOfLaplacian->
      data[c3_i7];
  }

  c3_i8 = c3_inputs.Orientation->size[0];
  c3_inputs.Orientation->size[0] = c3_varargin_2.Orientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_inputs.Orientation, c3_i8,
    &c3_qc_emlrtRTEI);
  c3_e_loop_ub = c3_varargin_2.Orientation->size[0] - 1;
  for (c3_i9 = 0; c3_i9 <= c3_e_loop_ub; c3_i9++) {
    c3_inputs.Orientation->data[c3_i9] = c3_varargin_2.Orientation->data[c3_i9];
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_inputs, 2, &c3_rc_emlrtRTEI);
  c3_i10 = c3_b_inputs->size[0] * c3_b_inputs->size[1];
  c3_b_inputs->size[0] = c3_inputs.Location->size[0];
  c3_b_inputs->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_inputs, c3_i10,
    &c3_rc_emlrtRTEI);
  c3_f_loop_ub = c3_inputs.Location->size[0] * c3_inputs.Location->size[1] - 1;
  for (c3_i11 = 0; c3_i11 <= c3_f_loop_ub; c3_i11++) {
    c3_b_inputs->data[c3_i11] = c3_inputs.Location->data[c3_i11];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_c_inputs, 1, &c3_sc_emlrtRTEI);
  c3_FeaturePointsImpl_checkLocation(chartInstance, c3_b_inputs);
  c3_i12 = c3_c_inputs->size[0];
  c3_c_inputs->size[0] = c3_inputs.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_c_inputs, c3_i12,
    &c3_sc_emlrtRTEI);
  c3_g_loop_ub = c3_inputs.Metric->size[0] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_b_inputs);
  for (c3_i13 = 0; c3_i13 <= c3_g_loop_ub; c3_i13++) {
    c3_c_inputs->data[c3_i13] = c3_inputs.Metric->data[c3_i13];
  }

  c3_FeaturePointsImpl_checkMetric(chartInstance, c3_c_inputs);
  c3_numPts = (real_T)c3_inputs.Location->size[0];
  c3_numelParam = (real_T)c3_inputs.Metric->size[0];
  c3_b_numPts = c3_numPts;
  c3_emxFree_real32_T(chartInstance, &c3_c_inputs);
  if ((c3_numelParam == 1.0) || (c3_numelParam == c3_b_numPts)) {
    c3_b = true;
  } else {
    c3_b = false;
  }

  if (!c3_b) {
    c3_d_y = NULL;
    sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_e_y, 14,
                  c3_f_y)));
  }

  c3_emxInit_real32_T1(chartInstance, &c3_d_inputs, 1, &c3_tc_emlrtRTEI);
  c3_i14 = c3_d_inputs->size[0];
  c3_d_inputs->size[0] = c3_inputs.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_d_inputs, c3_i14,
    &c3_tc_emlrtRTEI);
  c3_h_loop_ub = c3_inputs.Scale->size[0] - 1;
  for (c3_i15 = 0; c3_i15 <= c3_h_loop_ub; c3_i15++) {
    c3_d_inputs->data[c3_i15] = c3_inputs.Scale->data[c3_i15];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_orientation, 1, &c3_id_emlrtRTEI);
  c3_SURFPointsImpl_checkScale(chartInstance, c3_d_inputs);
  c3_i16 = c3_orientation->size[0];
  c3_orientation->size[0] = c3_inputs.Orientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_orientation, c3_i16,
    &c3_id_emlrtRTEI);
  c3_i_loop_ub = c3_inputs.Orientation->size[0] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_d_inputs);
  for (c3_i17 = 0; c3_i17 <= c3_i_loop_ub; c3_i17++) {
    c3_orientation->data[c3_i17] = c3_inputs.Orientation->data[c3_i17];
  }

  c3_p = true;
  c3_d = (real_T)c3_orientation->size[0];
  c3_i18 = (int32_T)c3_d - 1;
  c3_k = 0;
  c3_exitg1 = false;
  while ((!c3_exitg1) && (c3_k <= c3_i18)) {
    c3_b_k = (real_T)c3_k + 1.0;
    c3_x = c3_orientation->data[(int32_T)c3_b_k - 1];
    c3_b_x = c3_x;
    c3_b_b = muSingleScalarIsNaN(c3_b_x);
    c3_b_p = !c3_b_b;
    if (c3_b_p) {
      c3_k++;
    } else {
      c3_p = false;
      c3_exitg1 = true;
    }
  }

  if (c3_p) {
    c3_b1 = true;
  } else {
    c3_b1 = false;
  }

  if (!c3_b1) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv5, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_cv6, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 11),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_h_y, 14,
                  c3_i_y)));
  }

  if (c3_all(chartInstance, c3_orientation)) {
    c3_b2 = true;
  } else {
    c3_b2 = false;
  }

  c3_emxFree_real32_T(chartInstance, &c3_orientation);
  if (!c3_b2) {
    c3_j_y = NULL;
    sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c3_k_y = NULL;
    sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c3_l_y = NULL;
    sf_mex_assign(&c3_l_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2, 1, 11),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_j_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_k_y, 14,
                  c3_l_y)));
  }

  c3_emxInit_int8_T(chartInstance, &c3_in, 1, &c3_uc_emlrtRTEI);
  c3_i19 = c3_in->size[0];
  c3_in->size[0] = c3_inputs.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_in, c3_i19, &c3_uc_emlrtRTEI);
  c3_j_loop_ub = c3_inputs.SignOfLaplacian->size[0] - 1;
  for (c3_i20 = 0; c3_i20 <= c3_j_loop_ub; c3_i20++) {
    c3_in->data[c3_i20] = c3_inputs.SignOfLaplacian->data[c3_i20];
  }

  c3_emxInit_boolean_T(chartInstance, &c3_b_in, 1, &c3_vc_emlrtRTEI);
  c3_i21 = c3_b_in->size[0];
  c3_b_in->size[0] = c3_in->size[0];
  c3_emxEnsureCapacity_boolean_T(chartInstance, c3_b_in, c3_i21,
    &c3_vc_emlrtRTEI);
  c3_k_loop_ub = c3_in->size[0] - 1;
  for (c3_i22 = 0; c3_i22 <= c3_k_loop_ub; c3_i22++) {
    c3_b_in->data[c3_i22] = ((real_T)c3_in->data[c3_i22] >= -1.0);
  }

  c3_emxInit_boolean_T(chartInstance, &c3_c_in, 1, &c3_wc_emlrtRTEI);
  if (c3_b_all(chartInstance, c3_b_in)) {
    c3_i23 = c3_c_in->size[0];
    c3_c_in->size[0] = c3_in->size[0];
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_c_in, c3_i23,
      &c3_wc_emlrtRTEI);
    c3_l_loop_ub = c3_in->size[0] - 1;
    for (c3_i24 = 0; c3_i24 <= c3_l_loop_ub; c3_i24++) {
      c3_c_in->data[c3_i24] = ((real_T)c3_in->data[c3_i24] <= 1.0);
    }

    if (c3_b_all(chartInstance, c3_c_in)) {
      c3_b3 = true;
    } else {
      c3_b3 = false;
    }
  } else {
    c3_b3 = false;
  }

  c3_emxFree_boolean_T(chartInstance, &c3_b_in);
  c3_emxFree_boolean_T(chartInstance, &c3_c_in);
  c3_emxFree_int8_T(chartInstance, &c3_in);
  if (!c3_b3) {
    c3_m_y = NULL;
    sf_mex_assign(&c3_m_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c3_n_y = NULL;
    sf_mex_assign(&c3_n_y, sf_mex_create("y", c3_cv3, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_m_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14, c3_n_y)));
  }

  c3_c_numPts = (real_T)c3_inputs.Location->size[0];
  c3_b_numelParam = (real_T)c3_inputs.Scale->size[0];
  c3_d_numPts = c3_c_numPts;
  if ((c3_b_numelParam == 1.0) || (c3_b_numelParam == c3_d_numPts)) {
    c3_b4 = true;
  } else {
    c3_b4 = false;
  }

  if (!c3_b4) {
    c3_o_y = NULL;
    sf_mex_assign(&c3_o_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_p_y = NULL;
    sf_mex_assign(&c3_p_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_q_y = NULL;
    sf_mex_assign(&c3_q_y, sf_mex_create("y", c3_b_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_o_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_p_y, 14,
                  c3_q_y)));
  }

  c3_c_numelParam = (real_T)c3_inputs.SignOfLaplacian->size[0];
  c3_e_numPts = c3_c_numPts;
  if ((c3_c_numelParam == 1.0) || (c3_c_numelParam == c3_e_numPts)) {
    c3_b5 = true;
  } else {
    c3_b5 = false;
  }

  if (!c3_b5) {
    c3_r_y = NULL;
    sf_mex_assign(&c3_r_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_s_y = NULL;
    sf_mex_assign(&c3_s_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_t_y = NULL;
    sf_mex_assign(&c3_t_y, sf_mex_create("y", c3_cv4, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_r_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_s_y, 14,
                  c3_t_y)));
  }

  c3_d_numelParam = (real_T)c3_inputs.Orientation->size[0];
  c3_f_numPts = c3_c_numPts;
  if ((c3_d_numelParam == 1.0) || (c3_d_numelParam == c3_f_numPts)) {
    c3_b6 = true;
  } else {
    c3_b6 = false;
  }

  if (!c3_b6) {
    c3_u_y = NULL;
    sf_mex_assign(&c3_u_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_v_y = NULL;
    sf_mex_assign(&c3_v_y, sf_mex_create("y", c3_cv2, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_w_y = NULL;
    sf_mex_assign(&c3_w_y, sf_mex_create("y", c3_b_cv4, 10, 0U, 1U, 0U, 2, 1, 11),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_u_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_v_y, 14,
                  c3_w_y)));
  }

  c3_d_SURFPointsImpl_configure(chartInstance, c3_this, c3_inputs);
  c3_emxFreeStruct_sGhH0Msgf1shDAvf5(chartInstance, &c3_inputs);
}

static void c3_b_SURFPointsImpl_configure
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg c3_this, c3_sGhH0Msgf1shDAvf5CNZg6B
   c3_inputs, c3_vision_internal_SURFPoints_cg *c3_b_this)
{
  c3_sGhH0Msgf1shDAvf5CNZg6B c3_b_inputs;
  c3_emxInitStruct_sGhH0Msgf1shDAvf5(chartInstance, &c3_b_inputs,
    &c3_ad_emlrtRTEI);
  c3_emxCopyStruct_vision_internal_S(chartInstance, c3_b_this, &c3_this,
    &c3_ad_emlrtRTEI);
  c3_emxCopyStruct_sGhH0Msgf1shDAvf5(chartInstance, &c3_b_inputs, &c3_inputs,
    &c3_ad_emlrtRTEI);
  c3_d_SURFPointsImpl_configure(chartInstance, c3_b_this, c3_b_inputs);
  c3_emxFreeStruct_sGhH0Msgf1shDAvf5(chartInstance, &c3_b_inputs);
}

static void c3_b_extractSurfBuildable_extractSurf_uint8
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, uint8_T c3_b_Iu8T
   [250000], c3_emxArray_real32_T *c3_inLocation, c3_emxArray_real32_T
   *c3_inScale, c3_emxArray_real32_T *c3_inMetric, c3_emxArray_int8_T
   *c3_inSignOfLaplacian, boolean_T c3_isExtended, boolean_T c3_isUpright,
   c3_emxArray_real32_T *c3_outLocation, c3_emxArray_real32_T *c3_outScale,
   c3_emxArray_real32_T *c3_outMetric, c3_emxArray_int8_T *c3_outSignOfLaplacian,
   c3_emxArray_real32_T *c3_outOrientation, c3_emxArray_real32_T *c3_outFeatures)
{
  c3_emxArray_real32_T *c3_b_inLocation;
  void * c3_ptrKeypoints;
  void * c3_ptrDescriptors;
  int32_T c3_numel;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_emxArray_real32_T *c3_b_inScale;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  c3_emxArray_real32_T *c3_b_inMetric;
  int32_T c3_i4;
  int32_T c3_c_loop_ub;
  int32_T c3_i5;
  c3_emxArray_int8_T *c3_b_inSignOfLaplacian;
  int32_T c3_i6;
  int32_T c3_d_loop_ub;
  int32_T c3_i7;
  int32_T c3_out_numel;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i13;
  (void)c3_isExtended;
  (void)c3_isUpright;
  c3_emxInit_real32_T(chartInstance, &c3_b_inLocation, 2, &c3_hd_emlrtRTEI);
  c3_ptrKeypoints = NULL;
  c3_ptrDescriptors = NULL;
  c3_numel = c3_inLocation->size[0];
  c3_i = c3_b_inLocation->size[0] * c3_b_inLocation->size[1];
  c3_b_inLocation->size[0] = c3_inLocation->size[0];
  c3_b_inLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_inLocation, c3_i,
    &c3_dd_emlrtRTEI);
  c3_loop_ub = c3_inLocation->size[0] * c3_inLocation->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_inLocation->data[c3_i1] = c3_inLocation->data[c3_i1];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_b_inScale, 1, &c3_hd_emlrtRTEI);
  c3_i2 = c3_b_inScale->size[0];
  c3_b_inScale->size[0] = c3_inScale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_inScale, c3_i2,
    &c3_ed_emlrtRTEI);
  c3_b_loop_ub = c3_inScale->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_b_inScale->data[c3_i3] = c3_inScale->data[c3_i3];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_b_inMetric, 1, &c3_hd_emlrtRTEI);
  c3_i4 = c3_b_inMetric->size[0];
  c3_b_inMetric->size[0] = c3_inMetric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_inMetric, c3_i4,
    &c3_fd_emlrtRTEI);
  c3_c_loop_ub = c3_inMetric->size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
    c3_b_inMetric->data[c3_i5] = c3_inMetric->data[c3_i5];
  }

  c3_emxInit_int8_T(chartInstance, &c3_b_inSignOfLaplacian, 1, &c3_hd_emlrtRTEI);
  c3_i6 = c3_b_inSignOfLaplacian->size[0];
  c3_b_inSignOfLaplacian->size[0] = c3_inSignOfLaplacian->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_b_inSignOfLaplacian, c3_i6,
    &c3_gd_emlrtRTEI);
  c3_d_loop_ub = c3_inSignOfLaplacian->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_b_inSignOfLaplacian->data[c3_i7] = c3_inSignOfLaplacian->data[c3_i7];
  }

  c3_out_numel = extractSurf_compute(c3_b_Iu8T, 500, 500, 2,
    &c3_b_inLocation->data[0], &c3_b_inScale->data[0], &c3_b_inMetric->data[0],
    &c3_b_inSignOfLaplacian->data[0], c3_numel, false, false, &c3_ptrKeypoints,
    &c3_ptrDescriptors);
  c3_i8 = c3_outLocation->size[0] * c3_outLocation->size[1];
  c3_outLocation->size[0] = (int32_T)sf_mex_lw_non_negative_check((real_T)
    c3_out_numel);
  c3_outLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_outLocation, c3_i8,
    &c3_hd_emlrtRTEI);
  c3_i9 = c3_outScale->size[0];
  c3_outScale->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outScale, c3_i9,
    &c3_hd_emlrtRTEI);
  c3_i10 = c3_outMetric->size[0];
  c3_outMetric->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outMetric, c3_i10,
    &c3_hd_emlrtRTEI);
  c3_i11 = c3_outSignOfLaplacian->size[0];
  c3_outSignOfLaplacian->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_outSignOfLaplacian, c3_i11,
    &c3_hd_emlrtRTEI);
  c3_i12 = c3_outOrientation->size[0];
  c3_outOrientation->size[0] = c3_out_numel;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_outOrientation, c3_i12,
    &c3_hd_emlrtRTEI);
  c3_i13 = c3_outFeatures->size[0] * c3_outFeatures->size[1];
  c3_outFeatures->size[0] = c3_out_numel;
  c3_outFeatures->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_outFeatures, c3_i13,
    &c3_hd_emlrtRTEI);
  extractSurf_assignOutput(c3_ptrKeypoints, c3_ptrDescriptors,
    &c3_outLocation->data[0], &c3_outScale->data[0], &c3_outMetric->data[0],
    &c3_outSignOfLaplacian->data[0], &c3_outOrientation->data[0],
    &c3_outFeatures->data[0]);
  c3_emxFree_int8_T(chartInstance, &c3_b_inSignOfLaplacian);
  c3_emxFree_real32_T(chartInstance, &c3_b_inMetric);
  c3_emxFree_real32_T(chartInstance, &c3_b_inScale);
  c3_emxFree_real32_T(chartInstance, &c3_b_inLocation);
}

static void c3_normalizeX(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_c_X, c3_emxArray_real32_T *c3_d_X)
{
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_i = c3_d_X->size[0] * c3_d_X->size[1];
  c3_d_X->size[0] = 64;
  c3_d_X->size[1] = c3_c_X->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_d_X, c3_i, &c3_jd_emlrtRTEI);
  c3_loop_ub = c3_c_X->size[0] * c3_c_X->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_d_X->data[c3_i1] = c3_c_X->data[c3_i1];
  }

  c3_b_normalizeX(chartInstance, c3_d_X);
}

static void c3_findMatchesExhaustive(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_features1, c3_emxArray_real32_T
  *c3_features2, real32_T c3_matchThreshold, c3_emxArray_uint32_T *c3_indexPairs,
  c3_emxArray_real32_T *c3_matchMetric)
{
  c3_emxArray_real32_T *c3_scores;
  int32_T c3_i;
  uint32_T c3_N1;
  int32_T c3_i1;
  uint32_T c3_N2;
  uint32_T c3_b_N1;
  uint32_T c3_b_N2;
  int32_T c3_i2;
  int32_T c3_loop_ub;
  int32_T c3_i3;
  c3_emxArray_real32_T *c3_b_features2;
  int32_T c3_i4;
  int32_T c3_b_loop_ub;
  int32_T c3_i5;
  c3_emxArray_real32_T *c3_b_scores;
  uint32_T c3_c_N1;
  uint32_T c3_c_N2;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_i8;
  int32_T c3_c_loop_ub;
  int32_T c3_i9;
  int32_T c3_iv[2];
  int32_T c3_d_loop_ub;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_e_loop_ub;
  int32_T c3_i12;
  c3_emxArray_real32_T *c3_c_features2;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_i15;
  int32_T c3_f_loop_ub;
  int32_T c3_i16;
  int32_T c3_iv1[2];
  int32_T c3_g_loop_ub;
  int32_T c3_i17;
  int32_T c3_i18;
  int32_T c3_h_loop_ub;
  int32_T c3_i19;
  c3_emxArray_real32_T *c3_b_features1;
  int32_T c3_i20;
  int32_T c3_i_loop_ub;
  int32_T c3_i21;
  c3_emxArray_real32_T *c3_d_features2;
  int32_T c3_i22;
  int32_T c3_j_loop_ub;
  int32_T c3_i23;
  uint32_T c3_d_N1;
  uint32_T c3_d_N2;
  int32_T c3_i24;
  uint32_T c3_numFeatures1;
  int32_T c3_i25;
  uint32_T c3_numFeatures2;
  int32_T c3_i26;
  int32_T c3_k_loop_ub;
  int32_T c3_i27;
  c3_emxArray_real32_T *c3_r;
  int32_T c3_i28;
  int32_T c3_l_loop_ub;
  int32_T c3_i29;
  int32_T c3_i30;
  c3_emxArray_real32_T *c3_r1;
  int32_T c3_i31;
  int32_T c3_m_loop_ub;
  int32_T c3_i32;
  int32_T c3_i33;
  c3_emxArray_real32_T *c3_c_scores;
  int32_T c3_i34;
  int32_T c3_n_loop_ub;
  int32_T c3_i35;
  c3_emxArray_real32_T *c3_topTwoMetrics;
  c3_emxArray_uint32_T *c3_topTwoIndices;
  c3_emxArray_real_T *c3_d_y;
  real_T c3_d;
  real_T c3_b;
  int32_T c3_i36;
  c3_emxArray_uint32_T *c3_varargin_1;
  int32_T c3_o_loop_ub;
  int32_T c3_i37;
  int32_T c3_i38;
  int32_T c3_p_loop_ub;
  int32_T c3_i39;
  real_T c3_b_d;
  c3_emxArray_uint32_T *c3_varargin_2;
  int32_T c3_i40;
  int32_T c3_i41;
  uint32_T c3_c_u;
  int32_T c3_q_loop_ub;
  int32_T c3_i42;
  int32_T c3_result;
  int32_T c3_sizes[2];
  int32_T c3_expected;
  boolean_T c3_b_b;
  const mxArray *c3_e_y = NULL;
  static char_T c3_b_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *c3_f_y = NULL;
  const mxArray *c3_g_y = NULL;
  c3_cell_wrap_21 c3_reshapes[2];
  int32_T c3_i43;
  const mxArray *c3_h_y = NULL;
  int32_T c3_r_loop_ub;
  int32_T c3_i44;
  int32_T c3_i45;
  int32_T c3_s_loop_ub;
  int32_T c3_i46;
  int32_T c3_i47;
  int32_T c3_t_loop_ub;
  int32_T c3_i48;
  int32_T c3_i49;
  int32_T c3_u_loop_ub;
  int32_T c3_i50;
  c3_emxArray_uint32_T *c3_b_indexPairs;
  int32_T c3_i51;
  int32_T c3_v_loop_ub;
  int32_T c3_i52;
  int32_T c3_i53;
  int32_T c3_w_loop_ub;
  int32_T c3_i54;
  int32_T c3_i55;
  c3_emxArray_boolean_T *c3_inds;
  real32_T c3_b_matchThreshold;
  int32_T c3_i56;
  int32_T c3_i57;
  int32_T c3_x_loop_ub;
  int32_T c3_i58;
  int32_T c3_end;
  int32_T c3_trueCount;
  int32_T c3_b_i;
  c3_emxArray_int32_T *c3_r2;
  int32_T c3_i59;
  int32_T c3_partialTrueCount;
  int32_T c3_c_i;
  c3_emxArray_uint32_T *c3_c_indexPairs;
  int32_T c3_i60;
  int32_T c3_i61;
  int32_T c3_y_loop_ub;
  int32_T c3_i62;
  int32_T c3_i63;
  int32_T c3_i64;
  int32_T c3_ab_loop_ub;
  int32_T c3_i65;
  int32_T c3_b_end;
  int32_T c3_b_trueCount;
  int32_T c3_d_i;
  c3_emxArray_int32_T *c3_r3;
  int32_T c3_i66;
  int32_T c3_b_partialTrueCount;
  int32_T c3_e_i;
  c3_emxArray_real32_T *c3_b_topTwoMetrics;
  int32_T c3_i67;
  int32_T c3_i68;
  int32_T c3_i69;
  int32_T c3_i70;
  int32_T c3_bb_loop_ub;
  int32_T c3_i71;
  int32_T c3_cb_loop_ub;
  int32_T c3_i72;
  int32_T c3_i73;
  int32_T c3_db_loop_ub;
  int32_T c3_i74;
  uint32_T c3_e_N2;
  c3_emxArray_real32_T *c3_i_y;
  int32_T c3_i75;
  c3_emxArray_real32_T *c3_topTwoScores;
  int32_T c3_i76;
  int32_T c3_eb_loop_ub;
  int32_T c3_i77;
  int32_T c3_fb_loop_ub;
  int32_T c3_i78;
  int32_T c3_c_end;
  int32_T c3_c_trueCount;
  int32_T c3_i79;
  int32_T c3_f_i;
  int32_T c3_i80;
  c3_emxArray_int32_T *c3_r4;
  int32_T c3_i81;
  int32_T c3_gb_loop_ub;
  int32_T c3_i82;
  int32_T c3_i83;
  int32_T c3_c_partialTrueCount;
  int32_T c3_tmp_size[1];
  int32_T c3_g_i;
  int32_T c3_hb_loop_ub;
  int32_T c3_i84;
  c3_emxArray_uint32_T *c3_d_indexPairs;
  int32_T c3_d_end;
  int32_T c3_tmp_data[2];
  int32_T c3_i85;
  int32_T c3_d_trueCount;
  int32_T c3_i86;
  int32_T c3_h_i;
  c3_emxArray_int32_T *c3_r5;
  int32_T c3_ib_loop_ub;
  int32_T c3_i87;
  int32_T c3_i88;
  int32_T c3_i89;
  int32_T c3_i90;
  int32_T c3_d_partialTrueCount;
  int32_T c3_i_i;
  int32_T c3_jb_loop_ub;
  int32_T c3_iv2[2];
  int32_T c3_i91;
  int32_T c3_i92;
  int32_T c3_kb_loop_ub;
  int32_T c3_i93;
  int32_T c3_e_end;
  int32_T c3_e_trueCount;
  int32_T c3_lb_loop_ub;
  int32_T c3_j_i;
  c3_emxArray_real32_T *c3_ratios;
  int32_T c3_i94;
  c3_emxArray_int32_T *c3_r6;
  int32_T c3_i95;
  int32_T c3_i96;
  int32_T c3_i97;
  int32_T c3_e_partialTrueCount;
  int32_T c3_mb_loop_ub;
  int32_T c3_k_i;
  int32_T c3_i98;
  int32_T c3_i99;
  int32_T c3_c_topTwoMetrics;
  int32_T c3_i100;
  int32_T c3_i101;
  int32_T c3_nb_loop_ub;
  int32_T c3_ob_loop_ub;
  int32_T c3_i102;
  int32_T c3_i103;
  int32_T c3_i104;
  int32_T c3_i105;
  int32_T c3_i106;
  real_T c3_b_varargin_1[2];
  boolean_T c3_p;
  real_T c3_b_varargin_2[2];
  boolean_T c3_b_p;
  int32_T c3_pb_loop_ub;
  int32_T c3_k;
  int32_T c3_i107;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  int32_T c3_f_end;
  real_T c3_x1;
  int32_T c3_f_trueCount;
  real_T c3_x2;
  int32_T c3_l_i;
  boolean_T c3_c_p;
  boolean_T c3_d_p;
  boolean_T c3_e_p;
  c3_emxArray_int32_T *c3_r7;
  int32_T c3_i108;
  const mxArray *c3_j_y = NULL;
  int32_T c3_i109;
  static char_T c3_b_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T c3_i110;
  const mxArray *c3_k_y = NULL;
  int32_T c3_f_partialTrueCount;
  int32_T c3_m_i;
  int32_T c3_i111;
  int32_T c3_qb_loop_ub;
  int32_T c3_i112;
  int32_T c3_e_indexPairs;
  int32_T c3_i113;
  int32_T c3_i114;
  int32_T c3_rb_loop_ub;
  int32_T c3_sb_loop_ub;
  int32_T c3_i115;
  int32_T c3_i116;
  int32_T c3_i117;
  int32_T c3_g_end;
  int32_T c3_g_trueCount;
  int32_T c3_n_i;
  c3_emxArray_int32_T *c3_r8;
  int32_T c3_i118;
  int32_T c3_g_partialTrueCount;
  int32_T c3_o_i;
  int32_T c3_l_y;
  int32_T c3_i119;
  int32_T c3_tb_loop_ub;
  int32_T c3_i120;
  c3_emxInit_real32_T(chartInstance, &c3_scores, 2, &c3_sd_emlrtRTEI);
  c3_i = c3_features1->size[1];
  if (c3_i < 0) {
    c3_i = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c3_N1 = (uint32_T)c3_i;
  c3_i1 = c3_features2->size[1];
  if (c3_i1 < 0) {
    c3_i1 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c3_N2 = (uint32_T)c3_i1;
  c3_b_N1 = c3_N1;
  c3_b_N2 = c3_N2;
  c3_i2 = c3_scores->size[0] * c3_scores->size[1];
  c3_scores->size[0] = 64;
  c3_scores->size[1] = c3_features1->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_scores, c3_i2,
    &c3_kd_emlrtRTEI);
  c3_loop_ub = c3_features1->size[0] * c3_features1->size[1] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_loop_ub; c3_i3++) {
    c3_scores->data[c3_i3] = c3_features1->data[c3_i3];
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_features2, 2, &c3_ld_emlrtRTEI);
  c3_i4 = c3_b_features2->size[0] * c3_b_features2->size[1];
  c3_b_features2->size[0] = 64;
  c3_b_features2->size[1] = c3_features2->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_features2, c3_i4,
    &c3_ld_emlrtRTEI);
  c3_b_loop_ub = c3_features2->size[0] * c3_features2->size[1] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_b_loop_ub; c3_i5++) {
    c3_b_features2->data[c3_i5] = c3_features2->data[c3_i5];
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_scores, 2, &c3_md_emlrtRTEI);
  c3_c_N1 = c3_b_N1;
  c3_c_N2 = c3_b_N2;
  c3_i6 = c3_scores->size[1];
  c3_i7 = c3_scores->size[0];
  c3_i8 = c3_b_scores->size[0] * c3_b_scores->size[1];
  c3_b_scores->size[0] = c3_scores->size[1];
  c3_b_scores->size[1] = c3_scores->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_scores, c3_i8,
    &c3_md_emlrtRTEI);
  c3_c_loop_ub = c3_scores->size[0] - 1;
  for (c3_i9 = 0; c3_i9 <= c3_c_loop_ub; c3_i9++) {
    c3_d_loop_ub = c3_scores->size[1] - 1;
    for (c3_i10 = 0; c3_i10 <= c3_d_loop_ub; c3_i10++) {
      c3_b_scores->data[c3_i10 + c3_b_scores->size[0] * c3_i9] = c3_scores->
        data[c3_i9 + c3_scores->size[0] * c3_i10];
    }
  }

  c3_iv[0] = c3_i6;
  c3_iv[1] = c3_i7;
  c3_i11 = c3_scores->size[0] * c3_scores->size[1];
  c3_scores->size[0] = c3_iv[0];
  c3_scores->size[1] = c3_iv[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_scores, c3_i11,
    &c3_nd_emlrtRTEI);
  c3_e_loop_ub = c3_iv[0] * c3_iv[1] - 1;
  for (c3_i12 = 0; c3_i12 <= c3_e_loop_ub; c3_i12++) {
    c3_scores->data[c3_i12] = c3_b_scores->data[c3_i12];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_scores);
  c3_emxInit_real32_T(chartInstance, &c3_c_features2, 2, &c3_od_emlrtRTEI);
  c3_i13 = c3_b_features2->size[1];
  c3_i14 = c3_b_features2->size[0];
  c3_i15 = c3_c_features2->size[0] * c3_c_features2->size[1];
  c3_c_features2->size[0] = c3_b_features2->size[1];
  c3_c_features2->size[1] = c3_b_features2->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_features2, c3_i15,
    &c3_od_emlrtRTEI);
  c3_f_loop_ub = c3_b_features2->size[0] - 1;
  for (c3_i16 = 0; c3_i16 <= c3_f_loop_ub; c3_i16++) {
    c3_g_loop_ub = c3_b_features2->size[1] - 1;
    for (c3_i17 = 0; c3_i17 <= c3_g_loop_ub; c3_i17++) {
      c3_c_features2->data[c3_i17 + c3_c_features2->size[0] * c3_i16] =
        c3_b_features2->data[c3_i16 + c3_b_features2->size[0] * c3_i17];
    }
  }

  c3_iv1[0] = c3_i13;
  c3_iv1[1] = c3_i14;
  c3_i18 = c3_b_features2->size[0] * c3_b_features2->size[1];
  c3_b_features2->size[0] = c3_iv1[0];
  c3_b_features2->size[1] = c3_iv1[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_features2, c3_i18,
    &c3_pd_emlrtRTEI);
  c3_h_loop_ub = c3_iv1[0] * c3_iv1[1] - 1;
  for (c3_i19 = 0; c3_i19 <= c3_h_loop_ub; c3_i19++) {
    c3_b_features2->data[c3_i19] = c3_c_features2->data[c3_i19];
  }

  c3_emxFree_real32_T(chartInstance, &c3_c_features2);
  c3_emxInit_real32_T(chartInstance, &c3_b_features1, 2, &c3_qd_emlrtRTEI);
  c3_i20 = c3_b_features1->size[0] * c3_b_features1->size[1];
  c3_b_features1->size[0] = c3_scores->size[0];
  c3_b_features1->size[1] = c3_scores->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_features1, c3_i20,
    &c3_qd_emlrtRTEI);
  c3_i_loop_ub = c3_scores->size[0] * c3_scores->size[1] - 1;
  for (c3_i21 = 0; c3_i21 <= c3_i_loop_ub; c3_i21++) {
    c3_b_features1->data[c3_i21] = c3_scores->data[c3_i21];
  }

  c3_emxInit_real32_T(chartInstance, &c3_d_features2, 2, &c3_rd_emlrtRTEI);
  c3_i22 = c3_d_features2->size[0] * c3_d_features2->size[1];
  c3_d_features2->size[0] = c3_b_features2->size[0];
  c3_d_features2->size[1] = c3_b_features2->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_d_features2, c3_i22,
    &c3_rd_emlrtRTEI);
  c3_j_loop_ub = c3_b_features2->size[0] * c3_b_features2->size[1] - 1;
  for (c3_i23 = 0; c3_i23 <= c3_j_loop_ub; c3_i23++) {
    c3_d_features2->data[c3_i23] = c3_b_features2->data[c3_i23];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_features2);
  c3_d_N1 = c3_c_N1;
  c3_d_N2 = c3_c_N2;
  c3_i24 = c3_b_features1->size[0];
  if (c3_i24 < 0) {
    c3_i24 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c3_numFeatures1 = (uint32_T)c3_i24;
  c3_i25 = c3_d_features2->size[0];
  if (c3_i25 < 0) {
    c3_i25 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c3_numFeatures2 = (uint32_T)c3_i25;
  c3_i26 = c3_scores->size[0] * c3_scores->size[1];
  c3_scores->size[0] = (int32_T)c3_d_N1;
  c3_scores->size[1] = (int32_T)c3_d_N2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_scores, c3_i26,
    &c3_sd_emlrtRTEI);
  c3_k_loop_ub = (int32_T)c3_d_N1 * (int32_T)c3_d_N2 - 1;
  for (c3_i27 = 0; c3_i27 <= c3_k_loop_ub; c3_i27++) {
    c3_scores->data[c3_i27] = 0.0F;
  }

  c3_emxInit_real32_T(chartInstance, &c3_r, 2, &c3_ve_emlrtRTEI);
  c3_i28 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = 64;
  c3_r->size[1] = c3_b_features1->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_r, c3_i28, &c3_td_emlrtRTEI);
  c3_l_loop_ub = c3_b_features1->size[0] - 1;
  for (c3_i29 = 0; c3_i29 <= c3_l_loop_ub; c3_i29++) {
    for (c3_i30 = 0; c3_i30 < 64; c3_i30++) {
      c3_r->data[c3_i30 + (c3_i29 << 6)] = c3_b_features1->data[c3_i29 +
        c3_b_features1->size[0] * c3_i30];
    }
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_features1);
  c3_emxInit_real32_T(chartInstance, &c3_r1, 2, &c3_ve_emlrtRTEI);
  c3_i31 = c3_r1->size[0] * c3_r1->size[1];
  c3_r1->size[0] = 64;
  c3_r1->size[1] = c3_d_features2->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_r1, c3_i31, &c3_ud_emlrtRTEI);
  c3_m_loop_ub = c3_d_features2->size[0] - 1;
  for (c3_i32 = 0; c3_i32 <= c3_m_loop_ub; c3_i32++) {
    for (c3_i33 = 0; c3_i33 < 64; c3_i33++) {
      c3_r1->data[c3_i33 + (c3_i32 << 6)] = c3_d_features2->data[c3_i32 +
        c3_d_features2->size[0] * c3_i33];
    }
  }

  c3_emxFree_real32_T(chartInstance, &c3_d_features2);
  c3_emxInit_real32_T(chartInstance, &c3_c_scores, 2, &c3_vd_emlrtRTEI);
  ComputeMetric_ssd_single(&c3_r->data[0], &c3_r1->data[0], &c3_scores->data[0],
    c3_numFeatures1, c3_numFeatures2, 64U);
  c3_i34 = c3_c_scores->size[0] * c3_c_scores->size[1];
  c3_c_scores->size[0] = c3_scores->size[0];
  c3_c_scores->size[1] = c3_scores->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_scores, c3_i34,
    &c3_vd_emlrtRTEI);
  c3_n_loop_ub = c3_scores->size[0] * c3_scores->size[1] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_r1);
  c3_emxFree_real32_T(chartInstance, &c3_r);
  for (c3_i35 = 0; c3_i35 <= c3_n_loop_ub; c3_i35++) {
    c3_c_scores->data[c3_i35] = c3_scores->data[c3_i35];
  }

  c3_emxInit_real32_T(chartInstance, &c3_topTwoMetrics, 2, &c3_ef_emlrtRTEI);
  c3_emxInit_uint32_T(chartInstance, &c3_topTwoIndices, 2, &c3_ve_emlrtRTEI);
  c3_emxInit_real_T(chartInstance, &c3_d_y, 2, &c3_kf_emlrtRTEI);
  c3_partialSort(chartInstance, c3_c_scores, c3_topTwoMetrics, c3_topTwoIndices);
  sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1, 1,
    c3_topTwoIndices->size[0]);
  c3_d = (real_T)c3_scores->size[0];
  c3_b = c3_d;
  c3_emxFree_real32_T(chartInstance, &c3_c_scores);
  c3_emxFree_real32_T(chartInstance, &c3_scores);
  if (c3_b < 1.0) {
    c3_d_y->size[0] = 1;
    c3_d_y->size[1] = 0;
  } else {
    c3_i36 = c3_d_y->size[0] * c3_d_y->size[1];
    c3_d_y->size[0] = 1;
    c3_d_y->size[1] = (int32_T)muDoubleScalarFloor(c3_b - 1.0) + 1;
    c3_emxEnsureCapacity_real_T(chartInstance, c3_d_y, c3_i36, &c3_wd_emlrtRTEI);
    c3_o_loop_ub = (int32_T)muDoubleScalarFloor(c3_b - 1.0);
    for (c3_i38 = 0; c3_i38 <= c3_o_loop_ub; c3_i38++) {
      c3_d_y->data[c3_i38] = 1.0 + (real_T)c3_i38;
    }
  }

  c3_emxInit_uint32_T(chartInstance, &c3_varargin_1, 2, &c3_xd_emlrtRTEI);
  c3_i37 = c3_varargin_1->size[0] * c3_varargin_1->size[1];
  c3_varargin_1->size[0] = 1;
  c3_varargin_1->size[1] = c3_d_y->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_varargin_1, c3_i37,
    &c3_xd_emlrtRTEI);
  c3_p_loop_ub = c3_d_y->size[0] * c3_d_y->size[1] - 1;
  for (c3_i39 = 0; c3_i39 <= c3_p_loop_ub; c3_i39++) {
    c3_b_d = muDoubleScalarRound(c3_d_y->data[c3_i39]);
    if (c3_b_d < 4.294967296E+9) {
      if (c3_b_d >= 0.0) {
        c3_c_u = (uint32_T)c3_b_d;
      } else {
        c3_c_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c3_b_d >= 4.294967296E+9) {
      c3_c_u = MAX_uint32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c3_c_u = 0U;
    }

    c3_varargin_1->data[c3_i39] = c3_c_u;
  }

  c3_emxFree_real_T(chartInstance, &c3_d_y);
  c3_emxInit_uint32_T(chartInstance, &c3_varargin_2, 2, &c3_yd_emlrtRTEI);
  c3_i40 = c3_topTwoIndices->size[1] - 1;
  c3_i41 = c3_varargin_2->size[0] * c3_varargin_2->size[1];
  c3_varargin_2->size[0] = 1;
  c3_varargin_2->size[1] = c3_i40 + 1;
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_varargin_2, c3_i41,
    &c3_yd_emlrtRTEI);
  c3_q_loop_ub = c3_i40;
  for (c3_i42 = 0; c3_i42 <= c3_q_loop_ub; c3_i42++) {
    c3_varargin_2->data[c3_i42] = c3_topTwoIndices->data[c3_topTwoIndices->size
      [0] * c3_i42];
  }

  c3_emxFree_uint32_T(chartInstance, &c3_topTwoIndices);
  c3_result = c3_varargin_1->size[1];
  c3_sizes[1] = c3_result;
  c3_expected = c3_sizes[1];
  if (c3_varargin_1->size[1] == c3_expected) {
    c3_b_b = true;
  } else {
    c3_b_b = false;
  }

  if (!c3_b_b) {
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_e_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14, c3_f_y)));
  }

  if (c3_varargin_2->size[1] == c3_expected) {
    c3_b_b = true;
  } else {
    c3_b_b = false;
  }

  if (!c3_b_b) {
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_g_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14, c3_h_y)));
  }

  c3_emxInitMatrix_cell_wrap_21(chartInstance, c3_reshapes, &c3_mf_emlrtRTEI);
  c3_i43 = c3_reshapes[0].f1->size[0] * c3_reshapes[0].f1->size[1];
  c3_reshapes[0].f1->size[0] = 1;
  c3_reshapes[0].f1->size[1] = c3_varargin_1->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_reshapes[0].f1, c3_i43,
    &c3_ae_emlrtRTEI);
  c3_r_loop_ub = c3_varargin_1->size[0] * c3_varargin_1->size[1] - 1;
  for (c3_i44 = 0; c3_i44 <= c3_r_loop_ub; c3_i44++) {
    c3_reshapes[0].f1->data[c3_i44] = c3_varargin_1->data[c3_i44];
  }

  c3_i45 = c3_reshapes[1].f1->size[0] * c3_reshapes[1].f1->size[1];
  c3_reshapes[1].f1->size[0] = 1;
  c3_reshapes[1].f1->size[1] = c3_varargin_2->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_reshapes[1].f1, c3_i45,
    &c3_ae_emlrtRTEI);
  c3_s_loop_ub = c3_varargin_2->size[0] * c3_varargin_2->size[1] - 1;
  for (c3_i46 = 0; c3_i46 <= c3_s_loop_ub; c3_i46++) {
    c3_reshapes[1].f1->data[c3_i46] = c3_varargin_2->data[c3_i46];
  }

  c3_i47 = c3_varargin_1->size[0] * c3_varargin_1->size[1];
  c3_varargin_1->size[0] = 1;
  c3_varargin_1->size[1] = c3_reshapes[0].f1->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_varargin_1, c3_i47,
    &c3_be_emlrtRTEI);
  c3_t_loop_ub = c3_reshapes[0].f1->size[0] * c3_reshapes[0].f1->size[1] - 1;
  for (c3_i48 = 0; c3_i48 <= c3_t_loop_ub; c3_i48++) {
    c3_varargin_1->data[c3_i48] = c3_reshapes[0].f1->data[c3_i48];
  }

  c3_i49 = c3_varargin_2->size[0] * c3_varargin_2->size[1];
  c3_varargin_2->size[0] = 1;
  c3_varargin_2->size[1] = c3_reshapes[1].f1->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_varargin_2, c3_i49,
    &c3_be_emlrtRTEI);
  c3_u_loop_ub = c3_reshapes[1].f1->size[0] * c3_reshapes[1].f1->size[1] - 1;
  for (c3_i50 = 0; c3_i50 <= c3_u_loop_ub; c3_i50++) {
    c3_varargin_2->data[c3_i50] = c3_reshapes[1].f1->data[c3_i50];
  }

  c3_emxFreeMatrix_cell_wrap_21(chartInstance, c3_reshapes);
  c3_emxInit_uint32_T(chartInstance, &c3_b_indexPairs, 2, &c3_bf_emlrtRTEI);
  c3_i51 = c3_b_indexPairs->size[0] * c3_b_indexPairs->size[1];
  c3_b_indexPairs->size[0] = 2;
  c3_b_indexPairs->size[1] = c3_varargin_1->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_b_indexPairs, c3_i51,
    &c3_ce_emlrtRTEI);
  c3_v_loop_ub = c3_varargin_1->size[1] - 1;
  c3_i52 = 0;
  for (c3_i53 = 0; c3_i53 <= c3_v_loop_ub; c3_i53++) {
    c3_b_indexPairs->data[c3_i52] = c3_varargin_1->data[c3_i53];
    c3_i52 += 2;
  }

  c3_emxFree_uint32_T(chartInstance, &c3_varargin_1);
  c3_w_loop_ub = c3_varargin_2->size[1] - 1;
  c3_i54 = 0;
  for (c3_i55 = 0; c3_i55 <= c3_w_loop_ub; c3_i55++) {
    c3_b_indexPairs->data[c3_i54 + 1] = c3_varargin_2->data[c3_i55];
    c3_i54 += 2;
  }

  c3_emxFree_uint32_T(chartInstance, &c3_varargin_2);
  c3_emxInit_boolean_T1(chartInstance, &c3_inds, 2, &c3_ff_emlrtRTEI);
  c3_b_matchThreshold = c3_matchThreshold;
  sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1, 1,
    c3_topTwoMetrics->size[0]);
  c3_i56 = c3_topTwoMetrics->size[1] - 1;
  c3_i57 = c3_inds->size[0] * c3_inds->size[1];
  c3_inds->size[0] = 1;
  c3_inds->size[1] = c3_i56 + 1;
  c3_emxEnsureCapacity_boolean_T1(chartInstance, c3_inds, c3_i57,
    &c3_de_emlrtRTEI);
  c3_x_loop_ub = c3_i56;
  for (c3_i58 = 0; c3_i58 <= c3_x_loop_ub; c3_i58++) {
    c3_inds->data[c3_i58] = (c3_topTwoMetrics->data[c3_topTwoMetrics->size[0] *
      c3_i58] <= c3_b_matchThreshold);
  }

  c3_end = c3_inds->size[1] - 1;
  c3_trueCount = 0;
  for (c3_b_i = 0; c3_b_i <= c3_end; c3_b_i++) {
    if (c3_inds->data[c3_b_i]) {
      c3_trueCount++;
    }
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r2, 2, &c3_gf_emlrtRTEI);
  c3_i59 = c3_r2->size[0] * c3_r2->size[1];
  c3_r2->size[0] = 1;
  c3_r2->size[1] = c3_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r2, c3_i59, &c3_ee_emlrtRTEI);
  c3_partialTrueCount = 0;
  for (c3_c_i = 0; c3_c_i <= c3_end; c3_c_i++) {
    if (c3_inds->data[c3_c_i]) {
      c3_r2->data[c3_partialTrueCount] = c3_c_i + 1;
      c3_partialTrueCount++;
    }
  }

  c3_emxInit_uint32_T(chartInstance, &c3_c_indexPairs, 2, &c3_fe_emlrtRTEI);
  c3_i60 = c3_b_indexPairs->size[1];
  c3_i61 = c3_c_indexPairs->size[0] * c3_c_indexPairs->size[1];
  c3_c_indexPairs->size[0] = 2;
  c3_c_indexPairs->size[1] = c3_r2->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_c_indexPairs, c3_i61,
    &c3_fe_emlrtRTEI);
  c3_y_loop_ub = c3_r2->size[1] - 1;
  for (c3_i62 = 0; c3_i62 <= c3_y_loop_ub; c3_i62++) {
    for (c3_i63 = 0; c3_i63 < 2; c3_i63++) {
      c3_c_indexPairs->data[c3_i63 + (c3_i62 << 1)] = c3_b_indexPairs->
        data[c3_i63 + ((sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0,
        0, MAX_uint32_T, c3_r2->data[c3_i62], 1, c3_i60) - 1) << 1)];
    }
  }

  c3_emxFree_int32_T(chartInstance, &c3_r2);
  c3_i64 = c3_b_indexPairs->size[0] * c3_b_indexPairs->size[1];
  c3_b_indexPairs->size[0] = 2;
  c3_b_indexPairs->size[1] = c3_c_indexPairs->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_b_indexPairs, c3_i64,
    &c3_ge_emlrtRTEI);
  c3_ab_loop_ub = c3_c_indexPairs->size[0] * c3_c_indexPairs->size[1] - 1;
  for (c3_i65 = 0; c3_i65 <= c3_ab_loop_ub; c3_i65++) {
    c3_b_indexPairs->data[c3_i65] = c3_c_indexPairs->data[c3_i65];
  }

  c3_emxFree_uint32_T(chartInstance, &c3_c_indexPairs);
  c3_b_end = c3_inds->size[1] - 1;
  c3_b_trueCount = 0;
  for (c3_d_i = 0; c3_d_i <= c3_b_end; c3_d_i++) {
    if (c3_inds->data[c3_d_i]) {
      c3_b_trueCount++;
    }
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r3, 2, &c3_hf_emlrtRTEI);
  c3_i66 = c3_r3->size[0] * c3_r3->size[1];
  c3_r3->size[0] = 1;
  c3_r3->size[1] = c3_b_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r3, c3_i66, &c3_ee_emlrtRTEI);
  c3_b_partialTrueCount = 0;
  for (c3_e_i = 0; c3_e_i <= c3_b_end; c3_e_i++) {
    if (c3_inds->data[c3_e_i]) {
      c3_r3->data[c3_b_partialTrueCount] = c3_e_i + 1;
      c3_b_partialTrueCount++;
    }
  }

  c3_emxInit_real32_T(chartInstance, &c3_b_topTwoMetrics, 2, &c3_he_emlrtRTEI);
  c3_i67 = c3_topTwoMetrics->size[0];
  c3_i68 = c3_topTwoMetrics->size[1];
  c3_i69 = c3_i67 - 1;
  c3_i70 = c3_b_topTwoMetrics->size[0] * c3_b_topTwoMetrics->size[1];
  c3_b_topTwoMetrics->size[0] = c3_i69 + 1;
  c3_b_topTwoMetrics->size[1] = c3_r3->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_topTwoMetrics, c3_i70,
    &c3_he_emlrtRTEI);
  c3_bb_loop_ub = c3_r3->size[1] - 1;
  for (c3_i71 = 0; c3_i71 <= c3_bb_loop_ub; c3_i71++) {
    c3_cb_loop_ub = c3_i69;
    for (c3_i73 = 0; c3_i73 <= c3_cb_loop_ub; c3_i73++) {
      c3_b_topTwoMetrics->data[c3_i73 + c3_b_topTwoMetrics->size[0] * c3_i71] =
        c3_topTwoMetrics->data[c3_i73 + c3_topTwoMetrics->size[0] *
        (sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, c3_r3->data[c3_i71], 1, c3_i68) - 1)];
    }
  }

  c3_emxFree_int32_T(chartInstance, &c3_r3);
  c3_i72 = c3_topTwoMetrics->size[0] * c3_topTwoMetrics->size[1];
  c3_topTwoMetrics->size[0] = c3_b_topTwoMetrics->size[0];
  c3_topTwoMetrics->size[1] = c3_b_topTwoMetrics->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_topTwoMetrics, c3_i72,
    &c3_ie_emlrtRTEI);
  c3_db_loop_ub = c3_b_topTwoMetrics->size[0] * c3_b_topTwoMetrics->size[1] - 1;
  for (c3_i74 = 0; c3_i74 <= c3_db_loop_ub; c3_i74++) {
    c3_topTwoMetrics->data[c3_i74] = c3_b_topTwoMetrics->data[c3_i74];
  }

  c3_emxFree_real32_T(chartInstance, &c3_b_topTwoMetrics);
  c3_e_N2 = c3_N2;
  c3_emxInit_real32_T(chartInstance, &c3_i_y, 2, &c3_te_emlrtRTEI);
  if ((real_T)c3_e_N2 > 1.0) {
    c3_emxInit_real32_T(chartInstance, &c3_topTwoScores, 2, &c3_ke_emlrtRTEI);
    c3_i76 = c3_topTwoScores->size[0] * c3_topTwoScores->size[1];
    c3_topTwoScores->size[0] = c3_topTwoMetrics->size[0];
    c3_topTwoScores->size[1] = c3_topTwoMetrics->size[1];
    c3_emxEnsureCapacity_real32_T(chartInstance, c3_topTwoScores, c3_i76,
      &c3_ke_emlrtRTEI);
    c3_fb_loop_ub = c3_topTwoMetrics->size[0] * c3_topTwoMetrics->size[1] - 1;
    for (c3_i78 = 0; c3_i78 <= c3_fb_loop_ub; c3_i78++) {
      c3_topTwoScores->data[c3_i78] = c3_topTwoMetrics->data[c3_i78];
    }

    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 2,
      1, c3_topTwoScores->size[0]);
    c3_i79 = c3_topTwoScores->size[1] - 1;
    c3_i80 = c3_inds->size[0] * c3_inds->size[1];
    c3_inds->size[0] = 1;
    c3_inds->size[1] = c3_i79 + 1;
    c3_emxEnsureCapacity_boolean_T1(chartInstance, c3_inds, c3_i80,
      &c3_le_emlrtRTEI);
    c3_gb_loop_ub = c3_i79;
    for (c3_i82 = 0; c3_i82 <= c3_gb_loop_ub; c3_i82++) {
      c3_inds->data[c3_i82] = (c3_topTwoScores->data[1 + c3_topTwoScores->size[0]
        * c3_i82] < 1.0E-6F);
    }

    c3_i83 = c3_topTwoScores->size[0];
    c3_tmp_size[0] = c3_i83;
    c3_hb_loop_ub = c3_i83 - 1;
    for (c3_i84 = 0; c3_i84 <= c3_hb_loop_ub; c3_i84++) {
      c3_tmp_data[c3_i84] = 1 + c3_i84;
    }

    c3_d_end = c3_inds->size[1] - 1;
    c3_d_trueCount = 0;
    for (c3_h_i = 0; c3_h_i <= c3_d_end; c3_h_i++) {
      if (c3_inds->data[c3_h_i]) {
        c3_d_trueCount++;
      }
    }

    c3_emxInit_int32_T1(chartInstance, &c3_r5, 2, &c3_lf_emlrtRTEI);
    c3_i87 = c3_r5->size[0] * c3_r5->size[1];
    c3_r5->size[0] = 1;
    c3_r5->size[1] = c3_d_trueCount;
    c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r5, c3_i87, &c3_pe_emlrtRTEI);
    c3_d_partialTrueCount = 0;
    for (c3_i_i = 0; c3_i_i <= c3_d_end; c3_i_i++) {
      if (c3_inds->data[c3_i_i]) {
        c3_r5->data[c3_d_partialTrueCount] = c3_i_i + 1;
        c3_d_partialTrueCount++;
      }
    }

    c3_iv2[0] = c3_tmp_size[0];
    c3_iv2[1] = c3_r5->size[1];
    c3_i92 = c3_topTwoScores->size[1];
    c3_kb_loop_ub = c3_iv2[1] - 1;
    for (c3_i93 = 0; c3_i93 <= c3_kb_loop_ub; c3_i93++) {
      c3_lb_loop_ub = c3_iv2[0] - 1;
      for (c3_i94 = 0; c3_i94 <= c3_lb_loop_ub; c3_i94++) {
        c3_topTwoScores->data[(c3_tmp_data[c3_i94] + c3_topTwoScores->size[0] *
          (sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, c3_r5->data[c3_i93], 1, c3_i92) - 1)) - 1] = 1.0F;
      }
    }

    c3_emxFree_int32_T(chartInstance, &c3_r5);
    c3_emxInit_real32_T(chartInstance, &c3_ratios, 2, &c3_xe_emlrtRTEI);
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1,
      1, c3_topTwoScores->size[0]);
    sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 2,
      1, c3_topTwoScores->size[0]);
    c3_i95 = c3_topTwoScores->size[1] - 1;
    c3_i97 = c3_ratios->size[0] * c3_ratios->size[1];
    c3_ratios->size[0] = 1;
    c3_ratios->size[1] = c3_i95 + 1;
    c3_emxEnsureCapacity_real32_T(chartInstance, c3_ratios, c3_i97,
      &c3_re_emlrtRTEI);
    c3_mb_loop_ub = c3_i95;
    for (c3_i98 = 0; c3_i98 <= c3_mb_loop_ub; c3_i98++) {
      c3_ratios->data[c3_i98] = c3_topTwoScores->data[c3_topTwoScores->size[0] *
        c3_i98];
    }

    c3_i99 = c3_topTwoScores->size[1] - 1;
    c3_i100 = c3_i_y->size[0] * c3_i_y->size[1];
    c3_i_y->size[0] = 1;
    c3_i_y->size[1] = c3_i99 + 1;
    c3_emxEnsureCapacity_real32_T(chartInstance, c3_i_y, c3_i100,
      &c3_te_emlrtRTEI);
    c3_nb_loop_ub = c3_i99;
    for (c3_i102 = 0; c3_i102 <= c3_nb_loop_ub; c3_i102++) {
      c3_i_y->data[c3_i102] = c3_topTwoScores->data[1 + c3_topTwoScores->size[0]
        * c3_i102];
    }

    c3_emxFree_real32_T(chartInstance, &c3_topTwoScores);
    for (c3_i104 = 0; c3_i104 < 2; c3_i104++) {
      c3_b_varargin_1[c3_i104] = (real_T)c3_ratios->size[c3_i104];
    }

    for (c3_i106 = 0; c3_i106 < 2; c3_i106++) {
      c3_b_varargin_2[c3_i106] = (real_T)c3_i_y->size[c3_i106];
    }

    c3_p = false;
    c3_b_p = true;
    c3_k = 0;
    c3_exitg1 = false;
    while ((!c3_exitg1) && (c3_k < 2)) {
      c3_b_k = (real_T)c3_k + 1.0;
      c3_x1 = c3_b_varargin_1[(int32_T)c3_b_k - 1];
      c3_x2 = c3_b_varargin_2[(int32_T)c3_b_k - 1];
      c3_d_p = (c3_x1 == c3_x2);
      if (!c3_d_p) {
        c3_b_p = false;
        c3_exitg1 = true;
      } else {
        c3_k++;
      }
    }

    if (c3_b_p) {
      c3_p = true;
    }

    if (c3_p) {
      c3_c_p = true;
    } else {
      c3_c_p = false;
    }

    c3_e_p = c3_c_p;
    if (!c3_e_p) {
      c3_j_y = NULL;
      sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        15), false);
      c3_k_y = NULL;
      sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        15), false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_j_y, 14,
                  sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U,
        14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14,
                        c3_k_y)));
    }

    c3_i109 = c3_ratios->size[0] * c3_ratios->size[1];
    c3_i110 = c3_ratios->size[0] * c3_ratios->size[1];
    c3_ratios->size[0] = 1;
    c3_emxEnsureCapacity_real32_T(chartInstance, c3_ratios, c3_i110,
      &c3_xe_emlrtRTEI);
    c3_i111 = c3_i109;
    c3_qb_loop_ub = c3_i111 - 1;
    for (c3_i112 = 0; c3_i112 <= c3_qb_loop_ub; c3_i112++) {
      c3_ratios->data[c3_i112] /= c3_i_y->data[c3_i112];
    }

    c3_i114 = c3_inds->size[0] * c3_inds->size[1];
    c3_inds->size[0] = 1;
    c3_inds->size[1] = c3_ratios->size[1];
    c3_emxEnsureCapacity_boolean_T1(chartInstance, c3_inds, c3_i114,
      &c3_ye_emlrtRTEI);
    c3_sb_loop_ub = c3_ratios->size[0] * c3_ratios->size[1] - 1;
    for (c3_i116 = 0; c3_i116 <= c3_sb_loop_ub; c3_i116++) {
      c3_inds->data[c3_i116] = ((real_T)c3_ratios->data[c3_i116] <= 0.6);
    }

    c3_emxFree_real32_T(chartInstance, &c3_ratios);
  } else {
    c3_i75 = c3_inds->size[0] * c3_inds->size[1];
    c3_inds->size[0] = 1;
    c3_inds->size[1] = c3_topTwoMetrics->size[1];
    c3_emxEnsureCapacity_boolean_T1(chartInstance, c3_inds, c3_i75,
      &c3_je_emlrtRTEI);
    c3_eb_loop_ub = c3_topTwoMetrics->size[1] - 1;
    for (c3_i77 = 0; c3_i77 <= c3_eb_loop_ub; c3_i77++) {
      c3_inds->data[c3_i77] = true;
    }
  }

  c3_c_end = c3_inds->size[1] - 1;
  c3_c_trueCount = 0;
  for (c3_f_i = 0; c3_f_i <= c3_c_end; c3_f_i++) {
    if (c3_inds->data[c3_f_i]) {
      c3_c_trueCount++;
    }
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r4, 2, &c3_if_emlrtRTEI);
  c3_i81 = c3_r4->size[0] * c3_r4->size[1];
  c3_r4->size[0] = 1;
  c3_r4->size[1] = c3_c_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r4, c3_i81, &c3_me_emlrtRTEI);
  c3_c_partialTrueCount = 0;
  for (c3_g_i = 0; c3_g_i <= c3_c_end; c3_g_i++) {
    if (c3_inds->data[c3_g_i]) {
      c3_r4->data[c3_c_partialTrueCount] = c3_g_i + 1;
      c3_c_partialTrueCount++;
    }
  }

  c3_emxInit_uint32_T(chartInstance, &c3_d_indexPairs, 2, &c3_oe_emlrtRTEI);
  c3_i85 = c3_b_indexPairs->size[1];
  c3_i86 = c3_d_indexPairs->size[0] * c3_d_indexPairs->size[1];
  c3_d_indexPairs->size[0] = 2;
  c3_d_indexPairs->size[1] = c3_r4->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_d_indexPairs, c3_i86,
    &c3_oe_emlrtRTEI);
  c3_ib_loop_ub = c3_r4->size[1] - 1;
  for (c3_i88 = 0; c3_i88 <= c3_ib_loop_ub; c3_i88++) {
    for (c3_i89 = 0; c3_i89 < 2; c3_i89++) {
      c3_d_indexPairs->data[c3_i89 + (c3_i88 << 1)] = c3_b_indexPairs->
        data[c3_i89 + ((sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0,
        0, MAX_uint32_T, c3_r4->data[c3_i88], 1, c3_i85) - 1) << 1)];
    }
  }

  c3_emxFree_int32_T(chartInstance, &c3_r4);
  c3_i90 = c3_b_indexPairs->size[0] * c3_b_indexPairs->size[1];
  c3_b_indexPairs->size[0] = 2;
  c3_b_indexPairs->size[1] = c3_d_indexPairs->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_b_indexPairs, c3_i90,
    &c3_qe_emlrtRTEI);
  c3_jb_loop_ub = c3_d_indexPairs->size[0] * c3_d_indexPairs->size[1] - 1;
  for (c3_i91 = 0; c3_i91 <= c3_jb_loop_ub; c3_i91++) {
    c3_b_indexPairs->data[c3_i91] = c3_d_indexPairs->data[c3_i91];
  }

  c3_emxFree_uint32_T(chartInstance, &c3_d_indexPairs);
  sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T, 1, 1,
    c3_topTwoMetrics->size[0]);
  c3_e_end = c3_inds->size[1] - 1;
  c3_e_trueCount = 0;
  for (c3_j_i = 0; c3_j_i <= c3_e_end; c3_j_i++) {
    if (c3_inds->data[c3_j_i]) {
      c3_e_trueCount++;
    }
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r6, 2, &c3_jf_emlrtRTEI);
  c3_i96 = c3_r6->size[0] * c3_r6->size[1];
  c3_r6->size[0] = 1;
  c3_r6->size[1] = c3_e_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r6, c3_i96, &c3_me_emlrtRTEI);
  c3_e_partialTrueCount = 0;
  for (c3_k_i = 0; c3_k_i <= c3_e_end; c3_k_i++) {
    if (c3_inds->data[c3_k_i]) {
      c3_r6->data[c3_e_partialTrueCount] = c3_k_i + 1;
      c3_e_partialTrueCount++;
    }
  }

  c3_c_topTwoMetrics = c3_topTwoMetrics->size[1];
  c3_i101 = c3_i_y->size[0] * c3_i_y->size[1];
  c3_i_y->size[0] = 1;
  c3_i_y->size[1] = c3_r6->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_i_y, c3_i101, &c3_se_emlrtRTEI);
  c3_ob_loop_ub = c3_r6->size[1] - 1;
  for (c3_i103 = 0; c3_i103 <= c3_ob_loop_ub; c3_i103++) {
    c3_i_y->data[c3_i103] = c3_topTwoMetrics->data[c3_topTwoMetrics->size[0] *
      (sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T,
        c3_r6->data[c3_i103], 1, c3_c_topTwoMetrics) - 1)];
  }

  c3_emxFree_int32_T(chartInstance, &c3_r6);
  c3_emxFree_real32_T(chartInstance, &c3_topTwoMetrics);
  c3_i105 = c3_inds->size[0] * c3_inds->size[1];
  c3_inds->size[0] = 1;
  c3_inds->size[1] = c3_b_indexPairs->size[1];
  c3_emxEnsureCapacity_boolean_T1(chartInstance, c3_inds, c3_i105,
    &c3_ue_emlrtRTEI);
  c3_pb_loop_ub = c3_b_indexPairs->size[1] - 1;
  for (c3_i107 = 0; c3_i107 <= c3_pb_loop_ub; c3_i107++) {
    c3_inds->data[c3_i107] = true;
  }

  c3_sizes[0] = 1;
  c3_sizes[1] = c3_b_indexPairs->size[1];
  c3_f_end = c3_sizes[1] - 1;
  c3_f_trueCount = 0;
  for (c3_l_i = 0; c3_l_i <= c3_f_end; c3_l_i++) {
    c3_f_trueCount++;
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r7, 2, &c3_cf_emlrtRTEI);
  c3_i108 = c3_r7->size[0] * c3_r7->size[1];
  c3_r7->size[0] = 1;
  c3_r7->size[1] = c3_f_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r7, c3_i108, &c3_ve_emlrtRTEI);
  c3_f_partialTrueCount = 0;
  for (c3_m_i = 1; c3_m_i - 1 <= c3_f_end; c3_m_i++) {
    c3_r7->data[c3_f_partialTrueCount] = c3_m_i;
    c3_f_partialTrueCount++;
  }

  c3_e_indexPairs = c3_b_indexPairs->size[1];
  c3_i113 = c3_indexPairs->size[0] * c3_indexPairs->size[1];
  c3_indexPairs->size[0] = 2;
  c3_indexPairs->size[1] = c3_r7->size[1];
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_indexPairs, c3_i113,
    &c3_we_emlrtRTEI);
  c3_rb_loop_ub = c3_r7->size[1] - 1;
  for (c3_i115 = 0; c3_i115 <= c3_rb_loop_ub; c3_i115++) {
    for (c3_i117 = 0; c3_i117 < 2; c3_i117++) {
      c3_indexPairs->data[c3_i117 + (c3_i115 << 1)] = c3_b_indexPairs->
        data[c3_i117 + ((sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0,
        0, MAX_uint32_T, c3_r7->data[c3_i115], 1, c3_e_indexPairs) - 1) << 1)];
    }
  }

  c3_emxFree_int32_T(chartInstance, &c3_r7);
  c3_emxFree_uint32_T(chartInstance, &c3_b_indexPairs);
  c3_g_end = c3_inds->size[1] - 1;
  c3_g_trueCount = 0;
  for (c3_n_i = 0; c3_n_i <= c3_g_end; c3_n_i++) {
    if (c3_inds->data[c3_n_i]) {
      c3_g_trueCount++;
    }
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r8, 2, &c3_df_emlrtRTEI);
  c3_i118 = c3_r8->size[0] * c3_r8->size[1];
  c3_r8->size[0] = 1;
  c3_r8->size[1] = c3_g_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r8, c3_i118, &c3_ve_emlrtRTEI);
  c3_g_partialTrueCount = 0;
  for (c3_o_i = 0; c3_o_i <= c3_g_end; c3_o_i++) {
    if (c3_inds->data[c3_o_i]) {
      c3_r8->data[c3_g_partialTrueCount] = c3_o_i + 1;
      c3_g_partialTrueCount++;
    }
  }

  c3_emxFree_boolean_T(chartInstance, &c3_inds);
  c3_l_y = c3_i_y->size[1];
  c3_i119 = c3_matchMetric->size[0] * c3_matchMetric->size[1];
  c3_matchMetric->size[0] = 1;
  c3_matchMetric->size[1] = c3_r8->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_matchMetric, c3_i119,
    &c3_af_emlrtRTEI);
  c3_tb_loop_ub = c3_r8->size[1] - 1;
  for (c3_i120 = 0; c3_i120 <= c3_tb_loop_ub; c3_i120++) {
    c3_matchMetric->data[c3_i120] = c3_i_y->data[sf_eml_array_bounds_check(NULL,
      chartInstance->S, 1U, 0, 0, MAX_uint32_T, c3_r8->data[c3_i120], 1, c3_l_y)
      - 1];
  }

  c3_emxFree_real32_T(chartInstance, &c3_i_y);
  c3_emxFree_int32_T(chartInstance, &c3_r8);
}

static void c3_partialSort(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_x, c3_emxArray_real32_T *c3_values,
  c3_emxArray_uint32_T *c3_indices)
{
  real_T c3_n;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_emxArray_real_T *c3_b_indices;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  boolean_T c3_b;
  boolean_T c3_b1;
  real_T c3_b_x;
  int32_T c3_i4;
  real_T c3_c_x;
  real_T c3_d_x;
  real_T c3_e_x;
  int32_T c3_c_loop_ub;
  real_T c3_f_x;
  real_T c3_f;
  int32_T c3_i5;
  real_T c3_fdbl;
  int32_T c3_eint;
  real_T c3_t;
  real_T c3_d;
  real_T c3_inte;
  c3_emxArray_real32_T *c3_xSorted;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_b_i;
  c3_emxArray_real_T *c3_inds;
  uint32_T c3_c_u;
  c3_emxArray_real_T *c3_indx;
  c3_emxArray_real_T *c3_varargin_2;
  int32_T c3_d_loop_ub;
  c3_emxArray_int32_T *c3_idx;
  int32_T c3_i8;
  c3_emxArray_int32_T *c3_b_b;
  c3_emxArray_real32_T *c3_ex;
  c3_emxArray_real_T *c3_b_inds;
  c3_emxArray_int32_T *c3_b_idx;
  c3_emxArray_int32_T *c3_iidx;
  c3_emxArray_real_T *c3_b_varargin_2;
  c3_emxArray_real_T *c3_c_inds;
  int32_T c3_i9;
  real_T c3_c_i;
  int32_T c3_e_loop_ub;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i10;
  int32_T c3_m;
  static char_T c3_b_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T c3_b_n;
  const mxArray *c3_e_y = NULL;
  int32_T c3_siz[2];
  boolean_T c3_b2;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_i15;
  int32_T c3_i16;
  int32_T c3_f_loop_ub;
  int32_T c3_g_loop_ub;
  int32_T c3_i17;
  int32_T c3_h_loop_ub;
  int32_T c3_i18;
  int32_T c3_i19;
  real_T c3_d1;
  int32_T c3_c_b;
  int32_T c3_i_loop_ub;
  int32_T c3_i20;
  int32_T c3_d_b;
  boolean_T c3_b3;
  int32_T c3_i21;
  uint32_T c3_u1;
  boolean_T c3_overflow;
  int32_T c3_i22;
  int32_T c3_j_loop_ub;
  int32_T c3_i23;
  int32_T c3_i24;
  int32_T c3_i25;
  int32_T c3_i26;
  int32_T c3_d_i;
  int32_T c3_i27;
  int32_T c3_i28;
  int32_T c3_e_b;
  int32_T c3_e_i;
  int32_T c3_k_loop_ub;
  int32_T c3_f_b;
  int32_T c3_i29;
  int32_T c3_l_loop_ub;
  int32_T c3_i30;
  boolean_T c3_b_overflow;
  int32_T c3_m_loop_ub;
  int32_T c3_i31;
  int32_T c3_iv[2];
  int32_T c3_j;
  int32_T c3_iv1[2];
  int32_T c3_i32;
  int32_T c3_g_b;
  int32_T c3_n_loop_ub;
  int32_T c3_h_b;
  int32_T c3_i33;
  boolean_T c3_c_overflow;
  int32_T c3_i34;
  int32_T c3_i35;
  int32_T c3_i36;
  int32_T c3_f_i;
  int32_T c3_o_loop_ub;
  int32_T c3_i37;
  real32_T c3_a;
  int32_T c3_iv2[2];
  real32_T c3_i_b;
  real32_T c3_b_a;
  real32_T c3_j_b;
  int32_T c3_iv3[2];
  real32_T c3_g_x;
  boolean_T c3_k_b;
  int32_T c3_i38;
  int32_T c3_p_loop_ub;
  real32_T c3_h_x;
  boolean_T c3_p;
  int32_T c3_i39;
  boolean_T c3_l_b;
  real_T c3_b_d;
  real_T c3_m_b;
  int32_T c3_i40;
  int32_T c3_i41;
  int32_T c3_q_loop_ub;
  int32_T c3_i42;
  int32_T c3_i43;
  real_T c3_b_siz[2];
  int32_T c3_g_i;
  int32_T c3_i44;
  int32_T c3_r_loop_ub;
  int32_T c3_i45;
  int32_T c3_i46;
  int32_T c3_hi;
  int32_T c3_i47;
  int32_T c3_s_loop_ub;
  int32_T c3_i48;
  const mxArray *c3_f_y = NULL;
  int32_T c3_i49;
  static char_T c3_b_cv1[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O',
    'f', 'R', 'a', 'n', 'g', 'e' };

  const mxArray *c3_g_y = NULL;
  int32_T c3_i50;
  boolean_T c3_b_p;
  real_T c3_c_varargin_2[2];
  boolean_T c3_c_p;
  int32_T c3_k;
  boolean_T c3_exitg1;
  real_T c3_b_k;
  real_T c3_x1;
  real_T c3_x2;
  const mxArray *c3_h_y = NULL;
  boolean_T c3_d_p;
  static char_T c3_b_cv2[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't',
    'V', 'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

  int32_T c3_i51;
  const mxArray *c3_i_y = NULL;
  int32_T c3_t_loop_ub;
  int32_T c3_i52;
  const mxArray *c3_j_y = NULL;
  int32_T c3_psiz;
  int32_T c3_i53;
  const mxArray *c3_k_y = NULL;
  int32_T c3_u_loop_ub;
  int32_T c3_i54;
  int32_T c3_c_a;
  int32_T c3_i55;
  int32_T c3_v_loop_ub;
  int32_T c3_i56;
  int32_T c3_i57;
  int32_T c3_i58;
  int32_T c3_i59;
  int32_T c3_w_loop_ub;
  int32_T c3_i60;
  int32_T c3_i61;
  int32_T c3_i62;
  int32_T c3_i63;
  int32_T c3_x_loop_ub;
  int32_T c3_i64;
  int32_T c3_i65;
  int32_T c3_y_loop_ub;
  int32_T c3_i66;
  int32_T c3_i67;
  int32_T c3_i_x;
  int32_T c3_ab_loop_ub;
  int32_T c3_i68;
  int32_T c3_i69;
  int32_T c3_bb_loop_ub;
  int32_T c3_i70;
  c3_n = 2.0;
  if (2.0 > (real_T)c3_x->size[1]) {
    c3_n = (real_T)c3_x->size[1];
  }

  c3_i = c3_values->size[0] * c3_values->size[1];
  c3_values->size[0] = (int32_T)c3_n;
  c3_values->size[1] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_values, c3_i, &c3_nf_emlrtRTEI);
  c3_loop_ub = (int32_T)c3_n * c3_x->size[0] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_values->data[c3_i1] = 0.0F;
  }

  c3_emxInit_real_T(chartInstance, &c3_b_indices, 2, &c3_kg_emlrtRTEI);
  c3_i2 = c3_b_indices->size[0] * c3_b_indices->size[1];
  c3_b_indices->size[0] = (int32_T)c3_n;
  c3_b_indices->size[1] = c3_x->size[0];
  c3_emxEnsureCapacity_real_T(chartInstance, c3_b_indices, c3_i2,
    &c3_of_emlrtRTEI);
  c3_b_loop_ub = (int32_T)c3_n * c3_x->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_b_indices->data[c3_i3] = 0.0;
  }

  c3_b = (c3_x->size[0] == 0);
  c3_b1 = (c3_x->size[1] == 0);
  if (c3_b || c3_b1) {
    c3_i4 = c3_indices->size[0] * c3_indices->size[1];
    c3_indices->size[0] = c3_b_indices->size[0];
    c3_indices->size[1] = c3_b_indices->size[1];
    c3_emxEnsureCapacity_uint32_T(chartInstance, c3_indices, c3_i4,
      &c3_pf_emlrtRTEI);
    c3_c_loop_ub = c3_b_indices->size[0] * c3_b_indices->size[1] - 1;
    for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
      c3_d = muDoubleScalarRound(c3_b_indices->data[c3_i5]);
      if (c3_d < 4.294967296E+9) {
        if (c3_d >= 0.0) {
          c3_c_u = (uint32_T)c3_d;
        } else {
          c3_c_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c3_d >= 4.294967296E+9) {
        c3_c_u = MAX_uint32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c3_c_u = 0U;
      }

      c3_indices->data[c3_i5] = c3_c_u;
    }
  } else {
    c3_b_x = (real_T)c3_x->size[1];
    c3_c_x = c3_b_x;
    c3_d_x = c3_c_x;
    c3_e_x = c3_d_x;
    if (c3_e_x == 0.0) {
      c3_f = rtMinusInf;
    } else {
      c3_f_x = c3_e_x;
      c3_fdbl = frexp(c3_f_x, &c3_eint);
      c3_t = c3_fdbl;
      c3_inte = (real_T)c3_eint;
      if (c3_t == 0.5) {
        c3_f = c3_inte - 1.0;
      } else if ((c3_inte == 1.0) && (c3_t < 0.75)) {
        c3_f = muDoubleScalarLog(2.0 * c3_t) / 0.69314718055994529;
      } else {
        c3_f = muDoubleScalarLog(c3_t) / 0.69314718055994529 + c3_inte;
      }
    }

    if (c3_n < c3_f) {
      c3_i6 = (int32_T)c3_n - 1;
      c3_b_i = 0;
      c3_emxInit_real_T(chartInstance, &c3_inds, 2, &c3_hg_emlrtRTEI);
      c3_emxInit_real_T1(chartInstance, &c3_indx, 1, &c3_jg_emlrtRTEI);
      c3_emxInit_real_T(chartInstance, &c3_varargin_2, 2, &c3_bg_emlrtRTEI);
      c3_emxInit_int32_T1(chartInstance, &c3_idx, 2, &c3_lg_emlrtRTEI);
      c3_emxInit_int32_T1(chartInstance, &c3_b_b, 2, &c3_eg_emlrtRTEI);
      c3_emxInit_real32_T1(chartInstance, &c3_ex, 1, &c3_jg_emlrtRTEI);
      c3_emxInit_int32_T(chartInstance, &c3_b_idx, 1, &c3_jg_emlrtRTEI);
      c3_emxInit_real_T(chartInstance, &c3_b_varargin_2, 2, &c3_cg_emlrtRTEI);
      c3_emxInit_real_T(chartInstance, &c3_c_inds, 2, &c3_cg_emlrtRTEI);
      while (c3_b_i <= c3_i6) {
        c3_c_i = (real_T)c3_b_i + 1.0;
        if (!((real_T)c3_x->size[1] >= 1.0)) {
          c3_d_y = NULL;
          sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c3_e_y = NULL;
          sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_d_y,
                      14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U,
            1U, 14, c3_e_y)));
        }

        c3_m = c3_x->size[0];
        c3_b_n = c3_x->size[1];
        c3_siz[0] = c3_m;
        c3_siz[1] = 1;
        c3_i11 = c3_ex->size[0];
        c3_ex->size[0] = c3_siz[0];
        c3_emxEnsureCapacity_real32_T1(chartInstance, c3_ex, c3_i11,
          &c3_tf_emlrtRTEI);
        c3_i15 = c3_b_idx->size[0];
        c3_b_idx->size[0] = c3_m;
        c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_idx, c3_i15,
          &c3_uf_emlrtRTEI);
        c3_f_loop_ub = c3_m - 1;
        for (c3_i17 = 0; c3_i17 <= c3_f_loop_ub; c3_i17++) {
          c3_b_idx->data[c3_i17] = 1;
        }

        if (c3_m >= 1) {
          c3_c_b = c3_m;
          c3_d_b = c3_c_b;
          if (1 > c3_d_b) {
            c3_overflow = false;
          } else {
            c3_overflow = (c3_d_b > 2147483646);
          }

          if (c3_overflow) {
            c3_check_forloop_overflow_error(chartInstance, true);
          }

          for (c3_d_i = 1; c3_d_i - 1 < c3_m; c3_d_i++) {
            c3_e_i = c3_d_i - 1;
            c3_ex->data[c3_e_i] = c3_x->data[c3_e_i];
          }

          c3_e_b = c3_b_n;
          c3_f_b = c3_e_b;
          if (2 > c3_f_b) {
            c3_b_overflow = false;
          } else {
            c3_b_overflow = (c3_f_b > 2147483646);
          }

          if (c3_b_overflow) {
            c3_check_forloop_overflow_error(chartInstance, true);
          }

          for (c3_j = 1; c3_j < c3_b_n; c3_j++) {
            c3_g_b = c3_m;
            c3_h_b = c3_g_b;
            if (1 > c3_h_b) {
              c3_c_overflow = false;
            } else {
              c3_c_overflow = (c3_h_b > 2147483646);
            }

            if (c3_c_overflow) {
              c3_check_forloop_overflow_error(chartInstance, true);
            }

            for (c3_f_i = 1; c3_f_i - 1 < c3_m; c3_f_i++) {
              c3_e_i = c3_f_i - 1;
              c3_a = c3_ex->data[c3_e_i];
              c3_i_b = c3_x->data[c3_e_i + c3_x->size[0] * c3_j];
              c3_b_a = c3_a;
              c3_j_b = c3_i_b;
              c3_g_x = c3_j_b;
              c3_k_b = muSingleScalarIsNaN(c3_g_x);
              if (c3_k_b) {
                c3_p = false;
              } else {
                c3_h_x = c3_b_a;
                c3_l_b = muSingleScalarIsNaN(c3_h_x);
                if (c3_l_b) {
                  c3_p = true;
                } else {
                  c3_p = (c3_b_a > c3_j_b);
                }
              }

              if (c3_p) {
                c3_ex->data[c3_e_i] = c3_x->data[c3_e_i + c3_x->size[0] * c3_j];
                c3_b_idx->data[c3_e_i] = c3_j + 1;
              }
            }
          }
        }

        c3_i20 = c3_indx->size[0];
        c3_indx->size[0] = c3_b_idx->size[0];
        c3_emxEnsureCapacity_real_T1(chartInstance, c3_indx, c3_i20,
          &c3_vf_emlrtRTEI);
        c3_j_loop_ub = c3_b_idx->size[0] - 1;
        for (c3_i23 = 0; c3_i23 <= c3_j_loop_ub; c3_i23++) {
          c3_indx->data[c3_i23] = (real_T)c3_b_idx->data[c3_i23];
        }

        c3_i26 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c3_c_i, 1, c3_values->size[0]);
        c3_i27 = c3_values->size[1] - 1;
        c3_i28 = c3_b_idx->size[0];
        c3_b_idx->size[0] = c3_i27 + 1;
        c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_idx, c3_i28,
          &c3_xf_emlrtRTEI);
        c3_l_loop_ub = c3_i27;
        for (c3_i30 = 0; c3_i30 <= c3_l_loop_ub; c3_i30++) {
          c3_b_idx->data[c3_i30] = c3_i30;
        }

        c3_iv[0] = 1;
        c3_iv[1] = c3_b_idx->size[0];
        sf_mex_lw_sub_assign_size_check_nd(c3_iv, 2, *(int32_T (*)[1])
          c3_ex->size, 1);
        c3_iv1[0] = 1;
        c3_iv1[1] = c3_b_idx->size[0];
        c3_i32 = c3_i26 - 1;
        c3_n_loop_ub = c3_iv1[1] - 1;
        for (c3_i33 = 0; c3_i33 <= c3_n_loop_ub; c3_i33++) {
          c3_values->data[c3_i32 + c3_values->size[0] * c3_b_idx->data[c3_i33]] =
            c3_ex->data[c3_i33];
        }

        c3_i34 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c3_c_i, 1, c3_b_indices->size[0]);
        c3_i35 = c3_b_indices->size[1] - 1;
        c3_i36 = c3_b_idx->size[0];
        c3_b_idx->size[0] = c3_i35 + 1;
        c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_idx, c3_i36,
          &c3_ag_emlrtRTEI);
        c3_o_loop_ub = c3_i35;
        for (c3_i37 = 0; c3_i37 <= c3_o_loop_ub; c3_i37++) {
          c3_b_idx->data[c3_i37] = c3_i37;
        }

        c3_iv2[0] = 1;
        c3_iv2[1] = c3_b_idx->size[0];
        sf_mex_lw_sub_assign_size_check_nd(c3_iv2, 2, *(int32_T (*)[1])
          c3_indx->size, 1);
        c3_iv3[0] = 1;
        c3_iv3[1] = c3_b_idx->size[0];
        c3_i38 = c3_i34 - 1;
        c3_p_loop_ub = c3_iv3[1] - 1;
        for (c3_i39 = 0; c3_i39 <= c3_p_loop_ub; c3_i39++) {
          c3_b_indices->data[c3_i38 + c3_b_indices->size[0] * c3_b_idx->
            data[c3_i39]] = c3_indx->data[c3_i39];
        }

        c3_b_d = (real_T)c3_x->size[0];
        c3_m_b = c3_b_d;
        if (c3_m_b < 1.0) {
          c3_inds->size[0] = 1;
          c3_inds->size[1] = 0;
        } else {
          c3_i40 = c3_inds->size[0] * c3_inds->size[1];
          c3_inds->size[0] = 1;
          c3_inds->size[1] = (int32_T)muDoubleScalarFloor(c3_m_b - 1.0) + 1;
          c3_emxEnsureCapacity_real_T(chartInstance, c3_inds, c3_i40,
            &c3_wd_emlrtRTEI);
          c3_q_loop_ub = (int32_T)muDoubleScalarFloor(c3_m_b - 1.0);
          for (c3_i42 = 0; c3_i42 <= c3_q_loop_ub; c3_i42++) {
            c3_inds->data[c3_i42] = 1.0 + (real_T)c3_i42;
          }
        }

        for (c3_i41 = 0; c3_i41 < 2; c3_i41++) {
          c3_b_siz[c3_i41] = (real_T)c3_x->size[c3_i41];
        }

        c3_i43 = c3_b_indices->size[1] - 1;
        c3_g_i = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c3_c_i, 1, c3_b_indices->size[0]) - 1;
        c3_i44 = c3_varargin_2->size[0] * c3_varargin_2->size[1];
        c3_varargin_2->size[0] = 1;
        c3_varargin_2->size[1] = c3_i43 + 1;
        c3_emxEnsureCapacity_real_T(chartInstance, c3_varargin_2, c3_i44,
          &c3_bg_emlrtRTEI);
        c3_r_loop_ub = c3_i43;
        for (c3_i45 = 0; c3_i45 <= c3_r_loop_ub; c3_i45++) {
          c3_varargin_2->data[c3_i45] = c3_b_indices->data[c3_g_i +
            c3_b_indices->size[0] * c3_i45];
        }

        for (c3_i46 = 0; c3_i46 < 2; c3_i46++) {
          c3_siz[c3_i46] = (int32_T)c3_b_siz[c3_i46];
        }

        c3_hi = c3_siz[0];
        c3_i47 = c3_c_inds->size[0] * c3_c_inds->size[1];
        c3_c_inds->size[0] = 1;
        c3_c_inds->size[1] = c3_inds->size[1];
        c3_emxEnsureCapacity_real_T(chartInstance, c3_c_inds, c3_i47,
          &c3_cg_emlrtRTEI);
        c3_s_loop_ub = c3_inds->size[0] * c3_inds->size[1] - 1;
        for (c3_i48 = 0; c3_i48 <= c3_s_loop_ub; c3_i48++) {
          c3_c_inds->data[c3_i48] = c3_inds->data[c3_i48];
        }

        if (!c3_allinrange(chartInstance, c3_c_inds, 1.0, c3_hi)) {
          c3_f_y = NULL;
          sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          c3_g_y = NULL;
          sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_f_y,
                      14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U,
            1U, 14, c3_g_y)));
        }

        for (c3_i49 = 0; c3_i49 < 2; c3_i49++) {
          c3_b_siz[c3_i49] = (real_T)c3_inds->size[c3_i49];
        }

        for (c3_i50 = 0; c3_i50 < 2; c3_i50++) {
          c3_c_varargin_2[c3_i50] = (real_T)c3_varargin_2->size[c3_i50];
        }

        c3_b_p = false;
        c3_c_p = true;
        c3_k = 0;
        c3_exitg1 = false;
        while ((!c3_exitg1) && (c3_k < 2)) {
          c3_b_k = (real_T)c3_k + 1.0;
          c3_x1 = c3_b_siz[(int32_T)c3_b_k - 1];
          c3_x2 = c3_c_varargin_2[(int32_T)c3_b_k - 1];
          c3_d_p = (c3_x1 == c3_x2);
          if (!c3_d_p) {
            c3_c_p = false;
            c3_exitg1 = true;
          } else {
            c3_k++;
          }
        }

        if (c3_c_p) {
          c3_b_p = true;
        }

        if (!c3_b_p) {
          c3_h_y = NULL;
          sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 34), false);
          c3_i_y = NULL;
          sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 34), false);
          sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_h_y,
                      14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U,
            1U, 14, c3_i_y)));
        }

        c3_hi = c3_siz[1];
        c3_i51 = c3_b_varargin_2->size[0] * c3_b_varargin_2->size[1];
        c3_b_varargin_2->size[0] = 1;
        c3_b_varargin_2->size[1] = c3_varargin_2->size[1];
        c3_emxEnsureCapacity_real_T(chartInstance, c3_b_varargin_2, c3_i51,
          &c3_cg_emlrtRTEI);
        c3_t_loop_ub = c3_varargin_2->size[0] * c3_varargin_2->size[1] - 1;
        for (c3_i52 = 0; c3_i52 <= c3_t_loop_ub; c3_i52++) {
          c3_b_varargin_2->data[c3_i52] = c3_varargin_2->data[c3_i52];
        }

        if (!c3_allinrange(chartInstance, c3_b_varargin_2, 1.0, c3_hi)) {
          c3_j_y = NULL;
          sf_mex_assign(&c3_j_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          c3_k_y = NULL;
          sf_mex_assign(&c3_k_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_j_y,
                      14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString",
            1U, 1U, 14, sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U,
            1U, 14, c3_k_y)));
        }

        c3_psiz = c3_siz[0];
        c3_i53 = c3_idx->size[0] * c3_idx->size[1];
        c3_idx->size[0] = 1;
        c3_idx->size[1] = c3_inds->size[1];
        c3_emxEnsureCapacity_int32_T1(chartInstance, c3_idx, c3_i53,
          &c3_dg_emlrtRTEI);
        c3_u_loop_ub = c3_inds->size[0] * c3_inds->size[1] - 1;
        for (c3_i54 = 0; c3_i54 <= c3_u_loop_ub; c3_i54++) {
          c3_idx->data[c3_i54] = (int32_T)c3_inds->data[c3_i54];
        }

        c3_c_a = c3_psiz;
        c3_i55 = c3_b_b->size[0] * c3_b_b->size[1];
        c3_b_b->size[0] = 1;
        c3_b_b->size[1] = c3_varargin_2->size[1];
        c3_emxEnsureCapacity_int32_T1(chartInstance, c3_b_b, c3_i55,
          &c3_eg_emlrtRTEI);
        c3_v_loop_ub = c3_varargin_2->size[0] * c3_varargin_2->size[1] - 1;
        for (c3_i56 = 0; c3_i56 <= c3_v_loop_ub; c3_i56++) {
          c3_b_b->data[c3_i56] = (int32_T)c3_varargin_2->data[c3_i56] - 1;
        }

        c3_i57 = c3_b_b->size[0] * c3_b_b->size[1];
        c3_i58 = c3_b_b->size[0] * c3_b_b->size[1];
        c3_b_b->size[0] = 1;
        c3_emxEnsureCapacity_int32_T1(chartInstance, c3_b_b, c3_i58,
          &c3_fg_emlrtRTEI);
        c3_i59 = c3_i57;
        c3_w_loop_ub = c3_i59 - 1;
        for (c3_i60 = 0; c3_i60 <= c3_w_loop_ub; c3_i60++) {
          c3_b_b->data[c3_i60] *= c3_c_a;
        }

        c3_i61 = c3_idx->size[0] * c3_idx->size[1];
        c3_i62 = c3_idx->size[0] * c3_idx->size[1];
        c3_idx->size[0] = 1;
        c3_emxEnsureCapacity_int32_T1(chartInstance, c3_idx, c3_i62,
          &c3_gg_emlrtRTEI);
        c3_i63 = c3_i61;
        c3_x_loop_ub = c3_i63 - 1;
        for (c3_i64 = 0; c3_i64 <= c3_x_loop_ub; c3_i64++) {
          c3_idx->data[c3_i64] += c3_b_b->data[c3_i64];
        }

        c3_i65 = c3_inds->size[0] * c3_inds->size[1];
        c3_inds->size[0] = 1;
        c3_inds->size[1] = c3_idx->size[1];
        c3_emxEnsureCapacity_real_T(chartInstance, c3_inds, c3_i65,
          &c3_hg_emlrtRTEI);
        c3_y_loop_ub = c3_idx->size[0] * c3_idx->size[1] - 1;
        for (c3_i66 = 0; c3_i66 <= c3_y_loop_ub; c3_i66++) {
          c3_inds->data[c3_i66] = (real_T)c3_idx->data[c3_i66];
        }

        c3_i67 = c3_idx->size[0] * c3_idx->size[1];
        c3_idx->size[0] = 1;
        c3_idx->size[1] = c3_inds->size[1];
        c3_emxEnsureCapacity_int32_T1(chartInstance, c3_idx, c3_i67,
          &c3_ig_emlrtRTEI);
        c3_i_x = c3_x->size[0] * c3_x->size[1];
        c3_ab_loop_ub = c3_inds->size[0] * c3_inds->size[1] - 1;
        for (c3_i68 = 0; c3_i68 <= c3_ab_loop_ub; c3_i68++) {
          c3_idx->data[c3_i68] = sf_eml_array_bounds_check(NULL,
            chartInstance->S, 1U, 0, 0, MAX_uint32_T, (int32_T)c3_inds->
            data[c3_i68], 1, c3_i_x);
        }

        c3_i69 = c3_idx->size[0] * c3_idx->size[1];
        c3_bb_loop_ub = c3_i69 - 1;
        for (c3_i70 = 0; c3_i70 <= c3_bb_loop_ub; c3_i70++) {
          c3_x->data[c3_idx->data[c3_i70] - 1] = rtInfF;
        }

        c3_b_i++;
      }

      c3_emxFree_real_T(chartInstance, &c3_c_inds);
      c3_emxFree_real_T(chartInstance, &c3_b_varargin_2);
      c3_emxFree_int32_T(chartInstance, &c3_b_idx);
      c3_emxFree_real32_T(chartInstance, &c3_ex);
      c3_emxFree_int32_T(chartInstance, &c3_b_b);
      c3_emxFree_int32_T(chartInstance, &c3_idx);
      c3_emxFree_real_T(chartInstance, &c3_varargin_2);
      c3_emxFree_real_T(chartInstance, &c3_indx);
      c3_emxFree_real_T(chartInstance, &c3_inds);
    } else {
      c3_emxInit_real32_T(chartInstance, &c3_xSorted, 2, &c3_jg_emlrtRTEI);
      c3_i7 = c3_xSorted->size[0] * c3_xSorted->size[1];
      c3_xSorted->size[0] = c3_x->size[0];
      c3_xSorted->size[1] = c3_x->size[1];
      c3_emxEnsureCapacity_real32_T(chartInstance, c3_xSorted, c3_i7,
        &c3_qf_emlrtRTEI);
      c3_d_loop_ub = c3_x->size[0] * c3_x->size[1] - 1;
      for (c3_i8 = 0; c3_i8 <= c3_d_loop_ub; c3_i8++) {
        c3_xSorted->data[c3_i8] = c3_x->data[c3_i8];
      }

      c3_emxInit_real_T(chartInstance, &c3_b_inds, 2, &c3_jg_emlrtRTEI);
      c3_emxInit_int32_T1(chartInstance, &c3_iidx, 2, &c3_jg_emlrtRTEI);
      c3_b_sort(chartInstance, c3_xSorted, c3_iidx);
      c3_i9 = c3_b_inds->size[0] * c3_b_inds->size[1];
      c3_b_inds->size[0] = c3_iidx->size[0];
      c3_b_inds->size[1] = c3_iidx->size[1];
      c3_emxEnsureCapacity_real_T(chartInstance, c3_b_inds, c3_i9,
        &c3_sf_emlrtRTEI);
      c3_e_loop_ub = c3_iidx->size[0] * c3_iidx->size[1] - 1;
      for (c3_i10 = 0; c3_i10 <= c3_e_loop_ub; c3_i10++) {
        c3_b_inds->data[c3_i10] = (real_T)c3_iidx->data[c3_i10];
      }

      c3_emxFree_int32_T(chartInstance, &c3_iidx);
      c3_b2 = (1.0 > c3_n);
      if (c3_b2) {
        c3_i12 = -1;
      } else {
        sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T,
          1, 1, c3_xSorted->size[1]);
        c3_i12 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c3_n, 1, c3_xSorted->size[1]) - 1;
      }

      c3_i13 = c3_xSorted->size[0] - 1;
      c3_i16 = c3_values->size[0] * c3_values->size[1];
      c3_values->size[0] = c3_i12 + 1;
      c3_values->size[1] = c3_i13 + 1;
      c3_emxEnsureCapacity_real32_T(chartInstance, c3_values, c3_i16,
        &c3_wf_emlrtRTEI);
      c3_h_loop_ub = c3_i13;
      for (c3_i19 = 0; c3_i19 <= c3_h_loop_ub; c3_i19++) {
        c3_i_loop_ub = c3_i12;
        for (c3_i21 = 0; c3_i21 <= c3_i_loop_ub; c3_i21++) {
          c3_values->data[c3_i21 + c3_values->size[0] * c3_i19] =
            c3_xSorted->data[c3_i19 + c3_xSorted->size[0] * c3_i21];
        }
      }

      c3_emxFree_real32_T(chartInstance, &c3_xSorted);
      c3_b3 = (1.0 > c3_n);
      if (c3_b3) {
        c3_i22 = -1;
      } else {
        sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0, MAX_uint32_T,
          1, 1, c3_b_inds->size[1]);
        c3_i22 = sf_eml_array_bounds_check(NULL, chartInstance->S, 1U, 0, 0,
          MAX_uint32_T, (int32_T)c3_n, 1, c3_b_inds->size[1]) - 1;
      }

      c3_i24 = c3_b_inds->size[0] - 1;
      c3_i25 = c3_b_indices->size[0] * c3_b_indices->size[1];
      c3_b_indices->size[0] = c3_i22 + 1;
      c3_b_indices->size[1] = c3_i24 + 1;
      c3_emxEnsureCapacity_real_T(chartInstance, c3_b_indices, c3_i25,
        &c3_yf_emlrtRTEI);
      c3_k_loop_ub = c3_i24;
      for (c3_i29 = 0; c3_i29 <= c3_k_loop_ub; c3_i29++) {
        c3_m_loop_ub = c3_i22;
        for (c3_i31 = 0; c3_i31 <= c3_m_loop_ub; c3_i31++) {
          c3_b_indices->data[c3_i31 + c3_b_indices->size[0] * c3_i29] =
            c3_b_inds->data[c3_i29 + c3_b_inds->size[0] * c3_i31];
        }
      }

      c3_emxFree_real_T(chartInstance, &c3_b_inds);
    }

    c3_i14 = c3_indices->size[0] * c3_indices->size[1];
    c3_indices->size[0] = c3_b_indices->size[0];
    c3_indices->size[1] = c3_b_indices->size[1];
    c3_emxEnsureCapacity_uint32_T(chartInstance, c3_indices, c3_i14,
      &c3_rf_emlrtRTEI);
    c3_g_loop_ub = c3_b_indices->size[0] * c3_b_indices->size[1] - 1;
    for (c3_i18 = 0; c3_i18 <= c3_g_loop_ub; c3_i18++) {
      c3_d1 = muDoubleScalarRound(c3_b_indices->data[c3_i18]);
      if (c3_d1 < 4.294967296E+9) {
        if (c3_d1 >= 0.0) {
          c3_u1 = (uint32_T)c3_d1;
        } else {
          c3_u1 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c3_d1 >= 4.294967296E+9) {
        c3_u1 = MAX_uint32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c3_u1 = 0U;
      }

      c3_indices->data[c3_i18] = c3_u1;
    }
  }

  c3_emxFree_real_T(chartInstance, &c3_b_indices);
}

static boolean_T c3_allinrange(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T *c3_x, real_T c3_lo, int32_T c3_hi)
{
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i;
  int32_T c3_k;
  int32_T c3_exitg1;
  real_T c3_b_k;
  boolean_T c3_b;
  (void)chartInstance;
  (void)c3_lo;
  c3_d = (real_T)c3_x->size[1];
  c3_i = (int32_T)c3_d - 1;
  c3_k = 0;
  do {
    c3_exitg1 = 0;
    if (c3_k <= c3_i) {
      c3_b_k = (real_T)c3_k + 1.0;
      if ((c3_x->data[(int32_T)c3_b_k - 1] >= 1.0) && (c3_x->data[(int32_T)
           c3_b_k - 1] <= (real_T)c3_hi)) {
        c3_b = true;
      } else {
        c3_b = false;
      }

      if (!c3_b) {
        c3_p = false;
        c3_exitg1 = 1;
      } else {
        c3_k++;
      }
    } else {
      c3_p = true;
      c3_exitg1 = 1;
    }
  } while (c3_exitg1 == 0);

  return c3_p;
}

static void c3_sort(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
                    c3_emxArray_real32_T *c3_x, c3_emxArray_real32_T *c3_b_x,
                    c3_emxArray_int32_T *c3_idx)
{
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_i = c3_b_x->size[0] * c3_b_x->size[1];
  c3_b_x->size[0] = c3_x->size[0];
  c3_b_x->size[1] = c3_x->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_b_x, c3_i, &c3_mg_emlrtRTEI);
  c3_loop_ub = c3_x->size[0] * c3_x->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_x->data[c3_i1] = c3_x->data[c3_i1];
  }

  c3_b_sort(chartInstance, c3_b_x, c3_idx);
}

static void c3_sortIdx(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_x, c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *
  c3_b_x)
{
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_i = c3_b_x->size[0];
  c3_b_x->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_x, c3_i, &c3_ng_emlrtRTEI);
  c3_loop_ub = c3_x->size[0] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_x->data[c3_i1] = c3_x->data[c3_i1];
  }

  c3_b_sortIdx(chartInstance, c3_b_x, c3_idx);
}

static void c3_merge_block(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x,
  int32_T c3_offset, int32_T c3_n, int32_T c3_preSortLevel, c3_emxArray_int32_T *
  c3_iwork, c3_emxArray_real32_T *c3_xwork, c3_emxArray_int32_T *c3_b_idx,
  c3_emxArray_real32_T *c3_b_x, c3_emxArray_int32_T *c3_b_iwork,
  c3_emxArray_real32_T *c3_b_xwork)
{
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_c_loop_ub;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_d_loop_ub;
  int32_T c3_i7;
  c3_i = c3_b_idx->size[0];
  c3_b_idx->size[0] = c3_idx->size[0];
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_idx, c3_i, &c3_og_emlrtRTEI);
  c3_loop_ub = c3_idx->size[0] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_idx->data[c3_i1] = c3_idx->data[c3_i1];
  }

  c3_i2 = c3_b_x->size[0];
  c3_b_x->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_x, c3_i2, &c3_og_emlrtRTEI);
  c3_b_loop_ub = c3_x->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_b_x->data[c3_i3] = c3_x->data[c3_i3];
  }

  c3_i4 = c3_b_iwork->size[0];
  c3_b_iwork->size[0] = c3_iwork->size[0];
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_iwork, c3_i4,
    &c3_og_emlrtRTEI);
  c3_c_loop_ub = c3_iwork->size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
    c3_b_iwork->data[c3_i5] = c3_iwork->data[c3_i5];
  }

  c3_i6 = c3_b_xwork->size[0];
  c3_b_xwork->size[0] = c3_xwork->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_xwork, c3_i6,
    &c3_og_emlrtRTEI);
  c3_d_loop_ub = c3_xwork->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_b_xwork->data[c3_i7] = c3_xwork->data[c3_i7];
  }

  c3_b_merge_block(chartInstance, c3_b_idx, c3_b_x, c3_offset, c3_n,
                   c3_preSortLevel, c3_b_iwork, c3_b_xwork);
}

static void c3_merge(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
                     c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x,
                     int32_T c3_offset, int32_T c3_np, int32_T c3_nq,
                     c3_emxArray_int32_T *c3_iwork, c3_emxArray_real32_T
                     *c3_xwork, c3_emxArray_int32_T *c3_b_idx,
                     c3_emxArray_real32_T *c3_b_x, c3_emxArray_int32_T
                     *c3_b_iwork, c3_emxArray_real32_T *c3_b_xwork)
{
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_b_loop_ub;
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_c_loop_ub;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_d_loop_ub;
  int32_T c3_i7;
  c3_i = c3_b_idx->size[0];
  c3_b_idx->size[0] = c3_idx->size[0];
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_idx, c3_i, &c3_pg_emlrtRTEI);
  c3_loop_ub = c3_idx->size[0] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_b_idx->data[c3_i1] = c3_idx->data[c3_i1];
  }

  c3_i2 = c3_b_x->size[0];
  c3_b_x->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_x, c3_i2, &c3_pg_emlrtRTEI);
  c3_b_loop_ub = c3_x->size[0] - 1;
  for (c3_i3 = 0; c3_i3 <= c3_b_loop_ub; c3_i3++) {
    c3_b_x->data[c3_i3] = c3_x->data[c3_i3];
  }

  c3_i4 = c3_b_iwork->size[0];
  c3_b_iwork->size[0] = c3_iwork->size[0];
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_b_iwork, c3_i4,
    &c3_pg_emlrtRTEI);
  c3_c_loop_ub = c3_iwork->size[0] - 1;
  for (c3_i5 = 0; c3_i5 <= c3_c_loop_ub; c3_i5++) {
    c3_b_iwork->data[c3_i5] = c3_iwork->data[c3_i5];
  }

  c3_i6 = c3_b_xwork->size[0];
  c3_b_xwork->size[0] = c3_xwork->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_b_xwork, c3_i6,
    &c3_pg_emlrtRTEI);
  c3_d_loop_ub = c3_xwork->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_d_loop_ub; c3_i7++) {
    c3_b_xwork->data[c3_i7] = c3_xwork->data[c3_i7];
  }

  c3_b_merge(chartInstance, c3_b_idx, c3_b_x, c3_offset, c3_np, c3_nq,
             c3_b_iwork, c3_b_xwork);
}

static uint8_T c3_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_b_is_active_c3_MotionObjectDetector, const
  char_T *c3_identifier)
{
  uint8_T c3_d_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_d_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_active_c3_MotionObjectDetector), &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_MotionObjectDetector);
  return c3_d_y;
}

static uint8_T c3_b_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_d_y;
  uint8_T c3_d_u;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_c_u), &c3_d_u, 1, 3, 0U, 0, 0U, 0);
  c3_d_y = c3_d_u;
  sf_mex_destroy(&c3_c_u);
  return c3_d_y;
}

static const mxArray *c3_sf_marshallOut_matrix500x500x3_uint8_T(void
  *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 3; c3_i1++) {
    c3_i2 = 0;
    for (c3_i3 = 0; c3_i3 < 500; c3_i3++) {
      for (c3_i4 = 0; c3_i4 < 500; c3_i4++) {
        chartInstance->c3_u[(c3_i4 + c3_i2) + c3_i] = (*(uint8_T (*)[750000])
          c3_inData)[(c3_i4 + c3_i2) + c3_i];
      }

      c3_i2 += 500;
    }

    c3_i += 250000;
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", chartInstance->c3_u, 3, 0U, 1U, 0U,
    3, 500, 500, 3), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  return c3_mxArrayOutData;
}

static void c3_c_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[750000])
{
  int32_T c3_i;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_c_u), chartInstance->c3_uv, 1, 3, 0U,
                1, 0U, 3, 500, 500, 3);
  for (c3_i = 0; c3_i < 750000; c3_i++) {
    c3_d_y[c3_i] = chartInstance->c3_uv[c3_i];
  }

  sf_mex_destroy(&c3_c_u);
}

static void c3_sf_marshallIn_matrix500x500x3_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_c_Image;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_c_Image = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_c_Image), &c3_thisId,
                        chartInstance->c3_y);
  sf_mex_destroy(&c3_c_Image);
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 3; c3_i1++) {
    c3_i2 = 0;
    for (c3_i3 = 0; c3_i3 < 500; c3_i3++) {
      for (c3_i4 = 0; c3_i4 < 500; c3_i4++) {
        (*(uint8_T (*)[750000])c3_outData)[(c3_i4 + c3_i2) + c3_i] =
          chartInstance->c3_y[(c3_i4 + c3_i2) + c3_i];
      }

      c3_i2 += 500;
    }

    c3_i += 250000;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_sf_marshallOut_matrix189x267x3_uint8_T(void
  *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i2;
  uint8_T c3_c_u[151389];
  int32_T c3_i3;
  int32_T c3_i4;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 3; c3_i1++) {
    c3_i2 = 0;
    for (c3_i3 = 0; c3_i3 < 267; c3_i3++) {
      for (c3_i4 = 0; c3_i4 < 189; c3_i4++) {
        c3_c_u[(c3_i4 + c3_i2) + c3_i] = (*(uint8_T (*)[151389])c3_inData)
          [(c3_i4 + c3_i2) + c3_i];
      }

      c3_i2 += 189;
    }

    c3_i += 50463;
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u, 3, 0U, 1U, 0U, 3, 189, 267,
    3), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  return c3_mxArrayOutData;
}

static void c3_d_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[151389])
{
  uint8_T c3_c_uv[151389];
  int32_T c3_i;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_c_u), c3_c_uv, 1, 3, 0U, 1, 0U, 3,
                189, 267, 3);
  for (c3_i = 0; c3_i < 151389; c3_i++) {
    c3_d_y[c3_i] = c3_c_uv[c3_i];
  }

  sf_mex_destroy(&c3_c_u);
}

static void c3_sf_marshallIn_matrix189x267x3_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_c_redcrab;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_i4;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_c_redcrab = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_c_redcrab), &c3_thisId,
                        chartInstance->c3_c_y);
  sf_mex_destroy(&c3_c_redcrab);
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 3; c3_i1++) {
    c3_i2 = 0;
    for (c3_i3 = 0; c3_i3 < 267; c3_i3++) {
      for (c3_i4 = 0; c3_i4 < 189; c3_i4++) {
        (*(uint8_T (*)[151389])c3_outData)[(c3_i4 + c3_i2) + c3_i] =
          chartInstance->c3_c_y[(c3_i4 + c3_i2) + c3_i];
      }

      c3_i2 += 189;
    }

    c3_i += 50463;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_sf_marshallOut_matrix189x267_uint8_T(void
  *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i2;
  uint8_T c3_c_u[50463];
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 267; c3_i1++) {
    for (c3_i2 = 0; c3_i2 < 189; c3_i2++) {
      c3_c_u[c3_i2 + c3_i] = (*(uint8_T (*)[50463])c3_inData)[c3_i2 + c3_i];
    }

    c3_i += 189;
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u, 3, 0U, 1U, 0U, 2, 189, 267),
                false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  return c3_mxArrayOutData;
}

static void c3_e_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[50463])
{
  uint8_T c3_c_uv[50463];
  int32_T c3_i;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_c_u), c3_c_uv, 1, 3, 0U, 1, 0U, 2,
                189, 267);
  for (c3_i = 0; c3_i < 50463; c3_i++) {
    c3_d_y[c3_i] = c3_c_uv[c3_i];
  }

  sf_mex_destroy(&c3_c_u);
}

static void c3_sf_marshallIn_matrix189x267_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_redcrabGray;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_d_y[50463];
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_b_redcrabGray = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_redcrabGray), &c3_thisId,
                        c3_d_y);
  sf_mex_destroy(&c3_b_redcrabGray);
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 267; c3_i1++) {
    for (c3_i2 = 0; c3_i2 < 189; c3_i2++) {
      (*(uint8_T (*)[50463])c3_outData)[c3_i2 + c3_i] = c3_d_y[c3_i2 + c3_i];
    }

    c3_i += 189;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_sf_marshallOut_matrix500x500_uint8_T(void
  *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_i;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  int32_T c3_i2;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 500; c3_i1++) {
    for (c3_i2 = 0; c3_i2 < 500; c3_i2++) {
      chartInstance->c3_b_u[c3_i2 + c3_i] = (*(uint8_T (*)[250000])c3_inData)
        [c3_i2 + c3_i];
    }

    c3_i += 500;
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", chartInstance->c3_b_u, 3, 0U, 1U, 0U,
    2, 500, 500), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  return c3_mxArrayOutData;
}

static void c3_f_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_d_y[250000])
{
  int32_T c3_i;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_c_u), chartInstance->c3_b_uv, 1, 3,
                0U, 1, 0U, 2, 500, 500);
  for (c3_i = 0; c3_i < 250000; c3_i++) {
    c3_d_y[c3_i] = chartInstance->c3_b_uv[c3_i];
  }

  sf_mex_destroy(&c3_c_u);
}

static void c3_sf_marshallIn_matrix500x500_uint8_T(void *chartInstanceVoid,
  const mxArray *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_ImageGray;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_b_ImageGray = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_ImageGray), &c3_thisId,
                        chartInstance->c3_b_y);
  sf_mex_destroy(&c3_b_ImageGray);
  c3_i = 0;
  for (c3_i1 = 0; c3_i1 < 500; c3_i1++) {
    for (c3_i2 = 0; c3_i2 < 500; c3_i2++) {
      (*(uint8_T (*)[250000])c3_outData)[c3_i2 + c3_i] = chartInstance->
        c3_b_y[c3_i2 + c3_i];
    }

    c3_i += 500;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_sf_marshallOut_real_T(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_c_u = *(real_T *)c3_inData;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_g_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_d_y;
  real_T c3_d;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_c_u), &c3_d, 1, 0, 0U, 0, 0U, 0);
  c3_d_y = c3_d;
  sf_mex_destroy(&c3_c_u);
  return c3_d_y;
}

static void c3_sf_marshallIn_real_T(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargin;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_d_y;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_nargin = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_d_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargin),
    &c3_thisId);
  sf_mex_destroy(&c3_nargin);
  *(real_T *)c3_outData = c3_d_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_emlrt_marshallOut
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const
   c3_emxArray_real32_T *c3_c_u)
{
  const mxArray *c3_d_y = NULL;
  (void)chartInstance;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u->data, 1, 0U, 1U, 0U, 2,
    c3_c_u->size[0], c3_c_u->size[1]), false);
  return c3_d_y;
}

static const mxArray *c3_b_emlrt_marshallOut
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const
   c3_emxArray_real32_T *c3_c_u)
{
  const mxArray *c3_d_y = NULL;
  (void)chartInstance;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u->data, 1, 0U, 1U, 0U, 1,
    c3_c_u->size[0]), false);
  return c3_d_y;
}

static const mxArray *c3_c_emlrt_marshallOut
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, const
   c3_emxArray_int8_T *c3_c_u)
{
  const mxArray *c3_d_y = NULL;
  (void)chartInstance;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u->data, 2, 0U, 1U, 0U, 1,
    c3_c_u->size[0]), false);
  return c3_d_y;
}

static const mxArray *c3_sf_marshallOut_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, c3_vision_internal_SURFPoints_cg *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  c3_vision_internal_SURFPoints_cg c3_c_u;
  const mxArray *c3_d_y = NULL;
  const mxArray *c3_propValues[5];
  const char * c3_propNames[5] = { "pLocation", "pMetric", "pScale",
    "pSignOfLaplacian", "pOrientation" };

  const char * c3_propClasses[5] = { "vision.internal.FeaturePointsImpl",
    "vision.internal.FeaturePointsImpl", "vision.internal.SURFPointsImpl",
    "vision.internal.SURFPointsImpl", "vision.internal.SURFPointsImpl" };

  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_c_u, (emlrtRTEInfo *)
    NULL);
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_emxCopyStruct_vision_internal_S(chartInstance, &c3_c_u, c3_inData,
    (emlrtRTEInfo *)NULL);
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create_class_instance(
    "vision.internal.SURFPoints_cg"), false);
  c3_propValues[0] = c3_emlrt_marshallOut(chartInstance, c3_c_u.pLocation);
  c3_propValues[1] = c3_b_emlrt_marshallOut(chartInstance, c3_c_u.pMetric);
  c3_propValues[2] = c3_b_emlrt_marshallOut(chartInstance, c3_c_u.pScale);
  c3_propValues[3] = c3_c_emlrt_marshallOut(chartInstance,
    c3_c_u.pSignOfLaplacian);
  c3_propValues[4] = c3_b_emlrt_marshallOut(chartInstance, c3_c_u.pOrientation);
  sf_mex_set_all_properties(&c3_d_y, 0, 5, c3_propNames, c3_propClasses,
    c3_propValues);
  sf_mex_assign(&c3_d_y, sf_mex_convert_to_redirect_source(c3_d_y, 0,
    "vision.internal.SURFPoints_cg"), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_c_u);
  return c3_mxArrayOutData;
}

static void c3_h_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_vision_internal_SURFPoints_cg *c3_d_y)
{
  emlrtMsgIdentifier c3_thisId;
  const char * c3_propNames[5] = { "pLocation", "pMetric", "pScale",
    "pSignOfLaplacian", "pOrientation" };

  const char * c3_propClasses[5] = { "vision.internal.FeaturePointsImpl",
    "vision.internal.FeaturePointsImpl", "vision.internal.SURFPointsImpl",
    "vision.internal.SURFPointsImpl", "vision.internal.SURFPointsImpl" };

  const mxArray *c3_propValues[5];
  c3_thisId.fParent = c3_parentId;
  c3_thisId.bParentIsCell = false;
  sf_mex_check_mcos_class(c3_parentId, c3_c_u, "SURFPoints");
  sf_mex_assign(&c3_c_u, sf_mex_convert_to_redirect_target(c3_c_u, 0,
    "vision.internal.SURFPoints_cg"), false);
  sf_mex_check_mcos_class(c3_parentId, c3_c_u, "vision.internal.SURFPoints_cg");
  sf_mex_get_all_properties(c3_c_u, 0, 5, c3_propNames, c3_propClasses,
    c3_propValues);
  c3_thisId.fIdentifier = "pLocation";
  c3_i_emlrt_marshallIn(chartInstance, c3_propValues[0], &c3_thisId,
                        c3_d_y->pLocation);
  c3_thisId.fIdentifier = "pMetric";
  c3_j_emlrt_marshallIn(chartInstance, c3_propValues[1], &c3_thisId,
                        c3_d_y->pMetric);
  c3_thisId.fIdentifier = "pScale";
  c3_j_emlrt_marshallIn(chartInstance, c3_propValues[2], &c3_thisId,
                        c3_d_y->pScale);
  c3_thisId.fIdentifier = "pSignOfLaplacian";
  c3_k_emlrt_marshallIn(chartInstance, c3_propValues[3], &c3_thisId,
                        c3_d_y->pSignOfLaplacian);
  c3_thisId.fIdentifier = "pOrientation";
  c3_j_emlrt_marshallIn(chartInstance, c3_propValues[4], &c3_thisId,
                        c3_d_y->pOrientation);
  sf_mex_destroy(&c3_c_u);
}

static void c3_i_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_real32_T *c3_d_y)
{
  c3_emxArray_real32_T *c3_r;
  int32_T c3_i;
  int32_T c3_i1;
  uint32_T c3_c_uv[2];
  static uint32_T c3_uv1[2] = { MAX_uint32_T, 2U };

  int32_T c3_i2;
  boolean_T c3_bv[2];
  static boolean_T c3_bv1[2] = { true, false };

  int32_T c3_i3;
  int32_T c3_loop_ub;
  int32_T c3_i4;
  c3_emxInit_real32_T(chartInstance, &c3_r, 2, (emlrtRTEInfo *)NULL);
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_c_uv[c3_i] = c3_uv1[c3_i];
  }

  c3_i1 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = sf_mex_get_dimension(c3_c_u, 0);
  c3_r->size[1] = sf_mex_get_dimension(c3_c_u, 1);
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_r, c3_i1, (emlrtRTEInfo *)NULL);
  for (c3_i2 = 0; c3_i2 < 2; c3_i2++) {
    c3_bv[c3_i2] = c3_bv1[c3_i2];
  }

  sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_c_u), c3_r->data, 0, 1, 0U, 1, 0U,
                   2, c3_bv, c3_c_uv, c3_r->size);
  c3_i3 = c3_d_y->size[0] * c3_d_y->size[1];
  c3_d_y->size[0] = c3_r->size[0];
  c3_d_y->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_d_y, c3_i3, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_r->size[0] * c3_r->size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_d_y->data[c3_i4] = c3_r->data[c3_i4];
  }

  sf_mex_destroy(&c3_c_u);
  c3_emxFree_real32_T(chartInstance, &c3_r);
}

static void c3_j_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_real32_T *c3_d_y)
{
  c3_emxArray_real32_T *c3_r;
  uint32_T c3_c_uv[1];
  int32_T c3_i;
  boolean_T c3_bv[1];
  int32_T c3_i1;
  int32_T c3_loop_ub;
  int32_T c3_i2;
  c3_emxInit_real32_T1(chartInstance, &c3_r, 1, (emlrtRTEInfo *)NULL);
  c3_c_uv[0] = MAX_uint32_T;
  c3_i = c3_r->size[0];
  c3_r->size[0] = sf_mex_get_dimension(c3_c_u, 0);
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_r, c3_i, (emlrtRTEInfo *)NULL);
  c3_bv[0] = true;
  sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_c_u), c3_r->data, 0, 1, 0U, 1, 0U,
                   1, c3_bv, c3_c_uv, c3_r->size);
  c3_i1 = c3_d_y->size[0];
  c3_d_y->size[0] = c3_r->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_d_y, c3_i1, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_r->size[0] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
    c3_d_y->data[c3_i2] = c3_r->data[c3_i2];
  }

  sf_mex_destroy(&c3_c_u);
  c3_emxFree_real32_T(chartInstance, &c3_r);
}

static void c3_k_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_int8_T *c3_d_y)
{
  c3_emxArray_int8_T *c3_r;
  uint32_T c3_c_uv[1];
  int32_T c3_i;
  boolean_T c3_bv[1];
  int32_T c3_i1;
  int32_T c3_loop_ub;
  int32_T c3_i2;
  c3_emxInit_int8_T(chartInstance, &c3_r, 1, (emlrtRTEInfo *)NULL);
  c3_c_uv[0] = MAX_uint32_T;
  c3_i = c3_r->size[0];
  c3_r->size[0] = sf_mex_get_dimension(c3_c_u, 0);
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_r, c3_i, (emlrtRTEInfo *)NULL);
  c3_bv[0] = true;
  sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_c_u), c3_r->data, 1, 2, 0U, 1, 0U,
                   1, c3_bv, c3_c_uv, c3_r->size);
  c3_i1 = c3_d_y->size[0];
  c3_d_y->size[0] = c3_r->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_d_y, c3_i1, (emlrtRTEInfo *)NULL);
  c3_loop_ub = c3_r->size[0] - 1;
  for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
    c3_d_y->data[c3_i2] = c3_r->data[c3_i2];
  }

  sf_mex_destroy(&c3_c_u);
  c3_emxFree_int8_T(chartInstance, &c3_r);
}

static void c3_sf_marshallIn_vision_internal_SURFPoints_cg(void
  *chartInstanceVoid, const mxArray *c3_mxArrayInData, const char_T *c3_varName,
  c3_vision_internal_SURFPoints_cg *c3_outData)
{
  c3_vision_internal_SURFPoints_cg c3_d_y;
  const mxArray *c3_RedCrabPoints;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_emxInitStruct_vision_internal_S(chartInstance, &c3_d_y, (emlrtRTEInfo *)
    NULL);
  c3_RedCrabPoints = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_RedCrabPoints), &c3_thisId,
                        &c3_d_y);
  sf_mex_destroy(&c3_RedCrabPoints);
  c3_emxCopyStruct_vision_internal_S(chartInstance, c3_outData, &c3_d_y,
    (emlrtRTEInfo *)NULL);
  sf_mex_destroy(&c3_mxArrayInData);
  c3_emxFreeStruct_vision_internal_S(chartInstance, &c3_d_y);
}

static const mxArray *c3_sf_marshallOut_dynamicmatrix(void *chartInstanceVoid,
  c3_emxArray_real32_T *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  c3_emxArray_real32_T *c3_c_u;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_emxInit_real32_T(chartInstance, &c3_c_u, 2, (emlrtRTEInfo *)NULL);
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i = c3_c_u->size[0] * c3_c_u->size[1];
  c3_c_u->size[0] = c3_inData->size[0];
  c3_c_u->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_u, c3_i, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_inData->size[0] * c3_inData->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_c_u->data[c3_i1] = c3_inData->data[c3_i1];
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u->data, 1, 0U, 1U, 0U, 2,
    c3_c_u->size[0], c3_c_u->size[1]), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  c3_emxFree_real32_T(chartInstance, &c3_c_u);
  return c3_mxArrayOutData;
}

static void c3_l_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_real32_T *c3_d_y)
{
  c3_emxArray_real32_T *c3_r;
  int32_T c3_i;
  int32_T c3_i1;
  uint32_T c3_c_uv[2];
  static uint32_T c3_uv1[2] = { MAX_uint32_T, 64U };

  int32_T c3_i2;
  boolean_T c3_bv[2];
  static boolean_T c3_bv1[2] = { true, false };

  int32_T c3_i3;
  int32_T c3_loop_ub;
  int32_T c3_i4;
  c3_emxInit_real32_T(chartInstance, &c3_r, 2, (emlrtRTEInfo *)NULL);
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_c_uv[c3_i] = c3_uv1[c3_i];
  }

  c3_i1 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = sf_mex_get_dimension(c3_c_u, 0);
  c3_r->size[1] = sf_mex_get_dimension(c3_c_u, 1);
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_r, c3_i1, (emlrtRTEInfo *)NULL);
  for (c3_i2 = 0; c3_i2 < 2; c3_i2++) {
    c3_bv[c3_i2] = c3_bv1[c3_i2];
  }

  sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_c_u), c3_r->data, 0, 1, 0U, 1, 0U,
                   2, c3_bv, c3_c_uv, c3_r->size);
  c3_i3 = c3_d_y->size[0] * c3_d_y->size[1];
  c3_d_y->size[0] = c3_r->size[0];
  c3_d_y->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_d_y, c3_i3, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_r->size[0] * c3_r->size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_d_y->data[c3_i4] = c3_r->data[c3_i4];
  }

  sf_mex_destroy(&c3_c_u);
  c3_emxFree_real32_T(chartInstance, &c3_r);
}

static void c3_sf_marshallIn_dynamicmatrix(void *chartInstanceVoid, const
  mxArray *c3_mxArrayInData, const char_T *c3_varName, c3_emxArray_real32_T
  *c3_outData)
{
  c3_emxArray_real32_T *c3_d_y;
  const mxArray *c3_RedCrabFeatures;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_loop_ub;
  int32_T c3_i2;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_emxInit_real32_T(chartInstance, &c3_d_y, 2, (emlrtRTEInfo *)NULL);
  c3_RedCrabFeatures = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_RedCrabFeatures),
                        &c3_thisId, c3_d_y);
  sf_mex_destroy(&c3_RedCrabFeatures);
  c3_i = c3_outData->size[0] * c3_outData->size[1];
  c3_outData->size[0] = c3_d_y->size[0];
  c3_outData->size[1] = 64;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_outData, c3_i, (emlrtRTEInfo *)
    NULL);
  for (c3_i1 = 0; c3_i1 < 64; c3_i1++) {
    c3_loop_ub = c3_d_y->size[0] - 1;
    for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
      c3_outData->data[c3_i2 + c3_outData->size[0] * c3_i1] = c3_d_y->data[c3_i2
        + c3_d_y->size[0] * c3_i1];
    }
  }

  c3_emxFree_real32_T(chartInstance, &c3_d_y);
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_sf_marshallOut_dynamicmatrix_1(void *chartInstanceVoid,
  c3_emxArray_uint32_T *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  c3_emxArray_uint32_T *c3_c_u;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  const mxArray *c3_d_y = NULL;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_emxInit_uint32_T(chartInstance, &c3_c_u, 2, (emlrtRTEInfo *)NULL);
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_i = c3_c_u->size[0] * c3_c_u->size[1];
  c3_c_u->size[0] = c3_inData->size[0];
  c3_c_u->size[1] = 2;
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_c_u, c3_i, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_inData->size[0] * c3_inData->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_c_u->data[c3_i1] = c3_inData->data[c3_i1];
  }

  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_c_u->data, 7, 0U, 1U, 0U, 2,
    c3_c_u->size[0], c3_c_u->size[1]), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_d_y, false);
  c3_emxFree_uint32_T(chartInstance, &c3_c_u);
  return c3_mxArrayOutData;
}

static void c3_m_emlrt_marshallIn(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, const mxArray *c3_c_u, const emlrtMsgIdentifier *c3_parentId,
  c3_emxArray_uint32_T *c3_d_y)
{
  c3_emxArray_uint32_T *c3_r;
  int32_T c3_i;
  int32_T c3_i1;
  uint32_T c3_c_uv[2];
  static uint32_T c3_uv1[2] = { MAX_uint32_T, 2U };

  int32_T c3_i2;
  boolean_T c3_bv[2];
  static boolean_T c3_bv1[2] = { true, false };

  int32_T c3_i3;
  int32_T c3_loop_ub;
  int32_T c3_i4;
  c3_emxInit_uint32_T(chartInstance, &c3_r, 2, (emlrtRTEInfo *)NULL);
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_c_uv[c3_i] = c3_uv1[c3_i];
  }

  c3_i1 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = sf_mex_get_dimension(c3_c_u, 0);
  c3_r->size[1] = sf_mex_get_dimension(c3_c_u, 1);
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_r, c3_i1, (emlrtRTEInfo *)NULL);
  for (c3_i2 = 0; c3_i2 < 2; c3_i2++) {
    c3_bv[c3_i2] = c3_bv1[c3_i2];
  }

  sf_mex_import_vs(c3_parentId, sf_mex_dup(c3_c_u), c3_r->data, 1, 7, 0U, 1, 0U,
                   2, c3_bv, c3_c_uv, c3_r->size);
  c3_i3 = c3_d_y->size[0] * c3_d_y->size[1];
  c3_d_y->size[0] = c3_r->size[0];
  c3_d_y->size[1] = 2;
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_d_y, c3_i3, (emlrtRTEInfo *)
    NULL);
  c3_loop_ub = c3_r->size[0] * c3_r->size[1] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_loop_ub; c3_i4++) {
    c3_d_y->data[c3_i4] = c3_r->data[c3_i4];
  }

  sf_mex_destroy(&c3_c_u);
  c3_emxFree_uint32_T(chartInstance, &c3_r);
}

static void c3_sf_marshallIn_dynamicmatrix_1(void *chartInstanceVoid, const
  mxArray *c3_mxArrayInData, const char_T *c3_varName, c3_emxArray_uint32_T
  *c3_outData)
{
  c3_emxArray_uint32_T *c3_d_y;
  const mxArray *c3_RedCrabPairs;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_loop_ub;
  int32_T c3_i2;
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)chartInstanceVoid;
  c3_emxInit_uint32_T(chartInstance, &c3_d_y, 2, (emlrtRTEInfo *)NULL);
  c3_RedCrabPairs = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = (const char *)c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_RedCrabPairs), &c3_thisId,
                        c3_d_y);
  sf_mex_destroy(&c3_RedCrabPairs);
  c3_i = c3_outData->size[0] * c3_outData->size[1];
  c3_outData->size[0] = c3_d_y->size[0];
  c3_outData->size[1] = 2;
  c3_emxEnsureCapacity_uint32_T(chartInstance, c3_outData, c3_i, (emlrtRTEInfo *)
    NULL);
  for (c3_i1 = 0; c3_i1 < 2; c3_i1++) {
    c3_loop_ub = c3_d_y->size[0] - 1;
    for (c3_i2 = 0; c3_i2 <= c3_loop_ub; c3_i2++) {
      c3_outData->data[c3_i2 + c3_outData->size[0] * c3_i1] = c3_d_y->data[c3_i2
        + c3_d_y->size[0] * c3_i1];
    }
  }

  c3_emxFree_uint32_T(chartInstance, &c3_d_y);
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_chart_data_browse_helper
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, int32_T c3_ssIdNumber)
{
  const mxArray *c3_mxData = NULL;
  c3_mxData = NULL;
  switch (c3_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c3_mxData, sf_mex_create("mxData", *chartInstance->c3_b_Image,
      3, 0U, 1U, 0U, 3, 500, 500, 3), false);
    break;

   case 6U:
    sf_mex_assign(&c3_mxData, sf_mex_create("mxData",
      *chartInstance->c3_b_redcrab, 3, 0U, 1U, 0U, 3, 189, 267, 3), false);
    break;
  }

  return c3_mxData;
}

static void c3_c_SURFPointsImpl_configure
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_this, c3_sTGP517nzdmMmY48RaBsM6E
   c3_inputs)
{
  real_T c3_n;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_emxArray_real32_T *c3_x;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_b_loop_ub;
  int32_T c3_i4;
  real_T c3_N;
  c3_emxArray_boolean_T *c3_tile;
  real32_T c3_a_data[1];
  real_T c3_varargin_1;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_c_loop_ub;
  int32_T c3_i7;
  int32_T c3_d_loop_ub;
  int32_T c3_i8;
  c3_emxArray_real32_T *c3_r;
  int32_T c3_i9;
  int32_T c3_outsize[2];
  const mxArray *c3_d_y = NULL;
  int32_T c3_i10;
  int32_T c3_e_loop_ub;
  int32_T c3_i11;
  int32_T c3_ntilerows;
  real_T c3_b_n;
  int32_T c3_b;
  int32_T c3_i12;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_itilerow;
  int32_T c3_i15;
  int32_T c3_b_itilerow;
  int32_T c3_ibcol;
  int32_T c3_f_loop_ub;
  int32_T c3_i16;
  real_T c3_b_N;
  real_T c3_b_varargin_1;
  int32_T c3_i17;
  int32_T c3_i18;
  int32_T c3_g_loop_ub;
  int32_T c3_i19;
  int32_T c3_h_loop_ub;
  int32_T c3_i20;
  real_T c3_c_N;
  real_T c3_c_varargin_1;
  int32_T c3_b_outsize[2];
  int32_T c3_i21;
  const mxArray *c3_e_y = NULL;
  int32_T c3_i22;
  int32_T c3_i_loop_ub;
  int32_T c3_i23;
  int32_T c3_b_ntilerows;
  int32_T c3_c_b;
  int32_T c3_c_outsize[2];
  int32_T c3_d_b;
  const mxArray *c3_f_y = NULL;
  boolean_T c3_b_overflow;
  int32_T c3_i24;
  int32_T c3_j_loop_ub;
  int32_T c3_c_itilerow;
  int32_T c3_i25;
  int32_T c3_d_itilerow;
  int32_T c3_i26;
  int32_T c3_b_ibcol;
  int32_T c3_k_loop_ub;
  int32_T c3_i27;
  int32_T c3_i28;
  int32_T c3_l_loop_ub;
  int32_T c3_i29;
  real_T c3_d_N;
  real_T c3_d_varargin_1;
  c3_emxArray_int8_T *c3_r1;
  int32_T c3_i30;
  int32_T c3_i31;
  int32_T c3_m_loop_ub;
  int32_T c3_n_loop_ub;
  int32_T c3_i32;
  int32_T c3_i33;
  real32_T c3_f;
  int32_T c3_d_outsize[2];
  int32_T c3_i34;
  const mxArray *c3_g_y = NULL;
  int8_T c3_i35;
  int32_T c3_i36;
  int32_T c3_o_loop_ub;
  int32_T c3_i37;
  int32_T c3_c_ntilerows;
  int32_T c3_e_b;
  int32_T c3_f_b;
  boolean_T c3_c_overflow;
  int32_T c3_e_itilerow;
  int32_T c3_f_itilerow;
  int32_T c3_c_ibcol;
  c3_n = (real_T)c3_inputs.Location->size[0];
  c3_i = c3_this->pLocation->size[0] * c3_this->pLocation->size[1];
  c3_this->pLocation->size[0] = c3_inputs.Location->size[0];
  c3_this->pLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_this->pLocation, c3_i,
    &c3_qg_emlrtRTEI);
  c3_loop_ub = c3_inputs.Location->size[0] * c3_inputs.Location->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_this->pLocation->data[c3_i1] = c3_inputs.Location->data[c3_i1];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_x, 1, &c3_sg_emlrtRTEI);
  c3_i2 = c3_this->pMetric->size[0];
  c3_this->pMetric->size[0] = (int32_T)c3_n;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pMetric, c3_i2,
    &c3_rg_emlrtRTEI);
  c3_i3 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i3, &c3_sg_emlrtRTEI);
  c3_b_loop_ub = c3_inputs.Metric->size[0] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_b_loop_ub; c3_i4++) {
    c3_x->data[c3_i4] = c3_inputs.Metric->data[c3_i4];
  }

  c3_N = c3_n;
  c3_emxInit_boolean_T(chartInstance, &c3_tile, 1, &c3_vg_emlrtRTEI);
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_varargin_1 = c3_N;
    c3_assertValidSizeArg(chartInstance, c3_varargin_1);
    c3_i6 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i6,
      &c3_vg_emlrtRTEI);
    c3_d_loop_ub = (int32_T)c3_varargin_1 - 1;
    for (c3_i8 = 0; c3_i8 <= c3_d_loop_ub; c3_i8++) {
      c3_tile->data[c3_i8] = false;
    }

    c3_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_d_y = NULL;
      sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_d_y);
    }

    c3_i10 = c3_x->size[0];
    c3_x->size[0] = c3_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i10, &c3_xg_emlrtRTEI);
    c3_ntilerows = c3_tile->size[0];
    c3_b = c3_ntilerows;
    c3_b_b = c3_b;
    if (1 > c3_b_b) {
      c3_overflow = false;
    } else {
      c3_overflow = (c3_b_b > 2147483646);
    }

    if (c3_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_itilerow = 1; c3_itilerow - 1 < c3_ntilerows; c3_itilerow++) {
      c3_b_itilerow = c3_itilerow - 1;
      c3_ibcol = c3_b_itilerow;
      c3_x->data[c3_ibcol] = c3_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c3_this->pMetric->size[0], c3_x->size[0]);
  c3_i5 = c3_this->pMetric->size[0];
  c3_this->pMetric->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pMetric, c3_i5,
    &c3_ug_emlrtRTEI);
  c3_c_loop_ub = c3_x->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_c_loop_ub; c3_i7++) {
    c3_this->pMetric->data[c3_i7] = c3_x->data[c3_i7];
  }

  c3_emxInit_real32_T(chartInstance, &c3_r, 2, &c3_ad_emlrtRTEI);
  c3_i9 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = c3_this->pLocation->size[0];
  c3_r->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_r, c3_i9, &c3_wg_emlrtRTEI);
  c3_e_loop_ub = c3_this->pLocation->size[0] * c3_this->pLocation->size[1] - 1;
  for (c3_i11 = 0; c3_i11 <= c3_e_loop_ub; c3_i11++) {
    c3_r->data[c3_i11] = c3_this->pLocation->data[c3_i11];
  }

  c3_b_n = (real_T)c3_r->size[0];
  c3_i12 = c3_this->pScale->size[0];
  c3_this->pScale->size[0] = (int32_T)c3_b_n;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pScale, c3_i12,
    &c3_ad_emlrtRTEI);
  c3_i13 = c3_this->pOrientation->size[0];
  c3_this->pOrientation->size[0] = (int32_T)c3_b_n;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pOrientation, c3_i13,
    &c3_ad_emlrtRTEI);
  c3_i14 = c3_this->pSignOfLaplacian->size[0];
  c3_this->pSignOfLaplacian->size[0] = (int32_T)c3_b_n;
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_this->pSignOfLaplacian, c3_i14,
    &c3_ad_emlrtRTEI);
  c3_i15 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i15, &c3_yg_emlrtRTEI);
  c3_f_loop_ub = c3_inputs.Scale->size[0] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_r);
  for (c3_i16 = 0; c3_i16 <= c3_f_loop_ub; c3_i16++) {
    c3_x->data[c3_i16] = c3_inputs.Scale->data[c3_i16];
  }

  c3_b_N = c3_b_n;
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_b_varargin_1 = c3_b_N;
    c3_assertValidSizeArg(chartInstance, c3_b_varargin_1);
    c3_i18 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_b_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i18,
      &c3_vg_emlrtRTEI);
    c3_h_loop_ub = (int32_T)c3_b_varargin_1 - 1;
    for (c3_i20 = 0; c3_i20 <= c3_h_loop_ub; c3_i20++) {
      c3_tile->data[c3_i20] = false;
    }

    c3_b_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_b_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_e_y = NULL;
      sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_e_y);
    }

    c3_i22 = c3_x->size[0];
    c3_x->size[0] = c3_b_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i22, &c3_xg_emlrtRTEI);
    c3_b_ntilerows = c3_tile->size[0];
    c3_c_b = c3_b_ntilerows;
    c3_d_b = c3_c_b;
    if (1 > c3_d_b) {
      c3_b_overflow = false;
    } else {
      c3_b_overflow = (c3_d_b > 2147483646);
    }

    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_c_itilerow = 1; c3_c_itilerow - 1 < c3_b_ntilerows; c3_c_itilerow++)
    {
      c3_d_itilerow = c3_c_itilerow - 1;
      c3_b_ibcol = c3_d_itilerow;
      c3_x->data[c3_b_ibcol] = c3_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c3_this->pScale->size[0], c3_x->size[0]);
  c3_i17 = c3_this->pScale->size[0];
  c3_this->pScale->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pScale, c3_i17,
    &c3_ah_emlrtRTEI);
  c3_g_loop_ub = c3_x->size[0] - 1;
  for (c3_i19 = 0; c3_i19 <= c3_g_loop_ub; c3_i19++) {
    c3_this->pScale->data[c3_i19] = c3_x->data[c3_i19];
  }

  c3_c_N = c3_b_n;
  c3_c_varargin_1 = c3_c_N;
  c3_assertValidSizeArg(chartInstance, c3_c_varargin_1);
  c3_i21 = c3_tile->size[0];
  c3_tile->size[0] = (int32_T)c3_c_varargin_1;
  c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i21,
    &c3_vg_emlrtRTEI);
  c3_i_loop_ub = (int32_T)c3_c_varargin_1 - 1;
  for (c3_i23 = 0; c3_i23 <= c3_i_loop_ub; c3_i23++) {
    c3_tile->data[c3_i23] = false;
  }

  c3_c_outsize[0] = c3_tile->size[0];
  if (!((real_T)c3_c_outsize[0] == (real_T)c3_tile->size[0])) {
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_f_y);
  }

  c3_i24 = c3_x->size[0];
  c3_x->size[0] = c3_c_outsize[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i24, &c3_bh_emlrtRTEI);
  c3_j_loop_ub = c3_c_outsize[0] - 1;
  for (c3_i25 = 0; c3_i25 <= c3_j_loop_ub; c3_i25++) {
    c3_x->data[c3_i25] = 0.0F;
  }

  sf_mex_lw_sub_assign_size_check_1d(c3_this->pOrientation->size[0], c3_x->size
    [0]);
  c3_i26 = c3_this->pOrientation->size[0];
  c3_this->pOrientation->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pOrientation, c3_i26,
    &c3_ch_emlrtRTEI);
  c3_k_loop_ub = c3_x->size[0] - 1;
  for (c3_i27 = 0; c3_i27 <= c3_k_loop_ub; c3_i27++) {
    c3_this->pOrientation->data[c3_i27] = c3_x->data[c3_i27];
  }

  c3_i28 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i28, &c3_dh_emlrtRTEI);
  c3_l_loop_ub = c3_inputs.SignOfLaplacian->size[0] - 1;
  for (c3_i29 = 0; c3_i29 <= c3_l_loop_ub; c3_i29++) {
    c3_x->data[c3_i29] = (real32_T)c3_inputs.SignOfLaplacian->data[c3_i29];
  }

  c3_d_N = c3_b_n;
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_d_varargin_1 = c3_d_N;
    c3_assertValidSizeArg(chartInstance, c3_d_varargin_1);
    c3_i31 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_d_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i31,
      &c3_vg_emlrtRTEI);
    c3_n_loop_ub = (int32_T)c3_d_varargin_1 - 1;
    for (c3_i33 = 0; c3_i33 <= c3_n_loop_ub; c3_i33++) {
      c3_tile->data[c3_i33] = false;
    }

    c3_d_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_d_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_g_y = NULL;
      sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_g_y);
    }

    c3_i36 = c3_x->size[0];
    c3_x->size[0] = c3_d_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i36, &c3_xg_emlrtRTEI);
    c3_c_ntilerows = c3_tile->size[0];
    c3_e_b = c3_c_ntilerows;
    c3_f_b = c3_e_b;
    if (1 > c3_f_b) {
      c3_c_overflow = false;
    } else {
      c3_c_overflow = (c3_f_b > 2147483646);
    }

    if (c3_c_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_e_itilerow = 1; c3_e_itilerow - 1 < c3_c_ntilerows; c3_e_itilerow++)
    {
      c3_f_itilerow = c3_e_itilerow - 1;
      c3_c_ibcol = c3_f_itilerow;
      c3_x->data[c3_c_ibcol] = c3_a_data[0];
    }
  }

  c3_emxFree_boolean_T(chartInstance, &c3_tile);
  c3_emxInit_int8_T(chartInstance, &c3_r1, 1, &c3_ad_emlrtRTEI);
  c3_i30 = c3_r1->size[0];
  c3_r1->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_r1, c3_i30, &c3_eh_emlrtRTEI);
  c3_m_loop_ub = c3_x->size[0] - 1;
  for (c3_i32 = 0; c3_i32 <= c3_m_loop_ub; c3_i32++) {
    c3_f = muSingleScalarRound(c3_x->data[c3_i32]);
    if (c3_f < 128.0F) {
      if (c3_f >= -128.0F) {
        c3_i35 = (int8_T)c3_f;
      } else {
        c3_i35 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c3_f >= 128.0F) {
      c3_i35 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c3_i35 = 0;
    }

    c3_r1->data[c3_i32] = c3_i35;
  }

  c3_emxFree_real32_T(chartInstance, &c3_x);
  sf_mex_lw_sub_assign_size_check_1d(c3_this->pSignOfLaplacian->size[0],
    c3_r1->size[0]);
  c3_i34 = c3_this->pSignOfLaplacian->size[0];
  c3_this->pSignOfLaplacian->size[0] = c3_r1->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_this->pSignOfLaplacian, c3_i34,
    &c3_eh_emlrtRTEI);
  c3_o_loop_ub = c3_r1->size[0] - 1;
  for (c3_i37 = 0; c3_i37 <= c3_o_loop_ub; c3_i37++) {
    c3_this->pSignOfLaplacian->data[c3_i37] = c3_r1->data[c3_i37];
  }

  c3_emxFree_int8_T(chartInstance, &c3_r1);
}

static void c3_d_SURFPointsImpl_configure
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_this, c3_sGhH0Msgf1shDAvf5CNZg6B
   c3_inputs)
{
  real_T c3_n;
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  c3_emxArray_real32_T *c3_x;
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_b_loop_ub;
  int32_T c3_i4;
  real_T c3_N;
  c3_emxArray_boolean_T *c3_tile;
  real32_T c3_a_data[1];
  real_T c3_varargin_1;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_c_loop_ub;
  int32_T c3_i7;
  int32_T c3_d_loop_ub;
  int32_T c3_i8;
  c3_emxArray_real32_T *c3_r;
  int32_T c3_i9;
  int32_T c3_outsize[2];
  const mxArray *c3_d_y = NULL;
  int32_T c3_i10;
  int32_T c3_e_loop_ub;
  int32_T c3_i11;
  int32_T c3_ntilerows;
  real_T c3_b_n;
  int32_T c3_b;
  int32_T c3_i12;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_i13;
  int32_T c3_i14;
  int32_T c3_itilerow;
  int32_T c3_i15;
  int32_T c3_b_itilerow;
  int32_T c3_ibcol;
  int32_T c3_f_loop_ub;
  int32_T c3_i16;
  real_T c3_b_N;
  real_T c3_b_varargin_1;
  int32_T c3_i17;
  int32_T c3_i18;
  int32_T c3_g_loop_ub;
  int32_T c3_i19;
  int32_T c3_h_loop_ub;
  int32_T c3_i20;
  int32_T c3_i21;
  int32_T c3_b_outsize[2];
  int32_T c3_i_loop_ub;
  const mxArray *c3_e_y = NULL;
  int32_T c3_i22;
  int32_T c3_i23;
  real_T c3_c_N;
  int32_T c3_b_ntilerows;
  int32_T c3_c_b;
  real_T c3_c_varargin_1;
  int32_T c3_d_b;
  int32_T c3_i24;
  int32_T c3_i25;
  boolean_T c3_b_overflow;
  int32_T c3_j_loop_ub;
  int32_T c3_i26;
  int32_T c3_k_loop_ub;
  int32_T c3_i27;
  int32_T c3_c_itilerow;
  int32_T c3_i28;
  int32_T c3_c_outsize[2];
  int32_T c3_d_itilerow;
  int32_T c3_l_loop_ub;
  const mxArray *c3_f_y = NULL;
  int32_T c3_b_ibcol;
  int32_T c3_i29;
  int32_T c3_i30;
  real_T c3_d_N;
  int32_T c3_c_ntilerows;
  int32_T c3_e_b;
  real_T c3_d_varargin_1;
  int32_T c3_f_b;
  c3_emxArray_int8_T *c3_r1;
  int32_T c3_i31;
  int32_T c3_i32;
  boolean_T c3_c_overflow;
  int32_T c3_m_loop_ub;
  int32_T c3_n_loop_ub;
  int32_T c3_i33;
  int32_T c3_i34;
  int32_T c3_e_itilerow;
  real32_T c3_f;
  int32_T c3_d_outsize[2];
  int32_T c3_f_itilerow;
  int32_T c3_i35;
  const mxArray *c3_g_y = NULL;
  int32_T c3_c_ibcol;
  int8_T c3_i36;
  int32_T c3_i37;
  int32_T c3_o_loop_ub;
  int32_T c3_i38;
  int32_T c3_d_ntilerows;
  int32_T c3_g_b;
  int32_T c3_h_b;
  boolean_T c3_d_overflow;
  int32_T c3_g_itilerow;
  int32_T c3_h_itilerow;
  int32_T c3_d_ibcol;
  c3_n = (real_T)c3_inputs.Location->size[0];
  c3_i = c3_this->pLocation->size[0] * c3_this->pLocation->size[1];
  c3_this->pLocation->size[0] = c3_inputs.Location->size[0];
  c3_this->pLocation->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_this->pLocation, c3_i,
    &c3_qg_emlrtRTEI);
  c3_loop_ub = c3_inputs.Location->size[0] * c3_inputs.Location->size[1] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_this->pLocation->data[c3_i1] = c3_inputs.Location->data[c3_i1];
  }

  c3_emxInit_real32_T1(chartInstance, &c3_x, 1, &c3_sg_emlrtRTEI);
  c3_i2 = c3_this->pMetric->size[0];
  c3_this->pMetric->size[0] = (int32_T)c3_n;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pMetric, c3_i2,
    &c3_rg_emlrtRTEI);
  c3_i3 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.Metric->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i3, &c3_sg_emlrtRTEI);
  c3_b_loop_ub = c3_inputs.Metric->size[0] - 1;
  for (c3_i4 = 0; c3_i4 <= c3_b_loop_ub; c3_i4++) {
    c3_x->data[c3_i4] = c3_inputs.Metric->data[c3_i4];
  }

  c3_N = c3_n;
  c3_emxInit_boolean_T(chartInstance, &c3_tile, 1, &c3_vg_emlrtRTEI);
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_varargin_1 = c3_N;
    c3_assertValidSizeArg(chartInstance, c3_varargin_1);
    c3_i6 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i6,
      &c3_vg_emlrtRTEI);
    c3_d_loop_ub = (int32_T)c3_varargin_1 - 1;
    for (c3_i8 = 0; c3_i8 <= c3_d_loop_ub; c3_i8++) {
      c3_tile->data[c3_i8] = false;
    }

    c3_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_d_y = NULL;
      sf_mex_assign(&c3_d_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_d_y);
    }

    c3_i10 = c3_x->size[0];
    c3_x->size[0] = c3_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i10, &c3_xg_emlrtRTEI);
    c3_ntilerows = c3_tile->size[0];
    c3_b = c3_ntilerows;
    c3_b_b = c3_b;
    if (1 > c3_b_b) {
      c3_overflow = false;
    } else {
      c3_overflow = (c3_b_b > 2147483646);
    }

    if (c3_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_itilerow = 1; c3_itilerow - 1 < c3_ntilerows; c3_itilerow++) {
      c3_b_itilerow = c3_itilerow - 1;
      c3_ibcol = c3_b_itilerow;
      c3_x->data[c3_ibcol] = c3_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c3_this->pMetric->size[0], c3_x->size[0]);
  c3_i5 = c3_this->pMetric->size[0];
  c3_this->pMetric->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pMetric, c3_i5,
    &c3_ug_emlrtRTEI);
  c3_c_loop_ub = c3_x->size[0] - 1;
  for (c3_i7 = 0; c3_i7 <= c3_c_loop_ub; c3_i7++) {
    c3_this->pMetric->data[c3_i7] = c3_x->data[c3_i7];
  }

  c3_emxInit_real32_T(chartInstance, &c3_r, 2, &c3_ad_emlrtRTEI);
  c3_i9 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = c3_this->pLocation->size[0];
  c3_r->size[1] = 2;
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_r, c3_i9, &c3_wg_emlrtRTEI);
  c3_e_loop_ub = c3_this->pLocation->size[0] * c3_this->pLocation->size[1] - 1;
  for (c3_i11 = 0; c3_i11 <= c3_e_loop_ub; c3_i11++) {
    c3_r->data[c3_i11] = c3_this->pLocation->data[c3_i11];
  }

  c3_b_n = (real_T)c3_r->size[0];
  c3_i12 = c3_this->pScale->size[0];
  c3_this->pScale->size[0] = (int32_T)c3_b_n;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pScale, c3_i12,
    &c3_ad_emlrtRTEI);
  c3_i13 = c3_this->pOrientation->size[0];
  c3_this->pOrientation->size[0] = (int32_T)c3_b_n;
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pOrientation, c3_i13,
    &c3_ad_emlrtRTEI);
  c3_i14 = c3_this->pSignOfLaplacian->size[0];
  c3_this->pSignOfLaplacian->size[0] = (int32_T)c3_b_n;
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_this->pSignOfLaplacian, c3_i14,
    &c3_ad_emlrtRTEI);
  c3_i15 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.Scale->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i15, &c3_yg_emlrtRTEI);
  c3_f_loop_ub = c3_inputs.Scale->size[0] - 1;
  c3_emxFree_real32_T(chartInstance, &c3_r);
  for (c3_i16 = 0; c3_i16 <= c3_f_loop_ub; c3_i16++) {
    c3_x->data[c3_i16] = c3_inputs.Scale->data[c3_i16];
  }

  c3_b_N = c3_b_n;
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_b_varargin_1 = c3_b_N;
    c3_assertValidSizeArg(chartInstance, c3_b_varargin_1);
    c3_i18 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_b_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i18,
      &c3_vg_emlrtRTEI);
    c3_h_loop_ub = (int32_T)c3_b_varargin_1 - 1;
    for (c3_i20 = 0; c3_i20 <= c3_h_loop_ub; c3_i20++) {
      c3_tile->data[c3_i20] = false;
    }

    c3_b_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_b_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_e_y = NULL;
      sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_e_y);
    }

    c3_i23 = c3_x->size[0];
    c3_x->size[0] = c3_b_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i23, &c3_xg_emlrtRTEI);
    c3_b_ntilerows = c3_tile->size[0];
    c3_c_b = c3_b_ntilerows;
    c3_d_b = c3_c_b;
    if (1 > c3_d_b) {
      c3_b_overflow = false;
    } else {
      c3_b_overflow = (c3_d_b > 2147483646);
    }

    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_c_itilerow = 1; c3_c_itilerow - 1 < c3_b_ntilerows; c3_c_itilerow++)
    {
      c3_d_itilerow = c3_c_itilerow - 1;
      c3_b_ibcol = c3_d_itilerow;
      c3_x->data[c3_b_ibcol] = c3_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c3_this->pScale->size[0], c3_x->size[0]);
  c3_i17 = c3_this->pScale->size[0];
  c3_this->pScale->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pScale, c3_i17,
    &c3_ah_emlrtRTEI);
  c3_g_loop_ub = c3_x->size[0] - 1;
  for (c3_i19 = 0; c3_i19 <= c3_g_loop_ub; c3_i19++) {
    c3_this->pScale->data[c3_i19] = c3_x->data[c3_i19];
  }

  c3_i21 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.Orientation->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i21, &c3_fh_emlrtRTEI);
  c3_i_loop_ub = c3_inputs.Orientation->size[0] - 1;
  for (c3_i22 = 0; c3_i22 <= c3_i_loop_ub; c3_i22++) {
    c3_x->data[c3_i22] = c3_inputs.Orientation->data[c3_i22];
  }

  c3_c_N = c3_b_n;
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_c_varargin_1 = c3_c_N;
    c3_assertValidSizeArg(chartInstance, c3_c_varargin_1);
    c3_i25 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_c_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i25,
      &c3_vg_emlrtRTEI);
    c3_k_loop_ub = (int32_T)c3_c_varargin_1 - 1;
    for (c3_i27 = 0; c3_i27 <= c3_k_loop_ub; c3_i27++) {
      c3_tile->data[c3_i27] = false;
    }

    c3_c_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_c_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_f_y = NULL;
      sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_f_y);
    }

    c3_i30 = c3_x->size[0];
    c3_x->size[0] = c3_c_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i30, &c3_xg_emlrtRTEI);
    c3_c_ntilerows = c3_tile->size[0];
    c3_e_b = c3_c_ntilerows;
    c3_f_b = c3_e_b;
    if (1 > c3_f_b) {
      c3_c_overflow = false;
    } else {
      c3_c_overflow = (c3_f_b > 2147483646);
    }

    if (c3_c_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_e_itilerow = 1; c3_e_itilerow - 1 < c3_c_ntilerows; c3_e_itilerow++)
    {
      c3_f_itilerow = c3_e_itilerow - 1;
      c3_c_ibcol = c3_f_itilerow;
      c3_x->data[c3_c_ibcol] = c3_a_data[0];
    }
  }

  sf_mex_lw_sub_assign_size_check_1d(c3_this->pOrientation->size[0], c3_x->size
    [0]);
  c3_i24 = c3_this->pOrientation->size[0];
  c3_this->pOrientation->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_this->pOrientation, c3_i24,
    &c3_ch_emlrtRTEI);
  c3_j_loop_ub = c3_x->size[0] - 1;
  for (c3_i26 = 0; c3_i26 <= c3_j_loop_ub; c3_i26++) {
    c3_this->pOrientation->data[c3_i26] = c3_x->data[c3_i26];
  }

  c3_i28 = c3_x->size[0];
  c3_x->size[0] = c3_inputs.SignOfLaplacian->size[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i28, &c3_dh_emlrtRTEI);
  c3_l_loop_ub = c3_inputs.SignOfLaplacian->size[0] - 1;
  for (c3_i29 = 0; c3_i29 <= c3_l_loop_ub; c3_i29++) {
    c3_x->data[c3_i29] = (real32_T)c3_inputs.SignOfLaplacian->data[c3_i29];
  }

  c3_d_N = c3_b_n;
  if (c3_x->size[0] == 1) {
    c3_a_data[0] = c3_x->data[0];
    c3_d_varargin_1 = c3_d_N;
    c3_assertValidSizeArg(chartInstance, c3_d_varargin_1);
    c3_i32 = c3_tile->size[0];
    c3_tile->size[0] = (int32_T)c3_d_varargin_1;
    c3_emxEnsureCapacity_boolean_T(chartInstance, c3_tile, c3_i32,
      &c3_vg_emlrtRTEI);
    c3_n_loop_ub = (int32_T)c3_d_varargin_1 - 1;
    for (c3_i34 = 0; c3_i34 <= c3_n_loop_ub; c3_i34++) {
      c3_tile->data[c3_i34] = false;
    }

    c3_d_outsize[0] = c3_tile->size[0];
    if (!((real_T)c3_d_outsize[0] == (real_T)c3_tile->size[0])) {
      c3_g_y = NULL;
      sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 1U, 14, c3_g_y);
    }

    c3_i37 = c3_x->size[0];
    c3_x->size[0] = c3_d_outsize[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_x, c3_i37, &c3_xg_emlrtRTEI);
    c3_d_ntilerows = c3_tile->size[0];
    c3_g_b = c3_d_ntilerows;
    c3_h_b = c3_g_b;
    if (1 > c3_h_b) {
      c3_d_overflow = false;
    } else {
      c3_d_overflow = (c3_h_b > 2147483646);
    }

    if (c3_d_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_g_itilerow = 1; c3_g_itilerow - 1 < c3_d_ntilerows; c3_g_itilerow++)
    {
      c3_h_itilerow = c3_g_itilerow - 1;
      c3_d_ibcol = c3_h_itilerow;
      c3_x->data[c3_d_ibcol] = c3_a_data[0];
    }
  }

  c3_emxFree_boolean_T(chartInstance, &c3_tile);
  c3_emxInit_int8_T(chartInstance, &c3_r1, 1, &c3_ad_emlrtRTEI);
  c3_i31 = c3_r1->size[0];
  c3_r1->size[0] = c3_x->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_r1, c3_i31, &c3_eh_emlrtRTEI);
  c3_m_loop_ub = c3_x->size[0] - 1;
  for (c3_i33 = 0; c3_i33 <= c3_m_loop_ub; c3_i33++) {
    c3_f = muSingleScalarRound(c3_x->data[c3_i33]);
    if (c3_f < 128.0F) {
      if (c3_f >= -128.0F) {
        c3_i36 = (int8_T)c3_f;
      } else {
        c3_i36 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c3_f >= 128.0F) {
      c3_i36 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c3_i36 = 0;
    }

    c3_r1->data[c3_i33] = c3_i36;
  }

  c3_emxFree_real32_T(chartInstance, &c3_x);
  sf_mex_lw_sub_assign_size_check_1d(c3_this->pSignOfLaplacian->size[0],
    c3_r1->size[0]);
  c3_i35 = c3_this->pSignOfLaplacian->size[0];
  c3_this->pSignOfLaplacian->size[0] = c3_r1->size[0];
  c3_emxEnsureCapacity_int8_T(chartInstance, c3_this->pSignOfLaplacian, c3_i35,
    &c3_eh_emlrtRTEI);
  c3_o_loop_ub = c3_r1->size[0] - 1;
  for (c3_i38 = 0; c3_i38 <= c3_o_loop_ub; c3_i38++) {
    c3_this->pSignOfLaplacian->data[c3_i38] = c3_r1->data[c3_i38];
  }

  c3_emxFree_int8_T(chartInstance, &c3_r1);
}

static void c3_b_normalizeX(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T *c3_c_X)
{
  c3_emxArray_real32_T *c3_ztemp;
  int32_T c3_i;
  int32_T c3_i1;
  real_T c3_sz[2];
  int32_T c3_i2;
  int32_T c3_i3;
  int32_T c3_iv[2];
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_nx;
  int32_T c3_b;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_k;
  c3_emxArray_real32_T *c3_Xnorm;
  int32_T c3_b_k;
  boolean_T c3_c_b;
  real32_T c3_a;
  real32_T c3_d_y;
  int32_T c3_npages;
  int32_T c3_i8;
  int32_T c3_i9;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_loop_ub;
  int32_T c3_d_b;
  int32_T c3_i12;
  int32_T c3_e_b;
  boolean_T c3_b_overflow;
  boolean_T c3_p;
  real_T c3_d;
  int32_T c3_i13;
  int32_T c3_c_k;
  int32_T c3_xi;
  real_T c3_d_k;
  int32_T c3_b_xi;
  const mxArray *c3_e_y = NULL;
  int32_T c3_xpageoffset;
  int32_T c3_b_nx;
  static char_T c3_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  boolean_T c3_b_p;
  int32_T c3_ypageoffset;
  int32_T c3_f_b;
  const mxArray *c3_f_y = NULL;
  int32_T c3_ix;
  int32_T c3_g_b;
  int32_T c3_iy;
  const mxArray *c3_g_y = NULL;
  boolean_T c3_c_overflow;
  static char_T c3_b_cv1[4] = { 's', 'q', 'r', 't' };

  int32_T c3_e_k;
  int32_T c3_xoffset;
  int32_T c3_f_k;
  int32_T c3_i14;
  int32_T c3_g_k;
  real32_T c3_x;
  real32_T c3_b_x;
  int32_T c3_b_loop_ub;
  int32_T c3_i15;
  boolean_T c3_iscompatible;
  int32_T c3_sak;
  int32_T c3_sbk;
  int32_T c3_sck;
  int32_T c3_csz[2];
  const mxArray *c3_h_y = NULL;
  int32_T c3_i16;
  static char_T c3_b_cv2[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 's',
    'x', 'f', 'u', 'n', ':', 'a', 'r', 'r', 'a', 'y', 'D', 'i', 'm', 'e', 'n',
    's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't', 'M', 'a', 't', 'c', 'h' };

  const mxArray *c3_i_y = NULL;
  boolean_T c3_b1;
  int32_T c3_sza;
  int32_T c3_szb;
  int32_T c3_i17;
  int32_T c3_szc;
  int32_T c3_acoef;
  c3_emxArray_boolean_T *c3_r;
  int32_T c3_tmp_data[64];
  int32_T c3_bcoef;
  int32_T c3_exponent;
  int32_T c3_i18;
  int32_T c3_i19;
  int32_T c3_h_k;
  int32_T c3_ia;
  int32_T c3_c_loop_ub;
  int32_T c3_ib;
  int32_T c3_i20;
  int32_T c3_ic;
  int32_T c3_varargin_1;
  int32_T c3_varargin_2;
  int32_T c3_end;
  int32_T c3_varargin_3;
  int32_T c3_trueCount;
  int32_T c3_i_k;
  int32_T c3_b_i;
  int32_T c3_b_ia;
  int32_T c3_b_ic;
  c3_emxArray_int32_T *c3_r1;
  int32_T c3_b_varargin_1;
  int32_T c3_i21;
  int32_T c3_b_varargin_2;
  int32_T c3_b_varargin_3;
  int32_T c3_varargin_4;
  int32_T c3_varargin_6;
  int32_T c3_partialTrueCount;
  real32_T c3_c_x;
  int32_T c3_c_i;
  real32_T c3_j_y;
  real32_T c3_d_x;
  real32_T c3_k_y;
  real32_T c3_z;
  int32_T c3_iv1[2];
  int32_T c3_i22;
  int32_T c3_d_loop_ub;
  int32_T c3_i23;
  int32_T c3_i24;
  c3_emxInit_real32_T(chartInstance, &c3_ztemp, 2, &c3_rh_emlrtRTEI);
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_sz[c3_i] = (real_T)c3_c_X->size[c3_i];
  }

  c3_i1 = c3_ztemp->size[0] * c3_ztemp->size[1];
  c3_ztemp->size[0] = 64;
  c3_ztemp->size[1] = (int32_T)c3_sz[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ztemp, c3_i1, &c3_gh_emlrtRTEI);
  for (c3_i2 = 0; c3_i2 < 2; c3_i2++) {
    c3_iv[c3_i2] = c3_ztemp->size[c3_i2];
  }

  c3_i3 = c3_ztemp->size[0] * c3_ztemp->size[1];
  c3_ztemp->size[0] = c3_iv[0];
  c3_ztemp->size[1] = c3_iv[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ztemp, c3_i3, &c3_hh_emlrtRTEI);
  for (c3_i4 = 0; c3_i4 < 2; c3_i4++) {
    c3_iv[c3_i4] = c3_ztemp->size[c3_i4];
  }

  c3_i5 = c3_ztemp->size[0] * c3_ztemp->size[1];
  c3_ztemp->size[0] = c3_iv[0];
  c3_ztemp->size[1] = c3_iv[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ztemp, c3_i5, &c3_ih_emlrtRTEI);
  for (c3_i6 = 0; c3_i6 < 2; c3_i6++) {
    c3_iv[c3_i6] = c3_ztemp->size[c3_i6];
  }

  c3_i7 = c3_ztemp->size[0] * c3_ztemp->size[1];
  c3_ztemp->size[0] = c3_iv[0];
  c3_ztemp->size[1] = c3_iv[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ztemp, c3_i7, &c3_jh_emlrtRTEI);
  c3_nx = c3_ztemp->size[1] << 6;
  c3_b = c3_nx;
  c3_b_b = c3_b;
  if (1 > c3_b_b) {
    c3_overflow = false;
  } else {
    c3_overflow = (c3_b_b > 2147483646);
  }

  if (c3_overflow) {
    c3_check_forloop_overflow_error(chartInstance, true);
  }

  for (c3_k = 1; c3_k - 1 < c3_nx; c3_k++) {
    c3_b_k = c3_k - 1;
    c3_a = c3_c_X->data[c3_b_k];
    c3_d_y = c3_a * c3_a;
    c3_ztemp->data[c3_b_k] = c3_d_y;
  }

  c3_emxInit_real32_T(chartInstance, &c3_Xnorm, 2, &c3_qh_emlrtRTEI);
  c3_c_b = (c3_ztemp->size[1] == 0);
  if (c3_c_b) {
    for (c3_i8 = 0; c3_i8 < 2; c3_i8++) {
      c3_sz[c3_i8] = (real_T)c3_ztemp->size[c3_i8];
    }

    c3_i10 = c3_Xnorm->size[0] * c3_Xnorm->size[1];
    c3_Xnorm->size[0] = 1;
    c3_Xnorm->size[1] = (int32_T)c3_sz[1];
    c3_emxEnsureCapacity_real32_T(chartInstance, c3_Xnorm, c3_i10,
      &c3_kh_emlrtRTEI);
    c3_loop_ub = (int32_T)c3_sz[1] - 1;
    for (c3_i12 = 0; c3_i12 <= c3_loop_ub; c3_i12++) {
      c3_Xnorm->data[c3_i12] = 0.0F;
    }
  } else {
    c3_npages = c3_ztemp->size[1];
    for (c3_i9 = 0; c3_i9 < 2; c3_i9++) {
      c3_sz[c3_i9] = (real_T)c3_ztemp->size[c3_i9];
    }

    c3_i11 = c3_Xnorm->size[0] * c3_Xnorm->size[1];
    c3_Xnorm->size[0] = 1;
    c3_Xnorm->size[1] = (int32_T)c3_sz[1];
    c3_emxEnsureCapacity_real32_T(chartInstance, c3_Xnorm, c3_i11,
      &c3_lh_emlrtRTEI);
    c3_d_b = c3_npages;
    c3_e_b = c3_d_b;
    if (1 > c3_e_b) {
      c3_b_overflow = false;
    } else {
      c3_b_overflow = (c3_e_b > 2147483646);
    }

    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_xi = 1; c3_xi - 1 < c3_npages; c3_xi++) {
      c3_b_xi = c3_xi - 1;
      c3_xpageoffset = (c3_b_xi << 6) + 1;
      c3_ypageoffset = c3_b_xi + 1;
      c3_ix = c3_xpageoffset - 1;
      c3_iy = c3_ypageoffset - 1;
      c3_Xnorm->data[c3_iy] = c3_ztemp->data[c3_ix];
      for (c3_e_k = 0; c3_e_k < 63; c3_e_k++) {
        c3_xoffset = (c3_xpageoffset + c3_e_k) + 1;
        c3_ix = c3_xoffset - 1;
        c3_iy = c3_ypageoffset - 1;
        c3_Xnorm->data[c3_iy] += c3_ztemp->data[c3_ix];
      }
    }
  }

  c3_p = false;
  c3_d = (real_T)c3_Xnorm->size[1];
  c3_i13 = (int32_T)c3_d - 1;
  for (c3_c_k = 0; c3_c_k <= c3_i13; c3_c_k++) {
    c3_d_k = (real_T)c3_c_k + 1.0;
    if (c3_p || (c3_Xnorm->data[(int32_T)c3_d_k - 1] < 0.0F)) {
      c3_b_p = true;
    } else {
      c3_b_p = false;
    }

    c3_p = c3_b_p;
  }

  if (c3_p) {
    c3_e_y = NULL;
    sf_mex_assign(&c3_e_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c3_f_y = NULL;
    sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c3_g_y = NULL;
    sf_mex_assign(&c3_g_y, sf_mex_create("y", c3_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_e_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 2U, 14, c3_f_y, 14,
                  c3_g_y)));
  }

  c3_b_nx = c3_Xnorm->size[1];
  c3_f_b = c3_b_nx;
  c3_g_b = c3_f_b;
  if (1 > c3_g_b) {
    c3_c_overflow = false;
  } else {
    c3_c_overflow = (c3_g_b > 2147483646);
  }

  if (c3_c_overflow) {
    c3_check_forloop_overflow_error(chartInstance, true);
  }

  for (c3_f_k = 1; c3_f_k - 1 < c3_b_nx; c3_f_k++) {
    c3_g_k = c3_f_k - 1;
    c3_x = c3_Xnorm->data[c3_g_k];
    c3_b_x = c3_x;
    c3_b_x = muSingleScalarSqrt(c3_b_x);
    c3_Xnorm->data[c3_g_k] = c3_b_x;
  }

  c3_i14 = c3_ztemp->size[0] * c3_ztemp->size[1];
  c3_ztemp->size[0] = 64;
  c3_ztemp->size[1] = c3_c_X->size[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_ztemp, c3_i14,
    &c3_mh_emlrtRTEI);
  c3_b_loop_ub = c3_c_X->size[0] * c3_c_X->size[1] - 1;
  for (c3_i15 = 0; c3_i15 <= c3_b_loop_ub; c3_i15++) {
    c3_ztemp->data[c3_i15] = c3_c_X->data[c3_i15];
  }

  c3_iscompatible = true;
  c3_sak = c3_ztemp->size[1];
  c3_sbk = c3_Xnorm->size[1];
  if (c3_sbk == 1) {
    c3_sck = c3_sak;
  } else if (c3_sak == 1) {
    c3_sck = c3_sbk;
  } else if (c3_sak == c3_sbk) {
    c3_sck = c3_sak;
  } else {
    c3_iscompatible = false;
    if (c3_sbk < c3_sak) {
      c3_sck = c3_sbk;
    } else {
      c3_sck = c3_sak;
    }
  }

  c3_csz[1] = c3_sck;
  if (!c3_iscompatible) {
    c3_h_y = NULL;
    sf_mex_assign(&c3_h_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c3_i_y = NULL;
    sf_mex_assign(&c3_i_y, sf_mex_create("y", c3_b_cv2, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    sf_mex_call(chartInstance->c3_fEmlrtCtx, "error", 0U, 2U, 14, c3_h_y, 14,
                sf_mex_call(chartInstance->c3_fEmlrtCtx, "getString", 1U, 1U, 14,
      sf_mex_call(chartInstance->c3_fEmlrtCtx, "message", 1U, 1U, 14, c3_i_y)));
  }

  c3_i16 = c3_c_X->size[0] * c3_c_X->size[1];
  c3_c_X->size[0] = 64;
  c3_c_X->size[1] = c3_csz[1];
  c3_emxEnsureCapacity_real32_T(chartInstance, c3_c_X, c3_i16, &c3_nh_emlrtRTEI);
  c3_b1 = (c3_c_X->size[1] == 0);
  if (!c3_b1) {
    c3_sza = c3_ztemp->size[1];
    c3_szb = c3_Xnorm->size[1];
    c3_szc = c3_c_X->size[1] - 1;
    c3_acoef = (c3_sza != 1);
    c3_bcoef = (c3_szb != 1);
    c3_i18 = c3_szc;
    for (c3_h_k = 0; c3_h_k <= c3_i18; c3_h_k++) {
      c3_ia = c3_acoef * c3_h_k;
      c3_ib = c3_bcoef * c3_h_k;
      c3_ic = c3_h_k;
      c3_varargin_1 = c3_ic + 1;
      c3_varargin_2 = c3_ia + 1;
      c3_varargin_3 = c3_ib + 1;
      for (c3_i_k = 0; c3_i_k < 64; c3_i_k++) {
        c3_b_ia = c3_i_k;
        c3_b_ic = c3_i_k;
        c3_b_varargin_1 = c3_b_ic;
        c3_b_varargin_2 = c3_varargin_1 - 1;
        c3_b_varargin_3 = c3_b_ia;
        c3_varargin_4 = c3_varargin_2 - 1;
        c3_varargin_6 = c3_varargin_3 - 1;
        c3_c_x = c3_ztemp->data[c3_b_varargin_3 + (c3_varargin_4 << 6)];
        c3_j_y = c3_Xnorm->data[c3_varargin_6];
        c3_d_x = c3_c_x;
        c3_k_y = c3_j_y;
        c3_z = c3_d_x / c3_k_y;
        c3_c_X->data[c3_b_varargin_1 + (c3_b_varargin_2 << 6)] = c3_z;
      }
    }
  }

  c3_emxFree_real32_T(chartInstance, &c3_ztemp);
  for (c3_i17 = 0; c3_i17 < 64; c3_i17++) {
    c3_tmp_data[c3_i17] = 1 + c3_i17;
  }

  c3_emxInit_boolean_T1(chartInstance, &c3_r, 2, &c3_ph_emlrtRTEI);
  frexp(1.0, &c3_exponent);
  c3_i19 = c3_r->size[0] * c3_r->size[1];
  c3_r->size[0] = 1;
  c3_r->size[1] = c3_Xnorm->size[1];
  c3_emxEnsureCapacity_boolean_T1(chartInstance, c3_r, c3_i19, &c3_ph_emlrtRTEI);
  c3_c_loop_ub = c3_Xnorm->size[0] * c3_Xnorm->size[1] - 1;
  for (c3_i20 = 0; c3_i20 <= c3_c_loop_ub; c3_i20++) {
    c3_r->data[c3_i20] = (c3_Xnorm->data[c3_i20] <= 1.1920929E-7F);
  }

  c3_emxFree_real32_T(chartInstance, &c3_Xnorm);
  c3_end = c3_r->size[1] - 1;
  c3_trueCount = 0;
  for (c3_b_i = 0; c3_b_i <= c3_end; c3_b_i++) {
    if (c3_r->data[c3_b_i]) {
      c3_trueCount++;
    }
  }

  c3_emxInit_int32_T1(chartInstance, &c3_r1, 2, &c3_jd_emlrtRTEI);
  c3_i21 = c3_r1->size[0] * c3_r1->size[1];
  c3_r1->size[0] = 1;
  c3_r1->size[1] = c3_trueCount;
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_r1, c3_i21, &c3_jd_emlrtRTEI);
  c3_partialTrueCount = 0;
  for (c3_c_i = 0; c3_c_i <= c3_end; c3_c_i++) {
    if (c3_r->data[c3_c_i]) {
      c3_r1->data[c3_partialTrueCount] = c3_c_i + 1;
      c3_partialTrueCount++;
    }
  }

  c3_emxFree_boolean_T(chartInstance, &c3_r);
  c3_iv1[0] = 64;
  c3_iv1[1] = c3_r1->size[1];
  c3_i22 = c3_c_X->size[1];
  c3_d_loop_ub = c3_iv1[1] - 1;
  for (c3_i23 = 0; c3_i23 <= c3_d_loop_ub; c3_i23++) {
    for (c3_i24 = 0; c3_i24 < 64; c3_i24++) {
      c3_c_X->data[(c3_tmp_data[c3_i24] + ((sf_eml_array_bounds_check(NULL,
        chartInstance->S, 1U, 0, 0, MAX_uint32_T, c3_r1->data[c3_i23], 1, c3_i22)
        - 1) << 6)) - 1] = 0.0F;
    }
  }

  c3_emxFree_int32_T(chartInstance, &c3_r1);
}

static void c3_b_sort(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
                      c3_emxArray_real32_T *c3_x, c3_emxArray_int32_T *c3_idx)
{
  c3_emxArray_real32_T *c3_vwork;
  int32_T c3_vlen;
  int32_T c3_iv[2];
  int32_T c3_i;
  int32_T c3_i1;
  int32_T c3_i2;
  real_T c3_dv[2];
  int32_T c3_vstride;
  int32_T c3_b;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_j;
  c3_emxArray_int32_T *c3_iidx;
  int32_T c3_b_j;
  int32_T c3_c_b;
  int32_T c3_d_b;
  boolean_T c3_b_overflow;
  int32_T c3_k;
  int32_T c3_b_k;
  int32_T c3_e_b;
  int32_T c3_f_b;
  boolean_T c3_c_overflow;
  int32_T c3_c_k;
  c3_emxInit_real32_T1(chartInstance, &c3_vwork, 1, &c3_sh_emlrtRTEI);
  c3_vlen = c3_x->size[1];
  c3_iv[0] = c3_vlen;
  c3_iv[1] = 1;
  c3_i = c3_vwork->size[0];
  c3_vwork->size[0] = c3_iv[0];
  c3_emxEnsureCapacity_real32_T1(chartInstance, c3_vwork, c3_i, &c3_mg_emlrtRTEI);
  for (c3_i1 = 0; c3_i1 < 2; c3_i1++) {
    c3_dv[c3_i1] = (real_T)c3_x->size[c3_i1];
  }

  c3_i2 = c3_idx->size[0] * c3_idx->size[1];
  c3_idx->size[0] = (int32_T)c3_dv[0];
  c3_idx->size[1] = (int32_T)c3_dv[1];
  c3_emxEnsureCapacity_int32_T1(chartInstance, c3_idx, c3_i2, &c3_mg_emlrtRTEI);
  c3_vstride = c3_x->size[0];
  c3_b = c3_vstride;
  c3_b_b = c3_b;
  if (1 > c3_b_b) {
    c3_overflow = false;
  } else {
    c3_overflow = (c3_b_b > 2147483646);
  }

  if (c3_overflow) {
    c3_check_forloop_overflow_error(chartInstance, true);
  }

  c3_j = 1;
  c3_emxInit_int32_T(chartInstance, &c3_iidx, 1, &c3_mg_emlrtRTEI);
  while (c3_j - 1 <= c3_vstride - 1) {
    c3_b_j = c3_j - 1;
    c3_c_b = c3_vlen;
    c3_d_b = c3_c_b;
    if (1 > c3_d_b) {
      c3_b_overflow = false;
    } else {
      c3_b_overflow = (c3_d_b > 2147483646);
    }

    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_k = 1; c3_k - 1 < c3_vlen; c3_k++) {
      c3_b_k = c3_k - 1;
      c3_vwork->data[c3_b_k] = c3_x->data[c3_b_j + c3_b_k * c3_vstride];
    }

    c3_b_sortIdx(chartInstance, c3_vwork, c3_iidx);
    c3_e_b = c3_vlen;
    c3_f_b = c3_e_b;
    if (1 > c3_f_b) {
      c3_c_overflow = false;
    } else {
      c3_c_overflow = (c3_f_b > 2147483646);
    }

    if (c3_c_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_c_k = 1; c3_c_k - 1 < c3_vlen; c3_c_k++) {
      c3_b_k = c3_c_k - 1;
      c3_x->data[c3_b_j + c3_b_k * c3_vstride] = c3_vwork->data[c3_b_k];
      c3_idx->data[c3_b_j + c3_b_k * c3_vstride] = c3_iidx->data[c3_b_k];
    }

    c3_j++;
  }

  c3_emxFree_int32_T(chartInstance, &c3_iidx);
  c3_emxFree_real32_T(chartInstance, &c3_vwork);
}

static void c3_b_sortIdx(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_real32_T *c3_x, c3_emxArray_int32_T *c3_idx)
{
  real_T c3_dv[2];
  int32_T c3_i;
  int32_T c3_loop_ub;
  int32_T c3_i1;
  int32_T c3_n;
  int32_T c3_b_n;
  int32_T c3_i2;
  int32_T c3_i3;
  real32_T c3_x4[4];
  c3_emxArray_int32_T *c3_iwork;
  int32_T c3_idx4[4];
  int32_T c3_i4;
  int32_T c3_iv[1];
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
  int32_T c3_b_loop_ub;
  int32_T c3_i8;
  c3_emxArray_real32_T *c3_xwork;
  int32_T c3_i9;
  int32_T c3_i10;
  int32_T c3_i11;
  int32_T c3_i12;
  int32_T c3_c_loop_ub;
  int32_T c3_i13;
  int32_T c3_nNaNs;
  int32_T c3_ib;
  int32_T c3_b;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_k;
  int32_T c3_wOffset;
  int32_T c3_b_k;
  real32_T c3_b_x;
  int32_T c3_c_n;
  boolean_T c3_c_b;
  int32_T c3_m;
  int32_T c3_i14;
  int32_T c3_d_b;
  int32_T c3_e_b;
  int32_T c3_perm[4];
  boolean_T c3_b_overflow;
  int32_T c3_f_b;
  int32_T c3_quartetOffset;
  int32_T c3_g_b;
  int32_T c3_b_i1;
  int32_T c3_c_k;
  boolean_T c3_c_overflow;
  int32_T c3_b_i2;
  int32_T c3_b_i3;
  int32_T c3_itmp;
  int32_T c3_d_k;
  int32_T c3_b_i4;
  int32_T c3_nNonNaN;
  int32_T c3_preSortLevel;
  int32_T c3_nBlocks;
  int32_T c3_h_b;
  int32_T c3_i_b;
  boolean_T c3_d_overflow;
  int32_T c3_j_b;
  int32_T c3_tailOffset;
  int32_T c3_k_b;
  int32_T c3_nLastBlock;
  int32_T c3_offset;
  int32_T c3_l_b;
  int32_T c3_bLen;
  int32_T c3_bLen2;
  int32_T c3_nPairs;
  int32_T c3_m_b;
  int32_T c3_n_b;
  boolean_T c3_e_overflow;
  int32_T c3_e_k;
  int32_T c3_f_k;
  int32_T c3_blockOffset;
  int32_T c3_o_b;
  int32_T c3_p_b;
  boolean_T c3_f_overflow;
  int32_T c3_j;
  int32_T c3_p;
  int32_T c3_b_j;
  int32_T c3_q;
  int32_T c3_b_iwork[256];
  int32_T c3_iout;
  real32_T c3_b_xwork[256];
  int32_T c3_exitg1;
  int32_T c3_offset1;
  int32_T c3_a;
  int32_T c3_q_b;
  int32_T c3_b_a;
  int32_T c3_r_b;
  boolean_T c3_g_overflow;
  int32_T c3_c_j;
  c3_dv[0] = (real_T)c3_x->size[0];
  c3_dv[1] = 1.0;
  c3_i = c3_idx->size[0];
  c3_idx->size[0] = (int32_T)c3_dv[0];
  c3_emxEnsureCapacity_int32_T(chartInstance, c3_idx, c3_i, &c3_th_emlrtRTEI);
  c3_loop_ub = (int32_T)c3_dv[0] - 1;
  for (c3_i1 = 0; c3_i1 <= c3_loop_ub; c3_i1++) {
    c3_idx->data[c3_i1] = 0;
  }

  if (c3_x->size[0] != 0) {
    c3_n = c3_x->size[0];
    c3_b_n = c3_x->size[0];
    for (c3_i2 = 0; c3_i2 < 4; c3_i2++) {
      c3_x4[c3_i2] = 0.0F;
    }

    for (c3_i3 = 0; c3_i3 < 4; c3_i3++) {
      c3_idx4[c3_i3] = 0;
    }

    c3_emxInit_int32_T(chartInstance, &c3_iwork, 1, &c3_uh_emlrtRTEI);
    c3_i4 = c3_iwork->size[0];
    c3_iwork->size[0] = c3_idx->size[0];
    c3_emxEnsureCapacity_int32_T(chartInstance, c3_iwork, c3_i4,
      &c3_uh_emlrtRTEI);
    c3_iv[0] = c3_iwork->size[0];
    c3_i5 = c3_iwork->size[0];
    c3_iwork->size[0] = c3_iv[0];
    c3_emxEnsureCapacity_int32_T(chartInstance, c3_iwork, c3_i5,
      &c3_vh_emlrtRTEI);
    c3_i6 = c3_iwork->size[0];
    c3_i7 = c3_iwork->size[0];
    c3_iwork->size[0] = c3_i6;
    c3_emxEnsureCapacity_int32_T(chartInstance, c3_iwork, c3_i7,
      &c3_wh_emlrtRTEI);
    c3_b_loop_ub = c3_i6 - 1;
    for (c3_i8 = 0; c3_i8 <= c3_b_loop_ub; c3_i8++) {
      c3_iwork->data[c3_i8] = 0;
    }

    c3_emxInit_real32_T1(chartInstance, &c3_xwork, 1, &c3_xh_emlrtRTEI);
    c3_dv[0] = (real_T)c3_x->size[0];
    c3_dv[1] = 1.0;
    c3_i9 = c3_xwork->size[0];
    c3_xwork->size[0] = (int32_T)c3_dv[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_xwork, c3_i9,
      &c3_xh_emlrtRTEI);
    c3_iv[0] = c3_xwork->size[0];
    c3_i10 = c3_xwork->size[0];
    c3_xwork->size[0] = c3_iv[0];
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_xwork, c3_i10,
      &c3_vh_emlrtRTEI);
    c3_i11 = c3_xwork->size[0];
    c3_i12 = c3_xwork->size[0];
    c3_xwork->size[0] = c3_i11;
    c3_emxEnsureCapacity_real32_T1(chartInstance, c3_xwork, c3_i12,
      &c3_yh_emlrtRTEI);
    c3_c_loop_ub = c3_i11 - 1;
    for (c3_i13 = 0; c3_i13 <= c3_c_loop_ub; c3_i13++) {
      c3_xwork->data[c3_i13] = 0.0F;
    }

    c3_nNaNs = 0;
    c3_ib = 0;
    c3_b = c3_b_n;
    c3_b_b = c3_b;
    if (1 > c3_b_b) {
      c3_overflow = false;
    } else {
      c3_overflow = (c3_b_b > 2147483646);
    }

    if (c3_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_k = 1; c3_k - 1 < c3_b_n; c3_k++) {
      c3_b_k = c3_k - 1;
      c3_b_x = c3_x->data[c3_b_k];
      c3_c_b = muSingleScalarIsNaN(c3_b_x);
      if (c3_c_b) {
        c3_idx->data[(c3_b_n - c3_nNaNs) - 1] = c3_b_k + 1;
        c3_xwork->data[(c3_b_n - c3_nNaNs) - 1] = c3_x->data[c3_b_k];
        c3_nNaNs++;
      } else {
        c3_ib++;
        c3_idx4[c3_ib - 1] = c3_b_k + 1;
        c3_x4[c3_ib - 1] = c3_x->data[c3_b_k];
        if (c3_ib == 4) {
          c3_quartetOffset = c3_b_k - c3_nNaNs;
          if (c3_x4[0] <= c3_x4[1]) {
            c3_b_i1 = 1;
            c3_b_i2 = 2;
          } else {
            c3_b_i1 = 2;
            c3_b_i2 = 1;
          }

          if (c3_x4[2] <= c3_x4[3]) {
            c3_b_i3 = 3;
            c3_b_i4 = 4;
          } else {
            c3_b_i3 = 4;
            c3_b_i4 = 3;
          }

          if (c3_x4[c3_b_i1 - 1] <= c3_x4[c3_b_i3 - 1]) {
            if (c3_x4[c3_b_i2 - 1] <= c3_x4[c3_b_i3 - 1]) {
              c3_perm[0] = c3_b_i1;
              c3_perm[1] = c3_b_i2;
              c3_perm[2] = c3_b_i3;
              c3_perm[3] = c3_b_i4;
            } else if (c3_x4[c3_b_i2 - 1] <= c3_x4[c3_b_i4 - 1]) {
              c3_perm[0] = c3_b_i1;
              c3_perm[1] = c3_b_i3;
              c3_perm[2] = c3_b_i2;
              c3_perm[3] = c3_b_i4;
            } else {
              c3_perm[0] = c3_b_i1;
              c3_perm[1] = c3_b_i3;
              c3_perm[2] = c3_b_i4;
              c3_perm[3] = c3_b_i2;
            }
          } else if (c3_x4[c3_b_i1 - 1] <= c3_x4[c3_b_i4 - 1]) {
            if (c3_x4[c3_b_i2 - 1] <= c3_x4[c3_b_i4 - 1]) {
              c3_perm[0] = c3_b_i3;
              c3_perm[1] = c3_b_i1;
              c3_perm[2] = c3_b_i2;
              c3_perm[3] = c3_b_i4;
            } else {
              c3_perm[0] = c3_b_i3;
              c3_perm[1] = c3_b_i1;
              c3_perm[2] = c3_b_i4;
              c3_perm[3] = c3_b_i2;
            }
          } else {
            c3_perm[0] = c3_b_i3;
            c3_perm[1] = c3_b_i4;
            c3_perm[2] = c3_b_i1;
            c3_perm[3] = c3_b_i2;
          }

          c3_idx->data[c3_quartetOffset - 3] = c3_idx4[c3_perm[0] - 1];
          c3_idx->data[c3_quartetOffset - 2] = c3_idx4[c3_perm[1] - 1];
          c3_idx->data[c3_quartetOffset - 1] = c3_idx4[c3_perm[2] - 1];
          c3_idx->data[c3_quartetOffset] = c3_idx4[c3_perm[3] - 1];
          c3_x->data[c3_quartetOffset - 3] = c3_x4[c3_perm[0] - 1];
          c3_x->data[c3_quartetOffset - 2] = c3_x4[c3_perm[1] - 1];
          c3_x->data[c3_quartetOffset - 1] = c3_x4[c3_perm[2] - 1];
          c3_x->data[c3_quartetOffset] = c3_x4[c3_perm[3] - 1];
          c3_ib = 0;
        }
      }
    }

    c3_wOffset = (c3_b_n - c3_nNaNs) - 1;
    if (c3_ib > 0) {
      c3_c_n = c3_ib;
      for (c3_i14 = 0; c3_i14 < 4; c3_i14++) {
        c3_perm[c3_i14] = 0;
      }

      if (c3_c_n == 1) {
        c3_perm[0] = 1;
      } else if (c3_c_n == 2) {
        if (c3_x4[0] <= c3_x4[1]) {
          c3_perm[0] = 1;
          c3_perm[1] = 2;
        } else {
          c3_perm[0] = 2;
          c3_perm[1] = 1;
        }
      } else if (c3_x4[0] <= c3_x4[1]) {
        if (c3_x4[1] <= c3_x4[2]) {
          c3_perm[0] = 1;
          c3_perm[1] = 2;
          c3_perm[2] = 3;
        } else if (c3_x4[0] <= c3_x4[2]) {
          c3_perm[0] = 1;
          c3_perm[1] = 3;
          c3_perm[2] = 2;
        } else {
          c3_perm[0] = 3;
          c3_perm[1] = 1;
          c3_perm[2] = 2;
        }
      } else if (c3_x4[0] <= c3_x4[2]) {
        c3_perm[0] = 2;
        c3_perm[1] = 1;
        c3_perm[2] = 3;
      } else if (c3_x4[1] <= c3_x4[2]) {
        c3_perm[0] = 2;
        c3_perm[1] = 3;
        c3_perm[2] = 1;
      } else {
        c3_perm[0] = 3;
        c3_perm[1] = 2;
        c3_perm[2] = 1;
      }

      c3_f_b = c3_ib;
      c3_g_b = c3_f_b;
      if (1 > c3_g_b) {
        c3_c_overflow = false;
      } else {
        c3_c_overflow = (c3_g_b > 2147483646);
      }

      if (c3_c_overflow) {
        c3_check_forloop_overflow_error(chartInstance, true);
      }

      for (c3_d_k = 1; c3_d_k - 1 < c3_ib; c3_d_k++) {
        c3_b_k = c3_d_k;
        c3_idx->data[(c3_wOffset - c3_ib) + c3_b_k] = c3_idx4[c3_perm[c3_b_k - 1]
          - 1];
        c3_x->data[(c3_wOffset - c3_ib) + c3_b_k] = c3_x4[c3_perm[c3_b_k - 1] -
          1];
      }
    }

    c3_m = c3_nNaNs >> 1;
    c3_d_b = c3_m;
    c3_e_b = c3_d_b;
    if (1 > c3_e_b) {
      c3_b_overflow = false;
    } else {
      c3_b_overflow = (c3_e_b > 2147483646);
    }

    if (c3_b_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_c_k = 1; c3_c_k - 1 < c3_m; c3_c_k++) {
      c3_b_k = c3_c_k;
      c3_itmp = c3_idx->data[c3_wOffset + c3_b_k];
      c3_idx->data[c3_wOffset + c3_b_k] = c3_idx->data[c3_b_n - c3_b_k];
      c3_idx->data[c3_b_n - c3_b_k] = c3_itmp;
      c3_x->data[c3_wOffset + c3_b_k] = c3_xwork->data[c3_b_n - c3_b_k];
      c3_x->data[c3_b_n - c3_b_k] = c3_xwork->data[c3_wOffset + c3_b_k];
    }

    if ((c3_nNaNs & 1) != 0) {
      c3_x->data[(c3_wOffset + c3_m) + 1] = c3_xwork->data[(c3_wOffset + c3_m) +
        1];
    }

    c3_nNonNaN = c3_n - c3_nNaNs;
    c3_preSortLevel = 2;
    if (c3_nNonNaN > 1) {
      if (c3_n >= 256) {
        c3_nBlocks = c3_nNonNaN >> 8;
        if (c3_nBlocks > 0) {
          c3_h_b = c3_nBlocks;
          c3_i_b = c3_h_b;
          if (1 > c3_i_b) {
            c3_d_overflow = false;
          } else {
            c3_d_overflow = (c3_i_b > 2147483646);
          }

          if (c3_d_overflow) {
            c3_check_forloop_overflow_error(chartInstance, true);
          }

          for (c3_j_b = 1; c3_j_b - 1 < c3_nBlocks; c3_j_b++) {
            c3_k_b = c3_j_b - 1;
            c3_offset = c3_k_b << 8;
            for (c3_l_b = 0; c3_l_b < 6; c3_l_b++) {
              c3_bLen = 1 << (c3_l_b + 2);
              c3_bLen2 = c3_bLen << 1;
              c3_nPairs = 256 >> (c3_l_b + 3);
              c3_m_b = c3_nPairs;
              c3_n_b = c3_m_b;
              if (1 > c3_n_b) {
                c3_e_overflow = false;
              } else {
                c3_e_overflow = (c3_n_b > 2147483646);
              }

              if (c3_e_overflow) {
                c3_check_forloop_overflow_error(chartInstance, true);
              }

              for (c3_e_k = 1; c3_e_k - 1 < c3_nPairs; c3_e_k++) {
                c3_f_k = c3_e_k - 1;
                c3_blockOffset = (c3_offset + c3_f_k * c3_bLen2) - 1;
                c3_o_b = c3_bLen2;
                c3_p_b = c3_o_b;
                if (1 > c3_p_b) {
                  c3_f_overflow = false;
                } else {
                  c3_f_overflow = (c3_p_b > 2147483646);
                }

                if (c3_f_overflow) {
                  c3_check_forloop_overflow_error(chartInstance, true);
                }

                for (c3_j = 1; c3_j - 1 < c3_bLen2; c3_j++) {
                  c3_b_j = c3_j;
                  c3_b_iwork[c3_b_j - 1] = c3_idx->data[c3_blockOffset + c3_b_j];
                  c3_b_xwork[c3_b_j - 1] = c3_x->data[c3_blockOffset + c3_b_j];
                }

                c3_p = 0;
                c3_q = c3_bLen;
                c3_iout = c3_blockOffset;
                do {
                  c3_exitg1 = 0;
                  c3_iout++;
                  if (c3_b_xwork[c3_p] <= c3_b_xwork[c3_q]) {
                    c3_idx->data[c3_iout] = c3_b_iwork[c3_p];
                    c3_x->data[c3_iout] = c3_b_xwork[c3_p];
                    if (c3_p + 1 < c3_bLen) {
                      c3_p++;
                    } else {
                      c3_exitg1 = 1;
                    }
                  } else {
                    c3_idx->data[c3_iout] = c3_b_iwork[c3_q];
                    c3_x->data[c3_iout] = c3_b_xwork[c3_q];
                    if (c3_q + 1 < c3_bLen2) {
                      c3_q++;
                    } else {
                      c3_offset1 = c3_iout - c3_p;
                      c3_a = c3_p + 1;
                      c3_q_b = c3_bLen;
                      c3_b_a = c3_a;
                      c3_r_b = c3_q_b;
                      if (c3_b_a > c3_r_b) {
                        c3_g_overflow = false;
                      } else {
                        c3_g_overflow = (c3_r_b > 2147483646);
                      }

                      if (c3_g_overflow) {
                        c3_check_forloop_overflow_error(chartInstance, true);
                      }

                      for (c3_c_j = c3_p + 1; c3_c_j <= c3_bLen; c3_c_j++) {
                        c3_idx->data[c3_offset1 + c3_c_j] = c3_b_iwork[c3_c_j -
                          1];
                        c3_x->data[c3_offset1 + c3_c_j] = c3_b_xwork[c3_c_j - 1];
                      }

                      c3_exitg1 = 1;
                    }
                  }
                } while (c3_exitg1 == 0);
              }
            }
          }

          c3_tailOffset = c3_nBlocks << 8;
          c3_nLastBlock = c3_nNonNaN - c3_tailOffset;
          if (c3_nLastBlock > 0) {
            c3_b_merge_block(chartInstance, c3_idx, c3_x, c3_tailOffset,
                             c3_nLastBlock, 2, c3_iwork, c3_xwork);
          }

          c3_preSortLevel = 8;
        }
      }

      c3_b_merge_block(chartInstance, c3_idx, c3_x, 0, c3_nNonNaN,
                       c3_preSortLevel, c3_iwork, c3_xwork);
    }

    c3_emxFree_real32_T(chartInstance, &c3_xwork);
    c3_emxFree_int32_T(chartInstance, &c3_iwork);
  }
}

static void c3_b_merge_block(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x,
  int32_T c3_offset, int32_T c3_n, int32_T c3_preSortLevel, c3_emxArray_int32_T *
  c3_iwork, c3_emxArray_real32_T *c3_xwork)
{
  int32_T c3_nBlocks;
  int32_T c3_bLen;
  int32_T c3_bLen2;
  int32_T c3_tailOffset;
  int32_T c3_nPairs;
  int32_T c3_nTail;
  int32_T c3_b;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_k;
  int32_T c3_b_k;
  c3_nBlocks = c3_n >> c3_preSortLevel;
  c3_bLen = 1 << c3_preSortLevel;
  while (c3_nBlocks > 1) {
    if ((c3_nBlocks & 1) != 0) {
      c3_nBlocks--;
      c3_tailOffset = c3_bLen * c3_nBlocks;
      c3_nTail = c3_n - c3_tailOffset;
      if (c3_nTail > c3_bLen) {
        c3_b_merge(chartInstance, c3_idx, c3_x, c3_offset + c3_tailOffset,
                   c3_bLen, c3_nTail - c3_bLen, c3_iwork, c3_xwork);
      }
    }

    c3_bLen2 = c3_bLen << 1;
    c3_nPairs = c3_nBlocks >> 1;
    c3_b = c3_nPairs;
    c3_b_b = c3_b;
    if (1 > c3_b_b) {
      c3_overflow = false;
    } else {
      c3_overflow = (c3_b_b > 2147483646);
    }

    if (c3_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_k = 1; c3_k - 1 < c3_nPairs; c3_k++) {
      c3_b_k = c3_k - 1;
      c3_b_merge(chartInstance, c3_idx, c3_x, c3_offset + c3_b_k * c3_bLen2,
                 c3_bLen, c3_bLen, c3_iwork, c3_xwork);
    }

    c3_bLen = c3_bLen2;
    c3_nBlocks = c3_nPairs;
  }

  if (c3_n > c3_bLen) {
    c3_b_merge(chartInstance, c3_idx, c3_x, c3_offset, c3_bLen, c3_n - c3_bLen,
               c3_iwork, c3_xwork);
  }
}

static void c3_b_merge(SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
  c3_emxArray_int32_T *c3_idx, c3_emxArray_real32_T *c3_x, int32_T c3_offset,
  int32_T c3_np, int32_T c3_nq, c3_emxArray_int32_T *c3_iwork,
  c3_emxArray_real32_T *c3_xwork)
{
  int32_T c3_n;
  int32_T c3_b;
  int32_T c3_b_b;
  boolean_T c3_overflow;
  int32_T c3_j;
  int32_T c3_p;
  int32_T c3_b_j;
  int32_T c3_q;
  int32_T c3_qend;
  int32_T c3_iout;
  int32_T c3_exitg1;
  int32_T c3_offset1;
  int32_T c3_a;
  int32_T c3_c_b;
  int32_T c3_b_a;
  int32_T c3_d_b;
  boolean_T c3_b_overflow;
  int32_T c3_c_j;
  if (c3_nq != 0) {
    c3_n = c3_np + c3_nq;
    c3_b = c3_n;
    c3_b_b = c3_b;
    if (1 > c3_b_b) {
      c3_overflow = false;
    } else {
      c3_overflow = (c3_b_b > 2147483646);
    }

    if (c3_overflow) {
      c3_check_forloop_overflow_error(chartInstance, true);
    }

    for (c3_j = 1; c3_j - 1 < c3_n; c3_j++) {
      c3_b_j = c3_j - 1;
      c3_iwork->data[c3_b_j] = c3_idx->data[c3_offset + c3_b_j];
      c3_xwork->data[c3_b_j] = c3_x->data[c3_offset + c3_b_j];
    }

    c3_p = 0;
    c3_q = c3_np;
    c3_qend = c3_np + c3_nq;
    c3_iout = c3_offset - 1;
    do {
      c3_exitg1 = 0;
      c3_iout++;
      if (c3_xwork->data[c3_p] <= c3_xwork->data[c3_q]) {
        c3_idx->data[c3_iout] = c3_iwork->data[c3_p];
        c3_x->data[c3_iout] = c3_xwork->data[c3_p];
        if (c3_p + 1 < c3_np) {
          c3_p++;
        } else {
          c3_exitg1 = 1;
        }
      } else {
        c3_idx->data[c3_iout] = c3_iwork->data[c3_q];
        c3_x->data[c3_iout] = c3_xwork->data[c3_q];
        if (c3_q + 1 < c3_qend) {
          c3_q++;
        } else {
          c3_offset1 = c3_iout - c3_p;
          c3_a = c3_p + 1;
          c3_c_b = c3_np;
          c3_b_a = c3_a;
          c3_d_b = c3_c_b;
          if (c3_b_a > c3_d_b) {
            c3_b_overflow = false;
          } else {
            c3_b_overflow = (c3_d_b > 2147483646);
          }

          if (c3_b_overflow) {
            c3_check_forloop_overflow_error(chartInstance, true);
          }

          for (c3_c_j = c3_p + 1; c3_c_j <= c3_np; c3_c_j++) {
            c3_idx->data[c3_offset1 + c3_c_j] = c3_iwork->data[c3_c_j - 1];
            c3_x->data[c3_offset1 + c3_c_j] = c3_xwork->data[c3_c_j - 1];
          }

          c3_exitg1 = 1;
        }
      }
    } while (c3_exitg1 == 0);
  }
}

static void c3_emxEnsureCapacity_real32_T
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(real32_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(real32_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (real32_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxEnsureCapacity_real32_T1
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_real32_T *
   c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(real32_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(real32_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (real32_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxEnsureCapacity_int8_T(SFc3_MotionObjectDetectorInstanceStruct *
  chartInstance, c3_emxArray_int8_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(int8_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(int8_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (int8_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxCopyStruct_sJTMl20J2MtSHoTgq
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sJTMl20J2MtSHoTgqrNGwiD *c3_dst, const c3_sJTMl20J2MtSHoTgqrNGwiD *c3_src,
   const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxCopy_real32_T(chartInstance, &c3_dst->Location, &c3_src->Location,
                      c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Scale, &c3_src->Scale,
                       c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Metric, &c3_src->Metric,
                       c3_srcLocation);
  c3_emxCopy_int8_T(chartInstance, &c3_dst->SignOfLaplacian,
                    &c3_src->SignOfLaplacian, c3_srcLocation);
}

static void c3_emxCopy_real32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_dst, c3_emxArray_real32_T * const
  *c3_src, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_numElDst;
  int32_T c3_numElSrc;
  int32_T c3_i;
  c3_numElDst = 1;
  c3_numElSrc = 1;
  for (c3_i = 0; c3_i < (*c3_dst)->numDimensions; c3_i++) {
    c3_numElDst *= (*c3_dst)->size[c3_i];
    c3_numElSrc *= (*c3_src)->size[c3_i];
  }

  for (c3_i = 0; c3_i < (*c3_dst)->numDimensions; c3_i++) {
    (*c3_dst)->size[c3_i] = (*c3_src)->size[c3_i];
  }

  c3_emxEnsureCapacity_real32_T(chartInstance, *c3_dst, c3_numElDst,
    c3_srcLocation);
  for (c3_i = 0; c3_i < c3_numElSrc; c3_i++) {
    (*c3_dst)->data[c3_i] = (*c3_src)->data[c3_i];
  }
}

static void c3_emxCopy_real32_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_dst, c3_emxArray_real32_T * const
  *c3_src, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_numElDst;
  int32_T c3_numElSrc;
  int32_T c3_i;
  c3_numElDst = 1;
  c3_numElSrc = 1;
  for (c3_i = 0; c3_i < (*c3_dst)->numDimensions; c3_i++) {
    c3_numElDst *= (*c3_dst)->size[c3_i];
    c3_numElSrc *= (*c3_src)->size[c3_i];
  }

  for (c3_i = 0; c3_i < (*c3_dst)->numDimensions; c3_i++) {
    (*c3_dst)->size[c3_i] = (*c3_src)->size[c3_i];
  }

  c3_emxEnsureCapacity_real32_T1(chartInstance, *c3_dst, c3_numElDst,
    c3_srcLocation);
  for (c3_i = 0; c3_i < c3_numElSrc; c3_i++) {
    (*c3_dst)->data[c3_i] = (*c3_src)->data[c3_i];
  }
}

static void c3_emxCopy_int8_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int8_T **c3_dst, c3_emxArray_int8_T * const
  *c3_src, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_numElDst;
  int32_T c3_numElSrc;
  int32_T c3_i;
  c3_numElDst = 1;
  c3_numElSrc = 1;
  for (c3_i = 0; c3_i < (*c3_dst)->numDimensions; c3_i++) {
    c3_numElDst *= (*c3_dst)->size[c3_i];
    c3_numElSrc *= (*c3_src)->size[c3_i];
  }

  for (c3_i = 0; c3_i < (*c3_dst)->numDimensions; c3_i++) {
    (*c3_dst)->size[c3_i] = (*c3_src)->size[c3_i];
  }

  c3_emxEnsureCapacity_int8_T(chartInstance, *c3_dst, c3_numElDst,
    c3_srcLocation);
  for (c3_i = 0; c3_i < c3_numElSrc; c3_i++) {
    (*c3_dst)->data[c3_i] = (*c3_src)->data[c3_i];
  }
}

static void c3_emxCopyStruct_vision_internal_S
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_dst, const
   c3_vision_internal_SURFPoints_cg *c3_src, const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxCopy_real32_T(chartInstance, &c3_dst->pLocation, &c3_src->pLocation,
                      c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->pMetric, &c3_src->pMetric,
                       c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->pScale, &c3_src->pScale,
                       c3_srcLocation);
  c3_emxCopy_int8_T(chartInstance, &c3_dst->pSignOfLaplacian,
                    &c3_src->pSignOfLaplacian, c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->pOrientation,
                       &c3_src->pOrientation, c3_srcLocation);
}

static void c3_emxEnsureCapacity_int32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(int32_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(int32_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (int32_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxCopyStruct_s2rdWZ6jAA0S8hk59
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_dst, const c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_src,
   const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxCopy_real32_T(chartInstance, &c3_dst->Location, &c3_src->Location,
                      c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Scale, &c3_src->Scale,
                       c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Metric, &c3_src->Metric,
                       c3_srcLocation);
  c3_emxCopy_int8_T(chartInstance, &c3_dst->SignOfLaplacian,
                    &c3_src->SignOfLaplacian, c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Orientation, &c3_src->Orientation,
                       c3_srcLocation);
}

static void c3_emxEnsureCapacity_uint32_T
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_uint32_T *
   c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(uint32_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(uint32_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (uint32_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxInitStruct_vision_internal_S
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_pStruct, const emlrtRTEInfo
   *c3_srcLocation)
{
  c3_emxInit_real32_T(chartInstance, &c3_pStruct->pLocation, 2, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->pMetric, 1, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->pScale, 1, c3_srcLocation);
  c3_emxInit_int8_T(chartInstance, &c3_pStruct->pSignOfLaplacian, 1,
                    c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->pOrientation, 1,
                       c3_srcLocation);
}

static void c3_emxInit_real32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_real32_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c3_emxArray_real32_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (real32_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInit_real32_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_real32_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c3_emxArray_real32_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (real32_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInit_int8_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int8_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_int8_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_int8_T *)emlrtMallocMex(sizeof(c3_emxArray_int8_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (int8_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInit_uint32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_uint32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_uint32_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_uint32_T *)emlrtMallocMex(sizeof
    (c3_emxArray_uint32_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (uint32_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInitStruct_sJTMl20J2MtSHoTgq
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sJTMl20J2MtSHoTgqrNGwiD *c3_pStruct, const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxInit_real32_T(chartInstance, &c3_pStruct->Location, 2, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Scale, 1, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Metric, 1, c3_srcLocation);
  c3_emxInit_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian, 1,
                    c3_srcLocation);
}

static void c3_emxInitStruct_s2rdWZ6jAA0S8hk59
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_pStruct, const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxInit_real32_T(chartInstance, &c3_pStruct->Location, 2, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Scale, 1, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Metric, 1, c3_srcLocation);
  c3_emxInit_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian, 1,
                    c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Orientation, 1,
                       c3_srcLocation);
}

static void c3_emxInit_int32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_int32_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c3_emxArray_int32_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (int32_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxFree_real32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real32_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_real32_T *)NULL) {
    if (((*c3_pEmxArray)->data != (real32_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_real32_T *)NULL;
  }
}

static void c3_emxFreeStruct_vision_internal_S
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_vision_internal_SURFPoints_cg *c3_pStruct)
{
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->pLocation);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->pMetric);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->pScale);
  c3_emxFree_int8_T(chartInstance, &c3_pStruct->pSignOfLaplacian);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->pOrientation);
}

static void c3_emxFree_int8_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int8_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_int8_T *)NULL) {
    if (((*c3_pEmxArray)->data != (int8_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_int8_T *)NULL;
  }
}

static void c3_emxFree_uint32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_uint32_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_uint32_T *)NULL) {
    if (((*c3_pEmxArray)->data != (uint32_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_uint32_T *)NULL;
  }
}

static void c3_emxFreeStruct_sJTMl20J2MtSHoTgq
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sJTMl20J2MtSHoTgqrNGwiD *c3_pStruct)
{
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Location);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Scale);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Metric);
  c3_emxFree_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian);
}

static void c3_emxFreeStruct_s2rdWZ6jAA0S8hk59
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_s2rdWZ6jAA0S8hk59zYLzBC *c3_pStruct)
{
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Location);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Scale);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Metric);
  c3_emxFree_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Orientation);
}

static void c3_emxFree_int32_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_int32_T *)NULL) {
    if (((*c3_pEmxArray)->data != (int32_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_int32_T *)NULL;
  }
}

static void c3_emxEnsureCapacity_boolean_T
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_boolean_T
   *c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(boolean_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (boolean_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxInitStruct_sTGP517nzdmMmY48R
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sTGP517nzdmMmY48RaBsM6E *c3_pStruct, const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxInit_real32_T(chartInstance, &c3_pStruct->Location, 2, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Metric, 1, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Scale, 1, c3_srcLocation);
  c3_emxInit_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian, 1,
                    c3_srcLocation);
}

static void c3_emxInit_boolean_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_boolean_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_boolean_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c3_emxArray_boolean_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (boolean_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxFreeStruct_sTGP517nzdmMmY48R
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sTGP517nzdmMmY48RaBsM6E *c3_pStruct)
{
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Location);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Metric);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Scale);
  c3_emxFree_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian);
}

static void c3_emxFree_boolean_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_boolean_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_boolean_T *)NULL) {
    if (((*c3_pEmxArray)->data != (boolean_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_boolean_T *)NULL;
  }
}

static void c3_emxCopyStruct_sTGP517nzdmMmY48R
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sTGP517nzdmMmY48RaBsM6E *c3_dst, const c3_sTGP517nzdmMmY48RaBsM6E *c3_src,
   const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxCopy_real32_T(chartInstance, &c3_dst->Location, &c3_src->Location,
                      c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Metric, &c3_src->Metric,
                       c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Scale, &c3_src->Scale,
                       c3_srcLocation);
  c3_emxCopy_int8_T(chartInstance, &c3_dst->SignOfLaplacian,
                    &c3_src->SignOfLaplacian, c3_srcLocation);
  c3_dst->Orientation = c3_src->Orientation;
}

static void c3_emxInitStruct_sGhH0Msgf1shDAvf5
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sGhH0Msgf1shDAvf5CNZg6B *c3_pStruct, const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxInit_real32_T(chartInstance, &c3_pStruct->Location, 2, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Metric, 1, c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Scale, 1, c3_srcLocation);
  c3_emxInit_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian, 1,
                    c3_srcLocation);
  c3_emxInit_real32_T1(chartInstance, &c3_pStruct->Orientation, 1,
                       c3_srcLocation);
}

static void c3_emxFreeStruct_sGhH0Msgf1shDAvf5
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sGhH0Msgf1shDAvf5CNZg6B *c3_pStruct)
{
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Location);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Metric);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Scale);
  c3_emxFree_int8_T(chartInstance, &c3_pStruct->SignOfLaplacian);
  c3_emxFree_real32_T(chartInstance, &c3_pStruct->Orientation);
}

static void c3_emxCopyStruct_sGhH0Msgf1shDAvf5
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance,
   c3_sGhH0Msgf1shDAvf5CNZg6B *c3_dst, const c3_sGhH0Msgf1shDAvf5CNZg6B *c3_src,
   const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxCopy_real32_T(chartInstance, &c3_dst->Location, &c3_src->Location,
                      c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Metric, &c3_src->Metric,
                       c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Scale, &c3_src->Scale,
                       c3_srcLocation);
  c3_emxCopy_int8_T(chartInstance, &c3_dst->SignOfLaplacian,
                    &c3_src->SignOfLaplacian, c3_srcLocation);
  c3_emxCopy_real32_T1(chartInstance, &c3_dst->Orientation, &c3_src->Orientation,
                       c3_srcLocation);
}

static void c3_emxEnsureCapacity_real_T(SFc3_MotionObjectDetectorInstanceStruct *
  chartInstance, c3_emxArray_real_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(real_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(real_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (real_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxEnsureCapacity_boolean_T1
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_boolean_T
   *c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(boolean_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (boolean_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxEnsureCapacity_int32_T1
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_emxArray_int32_T
   *c3_emxArray, int32_T c3_oldNumel, const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(int32_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(int32_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (int32_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxInit_int32_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_int32_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_int32_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c3_emxArray_int32_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (int32_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInit_boolean_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_boolean_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_boolean_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c3_emxArray_boolean_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (boolean_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInit_real_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_real_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_real_T *)emlrtMallocMex(sizeof(c3_emxArray_real_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (real_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void c3_emxInitMatrix_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   c3_pMatrix[2], const emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_i;
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_emxInitStruct_cell_wrap_21(chartInstance, &c3_pMatrix[c3_i],
      c3_srcLocation);
  }
}

static void c3_emxInitStruct_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   *c3_pStruct, const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxInit_uint32_T(chartInstance, &c3_pStruct->f1, 2, c3_srcLocation);
}

static void c3_emxFree_real_T(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T **c3_pEmxArray)
{
  (void)chartInstance;
  if (*c3_pEmxArray != (c3_emxArray_real_T *)NULL) {
    if (((*c3_pEmxArray)->data != (real_T *)NULL) && (*c3_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c3_pEmxArray)->data);
    }

    emlrtFreeMex((*c3_pEmxArray)->size);
    emlrtFreeMex(*c3_pEmxArray);
    *c3_pEmxArray = (c3_emxArray_real_T *)NULL;
  }
}

static void c3_emxFreeMatrix_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   c3_pMatrix[2])
{
  int32_T c3_i;
  for (c3_i = 0; c3_i < 2; c3_i++) {
    c3_emxFreeStruct_cell_wrap_21(chartInstance, &c3_pMatrix[c3_i]);
  }
}

static void c3_emxFreeStruct_cell_wrap_21
  (SFc3_MotionObjectDetectorInstanceStruct *chartInstance, c3_cell_wrap_21
   *c3_pStruct)
{
  c3_emxFree_uint32_T(chartInstance, &c3_pStruct->f1);
}

static void c3_emxEnsureCapacity_real_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T *c3_emxArray, int32_T c3_oldNumel, const
  emlrtRTEInfo *c3_srcLocation)
{
  int32_T c3_newNumel;
  int32_T c3_i;
  int32_T c3_newCapacity;
  void *c3_newData;
  if (c3_oldNumel < 0) {
    c3_oldNumel = 0;
  }

  c3_newNumel = 1;
  for (c3_i = 0; c3_i < c3_emxArray->numDimensions; c3_i++) {
    c3_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c3_newNumel, (uint32_T)
      c3_emxArray->size[c3_i], c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  if (c3_newNumel > c3_emxArray->allocatedSize) {
    c3_newCapacity = c3_emxArray->allocatedSize;
    if (c3_newCapacity < 16) {
      c3_newCapacity = 16;
    }

    while (c3_newCapacity < c3_newNumel) {
      if (c3_newCapacity > 1073741823) {
        c3_newCapacity = MAX_int32_T;
      } else {
        c3_newCapacity <<= 1;
      }
    }

    c3_newData = emlrtCallocMex((uint32_T)c3_newCapacity, sizeof(real_T));
    if (c3_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
    }

    if (c3_emxArray->data != NULL) {
      memcpy(c3_newData, c3_emxArray->data, sizeof(real_T) * (uint32_T)
             c3_oldNumel);
      if (c3_emxArray->canFreeData) {
        emlrtFreeMex(c3_emxArray->data);
      }
    }

    c3_emxArray->data = (real_T *)c3_newData;
    c3_emxArray->allocatedSize = c3_newCapacity;
    c3_emxArray->canFreeData = true;
  }
}

static void c3_emxInit_real_T1(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance, c3_emxArray_real_T **c3_pEmxArray, int32_T c3_numDimensions,
  const emlrtRTEInfo *c3_srcLocation)
{
  c3_emxArray_real_T *c3_emxArray;
  int32_T c3_i;
  *c3_pEmxArray = (c3_emxArray_real_T *)emlrtMallocMex(sizeof(c3_emxArray_real_T));
  if ((void *)*c3_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray = *c3_pEmxArray;
  c3_emxArray->data = (real_T *)NULL;
  c3_emxArray->numDimensions = c3_numDimensions;
  c3_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c3_numDimensions);
  if ((void *)c3_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c3_srcLocation, chartInstance->c3_fEmlrtCtx);
  }

  c3_emxArray->allocatedSize = 0;
  c3_emxArray->canFreeData = true;
  for (c3_i = 0; c3_i < c3_numDimensions; c3_i++) {
    c3_emxArray->size[c3_i] = 0;
  }
}

static void init_dsm_address_info(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_MotionObjectDetectorInstanceStruct
  *chartInstance)
{
  chartInstance->c3_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c3_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c3_b_Image = (uint8_T (*)[750000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_b_redcrab = (uint8_T (*)[151389])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c3_MotionObjectDetector_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1198011140U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3758758571U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(727071400U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3429581451U);
}

mxArray *sf_c3_MotionObjectDetector_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,4);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "vision.internal.buildable.fastHessianDetectorBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "vision.internal.buildable.extractSurfBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "vision.internal.buildable.ComputeMetricBuildable"));
  return(mxcell3p);
}

mxArray *sf_c3_MotionObjectDetector_jit_fallback_info(void)
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

mxArray *sf_c3_MotionObjectDetector_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c3_MotionObjectDetector(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB2YGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYcABQfK9EP8F4GknwWLfkUk/QJQfmZxfGJySWZZanyycbxvfklmfp"
    "5/UlZqcolLagmQzC9CMh8EAFPUGLo="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_MotionObjectDetector_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "secBmhdz0nTn9UA5xaiGZrB";
}

static void sf_opaque_initialize_c3_MotionObjectDetector(void *chartInstanceVar)
{
  initialize_params_c3_MotionObjectDetector
    ((SFc3_MotionObjectDetectorInstanceStruct*) chartInstanceVar);
  initialize_c3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c3_MotionObjectDetector(void *chartInstanceVar)
{
  enable_c3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c3_MotionObjectDetector(void *chartInstanceVar)
{
  disable_c3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c3_MotionObjectDetector(void *chartInstanceVar)
{
  sf_gateway_c3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_MotionObjectDetector(SimStruct*
  S)
{
  return get_sim_state_c3_MotionObjectDetector
    ((SFc3_MotionObjectDetectorInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_MotionObjectDetector(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c3_MotionObjectDetector(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_MotionObjectDetectorInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_MotionObjectDetector_optimization_info();
    }

    finalize_c3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
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
  initSimStructsc3_MotionObjectDetector((SFc3_MotionObjectDetectorInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_MotionObjectDetector(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_MotionObjectDetector
      ((SFc3_MotionObjectDetectorInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc3_MotionObjectDetector
      ((SFc3_MotionObjectDetectorInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c3_MotionObjectDetector_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [16] = {
    "eNrdVstu00AUtaNSUQmq7tgg0YoFLCshEOzavGikhFQkLRWbamLfxEPGM2YeaYr4FHZ8CxIs2bN",
    "mzR/AHTsvHDtpCCDERLYz43PPfc4dO26t4eDYxusj3jbxeR2vgpOMa6O5O3Ml6xvOvdH8PYK4CY",
    "+JJKFyFg5OQngOSjCjqeA13hWZMMq7IIF7iI2E1HlsioaGUd6vGu5ZPvUioF7QCoRhfhFlid/k7",
    "BLZIqOPkadMJXi6CuDrQArTC6qM9CYWS31RCsDrKxMuckGBbpnImqUahmkaMagMwatxpQlarKa2",
    "tTTRUNLDXDetp6o1BoowYpTwTG8DoloQYYA1nEQ+3ptGo1NpmBcQqYsQkAGoOu3HnIJDmpMqfNG",
    "hnGghKWGVkJWs4LxtxwztaQgf2IKAoG1FCaQfCcp1fv5bVfS0wkmHQRk6ppfP1oLXxib/lMIFyN",
    "y4dUtiAJL0oMlzlcYBqQzjbE2qZB6maQinRB56mD8Ffm71YuWoFsE8QRsl8mAQO1lTbUkHGN5cN",
    "hPWbGUu2zImTJKtlsFitsoAFmVhwlb1eIkwpnJhbRHVYQAsZi0TTRbDEtZsXCRFRHpYtT4G2ZZ4",
    "SXCfzuXCM0qLsITlVq7Xn2GnyDZuCqtxDbJLPMjat8oLwDcM0FHsTDpWl0HqU2WztQQ1yukylKO",
    "6hpcvhOyjowu2/dQFm4NcYKh6GH2s3ROFZb4IZqO/FDfu8/vOtM/fuEKfH8uln/dneNwMHmfmmd",
    "a7VfgZX0jpLeDPdRO5gxm5myk9Gyk5i9ux65/v3P3+6Ozdpw9f995+qR0t0+/O6Xfj/1bum7vau",
    "bg9mt8eN6BJeQ7mqsJij2bs2sjgvzXDvzOaK/CKYeC/2edt/uTk8OGQ0KcvZTGJ14r2jtd3bSe8",
    "jOK+pqRX80cHtp0Tkxxjlv/xjL2bS/i3RuvJ2D1YTz6J19mSeO2l4rUXnxfnBLv/AM69B+cNYTd",
    "ws/MKvwbKoPEuZEZ9/2q9rCrn/GU59z/X97/b+Tv9u0r/L6x5bvzrcuv6t+o5uM65me53Tgq/s4",
    "aeP41f9/thFfwP/RleYA==",
    ""
  };

  static char newstr [1073] = "";
  newstr[0] = '\0';
  for (i = 0; i < 16; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c3_MotionObjectDetector(SimStruct *S)
{
  const char* newstr = sf_c3_MotionObjectDetector_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(589287684U));
  ssSetChecksum1(S,(2623026943U));
  ssSetChecksum2(S,(568772041U));
  ssSetChecksum3(S,(1212800124U));
}

static void mdlRTW_c3_MotionObjectDetector(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c3_MotionObjectDetector(SimStruct *S)
{
  SFc3_MotionObjectDetectorInstanceStruct *chartInstance;
  chartInstance = (SFc3_MotionObjectDetectorInstanceStruct *)utMalloc(sizeof
    (SFc3_MotionObjectDetectorInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_MotionObjectDetectorInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_MotionObjectDetector;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_MotionObjectDetector;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_MotionObjectDetector;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_MotionObjectDetector;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_MotionObjectDetector;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_MotionObjectDetector;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_MotionObjectDetector;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_MotionObjectDetector;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_MotionObjectDetector;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_MotionObjectDetector;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_MotionObjectDetector;
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
    chartInstance->c3_JITStateAnimation,
    chartInstance->c3_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c3_MotionObjectDetector(chartInstance);
}

void c3_MotionObjectDetector_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_MotionObjectDetector(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_MotionObjectDetector(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_MotionObjectDetector(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_MotionObjectDetector_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
