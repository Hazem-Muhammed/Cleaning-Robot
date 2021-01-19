/*
 * File: HybridStateChart_private.h
 *
 * Code generated for Simulink model 'HybridStateChart'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Tue Jan 19 19:31:41 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HybridStateChart_private_h_
#define RTW_HEADER_HybridStateChart_private_h_
#include "rtwtypes.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern uint32_T MWDSP_EPH_R_D(real_T evt, uint32_T *sta);
extern uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta);
extern real_T rt_roundd_snf(real_T u);

/* Exported functions */
extern void mdlDerivatives_c3_HybridStateChart(void);

#endif                              /* RTW_HEADER_HybridStateChart_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
