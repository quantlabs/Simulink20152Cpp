//
// File: launchAbortController.cpp
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
#include "launchAbortController.h"

// Include model header file for global data
#include "sf_launchabort.h"
#include "sf_launchabort_private.h"

// Named constants for Chart: '<Root>/launchAbortController'
#define IN_AOA                         ((uint8_T)1U)
#define IN_ATO                         ((uint8_T)2U)
#define IN_DRL                         ((uint8_T)3U)
#define IN_FuelDump                    ((uint8_T)1U)
#define IN_NO_ACTIVE_CHILD             ((uint8_T)0U)
#define IN_Normal                      ((uint8_T)1U)
#define IN_RTLS                        ((uint8_T)4U)
#define IN_StageRelease                ((uint8_T)2U)
#define IN_TankRelease                 ((uint8_T)3U)
#define IN_abortComplete               ((uint8_T)2U)
#define IN_abortLogic                  ((uint8_T)3U)

// Initial conditions for atomic system: '<Root>/launchAbortController'
void launchAbortController_Init(rtB_launchAbortController *localB,
  rtDW_launchAbortController *localDW)
{
  localDW->is_Abort = IN_NO_ACTIVE_CHILD;
  localDW->is_abortLogic = IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_ModeLogic = IN_NO_ACTIVE_CHILD;
  localDW->is_active_c1_sf_launchabort = 0U;
  localDW->dumpFuelEventCounter = 0U;
  localB->dumpFuel = false;
  localDW->releaseStageEventCounter = 0U;
  localB->releaseStage = false;
  localDW->releaseTanksEventCounter = 0U;
  localB->releaseTanks = false;
}

// Output and update for atomic system: '<Root>/launchAbortController'
void launchAbortController(real_T rtu_alt, real_T rtu_anomaly,
  rtB_launchAbortController *localB, rtDW_launchAbortController *localDW)
{
  // Gateway: launchAbortController
  if (localDW->temporalCounter_i1 < 15U) {
    localDW->temporalCounter_i1++;
  }

  // During: launchAbortController
  if (localDW->is_active_c1_sf_launchabort == 0U) {
    // Entry: launchAbortController
    localDW->is_active_c1_sf_launchabort = 1U;

    // Entry Internal: launchAbortController
    // Entry Internal 'ModeLogic': '<S4>:5'
    // Transition: '<S4>:16'
    localDW->is_ModeLogic = IN_RTLS;

    // Entry 'RTLS': '<S4>:4'
    // Entry Internal 'Abort': '<S4>:6'
    // Transition: '<S4>:17'
    localDW->is_Abort = IN_Normal;

    // Entry 'Normal': '<S4>:7'
  } else {
    // During 'ModeLogic': '<S4>:5'
    switch (localDW->is_ModeLogic) {
     case IN_AOA:
      // During 'AOA': '<S4>:3'
      if ((rtu_alt > 400000.0) && (!(rtu_anomaly != 0.0))) {
        // Transition: '<S4>:15'
        localDW->is_ModeLogic = IN_ATO;

        // Entry 'ATO': '<S4>:1'
      }
      break;

     case IN_ATO:
      // During 'ATO': '<S4>:1'
      break;

     case IN_DRL:
      // During 'DRL': '<S4>:2'
      if ((rtu_alt > 100000.0) && (!(rtu_anomaly != 0.0))) {
        // Transition: '<S4>:14'
        localDW->is_ModeLogic = IN_AOA;

        // Entry 'AOA': '<S4>:3'
      }
      break;

     default:
      // During 'RTLS': '<S4>:4'
      if ((rtu_alt > 10000.0) && (!(rtu_anomaly != 0.0))) {
        // Transition: '<S4>:13'
        localDW->is_ModeLogic = IN_DRL;

        // Entry 'DRL': '<S4>:2'
      }
      break;
    }

    // During 'Abort': '<S4>:6'
    switch (localDW->is_Abort) {
     case IN_Normal:
      // During 'Normal': '<S4>:7'
      if (rtu_anomaly != 0.0) {
        // Transition: '<S4>:19'
        if (localDW->is_ModeLogic == IN_RTLS) {
          // Transition: '<S4>:22'
          localDW->is_Abort = IN_abortLogic;

          // Entry 'abortLogic': '<S4>:8'
          localDW->is_abortLogic = IN_FuelDump;
          localDW->temporalCounter_i1 = 0U;

          // Entry 'FuelDump': '<S4>:9'
          // Event: '<S4>:45'
          localDW->dumpFuelEventCounter++;
        } else if (localDW->is_ModeLogic == IN_DRL) {
          // Transition: '<S4>:25'
          localDW->is_Abort = IN_abortLogic;

          // Entry 'abortLogic': '<S4>:8'
          localDW->is_abortLogic = IN_TankRelease;
          localDW->temporalCounter_i1 = 0U;

          // Entry 'TankRelease': '<S4>:10'
          // Event: '<S4>:47'
          localDW->releaseTanksEventCounter++;
        } else if (localDW->is_ModeLogic == IN_AOA) {
          // Transition: '<S4>:26'
          localDW->is_Abort = IN_abortLogic;

          // Entry 'abortLogic': '<S4>:8'
          localDW->is_abortLogic = IN_StageRelease;

          // Entry 'StageRelease': '<S4>:11'
          // Event: '<S4>:46'
          localDW->releaseStageEventCounter++;
        } else {
          // Transition: '<S4>:27'
          // Transition: '<S4>:30'
          localDW->is_Abort = IN_abortComplete;

          // Entry 'abortComplete': '<S4>:12'
        }
      }
      break;

     case IN_abortComplete:
      // During 'abortComplete': '<S4>:12'
      break;

     default:
      // During 'abortLogic': '<S4>:8'
      switch (localDW->is_abortLogic) {
       case IN_FuelDump:
        // During 'FuelDump': '<S4>:9'
        if (localDW->temporalCounter_i1 >= 10) {
          // Transition: '<S4>:23'
          // Exit 'FuelDump': '<S4>:9'
          localDW->is_abortLogic = IN_TankRelease;
          localDW->temporalCounter_i1 = 0U;

          // Entry 'TankRelease': '<S4>:10'
          // Event: '<S4>:47'
          localDW->releaseTanksEventCounter++;
        }
        break;

       case IN_StageRelease:
        // During 'StageRelease': '<S4>:11'
        // Transition: '<S4>:29'
        // Transition: '<S4>:30'
        // Exit 'StageRelease': '<S4>:11'
        localDW->is_abortLogic = IN_NO_ACTIVE_CHILD;
        localDW->is_Abort = IN_abortComplete;

        // Entry 'abortComplete': '<S4>:12'
        break;

       default:
        // During 'TankRelease': '<S4>:10'
        if (localDW->temporalCounter_i1 >= 10) {
          // Transition: '<S4>:28'
          // Exit 'TankRelease': '<S4>:10'
          localDW->is_abortLogic = IN_StageRelease;

          // Entry 'StageRelease': '<S4>:11'
          // Event: '<S4>:46'
          localDW->releaseStageEventCounter++;
        }
        break;
      }
      break;
    }
  }

  if (localDW->dumpFuelEventCounter > 0U) {
    localB->dumpFuel = !localB->dumpFuel;
    localDW->dumpFuelEventCounter--;
  }

  if (localDW->releaseStageEventCounter > 0U) {
    localB->releaseStage = !localB->releaseStage;
    localDW->releaseStageEventCounter--;
  }

  if (localDW->releaseTanksEventCounter > 0U) {
    localB->releaseTanks = !localB->releaseTanks;
    localDW->releaseTanksEventCounter--;
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
