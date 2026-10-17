
void FUN_004ad300(undefined4 param_1)

{
  if (0x3ff < DAT_006925b0) {
    FUN_00631d5c(param_1);
    return;
  }
  *(undefined4 *)(&DAT_006915b0 + DAT_006925b0 * 4) = param_1;
  DAT_006925b0 = DAT_006925b0 + 1;
  return;
}

