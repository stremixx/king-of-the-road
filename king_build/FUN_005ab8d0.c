
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005ab8d0(float *param_1,int param_2,int param_3)

{
  switch(param_3 + param_2 * 3) {
  case 0:
    return (float10)param_1[8] * (float10)param_1[4] - (float10)param_1[7] * (float10)param_1[5];
  case 1:
    return (float10)param_1[6] * (float10)param_1[5] - (float10)param_1[8] * (float10)param_1[3];
  case 2:
    return (float10)param_1[7] * (float10)param_1[3] - (float10)param_1[6] * (float10)param_1[4];
  case 3:
    return -((float10)param_1[8] * (float10)param_1[1] - (float10)param_1[7] * (float10)param_1[2]);
  case 4:
    return -((float10)param_1[6] * (float10)param_1[2] - (float10)param_1[8] * (float10)*param_1);
  case 5:
    return -((float10)param_1[7] * (float10)*param_1 - (float10)param_1[6] * (float10)param_1[1]);
  case 6:
    return (float10)param_1[5] * (float10)param_1[1] - (float10)param_1[4] * (float10)param_1[2];
  case 7:
    return (float10)param_1[3] * (float10)param_1[2] - (float10)param_1[5] * (float10)*param_1;
  case 8:
    return (float10)param_1[4] * (float10)*param_1 - (float10)param_1[3] * (float10)param_1[1];
  default:
    return (float10)_DAT_0064b254;
  }
}

