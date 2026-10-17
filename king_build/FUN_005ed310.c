
undefined4 __fastcall FUN_005ed310(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_005ed5c0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      FUN_005b9ec0();
      pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x38);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      FUN_005bb4c0();
      pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x38);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_005fc950();
      pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x38);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3c));
  }
  return 1;
}

