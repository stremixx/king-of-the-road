
undefined4 __fastcall FUN_005ed2a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ed580();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      FUN_005ba3c0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x2c));
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      FUN_005bb530();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x34));
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_005fc9c0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  return 1;
}

