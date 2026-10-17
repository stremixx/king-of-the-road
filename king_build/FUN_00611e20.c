
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00611e20(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((float)*param_2 * *(float *)(iVar1 + 0xc0) + *(float *)(iVar1 + 0xb0) <= _DAT_0065212c) {
    if ((float)param_2[1] * *(float *)(iVar1 + 0xc4) + *(float *)(iVar1 + 0xbc) <= _DAT_00652128) {
      return 0;
    }
  }
  return 1;
}

