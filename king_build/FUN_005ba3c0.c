
void __fastcall FUN_005ba3c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c) + -1;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (0 < iVar1) {
    return;
  }
  if (*(short *)(param_1 + 0x18) == 1) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00631d5c(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(short *)(param_1 + 0x18) == 1) goto LAB_005ba404;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x800) == 0) {
    FUN_005ba340();
  }
LAB_005ba404:
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
  return;
}

