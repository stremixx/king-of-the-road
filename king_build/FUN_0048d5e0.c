
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048d5e0(int param_1,int *param_2,double param_3,uint *param_4)

{
  uint uVar1;
  
  if (param_3 <= _DAT_0064a668) {
    if ((int)*param_4 < 1) {
      return 1;
    }
    *param_4 = *param_4 - 1;
  }
  else {
    uVar1 = *param_4;
    if ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18 - 1U <= uVar1) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18 - 2U <= uVar1) {
      if ((*param_2 == 0) && (param_2[1] == 0x3ff00000)) {
        return 1;
      }
      *param_2 = 0;
      param_2[1] = 0x3ff00000;
      return 0;
    }
    *param_4 = uVar1 + 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}

