
void FUN_004ad380(undefined4 param_1)

{
  if (0x3ff < DAT_006935b8) {
    FUN_00631d5c(param_1);
    return;
  }
  *(undefined4 *)(&DAT_006925b8 + DAT_006935b8 * 4) = param_1;
  DAT_006935b8 = DAT_006935b8 + 1;
  return;
}

