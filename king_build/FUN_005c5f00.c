
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c5f00(float *param_1,int param_2,float param_3,float param_4,float param_5,float param_6
                 ,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short *psVar8;
  float *pfVar9;
  short sVar10;
  short sVar11;
  float *pfVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int local_14;
  
  iVar16 = 0;
  if ((DAT_00706ef0 & 1) == 0) {
    DAT_00706ef0 = DAT_00706ef0 | 1;
    FUN_0061c439(&DAT_005c6180);
  }
  iVar17 = 0;
  local_14 = 0;
  if (-1 < param_2) {
    fVar5 = param_7 + _DAT_00650c70;
    fVar6 = param_7 + _DAT_00650c6c;
    psVar8 = &DAT_0070cd10;
    pfVar12 = param_1 + 2;
    pfVar9 = (float *)&DAT_0070bee0;
    param_7 = param_7 + _DAT_00650c68;
    fVar1 = _DAT_0064b254;
    fVar2 = _DAT_0064b254;
    fVar4 = _DAT_0064b254;
    do {
      fVar7 = DAT_0067e880;
      fVar3 = (float)local_14;
      fVar2 = fVar3 * param_5 + fVar2;
      fVar4 = fVar3 * param_6 + fVar4;
      if (0x70bee0 < (int)pfVar9) {
        fVar1 = SQRT(param_4 * param_4 -
                     (param_6 * param_6 + param_5 * param_5) * (float)(local_14 * local_14)) + fVar1
        ;
      }
      pfVar9[-4] = fVar2 + *param_1;
      pfVar9[-3] = fVar4 + param_1[1];
      pfVar9[-2] = fVar1 + param_1[2];
      pfVar9[-1] = fVar7;
      *pfVar9 = fVar5;
      fVar3 = _DAT_0064b240 - fVar3 / (float)param_2;
      pfVar9[1] = fVar3;
      pfVar9[2] = fVar2 + *param_1 + param_3;
      pfVar9[3] = fVar4 + param_1[1];
      pfVar9[4] = fVar1 + param_1[2];
      pfVar9[5] = fVar7;
      pfVar9[6] = fVar6;
      fVar7 = DAT_0067e880;
      pfVar9[7] = fVar3;
      pfVar9[8] = fVar2 + *param_1;
      pfVar9[9] = fVar4 + param_1[1] + param_3;
      pfVar9[10] = fVar1 + param_1[2];
      pfVar9[0xb] = fVar7;
      pfVar9[0xc] = param_7;
      pfVar9[0xd] = fVar3;
      pfVar12[-2] = pfVar9[-4];
      pfVar12[-1] = pfVar9[-3];
      *pfVar12 = pfVar9[-2];
      if (0x70bee0 < (int)pfVar9) {
        sVar10 = (short)local_14 * 3;
        sVar11 = sVar10 + -3;
        sVar13 = sVar10 + -2;
        *psVar8 = sVar11;
        psVar8[1] = sVar13;
        sVar14 = sVar10 + 1;
        psVar8[2] = sVar14;
        psVar8[3] = sVar11;
        psVar8[4] = sVar14;
        sVar15 = (short)local_14 * 3 + -1;
        psVar8[5] = sVar10;
        psVar8[6] = sVar15;
        psVar8[7] = sVar11;
        psVar8[8] = sVar10;
        psVar8[9] = sVar15;
        psVar8[10] = sVar10;
        sVar10 = sVar10 + 2;
        psVar8[0xb] = sVar10;
        psVar8[0xc] = sVar13;
        psVar8[0xd] = sVar15;
        psVar8[0xe] = sVar10;
        psVar8[0xf] = sVar13;
        psVar8[0x10] = sVar10;
        psVar8[0x11] = sVar14;
        iVar16 = iVar16 + 0x12;
        psVar8 = psVar8 + 0x12;
      }
      iVar17 = local_14 + 1;
      pfVar9 = pfVar9 + 0x12;
      pfVar12 = pfVar12 + 3;
      local_14 = iVar17;
    } while (iVar17 <= param_2);
  }
  (**(code **)(*DAT_0071f868 + 0x68))
            (DAT_0071f868,4,0x142,&DAT_0070bed0,iVar17 * 3,&DAT_0070cd10,iVar16,0);
  return;
}

