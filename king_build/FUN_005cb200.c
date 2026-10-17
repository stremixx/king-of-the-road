
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005cb200(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x18) < _DAT_0064b254) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_00631d33(0x28);
    if (iVar1 != 0) {
      iVar1 = FUN_005cb0d0(param_1,param_2);
      *(int *)(param_1 + 8) = iVar1;
      return iVar1;
    }
    iVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return iVar1;
}

