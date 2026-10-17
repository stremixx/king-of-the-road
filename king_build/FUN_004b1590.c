
int FUN_004b1590(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *local_20;
  undefined4 *local_10;
  
  piVar1 = (int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x10) + -4) {
    FUN_0044b440(*(undefined4 *)(param_1 + 0xc),0x200);
    FUN_004b28b0(*(int *)(param_1 + 0x14) + 4);
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + 4;
  }
  *piVar1 = iVar3;
  iVar3 = 0;
  iVar7 = 1;
  FUN_004abfc0(piVar1);
  uVar4 = FUN_004b2840(0);
  FUN_004abfc0(uVar4);
  if (*local_20 == 0x2b) {
    if (*piVar1 == *(int *)(param_1 + 0x10) + -4) {
      FUN_0044b440(*(undefined4 *)(param_1 + 0xc),0x200);
      FUN_004b28b0(*(int *)(param_1 + 0x14) + 4);
      iVar7 = 1;
      *piVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
  }
  else {
    FUN_004abfc0(piVar1);
    uVar4 = FUN_004b2840(0);
    FUN_004abfc0(uVar4);
    if (*local_20 == 0x2d) {
      if (*piVar1 == *(int *)(param_1 + 0x10) + -4) {
        FUN_0044b440(*(undefined4 *)(param_1 + 0xc),0x200);
        FUN_004b28b0(*(int *)(param_1 + 0x14) + 4);
        iVar7 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar7 = *piVar1 + 4;
      }
      *piVar1 = iVar7;
      iVar7 = -1;
    }
  }
  FUN_004abfc0(piVar1);
  uVar4 = FUN_004b2840(0);
  FUN_004abfc0(uVar4);
  iVar5 = FUN_0061dc94(*local_20);
  if (iVar5 == 0) {
    FUN_004a55b0(0x14,0x300,s_Digit_expected_006703f0);
  }
  FUN_004abfc0(piVar1);
  uVar4 = FUN_004b2840(0);
  FUN_004abfc0(uVar4);
  cVar2 = FUN_0061e299(*local_10);
  while (('/' < cVar2 && (cVar2 < ':'))) {
    iVar3 = cVar2 + -0x30 + iVar3 * 10;
    if (*piVar1 == *(int *)(param_1 + 0x10) + -4) {
      FUN_0044b440(*(undefined4 *)(param_1 + 0xc),0x200);
      piVar6 = (int *)(*(int *)(param_1 + 0x14) + 4);
      *(int **)(param_1 + 0x14) = piVar6;
      iVar5 = *piVar6;
      *(int *)(param_1 + 0xc) = iVar5;
      *(int *)(param_1 + 0x10) = iVar5 + 0x200;
      *piVar1 = *(int *)(param_1 + 0xc);
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
    FUN_004abfc0(piVar1);
    uVar4 = FUN_004b2840(0);
    FUN_004abfc0(uVar4);
    cVar2 = FUN_0061e299(*local_10);
  }
  return iVar7 * iVar3;
}

