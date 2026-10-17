
undefined4 __thiscall FUN_005fc340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 0;
  }
  if (DAT_00722a04 == 0) {
    FUN_005d2650(&DAT_0071e760);
  }
  DAT_00722a04 = DAT_00722a04 + 1;
  uVar1 = FUN_005f1850(0,param_2,param_3);
  DAT_00722a04 = DAT_00722a04 + -1;
  if (DAT_00722a04 == 0) {
    FUN_005d2670(&DAT_0071e760,&DAT_0071e770);
  }
  return uVar1;
}

