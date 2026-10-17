
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004be2c0(float param_1,float param_2,uint param_3)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_34;
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
  
  iVar6 = param_3;
  if (*(int *)(param_3 + 0x18) == 5) {
    pfVar11 = *(float **)(param_3 + 0x20);
    fVar2 = *pfVar11;
    fVar3 = pfVar11[1];
    fVar4 = pfVar11[2];
    fVar5 = pfVar11[3];
    FUN_005aafe0(param_3 + 0x24);
    if ((float)_DAT_0064b3e8 < ABS(fVar4)) {
      return -(((float10)fVar3 * (float10)param_2 + (float10)fVar2 * (float10)param_1 +
               (float10)fVar5) / (float10)fVar4);
    }
  }
  if (*(int *)(param_3 + 0x18) == 6) {
    pfVar11 = &local_1c;
    iVar9 = 3;
    do {
      pfVar11[-2] = 0.0;
      pfVar11[-1] = 0.0;
      *pfVar11 = 0.0;
      pfVar11 = pfVar11 + 3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = *(int *)(param_3 + 0x1c) * 0x30;
    uVar1 = *(ushort *)(iVar9 + -0x2e + *(int *)(param_3 + 0x20));
    iVar9 = iVar9 + -0x30 + *(int *)(param_3 + 0x20);
    if ((2 < uVar1) && (param_3 = 1, 1 < uVar1 - 1)) {
      pfVar11 = (float *)(iVar6 + 0x24);
      iVar10 = 0xc;
      do {
        pfVar7 = *(float **)(iVar9 + 4);
        local_24 = *pfVar11 * *pfVar7 +
                   *(float *)(iVar6 + 0x3c) * pfVar7[2] + *(float *)(iVar6 + 0x30) * pfVar7[1] +
                   *(float *)(iVar6 + 0x48);
        local_20 = *(float *)(iVar6 + 0x40) * pfVar7[2] +
                   *(float *)(iVar6 + 0x28) * *pfVar7 + *(float *)(iVar6 + 0x34) * pfVar7[1] +
                   *(float *)(iVar6 + 0x4c);
        local_1c = *(float *)(iVar6 + 0x44) * pfVar7[2] +
                   *(float *)(iVar6 + 0x2c) * *pfVar7 + *(float *)(iVar6 + 0x38) * pfVar7[1] +
                   *(float *)(iVar6 + 0x50);
        pfVar7 = (float *)(iVar10 + *(int *)(iVar9 + 4));
        local_18 = *pfVar11 * *pfVar7 +
                   *(float *)(iVar6 + 0x30) * pfVar7[1] + *(float *)(iVar6 + 0x3c) * pfVar7[2] +
                   *(float *)(iVar6 + 0x48);
        local_14 = *(float *)(iVar6 + 0x28) * *pfVar7 +
                   *(float *)(iVar6 + 0x34) * pfVar7[1] + *(float *)(iVar6 + 0x40) * pfVar7[2] +
                   *(float *)(iVar6 + 0x4c);
        local_10 = *(float *)(iVar6 + 0x2c) * *pfVar7 +
                   *(float *)(iVar6 + 0x38) * pfVar7[1] + *(float *)(iVar6 + 0x44) * pfVar7[2] +
                   *(float *)(iVar6 + 0x50);
        iVar8 = *(int *)(iVar9 + 4);
        pfVar7 = (float *)(iVar10 + 0xc + iVar8);
        local_c = *pfVar7 * *pfVar11 +
                  *(float *)(iVar6 + 0x30) * *(float *)(iVar10 + 0x10 + iVar8) +
                  *(float *)(iVar6 + 0x3c) * *(float *)(iVar10 + 0x14 + iVar8) +
                  *(float *)(iVar6 + 0x48);
        local_8 = *(float *)(iVar6 + 0x34) * pfVar7[1] +
                  *(float *)(iVar6 + 0x28) * *pfVar7 + *(float *)(iVar6 + 0x40) * pfVar7[2] +
                  *(float *)(iVar6 + 0x4c);
        local_4 = *(float *)(iVar6 + 0x38) * pfVar7[1] +
                  *(float *)(iVar6 + 0x2c) * *pfVar7 + *(float *)(iVar6 + 0x44) * pfVar7[2] +
                  *(float *)(iVar6 + 0x50);
        iVar8 = FUN_004be0e0(param_1,param_2,&local_24);
        if (iVar8 != 0) {
          FUN_005aaeb0(&local_34,iVar9 + 0x20,pfVar11);
          if ((float)_DAT_0064b3e8 < ABS(local_2c)) {
            return -(((float10)local_30 * (float10)param_2 + (float10)local_34 * (float10)param_1 +
                     (float10)local_28) / (float10)local_2c);
          }
        }
        param_3 = param_3 + 1;
        iVar10 = iVar10 + 0xc;
      } while (param_3 < *(ushort *)(iVar9 + 2) - 1);
    }
  }
  return (float10)_DAT_0064b1d0;
}

