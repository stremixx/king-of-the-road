
undefined4 __fastcall FUN_0060c660(int param_1)

{
  int *piVar1;
  int *piVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  DWORD local_10;
  
  DVar3 = timeGetTime();
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar5 = **(int **)(param_1 + 0x20);
    if (iVar5 == 0) {
      iVar5 = (*(int **)(param_1 + 0x20))[1];
    }
    *(int *)(param_1 + 0x28) = iVar5;
    local_10 = DVar3;
    if (iVar5 == 0) goto LAB_0060c736;
  }
  do {
    iVar5 = *(int *)(param_1 + 0x28);
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x24))
                               (*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),
                                *(undefined4 *)(iVar5 + 0x18),iVar5 + 0xc);
    piVar1 = *(int **)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x28);
    if (*piVar1 == 0) {
LAB_0060c6d9:
      if (piVar1[1] == 0) {
LAB_0060c6f0:
        if (*(int *)(iVar5 + 4) != 0) {
          iVar13 = *(int *)(iVar5 + 4) + -4;
          goto LAB_0060c6fe;
        }
      }
      else {
        if (iVar5 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar5 + 4;
        }
        if (iVar13 != *(int *)(piVar1[1] + 8)) goto LAB_0060c6f0;
      }
      iVar13 = 0;
    }
    else {
      if (iVar5 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = iVar5 + 4;
      }
      if (iVar13 != *(int *)(*piVar1 + 8)) goto LAB_0060c6d9;
      iVar13 = piVar1[1];
    }
LAB_0060c6fe:
    FUN_0060ebd0(iVar5,(float)fVar7);
    if (iVar13 == 0) {
      uVar4 = FUN_0060ee90();
      *(undefined4 *)(param_1 + 0x28) = uVar4;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar13;
    }
    local_10 = timeGetTime();
  } while (local_10 - DVar3 < 2);
LAB_0060c736:
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar5 = FUN_0060f0b0();
    *(int *)(param_1 + 0x2c) = iVar5;
    if (iVar5 == 0) {
      return 1;
    }
  }
  do {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (*(int *)(iVar5 + 0xc) == 0) {
      uVar4 = *(undefined4 *)(iVar5 + 0x1c);
      uVar9 = *(undefined4 *)(iVar5 + 0x18);
      uVar8 = *(undefined4 *)(iVar5 + 0x14);
      iVar13 = 0;
      uVar12 = 0;
      iVar6 = **(int **)(param_1 + 4);
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar5 + 0x1c);
      uVar8 = *(undefined4 *)(iVar5 + 0x14);
      iVar13 = iVar5 + 0x2c;
      uVar9 = *(undefined4 *)(iVar5 + 0x18);
      uVar10 = *(undefined4 *)(iVar5 + 0x30);
      uVar11 = *(undefined4 *)(iVar5 + 0x34);
      uVar12 = *(undefined4 *)(iVar5 + 0x38);
      iVar6 = **(int **)(param_1 + 4);
    }
    fVar7 = (float10)(**(code **)(iVar6 + 0x20))
                               (uVar8,uVar9,uVar4,iVar5 + 0x10,uVar10,uVar11,uVar12,iVar13);
    piVar1 = *(int **)(param_1 + 0x1c);
    piVar2 = *(int **)(param_1 + 0x2c);
    if ((*piVar1 == 0) || (piVar2 != *(int **)(*piVar1 + 4))) {
      if ((piVar1[1] == 0) || (piVar2 != *(int **)(piVar1[1] + 4))) {
        iVar5 = *piVar2;
      }
      else {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = piVar1[1];
    }
    FUN_0060efb0(piVar2,(float)fVar7);
    if (iVar5 == 0) {
      iVar5 = **(int **)(param_1 + 0x1c);
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x2c) = (*(int **)(param_1 + 0x1c))[1];
      }
      else {
        *(int *)(param_1 + 0x2c) = iVar5;
      }
    }
    else {
      *(int *)(param_1 + 0x2c) = iVar5;
    }
    DVar3 = timeGetTime();
  } while (DVar3 == local_10);
  return 1;
}

