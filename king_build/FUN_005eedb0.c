
undefined4 __fastcall FUN_005eedb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d1860();
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 0x34);
  iVar3 = 0;
  if (0 < iVar2) {
    piVar4 = *(int **)(iVar1 + 0x30);
    do {
      if (*piVar4 == param_1) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar2);
  }
  if (iVar3 == iVar2) {
    return 0;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x30) + iVar3 * 4) = *(undefined4 *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}

