/*
 * basisSL.cpp
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

#include "basisSL.h"
#include "basisSL_private.h"

/* Model step function */
void basisSLModelClass::step()
{
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:3' */
  /* Truth Table Function 'Truth Table': '<S2>:1' */
  /*  buy */
  /* Condition '#1': '<S2>:1:9' */
  /*  sell */
  /* Condition '#2': '<S2>:1:13' */
}

/* Model initialize function */
void basisSLModelClass::initialize()
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus((&basisSL_M), (NULL));
}

/* Model terminate function */
void basisSLModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
basisSLModelClass::basisSLModelClass()
{
  static const P_basisSL_T basisSL_P_temp = {
    95.47,                             /* Expression: 95.47
                                        * Referenced by: '<Root>/Cash Price'
                                        */
    97.5341                            /* Expression: 97.5341
                                        * Referenced by: '<Root>/Future Price'
                                        */
  };                                   /* Modifiable parameters */

  /* Initialize tunable parameters */
  basisSL_P = basisSL_P_temp;
}

/* Destructor */
basisSLModelClass::~basisSLModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_basisSL_T * basisSLModelClass::getRTM()
{
  return (&basisSL_M);
}
