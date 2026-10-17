
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f20b0(undefined2 *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if ((DAT_007229ac & 1) == 0) {
    DAT_007229ac = DAT_007229ac | 1;
    iVar6 = FUN_005ab5d0(local_60,0x3f490fda);
    fVar2 = *(float *)(iVar6 + 0x24) + *(float *)(iVar6 + 0xc);
    fVar3 = *(float *)(iVar6 + 0x28) + *(float *)(iVar6 + 0x10);
    fVar4 = *(float *)(iVar6 + 0x2c) + *(float *)(iVar6 + 0x14);
    pfVar7 = (float *)FUN_005ab7d0(local_30,0x3f060a92);
    _DAT_0072295c = fVar2 * pfVar7[1] + fVar3 * pfVar7[4] + fVar4 * pfVar7[7] + pfVar7[10];
    _DAT_00722960 = fVar2 * pfVar7[2] + fVar3 * pfVar7[5] + fVar4 * pfVar7[8] + pfVar7[0xb];
    _DAT_00722958 = fVar2 * *pfVar7 + fVar3 * pfVar7[3] + fVar4 * pfVar7[6] + pfVar7[9];
    FUN_0061c439(&DAT_005f2430);
  }
  iVar6 = *param_2;
  *param_3 = 0;
  param_3[1] = iVar6;
  param_3[3] = param_6;
  param_3[2] = param_4;
  if (((DAT_0071f864 != 0) && (*param_2 != 0)) && (param_4 != 0)) {
    *param_1 = (short)param_4;
    bVar5 = *(char *)(param_5 + 0x18) + 1;
    *(byte *)(param_1 + 6) = bVar5;
    if (bVar5 != 0) {
      uVar8 = FUN_00631d33((uint)bVar5 * param_4 * 8);
      *(undefined4 *)(param_1 + 8) = uVar8;
    }
    puVar9 = (undefined4 *)FUN_00631d33(0x60);
    *(undefined4 **)(param_1 + 2) = puVar9;
    for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iVar6 = 0;
    *(undefined **)(*(int *)(param_1 + 2) + 0x18) = &DAT_007229fc;
    *(undefined4 *)(*(int *)(param_1 + 2) + 0x10) = *(undefined4 *)(*(int *)(param_1 + 2) + 0x18);
    if (0 < param_4) {
      puVar9 = (undefined4 *)(param_5 + 0x10);
      pfVar7 = (float *)(param_6 + 8);
      do {
        if (*param_2 == 1) {
          uVar10 = __ftol();
          uVar11 = __ftol();
          uVar12 = __ftol();
          pfVar7[-2] = (float)(((uVar10 | 0xffffff00) << 8 | uVar11) << 8 | uVar12);
        }
        else if ((*param_2 == 2) && (((byte)DAT_00701dec & 0x40) == 0)) {
          fVar2 = (_DAT_00722958 * pfVar7[-2] + *pfVar7 * _DAT_00722960 + pfVar7[-1] * _DAT_0072295c
                  + (float)_DAT_0064a660) * (float)_DAT_0064a6d0;
          *pfVar7 = fVar2;
          pfVar7[-1] = fVar2;
          pfVar7[-2] = fVar2;
          *param_2 = 3;
          param_3[1] = 3;
        }
        *(undefined4 *)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 6) * iVar6 * 8) =
             puVar9[-1];
        *(undefined4 *)(*(int *)(param_1 + 8) + 4 + (uint)*(byte *)(param_1 + 6) * iVar6 * 8) =
             *puVar9;
        uVar10 = (uint)*(byte *)(param_1 + 6);
        iVar13 = 0;
        if (uVar10 != 1 && -1 < (int)(uVar10 - 1)) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 8) + 8 + (uVar10 * iVar6 + iVar13) * 8) =
                 *(undefined4 *)(puVar9[1] + iVar13 * 8);
            iVar1 = iVar13 * 8;
            iVar14 = (uint)*(byte *)(param_1 + 6) * iVar6 + iVar13;
            iVar13 = iVar13 + 1;
            *(undefined4 *)(*(int *)(param_1 + 8) + 0xc + iVar14 * 8) =
                 *(undefined4 *)(puVar9[1] + 4 + iVar1);
            uVar10 = (uint)*(byte *)(param_1 + 6);
          } while (iVar13 < (int)(uVar10 - 1));
        }
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 3;
        puVar9 = puVar9 + 7;
      } while (iVar6 < param_4);
    }
    **(int **)(param_1 + 2) = param_5;
    *(undefined4 *)(*(int *)(param_1 + 2) + 4) = 0x1c;
    iVar6 = 0;
    *(undefined4 *)(param_1 + 4) = 2;
    if (*(char *)(param_1 + 6) != '\0') {
      do {
        iVar13 = iVar6 * 8;
        *(int *)(*(int *)(param_1 + 2) + 0x20 + iVar13) = iVar13 + *(int *)(param_1 + 8);
        *(uint *)(*(int *)(param_1 + 2) + 0x24 + iVar13) = (uint)*(byte *)(param_1 + 6) << 3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 6));
    }
    if (*param_2 == 2) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      *(int *)(*(int *)(param_1 + 2) + 8) = param_6;
      *(undefined4 *)(*(int *)(param_1 + 2) + 0xc) = 0xc;
      return;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40;
    *(int *)(*(int *)(param_1 + 2) + 0x10) = param_6;
    *(undefined4 *)(*(int *)(param_1 + 2) + 0x14) = 0xc;
  }
  return;
}

