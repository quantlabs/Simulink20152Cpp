//
// File: sf_launchabort_private.h
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
#ifndef RTW_HEADER_sf_launchabort_private_h_
#define RTW_HEADER_sf_launchabort_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

// Used by FromWorkspace Block: '<S3>/FromWs'
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern void FuelDump_Init(rtDW_FuelDump *localDW, rtP_FuelDump *localP);
extern void FuelDump_Start(rtB_FuelDump *localB, rtDW_FuelDump *localDW,
  rtP_FuelDump *localP);
extern void FuelDump(boolean_T rtu_Enable, rtB_FuelDump *localB, rtDW_FuelDump
                     *localDW, rtP_FuelDump *localP);
extern void TankRelease_Init(rtDW_TankRelease *localDW, rtP_TankRelease *localP);
extern void TankRelease_Start(rtB_TankRelease *localB, rtDW_TankRelease *localDW,
  rtP_TankRelease *localP);
extern void TankRelease(boolean_T rtu_Enable, rtB_TankRelease *localB,
  rtDW_TankRelease *localDW, rtP_TankRelease *localP);

#endif                                 // RTW_HEADER_sf_launchabort_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
