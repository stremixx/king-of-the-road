
undefined4 __fastcall FUN_005606a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 3000);
  if ((1 < iVar1) && ((*(char *)(iVar1 + 1999 + param_1) == '\0' || (iVar1 != 2)))) {
    *(int *)(param_1 + 3000) = iVar1 + -1;
    if (*(char *)(iVar1 + 1999 + param_1) != '\0') {
      *(int *)(param_1 + 3000) = iVar1 + -2;
    }
    iVar1 = *(int *)(param_1 + 3000);
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(param_1 + iVar1 * 2));
}

