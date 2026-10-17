
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0060bd70(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  DWORD DVar5;
  uint uVar6;
  DWORD DVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fStack_20;
  
  iVar9 = **(int **)(param_1 + 0x24);
  if (iVar9 == 0) {
    iVar9 = (*(int **)(param_1 + 0x24))[1];
  }
  *(int *)(param_1 + 0x34) = iVar9;
  DVar5 = timeGetTime();
  do {
    iVar9 = *(int *)(param_1 + 0x34);
    iVar10 = *(int *)(param_1 + 4);
    uVar8 = *(uint *)(iVar9 + 0x24);
    uVar6 = FUN_00606970();
    if (uVar8 < uVar6) {
      fVar2 = *(float *)(iVar9 + 0x30) - *(float *)(iVar10 + 8);
      fVar3 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar10 + 4);
      fStack_20 = SQRT(fVar3 * fVar3 + fVar2 * fVar2) - *(float *)(iVar9 + 0x34);
      if (_DAT_0064b254 < fStack_20) {
        if (_DAT_00651eec < fStack_20) goto LAB_0060bf07;
        if (fStack_20 < _DAT_0064b438) goto LAB_0060be2c;
        fVar2 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar10 + 4);
        fVar3 = *(float *)(iVar9 + 0x30) - *(float *)(iVar10 + 8);
        fVar4 = -*(float *)(iVar9 + 0x34);
        if ((fVar3 * *(float *)(iVar10 + 0x3c) - fVar2 * *(float *)(iVar10 + 0x40) < fVar4) ||
           (fVar3 * *(float *)(iVar10 + 0x44) - fVar2 * *(float *)(iVar10 + 0x48) < fVar4))
        goto LAB_0060bf07;
        if (*(uint *)(iVar9 + 0x24) < 8) {
          fStack_20 = _DAT_0064b440 / (fStack_20 + _DAT_0064b240);
        }
        else if ((fStack_20 < _DAT_00651ee8) ||
                (iVar10 = FUN_00607b20(*(float *)(iVar10 + 4),*(float *)(iVar10 + 8),
                                       *(undefined4 *)(iVar10 + 0x4c),*(undefined4 *)(iVar10 + 0x50)
                                       ,*(undefined4 *)(iVar10 + 0x54),
                                       *(undefined4 *)(iVar10 + 0x58)), iVar10 != 0)) {
          fStack_20 = *(float *)(iVar9 + 0x20) / fStack_20;
        }
        else {
          fStack_20 = (*(float *)(iVar9 + 0x20) * _DAT_0064b248) / fStack_20;
        }
      }
      else {
LAB_0060be2c:
        fStack_20 = 1000.0;
      }
    }
    else {
LAB_0060bf07:
      fStack_20 = 0.0;
    }
    piVar1 = *(int **)(param_1 + 0x24);
    iVar9 = *(int *)(param_1 + 0x34);
    if (*piVar1 == 0) {
LAB_0060bf30:
      if (piVar1[1] == 0) {
LAB_0060bf47:
        if (*(int *)(iVar9 + 4) != 0) {
          iVar10 = *(int *)(iVar9 + 4) + -4;
          goto LAB_0060bf55;
        }
      }
      else {
        if (iVar9 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = iVar9 + 4;
        }
        if (iVar10 != *(int *)(piVar1[1] + 8)) goto LAB_0060bf47;
      }
      iVar10 = 0;
    }
    else {
      if (iVar9 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = iVar9 + 4;
      }
      if (iVar10 != *(int *)(*piVar1 + 8)) goto LAB_0060bf30;
      iVar10 = piVar1[1];
    }
LAB_0060bf55:
    FUN_006129d0(iVar9,fStack_20);
    *(int *)(param_1 + 0x34) = iVar10;
    DVar7 = timeGetTime();
    if ((999 < DVar7 - DVar5) || (*(int *)(param_1 + 0x34) == 0)) {
      uVar8 = (**(code **)(**(int **)(param_1 + 4) + 4))();
      if (*(ushort *)(param_1 + 0x2a) < uVar8) {
        do {
          iVar9 = FUN_00612b80();
          FUN_00606ad0(*(undefined4 *)(iVar9 + 0x28),param_1);
          uVar8 = (**(code **)(**(int **)(param_1 + 4) + 4))();
        } while (*(ushort *)(param_1 + 0x2a) < uVar8);
      }
      return;
    }
  } while( true );
}

