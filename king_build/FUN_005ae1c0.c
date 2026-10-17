
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005ae1c0(float *param_1,undefined4 param_2)

{
  float fVar1;
  
  switch(param_2) {
  case 1:
    if (param_1[1] < _DAT_0064b240) {
      return 0;
    }
    break;
  case 2:
    if (*param_1 < -param_1[1]) {
      return 0;
    }
    break;
  case 4:
    fVar1 = param_1[2];
    goto LAB_005ae230;
  case 8:
    if (param_1[2] < -param_1[1]) {
      return 0;
    }
    break;
  case 0x10:
    fVar1 = *param_1;
LAB_005ae230:
    if (param_1[1] < fVar1) {
      return 0;
    }
  }
  return 1;
}

