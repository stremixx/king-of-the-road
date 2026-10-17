
undefined4 FUN_004ad3c0(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_006935b8 == 0) {
    uVar1 = FUN_00631d33(param_1);
    return uVar1;
  }
  if (param_1 == 0x20) {
    DAT_006935b8 = DAT_006935b8 + -1;
    return *(undefined4 *)(&DAT_006925b8 + DAT_006935b8 * 4);
  }
  uVar1 = FUN_00631d33(param_1);
  return uVar1;
}

