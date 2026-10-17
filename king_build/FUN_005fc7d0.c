
void FUN_005fc7d0(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_00722a88 != 0) {
    piVar2 = &DAT_00722a08;
    do {
      iVar1 = *piVar2;
      if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != -1)) &&
          (*(int *)(iVar1 + 0xc) != DAT_00722a98)) && (*(int *)(iVar1 + 0x10) == 0)) {
        FUN_006046a0(*(int *)(iVar1 + 0x18));
        *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x722a88);
    thunk_FUN_00604870();
    DAT_00722a98 = DAT_00722a98 + 1;
  }
  return;
}

