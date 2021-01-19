/*
 * File: HybridStateChart.c
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

#include "HybridStateChart.h"
#include "HybridStateChart_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define HybridStateC_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define HybridStateChart_IN_Backward   ((uint8_T)1U)
#define HybridStateChart_IN_Forward    ((uint8_T)2U)
#define HybridStateChart_IN_OFF        ((uint8_T)1U)
#define HybridStateChart_IN_ON         ((uint8_T)2U)
#define HybridStateChart_IN_Robot_OFF  ((uint8_T)1U)
#define HybridStateChart_IN_Robot_ON   ((uint8_T)2U)
#define HybridStateChart_IN_Rotate     ((uint8_T)3U)
#define HybridStateChart_IN_Stop       ((uint8_T)4U)

/* Block signals (default storage) */
B_HybridStateChart_T HybridStateChart_B;

/* Block states (default storage) */
DW_HybridStateChart_T HybridStateChart_DW;

/* Real-time model */
RT_MODEL_HybridStateChart_T HybridStateChart_M_;
RT_MODEL_HybridStateChart_T *const HybridStateChart_M = &HybridStateChart_M_;

/* Forward declaration for local functions */
static void matlabCodegenHa_oisusey3bohp5wn(codertarget_arduinobase_blo_o_T *obj);
static void HybridSt_SystemCore_release_ois(codertarget_arduinobase_inter_T *obj);
static void SystemCore_delet_oisusey3bohp5w(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHan_oisusey3bohp5w(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj);
static void HybridStateC_SystemCore_release(codertarget_arduinobase_int_o_T *obj);
static void HybridSt_SystemCore_delete_oisu(codertarget_arduinobase_int_o_T *obj);
static void matlabCodegenHandle_matlab_oisu(codertarget_arduinobase_int_o_T *obj);
static void arduino_PWMOutput_set_pinNum_oi(codertarget_arduinobase_int_o_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0);
static void arduino_PWMOutput_set_pinNumb_o(codertarget_arduinobase_int_o_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_int_o_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0);
uint32_T MWDSP_EPH_R_D(real_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int16_T curState;
  int16_T newState;
  int16_T newStateR;
  int16_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<Root>/Counter' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0UL;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt > 0.0) {
    curState = 2;
  } else {
    curState = !(evt < 0.0);
  }

  if (*sta == 5UL) {
    newStateR = curState;
  } else {
    if ((uint32_T)curState != *sta) {
      if (*sta == 3UL) {
        if ((uint16_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 2;
          previousState = 1UL;
        }
      }

      if (previousState == 4UL) {
        if ((uint16_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 3;
          previousState = 1UL;
        }
      }

      if ((previousState == 1UL) && ((uint16_T)curState == 2U)) {
        retVal = 2UL;
      }

      if (previousState == 0UL) {
        retVal = 2UL;
      }

      if ((uint16_T)retVal == (uint16_T)lastzcevent) {
        retVal = 0UL;
      }

      if (((uint16_T)curState == 1U) && ((uint16_T)retVal == 2U)) {
        newState = 3;
      } else {
        newState = curState;
      }
    }
  }

  if ((uint16_T)newStateR != 5U) {
    *sta = (uint32_T)newStateR;
    retVal = 0UL;
  }

  if ((uint16_T)newState != 5U) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<Root>/Counter' */
  return retVal;
}

uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int16_T curState;
  int16_T newState;
  int16_T newStateR;
  int16_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<Root>/Counter' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0UL;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt) {
    curState = 2;
  } else {
    curState = 1;
  }

  if (*sta == 5UL) {
    newStateR = curState;
  } else {
    if ((uint32_T)curState != *sta) {
      if (*sta == 3UL) {
        if ((uint16_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 2;
          previousState = 1UL;
        }
      }

      if (previousState == 4UL) {
        if ((uint16_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 3;
          previousState = 1UL;
        }
      }

      if ((previousState == 1UL) && ((uint16_T)curState == 2U)) {
        retVal = 2UL;
      }

      if (previousState == 0UL) {
        retVal = 2UL;
      }

      if ((uint16_T)retVal == (uint16_T)lastzcevent) {
        retVal = 0UL;
      }

      if (((uint16_T)curState == 1U) && ((uint16_T)retVal == 2U)) {
        newState = 3;
      } else {
        newState = curState;
      }
    }
  }

  if ((uint16_T)newStateR != 5U) {
    *sta = (uint32_T)newStateR;
    retVal = 0UL;
  }

  if ((uint16_T)newState != 5U) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<Root>/Counter' */
  return retVal;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void matlabCodegenHa_oisusey3bohp5wn(codertarget_arduinobase_blo_o_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void HybridSt_SystemCore_release_ois(codertarget_arduinobase_inter_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(60UL);
    MW_AnalogIn_Close(obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE);
  }
}

static void SystemCore_delet_oisusey3bohp5w(codertarget_arduinobase_inter_T *obj)
{
  HybridSt_SystemCore_release_ois(obj);
}

static void matlabCodegenHan_oisusey3bohp5w(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delet_oisusey3bohp5w(obj);
  }
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void HybridStateC_SystemCore_release(codertarget_arduinobase_int_o_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void HybridSt_SystemCore_delete_oisu(codertarget_arduinobase_int_o_T *obj)
{
  HybridStateC_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlab_oisu(codertarget_arduinobase_int_o_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    HybridSt_SystemCore_delete_oisu(obj);
  }
}

static void arduino_PWMOutput_set_pinNum_oi(codertarget_arduinobase_int_o_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 9UL;
}

static void arduino_PWMOutput_set_pinNumb_o(codertarget_arduinobase_int_o_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 6UL;
}

static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_int_o_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 13UL;
}

/* Function for Chart: '<Root>/Chart' */
void mdlDerivatives_c3_HybridStateChart(void)
{
}

/* Model step function */
void HybridStateChart_step(void)
{
  uint16_T tmp;
  boolean_T stateChanged;
  codertarget_arduinobase_inter_T *obj;
  codertarget_arduinobase_int_o_T *obj_0;
  real_T rtb_output;
  boolean_T RelationalOperator;
  boolean_T NOT;
  int16_T Brush;
  int16_T RightMotorForward;
  int16_T RightMotorBackward;
  int16_T LeftMotorBackward;
  int16_T LeftMotorForward;
  real_T elapsedTime;
  uint8_T tmp_0;

  /* MATLABSystem: '<Root>/Digital Input1' */
  if (HybridStateChart_DW.obj_ep.SampleTime !=
      HybridStateChart_P.DigitalInput1_SampleTime) {
    HybridStateChart_DW.obj_ep.SampleTime =
      HybridStateChart_P.DigitalInput1_SampleTime;
  }

  RelationalOperator = readDigitalPin(19);

  /* S-Function (sdspcount2): '<Root>/Counter' incorporates:
   *  Constant: '<Root>/Reset every 1 second'
   *  MATLABSystem: '<Root>/Digital Input1'
   */
  if (MWDSP_EPH_R_D(HybridStateChart_P.Resetevery1second_Value,
                    &HybridStateChart_DW.Counter_RstEphState) != 0UL) {
    HybridStateChart_DW.Counter_Count = HybridStateChart_P.Counter_InitialCount;
  }

  if (MWDSP_EPH_R_B(RelationalOperator, &HybridStateChart_DW.Counter_ClkEphState)
      != 0UL) {
    if (HybridStateChart_DW.Counter_Count < 12000U) {
      HybridStateChart_DW.Counter_Count++;
    } else {
      HybridStateChart_DW.Counter_Count = 0U;
    }
  }

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Clock: '<Root>/Clock'
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant11'
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant9'
   *  Product: '<Root>/Divide'
   *  S-Function (sdspcount2): '<Root>/Counter'
   */
  rtb_output = ((real_T)HybridStateChart_DW.Counter_Count /
                HybridStateChart_M->Timing.t[0] -
                HybridStateChart_P.Constant10_Value) *
    (HybridStateChart_P.Constant12_Value - HybridStateChart_P.Constant9_Value) /
    (HybridStateChart_P.Constant11_Value - HybridStateChart_P.Constant10_Value)
    + HybridStateChart_P.Constant9_Value;

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/Constant13'
   */
  RelationalOperator = (rtb_output <= HybridStateChart_P.Constant13_Value);

  /* MATLABSystem: '<Root>/Digital Input' */
  if (HybridStateChart_DW.obj_n.SampleTime !=
      HybridStateChart_P.DigitalInput_SampleTime) {
    HybridStateChart_DW.obj_n.SampleTime =
      HybridStateChart_P.DigitalInput_SampleTime;
  }

  NOT = readDigitalPin(4);

  /* Logic: '<Root>/NOT' incorporates:
   *  MATLABSystem: '<Root>/Digital Input'
   */
  NOT = !NOT;

  /* MATLABSystem: '<Root>/Analog Input1' */
  if (HybridStateChart_DW.obj_e.SampleTime !=
      HybridStateChart_P.AnalogInput1_SampleTime) {
    HybridStateChart_DW.obj_e.SampleTime =
      HybridStateChart_P.AnalogInput1_SampleTime;
  }

  obj = &HybridStateChart_DW.obj_e;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(60UL);
  MW_AnalogInSingle_ReadResult
    (HybridStateChart_DW.obj_e.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &tmp, 3);

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant5'
   *  MATLABSystem: '<Root>/Analog Input1'
   *  RelationalOperator: '<Root>/Relational Operator1'
   */
  if (rtmIsMajorTimeStep(HybridStateChart_M)) {
    stateChanged = false;
    elapsedTime = HybridStateChart_M->Timing.t[0] -
      HybridStateChart_DW.previousTime;
    HybridStateChart_DW.previousTime = HybridStateChart_M->Timing.t[0];
    HybridStateChart_DW.temporalCounter_i1 += elapsedTime;
    if (HybridStateChart_DW.is_active_c3_HybridStateChart == 0U) {
      HybridStateChart_DW.is_active_c3_HybridStateChart = 1U;
      stateChanged = true;
      HybridStateChart_DW.is_Ground_Cleaning_Robot =
        HybridStateChart_IN_Robot_OFF;
    } else if (HybridStateChart_DW.is_Ground_Cleaning_Robot == 1) {
      if (HybridStateChart_P.Constant_Value == 1.0) {
        HybridStateChart_DW.is_Ground_Cleaning_Robot =
          HybridStateChart_IN_Robot_ON;
        switch (HybridStateChart_DW.was_Movement) {
         case HybridStateChart_IN_Backward:
          HybridStateChart_DW.is_Movement = HybridStateChart_IN_Backward;
          HybridStateChart_DW.was_Movement = HybridStateChart_IN_Backward;
          HybridStateChart_DW.temporalCounter_i1 = 0.0;
          break;

         case HybridStateChart_IN_Forward:
          HybridStateChart_DW.is_Movement = HybridStateChart_IN_Forward;
          HybridStateChart_DW.was_Movement = HybridStateChart_IN_Forward;
          break;

         case HybridStateChart_IN_Rotate:
          HybridStateChart_DW.is_Movement = HybridStateChart_IN_Rotate;
          HybridStateChart_DW.was_Movement = HybridStateChart_IN_Rotate;
          HybridStateChart_DW.temporalCounter_i1 = 0.0;
          break;

         case HybridStateChart_IN_Stop:
          HybridStateChart_DW.is_Movement = HybridStateChart_IN_Stop;
          HybridStateChart_DW.was_Movement = HybridStateChart_IN_Stop;
          break;

         default:
          HybridStateChart_DW.is_Movement = HybridStateChart_IN_Forward;
          HybridStateChart_DW.was_Movement = HybridStateChart_IN_Forward;
          break;
        }

        HybridStateChart_DW.is_Cleaning = HybridStateChart_IN_OFF;
        HybridStateChart_DW.was_Cleaning = HybridStateChart_IN_OFF;
        switch (HybridStateChart_DW.was_Charging) {
         case HybridStateChart_IN_OFF:
          stateChanged = true;
          HybridStateChart_DW.is_Charging = HybridStateChart_IN_OFF;
          HybridStateChart_DW.was_Charging = HybridStateChart_IN_OFF;
          HybridStateChart_B.LED = 0.0;
          break;

         case HybridStateChart_IN_ON:
          stateChanged = true;
          HybridStateChart_DW.is_Charging = HybridStateChart_IN_ON;
          HybridStateChart_DW.was_Charging = HybridStateChart_IN_ON;
          HybridStateChart_B.LED = 1.0;
          break;

         default:
          stateChanged = true;
          HybridStateChart_DW.is_Charging = HybridStateChart_IN_OFF;
          HybridStateChart_DW.was_Charging = HybridStateChart_IN_OFF;
          HybridStateChart_B.LED = 0.0;
          break;
        }
      }
    } else {
      /* case IN_Robot_ON: */
      if (HybridStateChart_P.Constant_Value == 0.0) {
        HybridStateChart_DW.is_Charging = HybridStateC_IN_NO_ACTIVE_CHILD;
        HybridStateChart_DW.is_Cleaning = HybridStateC_IN_NO_ACTIVE_CHILD;
        HybridStateChart_DW.is_Movement = HybridStateC_IN_NO_ACTIVE_CHILD;
        stateChanged = true;
        HybridStateChart_DW.is_Ground_Cleaning_Robot =
          HybridStateChart_IN_Robot_OFF;
      } else {
        switch (HybridStateChart_DW.is_Movement) {
         case HybridStateChart_IN_Backward:
          if (((HybridStateChart_M->Timing.t[0] -
                HybridStateChart_DW.previousTime) +
               HybridStateChart_DW.temporalCounter_i1 >= 1.0) && (!NOT)) {
            stateChanged = true;
            HybridStateChart_DW.is_Movement = HybridStateChart_IN_Rotate;
            HybridStateChart_DW.was_Movement = HybridStateChart_IN_Rotate;
            HybridStateChart_DW.temporalCounter_i1 = 0.0;
          } else {
            if (NOT) {
              stateChanged = true;
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Backward;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Backward;
              HybridStateChart_DW.temporalCounter_i1 = 0.0;
            }
          }
          break;

         case HybridStateChart_IN_Forward:
          if (NOT) {
            stateChanged = true;
            HybridStateChart_DW.is_Movement = HybridStateChart_IN_Backward;
            HybridStateChart_DW.was_Movement = HybridStateChart_IN_Backward;
            HybridStateChart_DW.temporalCounter_i1 = 0.0;
          } else if ((HybridStateChart_P.Constant5_Value == 1.0) && (tmp < 20U))
          {
            stateChanged = true;
            HybridStateChart_DW.is_Movement = HybridStateChart_IN_Stop;
            HybridStateChart_DW.was_Movement = HybridStateChart_IN_Stop;
          } else {
            if (tmp < 20U) {
              HybridStateChart_B.LED = 1.0;
              stateChanged = true;
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Rotate;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Rotate;
              HybridStateChart_DW.temporalCounter_i1 = 0.0;
            }
          }
          break;

         case HybridStateChart_IN_Rotate:
          if ((((HybridStateChart_M->Timing.t[0] -
                 HybridStateChart_DW.previousTime) +
                HybridStateChart_DW.temporalCounter_i1 >= 1.0) && (!NOT)) ||
              (rtb_output >= HybridStateChart_P.Constant14_Value)) {
            stateChanged = true;
            HybridStateChart_DW.is_Movement = HybridStateChart_IN_Forward;
            HybridStateChart_DW.was_Movement = HybridStateChart_IN_Forward;
          }
          break;

         default:
          /* case IN_Stop: */
          if ((HybridStateChart_P.Constant5_Value == 1.0) && (tmp < 20U)) {
            HybridStateChart_DW.is_Charging = HybridStateC_IN_NO_ACTIVE_CHILD;
            HybridStateChart_DW.is_Cleaning = HybridStateC_IN_NO_ACTIVE_CHILD;
            HybridStateChart_DW.is_Movement = HybridStateC_IN_NO_ACTIVE_CHILD;
            switch (HybridStateChart_DW.was_Movement) {
             case HybridStateChart_IN_Backward:
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Backward;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Backward;
              HybridStateChart_DW.temporalCounter_i1 = 0.0;
              break;

             case HybridStateChart_IN_Forward:
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Forward;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Forward;
              break;

             case HybridStateChart_IN_Rotate:
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Rotate;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Rotate;
              HybridStateChart_DW.temporalCounter_i1 = 0.0;
              break;

             case HybridStateChart_IN_Stop:
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Stop;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Stop;
              break;

             default:
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Forward;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Forward;
              break;
            }

            switch (HybridStateChart_DW.was_Cleaning) {
             case HybridStateChart_IN_OFF:
              HybridStateChart_DW.is_Cleaning = HybridStateChart_IN_OFF;
              HybridStateChart_DW.was_Cleaning = HybridStateChart_IN_OFF;
              break;

             case HybridStateChart_IN_ON:
              HybridStateChart_DW.is_Cleaning = HybridStateChart_IN_ON;
              HybridStateChart_DW.was_Cleaning = HybridStateChart_IN_ON;
              break;
            }

            stateChanged = true;
            HybridStateChart_DW.is_Charging = HybridStateChart_IN_ON;
            HybridStateChart_DW.was_Charging = HybridStateChart_IN_ON;
            HybridStateChart_B.LED = 1.0;
          } else {
            if (tmp == 100U) {
              stateChanged = true;
              HybridStateChart_DW.is_Movement = HybridStateChart_IN_Backward;
              HybridStateChart_DW.was_Movement = HybridStateChart_IN_Backward;
              HybridStateChart_DW.temporalCounter_i1 = 0.0;
            }
          }
          break;
        }

        if (HybridStateChart_DW.is_Cleaning == 1) {
          if (RelationalOperator && (tmp > 20U)) {
            stateChanged = true;
            HybridStateChart_DW.is_Cleaning = HybridStateChart_IN_ON;
            HybridStateChart_DW.was_Cleaning = HybridStateChart_IN_ON;
          }
        } else {
          /* case IN_ON: */
          if (!RelationalOperator) {
            stateChanged = true;
            HybridStateChart_DW.is_Cleaning = HybridStateChart_IN_OFF;
            HybridStateChart_DW.was_Cleaning = HybridStateChart_IN_OFF;
          }
        }

        switch (HybridStateChart_DW.is_Charging) {
         case HybridStateChart_IN_OFF:
          break;

         default:
          /* case IN_ON: */
          if (tmp == 100U) {
            stateChanged = true;
            HybridStateChart_DW.is_Charging = HybridStateChart_IN_OFF;
            HybridStateChart_DW.was_Charging = HybridStateChart_IN_OFF;
            HybridStateChart_B.LED = 0.0;
          }
          break;
        }
      }
    }

    if (stateChanged) {
      rtsiSetBlockStateForSolverChangedAtMajorStep
        (&HybridStateChart_M->solverInfo, true);
    }
  }

  if (HybridStateChart_DW.is_Ground_Cleaning_Robot == 1) {
    Brush = 0;
    RightMotorForward = 0;
    RightMotorBackward = 0;
    LeftMotorForward = 0;
    LeftMotorBackward = 0;
    HybridStateChart_B.LED = 0.0;
  } else {
    /* case IN_Robot_ON: */
    switch (HybridStateChart_DW.is_Movement) {
     case HybridStateChart_IN_Backward:
      LeftMotorBackward = 1;
      RightMotorBackward = 1;
      LeftMotorForward = 0;
      RightMotorForward = 0;
      break;

     case HybridStateChart_IN_Forward:
      LeftMotorForward = 1;
      RightMotorForward = 1;
      LeftMotorBackward = 0;
      RightMotorBackward = 0;
      break;

     case HybridStateChart_IN_Rotate:
      LeftMotorBackward = 1;
      RightMotorForward = 1;
      LeftMotorForward = 0;
      RightMotorBackward = 0;
      break;

     default:
      /* case IN_Stop: */
      LeftMotorForward = 0;
      LeftMotorBackward = 0;
      RightMotorForward = 0;
      RightMotorBackward = 0;
      break;
    }

    if (HybridStateChart_DW.is_Cleaning == 1) {
      Brush = 0;
    } else {
      /* case IN_ON: */
      Brush = 1;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<Root>/Digital Output' */
  rtb_output = rt_roundd_snf(HybridStateChart_B.LED);
  if (rtb_output < 256.0) {
    if (rtb_output >= 0.0) {
      tmp_0 = (uint8_T)rtb_output;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(18, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' */
  writeDigitalPin(3, (uint8_T)LeftMotorForward);

  /* MATLABSystem: '<Root>/Digital Output2' */
  writeDigitalPin(2, (uint8_T)LeftMotorBackward);

  /* MATLABSystem: '<Root>/Digital Output3' */
  writeDigitalPin(8, (uint8_T)RightMotorBackward);

  /* MATLABSystem: '<Root>/Digital Output4' */
  writeDigitalPin(7, (uint8_T)RightMotorForward);

  /* MATLABSystem: '<Root>/Digital Output5' */
  writeDigitalPin(12, (uint8_T)Brush);

  /* MATLABSystem: '<Root>/PWM' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  obj_0 = &HybridStateChart_DW.obj;
  obj_0->MW_PWM_HANDLE = MW_PWM_GetHandle(HybridStateChart_DW.obj.PinPWM);
  if (HybridStateChart_P.Constant1_Value < 255.0) {
    rtb_output = HybridStateChart_P.Constant1_Value;
  } else {
    rtb_output = 255.0;
  }

  if (!(rtb_output > 0.0)) {
    rtb_output = 0.0;
  }

  MW_PWM_SetDutyCycle(HybridStateChart_DW.obj.MW_PWM_HANDLE, rtb_output);

  /* End of MATLABSystem: '<Root>/PWM' */

  /* MATLABSystem: '<Root>/PWM1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  obj_0 = &HybridStateChart_DW.obj_f;
  obj_0->MW_PWM_HANDLE = MW_PWM_GetHandle(HybridStateChart_DW.obj_f.PinPWM);
  if (HybridStateChart_P.Constant1_Value < 255.0) {
    rtb_output = HybridStateChart_P.Constant1_Value;
  } else {
    rtb_output = 255.0;
  }

  if (!(rtb_output > 0.0)) {
    rtb_output = 0.0;
  }

  MW_PWM_SetDutyCycle(HybridStateChart_DW.obj_f.MW_PWM_HANDLE, rtb_output);

  /* End of MATLABSystem: '<Root>/PWM1' */

  /* MATLABSystem: '<Root>/Digital Output6' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  rtb_output = rt_roundd_snf(HybridStateChart_P.Constant2_Value);
  if (rtb_output < 256.0) {
    if (rtb_output >= 0.0) {
      tmp_0 = (uint8_T)rtb_output;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(11, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output6' */

  /* MATLABSystem: '<Root>/PWM2' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  obj_0 = &HybridStateChart_DW.obj_l;
  obj_0->MW_PWM_HANDLE = MW_PWM_GetHandle(HybridStateChart_DW.obj_l.PinPWM);
  if (HybridStateChart_P.Constant6_Value < 255.0) {
    rtb_output = HybridStateChart_P.Constant6_Value;
  } else {
    rtb_output = 255.0;
  }

  if (!(rtb_output > 0.0)) {
    rtb_output = 0.0;
  }

  MW_PWM_SetDutyCycle(HybridStateChart_DW.obj_l.MW_PWM_HANDLE, rtb_output);

  /* End of MATLABSystem: '<Root>/PWM2' */

  /* MATLABSystem: '<Root>/Digital Output10' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  rtb_output = rt_roundd_snf(HybridStateChart_P.Constant7_Value);
  if (rtb_output < 256.0) {
    if (rtb_output >= 0.0) {
      tmp_0 = (uint8_T)rtb_output;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(14, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output10' */

  /* MATLABSystem: '<Root>/Digital Output7' incorporates:
   *  Constant: '<Root>/Constant8'
   *  MATLABSystem: '<Root>/Digital Output8'
   *  MATLABSystem: '<Root>/Digital Output9'
   */
  rtb_output = rt_roundd_snf(HybridStateChart_P.Constant8_Value);
  if (rtb_output < 256.0) {
    if (rtb_output >= 0.0) {
      tmp_0 = (uint8_T)rtb_output;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(16, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output7' */

  /* MATLABSystem: '<Root>/Digital Output8' */
  if (rtb_output < 256.0) {
    if (rtb_output >= 0.0) {
      tmp_0 = (uint8_T)rtb_output;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(15, tmp_0);

  /* MATLABSystem: '<Root>/Digital Output9' */
  if (rtb_output < 256.0) {
    if (rtb_output >= 0.0) {
      tmp_0 = (uint8_T)rtb_output;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(17, tmp_0);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  HybridStateChart_M->Timing.t[0] =
    ((time_T)(++HybridStateChart_M->Timing.clockTick0)) *
    HybridStateChart_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    HybridStateChart_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void HybridStateChart_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&HybridStateChart_M->solverInfo,
                          &HybridStateChart_M->Timing.simTimeStep);
    rtsiSetTPtr(&HybridStateChart_M->solverInfo, &rtmGetTPtr(HybridStateChart_M));
    rtsiSetStepSizePtr(&HybridStateChart_M->solverInfo,
                       &HybridStateChart_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&HybridStateChart_M->solverInfo, (&rtmGetErrorStatus
      (HybridStateChart_M)));
    rtsiSetRTModelPtr(&HybridStateChart_M->solverInfo, HybridStateChart_M);
  }

  rtsiSetSimTimeStep(&HybridStateChart_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&HybridStateChart_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(HybridStateChart_M, &HybridStateChart_M->Timing.tArray[0]);
  HybridStateChart_M->Timing.stepSize0 = 0.1;

  {
    codertarget_arduinobase_inter_T *obj;
    codertarget_arduinobase_int_o_T *obj_0;

    /* InitializeConditions for S-Function (sdspcount2): '<Root>/Counter' */
    HybridStateChart_DW.Counter_ClkEphState = 5UL;
    HybridStateChart_DW.Counter_RstEphState = 5UL;
    HybridStateChart_DW.Counter_Count = HybridStateChart_P.Counter_InitialCount;

    /* Start for MATLABSystem: '<Root>/Digital Input1' */
    HybridStateChart_DW.obj_ep.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_ep.SampleTime =
      HybridStateChart_P.DigitalInput1_SampleTime;
    HybridStateChart_DW.obj_ep.isInitialized = 1L;
    digitalIOSetup(19, 0);
    HybridStateChart_DW.obj_ep.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Input' */
    HybridStateChart_DW.obj_n.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_n.SampleTime =
      HybridStateChart_P.DigitalInput_SampleTime;
    HybridStateChart_DW.obj_n.isInitialized = 1L;
    digitalIOSetup(4, 0);
    HybridStateChart_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Analog Input1' */
    HybridStateChart_DW.obj_e.matlabCodegenIsDeleted = true;
    HybridStateChart_DW.obj_e.isInitialized = 0L;
    HybridStateChart_DW.obj_e.SampleTime = -1.0;
    HybridStateChart_DW.obj_e.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_e.SampleTime =
      HybridStateChart_P.AnalogInput1_SampleTime;
    obj = &HybridStateChart_DW.obj_e;
    HybridStateChart_DW.obj_e.isSetupComplete = false;
    HybridStateChart_DW.obj_e.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(60UL);
    HybridStateChart_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output' */
    HybridStateChart_DW.obj_ea.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_ea.isInitialized = 1L;
    digitalIOSetup(18, 1);
    HybridStateChart_DW.obj_ea.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output1' */
    HybridStateChart_DW.obj_a.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_a.isInitialized = 1L;
    digitalIOSetup(3, 1);
    HybridStateChart_DW.obj_a.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output2' */
    HybridStateChart_DW.obj_d.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_d.isInitialized = 1L;
    digitalIOSetup(2, 1);
    HybridStateChart_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output3' */
    HybridStateChart_DW.obj_ej.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_ej.isInitialized = 1L;
    digitalIOSetup(8, 1);
    HybridStateChart_DW.obj_ej.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output4' */
    HybridStateChart_DW.obj_o.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_o.isInitialized = 1L;
    digitalIOSetup(7, 1);
    HybridStateChart_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output5' */
    HybridStateChart_DW.obj_a4.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_a4.isInitialized = 1L;
    digitalIOSetup(12, 1);
    HybridStateChart_DW.obj_a4.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM' */
    HybridStateChart_DW.obj.matlabCodegenIsDeleted = true;
    HybridStateChart_DW.obj.isInitialized = 0L;
    HybridStateChart_DW.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNum_oi(&HybridStateChart_DW.obj,
      &HybridStateChart_DW.gobj_2);
    obj_0 = &HybridStateChart_DW.obj;
    HybridStateChart_DW.obj.isSetupComplete = false;
    HybridStateChart_DW.obj.isInitialized = 1L;
    obj_0->MW_PWM_HANDLE = MW_PWM_Open(HybridStateChart_DW.obj.PinPWM, 0.0, 0.0);
    obj_0->MW_PWM_HANDLE = MW_PWM_GetHandle(HybridStateChart_DW.obj.PinPWM);
    MW_PWM_Start(HybridStateChart_DW.obj.MW_PWM_HANDLE);
    HybridStateChart_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM1' */
    HybridStateChart_DW.obj_f.matlabCodegenIsDeleted = true;
    HybridStateChart_DW.obj_f.isInitialized = 0L;
    HybridStateChart_DW.obj_f.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumb_o(&HybridStateChart_DW.obj_f,
      &HybridStateChart_DW.gobj_2_l);
    obj_0 = &HybridStateChart_DW.obj_f;
    HybridStateChart_DW.obj_f.isSetupComplete = false;
    HybridStateChart_DW.obj_f.isInitialized = 1L;
    obj_0->MW_PWM_HANDLE = MW_PWM_Open(HybridStateChart_DW.obj_f.PinPWM, 0.0,
      0.0);
    obj_0->MW_PWM_HANDLE = MW_PWM_GetHandle(HybridStateChart_DW.obj_f.PinPWM);
    MW_PWM_Start(HybridStateChart_DW.obj_f.MW_PWM_HANDLE);
    HybridStateChart_DW.obj_f.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output6' */
    HybridStateChart_DW.obj_lo.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_lo.isInitialized = 1L;
    digitalIOSetup(11, 1);
    HybridStateChart_DW.obj_lo.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM2' */
    HybridStateChart_DW.obj_l.matlabCodegenIsDeleted = true;
    HybridStateChart_DW.obj_l.isInitialized = 0L;
    HybridStateChart_DW.obj_l.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&HybridStateChart_DW.obj_l,
      &HybridStateChart_DW.gobj_2_a);
    obj_0 = &HybridStateChart_DW.obj_l;
    HybridStateChart_DW.obj_l.isSetupComplete = false;
    HybridStateChart_DW.obj_l.isInitialized = 1L;
    obj_0->MW_PWM_HANDLE = MW_PWM_Open(HybridStateChart_DW.obj_l.PinPWM, 0.0,
      0.0);
    obj_0->MW_PWM_HANDLE = MW_PWM_GetHandle(HybridStateChart_DW.obj_l.PinPWM);
    MW_PWM_Start(HybridStateChart_DW.obj_l.MW_PWM_HANDLE);
    HybridStateChart_DW.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output10' */
    HybridStateChart_DW.obj_p.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_p.isInitialized = 1L;
    digitalIOSetup(14, 1);
    HybridStateChart_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output7' */
    HybridStateChart_DW.obj_d2.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_d2.isInitialized = 1L;
    digitalIOSetup(16, 1);
    HybridStateChart_DW.obj_d2.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output8' */
    HybridStateChart_DW.obj_b.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_b.isInitialized = 1L;
    digitalIOSetup(15, 1);
    HybridStateChart_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output9' */
    HybridStateChart_DW.obj_oy.matlabCodegenIsDeleted = false;
    HybridStateChart_DW.obj_oy.isInitialized = 1L;
    digitalIOSetup(17, 1);
    HybridStateChart_DW.obj_oy.isSetupComplete = true;

    /* Enable for Chart: '<Root>/Chart' */
    HybridStateChart_DW.previousTime = HybridStateChart_M->Timing.t[0];
  }
}

/* Model terminate function */
void HybridStateChart_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input1' */
  matlabCodegenHa_oisusey3bohp5wn(&HybridStateChart_DW.obj_ep);

  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  matlabCodegenHa_oisusey3bohp5wn(&HybridStateChart_DW.obj_n);

  /* Terminate for MATLABSystem: '<Root>/Analog Input1' */
  matlabCodegenHan_oisusey3bohp5w(&HybridStateChart_DW.obj_e);

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_ea);

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_a);

  /* Terminate for MATLABSystem: '<Root>/Digital Output2' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_d);

  /* Terminate for MATLABSystem: '<Root>/Digital Output3' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_ej);

  /* Terminate for MATLABSystem: '<Root>/Digital Output4' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_o);

  /* Terminate for MATLABSystem: '<Root>/Digital Output5' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_a4);

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  matlabCodegenHandle_matlab_oisu(&HybridStateChart_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/PWM1' */
  matlabCodegenHandle_matlab_oisu(&HybridStateChart_DW.obj_f);

  /* Terminate for MATLABSystem: '<Root>/Digital Output6' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_lo);

  /* Terminate for MATLABSystem: '<Root>/PWM2' */
  matlabCodegenHandle_matlab_oisu(&HybridStateChart_DW.obj_l);

  /* Terminate for MATLABSystem: '<Root>/Digital Output10' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_p);

  /* Terminate for MATLABSystem: '<Root>/Digital Output7' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_d2);

  /* Terminate for MATLABSystem: '<Root>/Digital Output8' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_b);

  /* Terminate for MATLABSystem: '<Root>/Digital Output9' */
  matlabCodegenHandle_matlabCodeg(&HybridStateChart_DW.obj_oy);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
