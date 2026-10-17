
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0060b500(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_18;
  int local_10;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar6 = **(int **)(param_1 + 0x24);
    if (iVar6 == 0) {
      iVar6 = (*(int **)(param_1 + 0x24))[1];
    }
    *(int *)(param_1 + 0x34) = iVar6;
    if (iVar6 == 0) goto LAB_0060b6d4;
  }
  local_10 = 400;
  do {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar7 = *(int *)(param_1 + 4);
    uVar1 = *(uint *)(iVar6 + 0x24);
    uVar4 = FUN_00606970();
    if (uVar1 < uVar4) {
      fVar8 = (float10)FUN_0060b7e0(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      fStack_18 = (float)fVar8;
      if ((float10)_DAT_00651eec < fVar8) goto LAB_0060b63f;
      if (_DAT_0064b438 <= fStack_18) {
        iVar5 = FUN_00607b20(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),
                             *(undefined4 *)(iVar7 + 0x3c),*(undefined4 *)(iVar7 + 0x40),
                             *(undefined4 *)(iVar7 + 0x44),*(undefined4 *)(iVar7 + 0x48));
        if (iVar5 == 0) goto LAB_0060b63f;
        if (*(uint *)(iVar6 + 0x24) < 8) {
          fStack_18 = _DAT_0064b440 / (fStack_18 + _DAT_0064b240);
        }
        else if ((fStack_18 < _DAT_00651ee8) ||
                (iVar7 = FUN_00607b20(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),
                                      *(undefined4 *)(iVar7 + 0x4c),*(undefined4 *)(iVar7 + 0x50),
                                      *(undefined4 *)(iVar7 + 0x54),*(undefined4 *)(iVar7 + 0x58)),
                iVar7 != 0)) {
          fStack_18 = *(float *)(iVar6 + 0x20) / fStack_18;
        }
        else {
          fStack_18 = (*(float *)(iVar6 + 0x20) * _DAT_0064b248) / fStack_18;
        }
      }
      else {
        fStack_18 = 1000.0;
      }
    }
    else {
LAB_0060b63f:
      fStack_18 = 0.0;
    }
    piVar2 = *(int **)(param_1 + 0x24);
    iVar6 = *(int *)(param_1 + 0x34);
    if (*piVar2 == 0) {
LAB_0060b668:
      if (piVar2[1] == 0) {
LAB_0060b67f:
        if (*(int *)(iVar6 + 4) != 0) {
          iVar7 = *(int *)(iVar6 + 4) + -4;
          goto LAB_0060b68d;
        }
      }
      else {
        if (iVar6 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar6 + 4;
        }
        if (iVar7 != *(int *)(piVar2[1] + 8)) goto LAB_0060b67f;
      }
      iVar7 = 0;
    }
    else {
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar6 + 4;
      }
      if (iVar7 != *(int *)(*piVar2 + 8)) goto LAB_0060b668;
      iVar7 = piVar2[1];
    }
LAB_0060b68d:
    if (*(float *)(iVar6 + 0x1c) != fStack_18) {
      FUN_006129d0(iVar6,fStack_18);
    }
    if (iVar7 == 0) {
      iVar6 = **(int **)(param_1 + 0x24);
      if (iVar6 == 0) {
        *(int *)(param_1 + 0x34) = (*(int **)(param_1 + 0x24))[1];
      }
      else {
        *(int *)(param_1 + 0x34) = iVar6;
      }
    }
    else {
      *(int *)(param_1 + 0x34) = iVar7;
    }
    local_10 = local_10 + -1;
  } while (local_10 != 0);
LAB_0060b6d4:
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar6 = **(int **)(param_1 + 0x20);
    if (iVar6 == 0) {
      iVar6 = (*(int **)(param_1 + 0x20))[1];
    }
    *(int *)(param_1 + 0x38) = iVar6;
    if (iVar6 == 0) {
      return;
    }
  }
  iVar6 = 200;
  do {
    iVar7 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar7 + 0xc) == 0) {
      fVar8 = (float10)FUN_00608e90(iVar7 + 0x10);
      if (fVar8 <= (float10)_DAT_0064b254) {
        fVar8 = (float10)_DAT_0064b254;
      }
    }
    else {
      fVar9 = (float10)FUN_00608e90(iVar7 + 0x10);
      if (iVar7 + 0x3c == 0) {
        fVar8 = (float10)0.0;
      }
      else {
        fVar8 = (float10)FUN_00608e90(iVar7 + 0x3c);
      }
      if (fVar8 < (float10)(float)fVar9) {
        fVar8 = (float10)(float)fVar9;
      }
    }
    piVar2 = *(int **)(param_1 + 0x20);
    piVar3 = *(int **)(param_1 + 0x38);
    if ((*piVar2 == 0) || (piVar3 != *(int **)(*piVar2 + 4))) {
      if ((piVar2[1] == 0) || (piVar3 != *(int **)(piVar2[1] + 4))) {
        iVar7 = *piVar3;
      }
      else {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = piVar2[1];
    }
    if (fVar8 != (float10)(float)piVar3[0x1a]) {
      FUN_00612cb0(piVar3,(float)fVar8);
    }
    if (iVar7 == 0) {
      iVar7 = **(int **)(param_1 + 0x20);
      if (iVar7 == 0) {
        *(int *)(param_1 + 0x38) = (*(int **)(param_1 + 0x20))[1];
      }
      else {
        *(int *)(param_1 + 0x38) = iVar7;
      }
    }
    else {
      *(int *)(param_1 + 0x38) = iVar7;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

