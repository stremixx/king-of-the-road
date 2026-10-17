
int FUN_005460f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  iVar1 = FUN_00500fb0(param_1 + 0xe);
  if (iVar1 + 0xe != 0x31) {
    FUN_004e1e9c(s__Vehicle_reset_state___i__MAX_VE_00678fec);
  }
  return iVar1 + 0xe;
}

