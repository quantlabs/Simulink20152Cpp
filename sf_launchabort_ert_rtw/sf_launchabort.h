//
// File: sf_launchabort.h
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
#ifndef RTW_HEADER_sf_launchabort_h_
#define RTW_HEADER_sf_launchabort_h_
#include <math.h>
#include <string.h>
#ifndef sf_launchabort_COMMON_INCLUDES_
# define sf_launchabort_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 // sf_launchabort_COMMON_INCLUDES_

#include "sf_launchabort_types.h"

// Child system includes
#include "launchAbortController.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

// Block signals for system '<S5>/FuelDump'
typedef struct {
  real_T UnitDelay;                    // '<S8>/Unit Delay'
} rtB_FuelDump;

// Block states (auto storage) for system '<S5>/FuelDump'
typedef struct {
  real_T UnitDelay_DSTATE;             // '<S8>/Unit Delay'
} rtDW_FuelDump;

// Block signals for system '<S5>/TankRelease'
typedef struct {
  real_T UnitDelay;                    // '<S10>/Unit Delay'
} rtB_TankRelease;

// Block states (auto storage) for system '<S5>/TankRelease'
typedef struct {
  real_T UnitDelay_DSTATE;             // '<S10>/Unit Delay'
} rtDW_TankRelease;

// Block signals (auto storage)
typedef struct {
  real_T FromWs[6];                    // '<S3>/FromWs'
  real_T TmpSignalConversionAtVRSinkInpo[4];// '<Root>/VR Inputs'
  real_T TmpSignalConversionAtVRSinkIn_p[4];// '<Root>/VR Inputs'
  real_T Gain[3];                      // '<S2>/Gain'
  real_T Gain2[3];                     // '<S2>/Gain2'
  real_T Gain1[3];                     // '<S2>/Gain1'
  real_T Switch[3];                    // '<Root>/Switch'
  rtB_TankRelease TankRelease_m;       // '<S5>/TankRelease'
  rtB_FuelDump StageRelease;           // '<S5>/StageRelease'
  rtB_FuelDump FuelDump_f;             // '<S5>/FuelDump'
  rtB_launchAbortController sf_launchAbortController;// '<Root>/launchAbortController' 
} BlockIO;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T ProtectedRT_Buffer0;          // '<Root>/Protected RT'
  real_T ProtectedRT1_Buffer0;         // '<Root>/Protected RT1'
  real_T VRTracer_LastPos[3];          // '<Root>/VR Tracer'
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      // '<S3>/FromWs'

  void *VRSink_PWORK[17];              // '<Root>/VR Sink'
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      // '<S3>/FromWs'

  int8_T ProtectedRT_semaphoreTaken;   // '<Root>/Protected RT'
  int8_T ProtectedRT1_semaphoreTaken;  // '<Root>/Protected RT1'
  boolean_T VRTracer_CreateLineSgmnt;  // '<Root>/VR Tracer'
  rtDW_TankRelease TankRelease_m;      // '<S5>/TankRelease'
  rtDW_FuelDump StageRelease;          // '<S5>/StageRelease'
  rtDW_FuelDump FuelDump_f;            // '<S5>/FuelDump'
  rtDW_launchAbortController sf_launchAbortController;// '<Root>/launchAbortController' 
} D_Work;

// Parameters for system: '<S5>/FuelDump'
struct rtP_FuelDump_ {
  real_T Out2_Y0;                      // Expression: 0
                                       //  Referenced by: '<S8>/Out2'

  real_T Constant1_Value;              // Expression: -2
                                       //  Referenced by: '<S8>/Constant1'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S8>/Unit Delay'

};

// Parameters for system: '<S5>/TankRelease'
struct rtP_TankRelease_ {
  real_T Out1_Y0;                      // Expression: 0
                                       //  Referenced by: '<S10>/Out1'

  real_T Constant_Value;               // Expression: -2
                                       //  Referenced by: '<S10>/Constant'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S10>/Unit Delay'

};

// Parameters (auto storage)
struct Parameters_ {
  real_T Blue_Value[3];                // Expression: [0 0 1]
                                       //  Referenced by: '<Root>/Blue'

  real_T Red_Value[3];                 // Expression: [1 0 0]
                                       //  Referenced by: '<Root>/Red'

  real_T MarkersOff_Value;             // Expression: 1
                                       //  Referenced by: '<Root>/Markers Off'

  real_T MarkersOn_Value;              // Expression: 0
                                       //  Referenced by: '<Root>/Markers On'

  real_T rotVector_Value[3];           // Expression: [0, 0, 1]
                                       //  Referenced by: '<S7>/rotVector'

  real_T rotVector_Value_b[3];         // Expression: [1, 0, 0]
                                       //  Referenced by: '<S6>/rotVector'

  real_T Gain_Gain[3];                 // Expression: [0,1,0]
                                       //  Referenced by: '<S2>/Gain'

  real_T Gain2_Gain[3];                // Expression: [0,1,0]
                                       //  Referenced by: '<S2>/Gain2'

  real_T Gain1_Gain[3];                // Expression: [0,1,0]
                                       //  Referenced by: '<S2>/Gain1'

  uint8_T ManualSwitch_CurrentSetting; // Computed Parameter: ManualSwitch_CurrentSetting
                                       //  Referenced by: '<Root>/Manual Switch'

  rtP_TankRelease TankRelease_m;       // '<S5>/TankRelease'
  rtP_FuelDump StageRelease;           // '<S5>/StageRelease'
  rtP_FuelDump FuelDump_f;             // '<S5>/FuelDump'
};

// Real-time Model Data Structure
struct tag_RTM {
  const char_T * volatile errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

// Class declaration for model sf_launchabort
class sf_launchabortModelClass {
  // public data and function members
 public:
  // Model entry point functions

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  sf_launchabortModelClass();

  // Destructor
  ~sf_launchabortModelClass();

  // Real-Time Model get method
  RT_MODEL * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  Parameters P;

  // Block signals
  BlockIO B;

  // Block states
  D_Work DWork;

  // Real-Time Model
  RT_MODEL M;
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'sf_launchabort'
//  '<S1>'   : 'sf_launchabort/VR Data'
//  '<S2>'   : 'sf_launchabort/VR Inputs'
//  '<S3>'   : 'sf_launchabort/inputs1'
//  '<S4>'   : 'sf_launchabort/launchAbortController'
//  '<S5>'   : 'sf_launchabort/outputs'
//  '<S6>'   : 'sf_launchabort/VR Inputs/Pitch'
//  '<S7>'   : 'sf_launchabort/VR Inputs/Yaw'
//  '<S8>'   : 'sf_launchabort/outputs/FuelDump'
//  '<S9>'   : 'sf_launchabort/outputs/StageRelease'
//  '<S10>'  : 'sf_launchabort/outputs/TankRelease'

#endif                                 // RTW_HEADER_sf_launchabort_h_

//
// File trailer for generated code.
//
// [EOF]
//
