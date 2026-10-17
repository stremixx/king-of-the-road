
void FUN_004b2d30(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_60;
  undefined4 *local_40;
  int *local_20;
  int *local_10;
  
  piVar1 = (int *)(param_2 + 8);
  while( true ) {
    while( true ) {
      FUN_004b2bf0(1);
      FUN_004abfc0(piVar1);
      uVar2 = FUN_004b2840(0);
      FUN_004abfc0(uVar2);
      iVar3 = FUN_004b2a00(*local_40);
      if (iVar3 == 0) break;
      FUN_004b2bf0(1);
      if (*piVar1 == *(int *)(param_2 + 0x10) + -4) {
        FUN_004b28d0();
        *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      }
      else {
        *piVar1 = *piVar1 + 4;
        *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      }
    }
    FUN_004abfc0(piVar1);
    uVar2 = FUN_004b2840(0);
    FUN_004abfc0(uVar2);
    if (*local_20 != 0x3b) break;
    uVar2 = FUN_004b2840(0);
    FUN_004abfc0(uVar2);
    iVar3 = *local_60;
    while (iVar3 != 10) {
      FUN_004b2bf0(1);
      if (*piVar1 == *(int *)(param_2 + 0x10) + -4) {
        FUN_0044b440(*(undefined4 *)(param_2 + 0xc),0x200);
        FUN_004b28b0(*(int *)(param_2 + 0x14) + 4);
        *piVar1 = *(int *)(param_2 + 0xc);
      }
      else {
        *piVar1 = *piVar1 + 4;
      }
      *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      FUN_004b2bf0(1);
      uVar2 = FUN_004b2840(0);
      FUN_004abfc0(uVar2);
      if (*local_10 == -1) {
        return;
      }
      uVar2 = FUN_004b2840(0);
      FUN_004abfc0(uVar2);
      iVar3 = *local_60;
    }
  }
  FUN_004b2840(0);
  return;
}

