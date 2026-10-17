
int __thiscall FUN_00500eb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00500cd0(param_2);
  *(double *)(param_1 + 0xee0) = (double)*(float *)(param_2 + iVar1 * 4);
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 1) * 4));
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 2) * 4));
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 3) * 4));
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 4) * 4));
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 5) * 4));
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 6) * 4));
  FUN_004eaf20(*(undefined4 *)(param_2 + (iVar1 + 7) * 4));
  if (iVar1 + 8 != 0x23) {
    FUN_004e1e9c(s__Car_V__get_state___i__MAX_CARV__0067388c);
  }
  return iVar1 + 8;
}

