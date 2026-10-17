
undefined4 FUN_004ccbc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_00695184 + 0xbb0);
  if (*(int *)(param_1 + 0x44) == iVar1) {
    return 0;
  }
  if ((iVar1 == 0) || (uVar2 = 1, iVar1 + -1 != *(int *)(param_1 + 0x44))) {
    uVar2 = 2;
  }
  return uVar2;
}

