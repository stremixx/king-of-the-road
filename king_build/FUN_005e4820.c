
undefined4 __thiscall FUN_005e4820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 / 1000;
  param_2 = param_2 % 1000;
  if (399 < iVar2) {
    FUN_005d2520(s_Index_of_class_anmobj__too_large_006822fc,0);
  }
  if (*(int *)(param_1 + iVar2 * 4) == 0) {
    return 0xffffffff;
  }
  if (499 < param_2) {
    FUN_005d2520(s_Index_of_obj_anmobj__too_large_1_006822d8,0);
  }
  iVar1 = *(int *)(*(int *)(param_1 + iVar2 * 4) + param_2 * 4);
  if (iVar1 != 0) {
    FUN_005e3d60();
    FUN_00631d5c(iVar1);
    *(undefined4 *)(*(int *)(param_1 + iVar2 * 4) + param_2 * 4) = 0;
  }
  return 3;
}

