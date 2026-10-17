
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054c7c0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(int *)(param_1 + 0x5460) != 0) && (*(int *)(*(int *)(param_1 + 0x5460) + 0x34ac) == 1)) {
    bVar9 = false;
    if (*(int *)(param_1 + 0x38c) != 0) {
      bVar9 = true;
      local_30 = *(float *)(param_1 + 0x294) * *(float *)(param_1 + 0x1e0) +
                 *(float *)(param_1 + 0x2ac) * *(float *)(param_1 + 0x1e8) +
                 *(float *)(param_1 + 0x2a0) * *(float *)(param_1 + 0x1e4);
      local_2c = *(float *)(param_1 + 0x298) * *(float *)(param_1 + 0x1e0) +
                 *(float *)(param_1 + 0x2b0) * *(float *)(param_1 + 0x1e8) +
                 *(float *)(param_1 + 0x2a4) * *(float *)(param_1 + 0x1e4);
      local_28 = *(float *)(param_1 + 0x29c) * *(float *)(param_1 + 0x1e0) +
                 *(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x1e8) +
                 *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x1e4);
      FUN_004e29c2(&local_24,&local_30,param_1 + 0x1a4);
      local_18 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1d4);
      local_14 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1d8);
      local_10 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1dc);
      local_c = *(float *)(param_1 + 0x1bc) - local_24;
      local_8 = *(float *)(param_1 + 0x1c0) - local_20;
      local_4 = *(float *)(param_1 + 0x1c4) - local_1c;
      fVar13 = (float10)FUN_005aabc0(&local_18);
      fVar14 = (float10)FUN_005aabc0(&local_c);
      fVar3 = (float)((fVar14 * (float10)_DAT_0064b310 + (float10)(float)fVar13) *
                     (float10)_DAT_0064b960);
      iVar10 = FUN_0057c0a0(*(undefined4 *)(param_1 + 0x414));
      if (iVar10 == 0) {
        fVar3 = fVar3 - (float)_DAT_0064a590;
      }
      else if (fVar3 < _DAT_0064b240) {
        fVar3 = SQRT(SQRT(fVar3 + fVar3));
      }
      if (fVar3 < (float)_DAT_0064c328) {
        return;
      }
      pfVar1 = (float *)(param_1 + 0x3d4);
      fVar4 = *pfVar1 * *(float *)(param_1 + 0x264) +
              *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x3d8) +
              *(float *)(param_1 + 0x27c) * *(float *)(param_1 + 0x3dc) +
              *(float *)(param_1 + 0x288);
      fVar5 = *(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x3d8) +
              *(float *)(param_1 + 0x280) * *(float *)(param_1 + 0x3dc) +
              *(float *)(param_1 + 0x268) * *pfVar1 + *(float *)(param_1 + 0x28c);
      fVar6 = *(float *)(param_1 + 0x278) * *(float *)(param_1 + 0x3d8) +
              *(float *)(param_1 + 0x284) * *(float *)(param_1 + 0x3dc) +
              *(float *)(param_1 + 0x26c) * *pfVar1 + *(float *)(param_1 + 0x290);
      local_c = fVar6 * *(float *)(param_1 + 0x1c0) - fVar5 * *(float *)(param_1 + 0x1c4);
      local_4 = fVar5 * *(float *)(param_1 + 0x1bc) - fVar4 * *(float *)(param_1 + 0x1c0);
      local_18 = local_c + *(float *)(param_1 + 0x1b0);
      fVar6 = (fVar4 * *(float *)(param_1 + 0x1c4) - fVar6 * *(float *)(param_1 + 0x1bc)) +
              *(float *)(param_1 + 0x1b4);
      fVar7 = local_4 + *(float *)(param_1 + 0x1b8);
      local_30 = local_18 * *(float *)(param_1 + 0x204) +
                 fVar6 * *(float *)(param_1 + 0x210) + fVar7 * *(float *)(param_1 + 0x21c);
      local_2c = local_18 * *(float *)(param_1 + 0x208) +
                 fVar6 * *(float *)(param_1 + 0x214) + fVar7 * *(float *)(param_1 + 0x220);
      local_28 = local_18 * *(float *)(param_1 + 0x20c) +
                 fVar6 * *(float *)(param_1 + 0x218) + fVar7 * *(float *)(param_1 + 0x224);
      if ((float)_DAT_0064a660 < fVar3) {
        fVar3 = _DAT_0064b240;
      }
      if (ABS(*(float *)(param_1 + 0x3e0) * local_30 +
              *(float *)(param_1 + 0x3e4) * local_2c + *(float *)(param_1 + 1000) * local_28) <
          *(float *)(param_1 + 0x388) * (float)_DAT_0064a830) {
        *(undefined4 *)(param_1 + 0x5474) = 1;
        *(undefined4 *)(param_1 + 0x5524) = 0x3f800000;
        *(float *)(param_1 + 0x54b8) = *pfVar1;
        *(undefined4 *)(param_1 + 0x54bc) = *(undefined4 *)(param_1 + 0x3d8);
        *(undefined4 *)(param_1 + 0x54c0) = *(undefined4 *)(param_1 + 0x3dc);
      }
      if ((fVar5 <= ABS(fVar4)) || (_DAT_0064b310 <= (float)fVar13)) {
        if (-ABS(fVar4) <= fVar5) {
          *(float *)(param_1 + 0x551c) = fVar3;
          *(float *)(param_1 + 0x54a0) = *pfVar1;
          *(undefined4 *)(param_1 + 0x546c) = 1;
          *(undefined4 *)(param_1 + 0x54a4) = *(undefined4 *)(param_1 + 0x3d8);
          *(undefined4 *)(param_1 + 0x54a8) = *(undefined4 *)(param_1 + 0x3dc);
        }
        else {
          *(float *)(param_1 + 0x5520) = fVar3;
          *(float *)(param_1 + 0x54ac) = *pfVar1;
          *(undefined4 *)(param_1 + 0x5470) = 1;
          *(undefined4 *)(param_1 + 0x54b0) = *(undefined4 *)(param_1 + 0x3d8);
          *(undefined4 *)(param_1 + 0x54b4) = *(undefined4 *)(param_1 + 0x3dc);
        }
      }
      else {
        *(float *)(param_1 + 0x5518) = fVar3;
        *(float *)(param_1 + 0x5494) = *pfVar1;
        *(undefined4 *)(param_1 + 0x5468) = 1;
        *(undefined4 *)(param_1 + 0x5498) = *(undefined4 *)(param_1 + 0x3d8);
        *(undefined4 *)(param_1 + 0x549c) = *(undefined4 *)(param_1 + 0x3dc);
      }
    }
    iVar10 = *(int *)(param_1 + 0x5460);
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x3344) == 0)) {
      iVar11 = *(int *)(param_1 + 0x28bc);
      bVar8 = false;
      bVar9 = true;
      if (0 < iVar11) {
        piVar12 = (int *)(iVar10 + 0x3be8);
        fVar3 = _DAT_0064b254;
        do {
          iVar10 = *piVar12;
          if (0 < iVar10) {
            bVar8 = true;
          }
          piVar12 = piVar12 + 1;
          iVar11 = iVar11 + -1;
          fVar3 = (float)iVar10 / (*(float *)(param_1 + 0x19c) * _DAT_0064b440) + fVar3;
        } while (iVar11 != 0);
        if (bVar8) {
          if (_DAT_0064b240 < fVar3) {
            fVar3 = _DAT_0064b240;
          }
          *(float *)(param_1 + 0x5534) = fVar3;
          *(undefined4 *)(param_1 + 0x5484) = 1;
          *(undefined4 *)(param_1 + 0x54e8) = *(undefined4 *)(param_1 + 0x228);
          *(undefined4 *)(param_1 + 0x54ec) = *(undefined4 *)(param_1 + 0x22c);
          *(undefined4 *)(param_1 + 0x54f0) = *(undefined4 *)(param_1 + 0x230);
        }
      }
    }
    iVar10 = *(int *)(param_1 + 0x594);
    if ((((iVar10 == 1) || (iVar10 == 4)) || (iVar10 == 5)) || (iVar10 == 6)) {
      iVar11 = 8;
      if ((iVar10 == 5) || (iVar10 == 6)) {
        iVar11 = 9;
      }
      *(undefined4 *)(param_1 + 0x5468 + iVar11 * 4) = 1;
      if (*(float *)(param_1 + 0x598) <= _DAT_0064b240) {
        *(undefined4 *)(param_1 + 0x5518 + iVar11 * 4) = *(undefined4 *)(param_1 + 0x598);
      }
      else {
        *(undefined4 *)(param_1 + 0x5518 + iVar11 * 4) = 0x3f800000;
      }
      puVar2 = (undefined4 *)(param_1 + 0x5494 + iVar11 * 0xc);
      *puVar2 = *(undefined4 *)(param_1 + 0x3d4);
      puVar2[1] = *(undefined4 *)(param_1 + 0x3d8);
      puVar2[2] = *(undefined4 *)(param_1 + 0x3dc);
      FUN_00545a90();
      return;
    }
    if (bVar9) {
      FUN_00545a90();
      return;
    }
  }
  return;
}

