
void FUN_005fc510(int param_1)

{
  int iVar1;
  
  if (DAT_00722a88 != 0) {
    DAT_00722a90 = param_1;
    DAT_00722a94 = FUN_00631d33(param_1 * 4);
    iVar1 = 0;
    if (0 < param_1) {
      do {
        iVar1 = iVar1 + 1;
        *(undefined4 *)(DAT_00722a94 + -4 + iVar1 * 4) = 0;
      } while (iVar1 < param_1);
    }
    FUN_00604430(param_1);
  }
  return;
}

