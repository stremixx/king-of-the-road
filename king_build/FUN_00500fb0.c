
int FUN_00500fb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00500f90(param_1);
  *(undefined4 *)(param_1 + iVar1 * 4) = 0;
  *(undefined4 *)(param_1 + (iVar1 + 1) * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + (iVar1 + 2) * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + (iVar1 + 3) * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + (iVar1 + 4) * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + (iVar1 + 5) * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + (iVar1 + 6) * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + (iVar1 + 7) * 4) = 0x3f800000;
  if (iVar1 + 8 != 0x23) {
    FUN_004e1e9c(s__Car_V_reset_state___i__MAX_CARV_006738c8);
  }
  return iVar1 + 8;
}

