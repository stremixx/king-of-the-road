
undefined4 __thiscall
FUN_004c0a30(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00631d33((param_4 * 3 + 1) * 0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_004c0af0(param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0x80004005;
}

