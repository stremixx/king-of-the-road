
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00555180(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00501410(0,param_2,*(undefined4 *)(param_1 + 0x28e4));
  iVar1 = *(int *)(*(int *)(param_1 + 0x5460) + 0x3ca0);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    FUN_004eafa0(0);
  }
  else if (iVar1 == 2) {
    FUN_004eaf60(0xbf19999a);
  }
  iVar1 = FUN_00549300();
  if (iVar1 != 1) {
    iVar1 = FUN_00549300();
    if (iVar1 != 2) goto LAB_005551fd;
  }
  FUN_00548bd0(1);
LAB_005551fd:
  *(float *)(param_1 + 0x545c) =
       *(float *)(*(int *)(param_1 + 0x2540) + 0x20) + (float)_DAT_0064a830;
  return;
}

