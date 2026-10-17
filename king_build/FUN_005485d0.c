
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005485d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0xdc4) == 0) {
    FUN_004fc230(1,*(undefined4 *)(param_1 + 0x330),param_1 + 0x204,param_1 + 0x1b0,param_1 + 0x1bc)
    ;
  }
  else {
    pfVar6 = (float *)FUN_0057d5a0(local_30);
    iVar8 = *(int *)(param_1 + 0x5460);
    bVar5 = false;
    fVar1 = *pfVar6 * *(float *)(param_1 + 0x228) +
            pfVar6[6] * *(float *)(param_1 + 0x230) + pfVar6[3] * *(float *)(param_1 + 0x22c) +
            pfVar6[9];
    fVar2 = pfVar6[1] * *(float *)(param_1 + 0x228) +
            pfVar6[7] * *(float *)(param_1 + 0x230) + pfVar6[4] * *(float *)(param_1 + 0x22c) +
            pfVar6[10];
    fVar4 = pfVar6[2] * *(float *)(param_1 + 0x228) +
            pfVar6[8] * *(float *)(param_1 + 0x230) + pfVar6[5] * *(float *)(param_1 + 0x22c) +
            pfVar6[0xb];
    fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar1 * fVar1;
    if (((*(int *)(iVar8 + 0x2638) == 3) &&
        (fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2 < (float)_DAT_0064e728)) &&
       (iVar9 = *(int *)(iVar8 + 0x3340), 0 < iVar9)) {
      piVar7 = (int *)(iVar8 + 0x348c);
      do {
        if (((bVar5) || ((piVar7[-8] != 0 && (*piVar7 == 0)))) || (piVar7[-0x12] != 0)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if ((((*(int *)(param_1 + 0xdc4) != 0) && (*(int *)(*(int *)(param_1 + 0xdc4) + 0x4b4) != 0)) &&
        (fVar3 < _DAT_0064e720)) || ((bVar5 || (*(int *)(iVar8 + 0x3c58) != 0)))) {
      uVar15 = *(undefined4 *)(param_1 + 0x330);
      uVar14 = 3;
    }
    else {
      uVar15 = *(undefined4 *)(param_1 + 0x330);
      uVar14 = 1;
    }
    FUN_004fc230(uVar14,uVar15,param_1 + 0x204,(float *)(param_1 + 0x1b0),param_1 + 0x1bc);
    iVar8 = *(int *)(param_1 + 0xdc4);
    if (*(int *)(iVar8 + 0x4b4) == 0) {
      fVar10 = (float10)*(float *)(iVar8 + 0xcc8) + (float10)*(float *)(param_1 + 0xcd8);
      local_3c = *(float *)(param_1 + 0x1b0) - *(float *)(iVar8 + 0xce4);
      local_38 = *(float *)(param_1 + 0x1b4) - *(float *)(iVar8 + 0xce8);
      local_34 = *(float *)(param_1 + 0x1b8) - *(float *)(iVar8 + 0xcec);
      fVar1 = *(float *)(param_1 + 0x228) - *(float *)(iVar8 + 0xd2c);
      fVar2 = *(float *)(param_1 + 0x22c) - *(float *)(iVar8 + 0xd30);
      fVar3 = *(float *)(param_1 + 0x230) - *(float *)(iVar8 + 0xd34);
      if (fVar1 * local_3c + local_38 * fVar2 + local_34 * fVar3 < (float)_DAT_0064a668) {
        fVar11 = (float10)FUN_005aabc0(&local_3c);
        fVar10 = fVar11 * (float10)*(double *)(DAT_006ee15c + 0xb90) + (float10)(float)fVar10;
      }
      fVar11 = (float10)fVar3;
      fVar12 = (float10)fVar2;
      fVar13 = (float10)fVar1;
      if (fVar10 * fVar10 * (float10)_DAT_0064a658 <=
          fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13) {
        return;
      }
    }
    else if (_DAT_0064e720 <= fVar3) {
      return;
    }
    if ((((DAT_006785ec & 4) == 0) && (*(int *)(param_1 + 0xf98) != 3)) &&
       (iVar8 = FUN_0058ec60(), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0xf98) = 3;
      return;
    }
  }
  return;
}

