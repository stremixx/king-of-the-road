
undefined4 __fastcall FUN_005bb4c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[7];
  if (((uVar1 & 4) != 0) && ((uVar1 & 1) == 0)) {
    if (*param_1 != 0) {
      FUN_005e8ab0(param_1,*param_1);
      param_1[7] = param_1[7] | 1;
      return 0;
    }
    if ((param_1[5] != 0) && ((uVar1 & 0x200) == 0)) {
      iVar2 = FUN_00631d33(param_1[3]);
      param_1[4] = iVar2;
      FUN_005e8cc0(param_1,param_1[6],param_1[5]);
    }
    param_1[7] = param_1[7] | 1;
  }
  return 0;
}

