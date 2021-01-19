/*
 * File: HybridStateChart.h
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

#ifndef RTW_HEADER_HybridStateChart_h_
#define RTW_HEADER_HybridStateChart_h_
#include <math.h>
#include <stddef.h>
#ifndef HybridStateChart_COMMON_INCLUDES_
# define HybridStateChart_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#include "MW_AnalogIn.h"
#endif                                 /* HybridStateChart_COMMON_INCLUDES_ */

#include "HybridStateChart_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T LED;                          /* '<Root>/Chart' */
} B_HybridStateChart_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_int_o_T obj; /* '<Root>/PWM' */
  codertarget_arduinobase_int_o_T obj_f;/* '<Root>/PWM1' */
  codertarget_arduinobase_int_o_T obj_l;/* '<Root>/PWM2' */
  codertarget_arduinobase_inter_T obj_e;/* '<Root>/Analog Input1' */
  codertarget_arduinobase_blo_o_T obj_ep;/* '<Root>/Digital Input1' */
  codertarget_arduinobase_blo_o_T obj_n;/* '<Root>/Digital Input' */
  j_codertarget_arduinobase_int_T gobj_1;/* '<Root>/PWM' */
  j_codertarget_arduinobase_int_T gobj_2;/* '<Root>/PWM' */
  j_codertarget_arduinobase_int_T gobj_3;/* '<Root>/PWM' */
  j_codertarget_arduinobase_int_T gobj_4;/* '<Root>/PWM' */
  j_codertarget_arduinobase_int_T gobj_1_p;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_2_l;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_3_e;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_4_k;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_1_f;/* '<Root>/PWM2' */
  j_codertarget_arduinobase_int_T gobj_2_a;/* '<Root>/PWM2' */
  j_codertarget_arduinobase_int_T gobj_3_k;/* '<Root>/PWM2' */
  j_codertarget_arduinobase_int_T gobj_4_a;/* '<Root>/PWM2' */
  codertarget_arduinobase_block_T obj_ea;/* '<Root>/Digital Output' */
  codertarget_arduinobase_block_T obj_a;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_block_T obj_d;/* '<Root>/Digital Output2' */
  codertarget_arduinobase_block_T obj_ej;/* '<Root>/Digital Output3' */
  codertarget_arduinobase_block_T obj_o;/* '<Root>/Digital Output4' */
  codertarget_arduinobase_block_T obj_a4;/* '<Root>/Digital Output5' */
  codertarget_arduinobase_block_T obj_lo;/* '<Root>/Digital Output6' */
  codertarget_arduinobase_block_T obj_p;/* '<Root>/Digital Output10' */
  codertarget_arduinobase_block_T obj_d2;/* '<Root>/Digital Output7' */
  codertarget_arduinobase_block_T obj_b;/* '<Root>/Digital Output8' */
  codertarget_arduinobase_block_T obj_oy;/* '<Root>/Digital Output9' */
  real_T temporalCounter_i1;           /* '<Root>/Chart' */
  real_T previousTime;                 /* '<Root>/Chart' */
  uint32_T Counter_ClkEphState;        /* '<Root>/Counter' */
  uint32_T Counter_RstEphState;        /* '<Root>/Counter' */
  uint16_T Counter_Count;              /* '<Root>/Counter' */
  uint8_T is_active_c3_HybridStateChart;/* '<Root>/Chart' */
  uint8_T is_Ground_Cleaning_Robot;    /* '<Root>/Chart' */
  uint8_T is_Movement;                 /* '<Root>/Chart' */
  uint8_T was_Movement;                /* '<Root>/Chart' */
  uint8_T is_Cleaning;                 /* '<Root>/Chart' */
  uint8_T was_Cleaning;                /* '<Root>/Chart' */
  uint8_T is_Charging;                 /* '<Root>/Chart' */
  uint8_T was_Charging;                /* '<Root>/Chart' */
} DW_HybridStateChart_T;

/* Parameters (default storage) */
struct P_HybridStateChart_T_ {
  uint16_T Counter_InitialCount;       /* Mask Parameter: Counter_InitialCount
                                        * Referenced by: '<Root>/Counter'
                                        */
  real_T AnalogInput1_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input1'
                                        */
  real_T DigitalInput_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input'
                                        */
  real_T DigitalInput1_SampleTime;     /* Expression: 0.1
                                        * Referenced by: '<Root>/Digital Input1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Resetevery1second_Value;      /* Expression: 1
                                        * Referenced by: '<Root>/Reset every 1 second'
                                        */
  real_T Constant10_Value;             /* Expression: 100
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 1100
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant12_Value;             /* Expression: 255
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 100
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 200
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T SineWave_Amp;                 /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant1_Value;              /* Expression: 75
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant6_Value;              /* Expression: 125
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant8'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_HybridStateChart_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_HybridStateChart_T HybridStateChart_P;

/* Block signals (default storage) */
extern B_HybridStateChart_T HybridStateChart_B;

/* Block states (default storage) */
extern DW_HybridStateChart_T HybridStateChart_DW;

/* Model entry point functions */
extern void HybridStateChart_initialize(void);
extern void HybridStateChart_step(void);
extern void HybridStateChart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_HybridStateChart_T *const HybridStateChart_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display8' : Unused code path elimination
 * Block '<Root>/Gain' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 */

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
 * '<Root>' : 'HybridStateChart'
 * '<S1>'   : 'HybridStateChart/Chart'
 * '<S2>'   : 'HybridStateChart/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_HybridStateChart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
