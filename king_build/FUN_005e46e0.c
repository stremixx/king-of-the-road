
undefined4 __thiscall FUN_005e46e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (399 < param_2) {
    FUN_005d2520(s_Index_of_class_anmobj__too_large_0068228c,0);
  }
  if (*(int *)(param_1 + param_2 * 4) != 0) {
    return 0;
  }
  uVar1 = FUN_00631d33(2000);
  *(undefined4 *)(param_1 + param_2 * 4) = uVar1;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 4;
    *(undefined4 *)(*(int *)(param_1 + param_2 * 4) + -4 + iVar2) = 0;
  } while (iVar2 < 2000);
  return 1;
}

