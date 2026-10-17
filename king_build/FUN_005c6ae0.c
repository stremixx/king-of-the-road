
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6ae0(float *param_1,int param_2,float param_3,float param_4,float param_5,float param_6
                 ,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short *psVar7;
  float *pfVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  float *pfVar15;
  uint local_c;
  float local_8;
  
  iVar13 = 0;
  if ((DAT_0070cc24 & 1) == 0) {
    DAT_0070cc24 = DAT_0070cc24 | 1;
    FUN_0061c439(&DAT_005c6ec0);
  }
  local_8 = _DAT_0064b254;
  local_c = 0;
  fVar1 = _DAT_0064b254;
  fVar3 = _DAT_0064b254;
  if (-1 < param_2) {
    fVar4 = param_7 + _DAT_00650c70;
    fVar5 = param_7 + _DAT_00650c6c;
    param_7 = param_7 + _DAT_00650c68;
    pfVar15 = param_1 + 2;
    psVar7 = &DAT_0070cc28;
    pfVar8 = (float *)&DAT_0070d208;
    do {
      fVar6 = DAT_0067e880;
      fVar3 = (float)(int)local_c * param_5 + fVar3;
      local_8 = (float)(int)local_c * param_6 + local_8;
      if (0x70d208 < (int)pfVar8) {
        fVar1 = SQRT(param_4 * param_4 -
                     (param_6 * param_6 + param_5 * param_5) * (float)(int)(local_c * local_c)) +
                fVar1;
      }
      pfVar8[-4] = fVar3 + *param_1;
      pfVar8[-3] = local_8 + param_1[1];
      pfVar8[-2] = fVar1 + param_1[2];
      pfVar8[-1] = fVar6;
      uVar12 = local_c & 0x80000001;
      *pfVar8 = fVar4;
      fVar6 = DAT_0067e880;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
      }
      fVar2 = (float)(int)uVar12;
      pfVar8[1] = fVar2;
      pfVar8[2] = fVar3 + *param_1 + param_3;
      pfVar8[3] = local_8 + param_1[1];
      pfVar8[4] = fVar1 + param_1[2];
      pfVar8[5] = fVar6;
      pfVar8[6] = fVar5;
      pfVar8[7] = fVar2;
      pfVar8[8] = fVar3 + *param_1;
      pfVar8[9] = local_8 + param_1[1] + param_3;
      pfVar8[10] = fVar1 + param_1[2];
      pfVar8[0xb] = fVar6;
      pfVar8[0xc] = param_7;
      pfVar8[0xd] = fVar2;
      pfVar15[-2] = pfVar8[-4];
      pfVar15[-1] = pfVar8[-3];
      *pfVar15 = pfVar8[-2];
      if (0x70d208 < (int)pfVar8) {
        sVar11 = (short)local_c;
        sVar14 = sVar11 * 3;
        *psVar7 = sVar14 + -3;
        sVar9 = sVar14 + -2;
        psVar7[1] = sVar9;
        sVar10 = sVar14 + 1;
        psVar7[2] = sVar10;
        psVar7[3] = sVar14 + -3;
        psVar7[4] = sVar10;
        psVar7[5] = sVar14;
        psVar7[6] = sVar11 * 3 + -1;
        psVar7[7] = sVar14 + -3;
        sVar11 = sVar11 * 3 + -1;
        psVar7[8] = sVar14;
        psVar7[9] = sVar11;
        psVar7[10] = sVar14;
        sVar14 = sVar14 + 2;
        psVar7[0xb] = sVar14;
        psVar7[0xc] = sVar9;
        psVar7[0xd] = sVar11;
        psVar7[0xe] = sVar14;
        psVar7[0xf] = sVar9;
        psVar7[0x10] = sVar14;
        iVar13 = iVar13 + 0x12;
        psVar7[0x11] = sVar10;
        psVar7 = psVar7 + 0x12;
      }
      local_c = local_c + 1;
      pfVar8 = pfVar8 + 0x12;
      pfVar15 = pfVar15 + 3;
    } while ((int)local_c <= param_2);
  }
  param_3 = param_3 * _DAT_0064b8f4;
  (&DAT_0070d1f8)[local_c * 0x12] = (float)(int)local_c * param_5 + fVar3 + param_3 + *param_1;
  (&DAT_0070d1fc)[local_c * 0x12] = (float)(int)local_c * param_6 + local_8 + param_1[1] + param_3;
  fVar3 = DAT_0067e880;
  (&DAT_0070d200)[local_c * 0x12] =
       SQRT(param_4 * param_4 -
            (param_6 * param_6 + param_5 * param_5) * (float)(int)(local_c * local_c)) + fVar1 +
       param_1[2];
  (&DAT_0070d204)[local_c * 0x12] = fVar3;
  uVar12 = local_c & 0x80000001;
  (&DAT_0070d208)[local_c * 0x12] = 0x3f7ae148;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
  }
  sVar11 = (short)local_c;
  sVar14 = sVar11 * 3;
  *(short *)((iVar13 + 1) * 2 + 0x70cc26) = sVar14 + -3;
  (&DAT_0070cc28)[iVar13 + 1] = sVar14;
  (&DAT_0070cc28)[iVar13 + 2] = sVar11 * 3 + -1;
  (&DAT_0070cc28)[iVar13 + 3] = sVar14 + -2;
  (&DAT_0070d20c)[local_c * 0x12] = (float)(int)uVar12;
  (&DAT_0070cc28)[iVar13 + 4] = sVar14;
  (&DAT_0070cc28)[iVar13 + 5] = sVar14 + -3;
  (&DAT_0070cc28)[iVar13 + 6] = sVar11 * 3 + -1;
  (&DAT_0070cc28)[iVar13 + 7] = sVar14;
  param_1 = param_1 + local_c * 3;
  fVar1 = (float)(&DAT_0070d1f8)[local_c * 0x12];
  (&DAT_0070cc28)[iVar13 + 8] = sVar14 + -2;
  *param_1 = fVar1;
  param_1[1] = (float)(&DAT_0070d1fc)[local_c * 0x12];
  param_1[2] = (float)(&DAT_0070d200)[local_c * 0x12];
  (**(code **)(*DAT_0071f868 + 0x68))
            (DAT_0071f868,4,0x142,&DAT_0070d1f8,local_c * 3 + 1,&DAT_0070cc28,iVar13 + 9,0);
  return;
}

