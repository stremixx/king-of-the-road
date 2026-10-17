
undefined4 * __fastcall FUN_005d19c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[3] = 0;
  param_1[1] = 500;
  *param_1 = 0;
  uVar1 = FUN_00631d33(2000);
  param_1[2] = uVar1;
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1[2] + -4 + iVar2 * 4) = 0;
    } while (iVar2 < (int)param_1[1]);
  }
  DAT_0071d7a4 = 1;
  return param_1;
}

