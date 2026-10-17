
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005011b0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float10 fVar6;
  
  iVar3 = 0;
  bVar2 = false;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar5 = (float *)(param_1 + 0x1d80);
    piVar4 = (int *)(param_1 + 0x3cdc);
    do {
      iVar1 = *piVar4;
      if (iVar1 == piVar4[1]) {
        pfVar5[-0x83] = *pfVar5;
      }
      else if (iVar1 == 2) {
        fVar6 = (float10)FUN_004e3a69(pfVar5[-0x3b9] + (float)_DAT_0064c930,
                                      s__Car_V__check_damage_00673904);
        fVar6 = (float10)FUN_004e205f((float)(fVar6 + (float10)_DAT_0064c928));
        pfVar5[-0x83] =
             (float)(((float10)pfVar5[-8] + (float10)*pfVar5 +
                     ((float10)pfVar5[-8] - (float10)*pfVar5) * fVar6) * (float10)_DAT_0064a6d0);
      }
      else if (iVar1 == 1) {
        fVar6 = (float10)FUN_004e3a69(pfVar5[-0x3b9] + (float)_DAT_0064c930,
                                      s__Car_V__check_damage_00673904);
        fVar6 = (float10)FUN_004e205f((float)(fVar6 + (float10)_DAT_0064c928));
        pfVar5[-0x83] =
             (float)((float10)pfVar5[-8] * (float10)_DAT_0064a6f0 +
                    (((float10)pfVar5[-8] - (float10)*pfVar5) * fVar6 + (float10)*pfVar5) *
                    (float10)_DAT_0064a728);
      }
      else {
        pfVar5[-0x83] = pfVar5[-8];
      }
      if ((bVar2) || (bVar2 = false, pfVar5[-0x6b] != 0.0)) {
        bVar2 = true;
      }
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 1;
      piVar4 = piVar4 + 5;
    } while (iVar3 < *(int *)(param_1 + 0xdd4));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar5 = (float *)(param_1 + 0x1c98);
    piVar4 = (int *)(param_1 + 0x3e1c);
    do {
      if (*piVar4 == 0) {
        fVar6 = (float10)FUN_004eae60();
        fVar6 = fVar6 * (float10)pfVar5[0x7b];
      }
      else {
        fVar6 = (float10)FUN_004eae60();
        fVar6 = fVar6 * (float10)pfVar5[0x7b] * (float10)_DAT_0064a830;
      }
      *pfVar5 = (float)fVar6;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 5;
      pfVar5 = pfVar5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xdd4));
  }
  if (*(int *)(param_1 + 0x3cb4) == 2) {
    iVar3 = *(int *)(param_1 + 0x1e04) + -3;
    *(int *)(param_1 + 0x1c18) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x1c18) = 1;
    }
    *(float *)(param_1 + 0x1c30) = *(float *)(param_1 + 0x1e1c) * _DAT_0064b310;
    *(float *)(param_1 + 0x1c34) = *(float *)(param_1 + 0x1e20) * _DAT_0064b310;
    *(float *)(param_1 + 0x1c38) = *(float *)(param_1 + 0x1e24) * _DAT_0064b310;
    return;
  }
  if (*(int *)(param_1 + 0x3cb4) == 1) {
    *(int *)(param_1 + 0x1c18) = *(int *)(param_1 + 0x1e04) + -1;
    *(float *)(param_1 + 0x1c30) = *(float *)(param_1 + 0x1e1c) + *(float *)(param_1 + 0x1e1c);
    *(float *)(param_1 + 0x1c34) = *(float *)(param_1 + 0x1e20) + *(float *)(param_1 + 0x1e20);
    *(float *)(param_1 + 0x1c38) = *(float *)(param_1 + 0x1e24) + *(float *)(param_1 + 0x1e24);
    return;
  }
  *(undefined4 *)(param_1 + 0x1c18) = *(undefined4 *)(param_1 + 0x1e04);
  *(undefined4 *)(param_1 + 0x1c30) = *(undefined4 *)(param_1 + 0x1e1c);
  *(undefined4 *)(param_1 + 0x1c34) = *(undefined4 *)(param_1 + 0x1e20);
  *(undefined4 *)(param_1 + 0x1c38) = *(undefined4 *)(param_1 + 0x1e24);
  return;
}

