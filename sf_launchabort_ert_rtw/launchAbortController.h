//
// File: launchAbortController.h
//
// Code generated for Simulink model 'sf_launchabort'.
//
// Model version                  : 1.211
// Simulink Coder version         : 8.8 (R2015a) 09-Feb-2015
// C/C++ source code generated on : Sun Jul 26 22:33:13 2015
//
// Target selection: ert.tlc
// Embedded hardware selection: 32-bit Generic
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_launchAbortController_h_
#define RTW_HEADER_launchAbortController_h_
#ifndef sf_launchabort_COMMON_INCLUDES_
# define sf_launchabort_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 // sf_launchabort_COMMON_INCLUDES_

#include "sf_launchabort_types.h"

// Block signals for system '<Root>/launchAbortController'
typedef struct {
  boolean_T dumpFuel;                  // '<Root>/launchAbortController'
  boolean_T releaseStage;              // '<Root>/launchAbortController'
  boolean_T releaseTanks;              // '<Root>/launchAbortController'
} rtB_launchAbortController;

// Block states (auto storage) for system '<Root>/launchAbortController'
typedef struct {
  uint32_T dumpFuelEventCounter;       // '<Root>/launchAbortController'
  uint32_T releaseStageEventCounter;   // '<Root>/launchAbortController'
  uint32_T releaseTanksEventCounter;   // '<Root>/launchAbortController'
  uint8_T is_active_c1_sf_launchabort; // '<Root>/launchAbortController'
  uint8_T is_ModeLogic;                // '<Root>/launchAbortController'
  uint8_T is_Abort;                    // '<Root>/launchAbortController'
  uint8_T is_abortLogic;               // '<Root>/launchAbortController'
  uint8_T temporalCounter_i1;          // '<Root>/launchAbortController'
} rtDW_launchAbortController;

extern void launchAbortController_Init(rtB_launchAbortController *localB,
  rtDW_launchAbortController *localDW);
extern void launchAbortController(real_T rtu_alt, real_T rtu_anomaly,
  rtB_launchAbortController *localB, rtDW_launchAbortController *localDW);

#endif                                 // RTW_HEADER_launchAbortController_h_

//
// File trailer for generated code.
//
// [EOF]
//
