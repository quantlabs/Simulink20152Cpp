/*
 * basisSL.h
 *
 * Code generation for model "basisSL".
 *
 * Model version              : 1.10
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C++ source code generated on : Mon Jul 27 00:25:35 2015
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_basisSL_h_
#define RTW_HEADER_basisSL_h_
#include <stddef.h>
#ifndef basisSL_COMMON_INCLUDES_
# define basisSL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* basisSL_COMMON_INCLUDES_ */

#include "basisSL_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Parameters (auto storage) */
struct P_basisSL_T_ {
  real_T CashPrice_Value;              /* Expression: 95.47
                                        * Referenced by: '<Root>/Cash Price'
                                        */
  real_T FuturePrice_Value;            /* Expression: 97.5341
                                        * Referenced by: '<Root>/Future Price'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_basisSL_T {
  const char_T *errorStatus;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

/* Class declaration for model basisSL */
class basisSLModelClass {
  /* public data and function members */
 public:
  /* Model entry point functions */

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  basisSLModelClass();

  /* Destructor */
  ~basisSLModelClass();

  /* Real-Time Model get method */
  RT_MODEL_basisSL_T * getRTM();

  /* private data and function members */
 private:
  /* Tunable parameters */
  P_basisSL_T basisSL_P;

  /* Real-Time Model */
  RT_MODEL_basisSL_T basisSL_M;
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'basisSL'
 * '<S1>'   : 'basisSL/MATLAB Function'
 * '<S2>'   : 'basisSL/Truth Table'
 */
#endif                                 /* RTW_HEADER_basisSL_h_ */
