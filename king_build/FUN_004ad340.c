
undefined4 FUN_004ad340(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_006925b0 == 0) {
    uVar1 = FUN_00631d33(param_1);
    return uVar1;
  }
  if (param_1 == 0x2c) {
    DAT_006925b0 = DAT_006925b0 + -1;
    return *(undefined4 *)(&DAT_006915b0 + DAT_006925b0 * 4);
  }
  uVar1 = FUN_00631d33(param_1);
  return uVar1;
}

