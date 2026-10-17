
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004cf640(int param_1,byte *param_2)

{
  int *piVar1;
  double dVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  float10 fVar14;
  float10 fVar15;
  int *apiStack_184 [5];
  int local_170;
  int *local_16c;
  undefined8 local_168;
  float local_150;
  float local_14c;
  float local_148;
  int local_144;
  undefined8 local_140;
  float local_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_100 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  char *local_f0;
  char *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0 [8];
  undefined1 local_b0 [12];
  int local_a4 [3];
  undefined1 local_98 [48];
  undefined4 local_68 [12];
  undefined1 local_38 [52];
  
  local_168._4_4_ = *(float **)(param_1 + 0x509c);
  piVar1 = (int *)(param_1 + 0x509c);
  local_168._0_4_ = (code *)param_1;
  local_16c = (int *)0x4cf66d;
  iVar5 = FUN_0062a170();
  if (iVar5 != 0) {
    return 0;
  }
  local_168._4_4_ = (float *)*piVar1;
  if (local_168._4_4_ != (float *)DAT_0068a8f0) {
    local_168._0_4_ = (code *)0x4cf695;
    uVar6 = FUN_0043f700();
    *(undefined4 *)param_2 = uVar6;
  }
  if (*(int *)(DAT_006d0fd8 + 0x268) == param_1) {
    return 1;
  }
  local_168._4_4_ = (float *)*piVar1;
  if ((local_168._4_4_ != (float *)DAT_0068a8f0) && ((*param_2 & 4) == 0)) {
    local_168._0_4_ = (code *)0x4cf6cb;
    cVar4 = FUN_004cfc30();
    if (cVar4 == '\0') {
      local_168._4_4_ = *(float **)(DAT_00695c00 + 0xbb0);
      local_168._0_4_ = (code *)s_car_truck_lost_trajectory_006719ac;
      local_16c = (int *)0x4cf6e9;
      FUN_005d2250();
    }
  }
  pfVar8 = local_130 + 2;
  iVar5 = 4;
  do {
    pfVar8[-2] = 0.0;
    pfVar8[-1] = 0.0;
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  pfVar8 = (float *)&DAT_00701550;
  pfVar11 = local_130;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  if ((_DAT_0064ba98 < *(double *)(DAT_006f230c + 0x58)) ||
     (*(double *)(DAT_006f230c + 0x58) < _DAT_0064ba90)) {
    local_168._4_4_ = (float *)*piVar1;
    local_168._0_4_ = (code *)0x4cf749;
    uVar7 = FUN_0043f700();
    if ((uVar7 & 4) == 0) {
      *(undefined4 *)(param_1 + 0x51b8) = 1;
      goto LAB_004cf766;
    }
  }
  *(undefined4 *)(param_1 + 0x51b8) = 0;
LAB_004cf766:
  local_168._4_4_ = (float *)local_68;
  local_168._0_4_ = (code *)0x4cf776;
  pfVar8 = (float *)FUN_0057d570();
  local_168._0_4_ = (code *)&local_140;
  pfVar11 = local_130;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  local_150 = local_130[3] * *(float *)(param_1 + 0x5234) +
              local_118 * *(float *)(param_1 + 0x5238) + local_130[0] * *(float *)(param_1 + 0x5230)
  ;
  local_168._4_4_ = &local_150;
  local_14c = local_120 * *(float *)(param_1 + 0x5234) +
              local_114 * *(float *)(param_1 + 0x5238) + local_130[1] * *(float *)(param_1 + 0x5230)
  ;
  local_148 = local_130[2] * *(float *)(param_1 + 0x5230) +
              local_11c * *(float *)(param_1 + 0x5234) + local_110 * *(float *)(param_1 + 0x5238);
  local_16c = (int *)0x4cf808;
  FUN_005aae00();
  local_168._4_4_ = (float *)param_1;
  if ((*param_2 & 1) == 0) {
    local_168._0_4_ = (code *)0x4cf83b;
    iVar5 = FUN_004cee00();
    if (iVar5 != 0) {
      local_168._4_4_ = (float *)0x1;
      local_168._0_4_ = (code *)param_2;
      apiStack_184[4] = (int *)0x4cf852;
      local_170 = (int)piVar1;
      FUN_0041d3f0();
      local_170 = param_1;
      apiStack_184[4] = (int *)0x4cf858;
      FUN_004cf0a0();
    }
  }
  else {
    local_168._0_4_ = (code *)0x4cf816;
    iVar5 = FUN_004ceea0();
    if (iVar5 != 0) {
      local_168._4_4_ = (float *)param_2;
      local_170 = 0x4cf82b;
      local_16c = piVar1;
      FUN_0041d3f0();
      local_16c = (int *)param_1;
      local_170 = 0x4cf831;
      FUN_004cef80();
    }
  }
  local_144 = *(int *)(param_1 + 0x5460);
  if ((*param_2 & 0x80) == 0) {
    *(undefined4 *)(local_144 + 0x4078) = 1;
  }
  else {
    *(undefined4 *)(local_144 + 0x4078) = 0;
  }
  if ((*param_2 & 1) == 0) {
    local_168._4_4_ = (float *)*piVar1;
    local_168._0_4_ = (code *)local_d0;
    local_16c = (int *)0x4cf8a2;
    FUN_00437600();
    local_168._4_4_ = (float *)local_100;
    local_100[0] = 0;
    local_f8 = 0;
    puVar10 = local_d0;
    ppiVar13 = apiStack_184;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppiVar13 = (int *)*puVar10;
      puVar10 = puVar10 + 1;
      ppiVar13 = ppiVar13 + 1;
    }
    uStack_f4 = 0;
    local_f0 = s_UNDEFINED_MODULE_0066c638;
    local_ec = s_UNDEFINED_ROOM_0066c628;
    local_e8 = 0;
    local_e4 = 0;
    local_dc = 0xffffffff;
    local_d8 = 0xffffffff;
    FUN_00438e50();
    local_140 = (double)CONCAT44(uStack_f4,local_f8) * _DAT_0064a6d0;
    local_16c = (int *)0x4cf947;
    local_168 = local_140;
    uVar6 = FUN_004d4580();
    puVar10 = local_d0;
    ppiVar13 = apiStack_184 + 1;
    for (apiStack_184[0] = (int *)0x8; apiStack_184[0] != (int *)0x0;
        apiStack_184[0] = (int *)((int)apiStack_184[0] + -1)) {
      *ppiVar13 = (int *)*puVar10;
      puVar10 = puVar10 + 1;
      ppiVar13 = ppiVar13 + 1;
    }
    local_140 = (double)CONCAT44(local_140._4_4_,uVar6);
    FUN_0041d3f0(piVar1);
    FUN_0043a580(local_98);
    pfVar8 = (float *)FUN_005aba00(local_38,local_98);
    fVar14 = (float10)log2((float10)_DAT_0064ba88);
    fVar15 = (float10)1.4426950408889634 *
             (float10)0.6931471805599453 * fVar14 * (float10)*(double *)(DAT_00695c00 + 0xb90) *
             (float10)_DAT_0064a770;
    fVar14 = ROUND(fVar15);
    fVar15 = (float10)f2xm1(fVar15 - fVar14);
    local_168._4_4_ = (float *)local_98;
    fVar14 = (float10)fscale((float10)1 + fVar15,fVar14);
    fVar14 = fVar14 * ((float10)*pfVar8 * (float10)*(float *)(param_1 + 0x50c4) +
                       (float10)pfVar8[3] * (float10)*(float *)(param_1 + 0x50c8) +
                       (float10)pfVar8[6] * (float10)*(float *)(param_1 + 0x50cc) +
                      (float10)pfVar8[9]) +
             ((float10)_DAT_0064b240 - fVar14) *
             ((float10)(int)local_140 + (float10)_DAT_0064a6d0) *
             (float10)*(double *)(local_144 + 0x40a8);
    local_170 = (int)(float)(fVar14 * (float10)DAT_007015a0);
    local_16c = (int *)(float)(fVar14 * (float10)DAT_007015a4);
    apiStack_184[4] = (int *)local_38;
    local_168._0_4_ = (code *)(float)(fVar14 * (float10)DAT_007015a8);
    apiStack_184[3] = (int *)0x4cfa5a;
    local_150 = (float)local_170;
    local_14c = (float)local_16c;
    local_148 = (float)(code *)local_168;
    local_168._0_4_ = (code *)FUN_005ab330();
    local_16c = local_68;
    local_170 = 0x4cfa6b;
    FUN_005ab130();
    puVar10 = local_68;
    puVar12 = (undefined4 *)(param_1 + 0x50a0);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar10 = local_d0;
    ppiVar13 = apiStack_184 + 1;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppiVar13 = (int *)*puVar10;
      puVar10 = puVar10 + 1;
      ppiVar13 = ppiVar13 + 1;
    }
    apiStack_184[0] = local_a4;
    uVar6 = FUN_00439400();
    pfVar8 = (float *)FUN_005aaad0(local_b0,uVar6);
    local_150 = *pfVar8 * _DAT_0064ba80;
    local_14c = pfVar8[1] * _DAT_0064ba80;
    local_148 = pfVar8[2] * _DAT_0064ba80;
    *(float *)(param_1 + 0x50d0) = local_150;
    *(float *)(param_1 + 0x50d4) = local_14c;
    *(float *)(param_1 + 0x50d8) = local_148;
    *(undefined4 *)(param_1 + 0x50e8) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0x50ec) = DAT_007015b4;
    local_168._4_4_ = (float *)(int)local_140;
    *(undefined4 *)(param_1 + 0x50f0) = DAT_007015b8;
    local_168._0_4_ = (code *)(int)local_140;
    local_170 = 0x4cfb20;
    local_16c = piVar1;
    FUN_0041d3f0();
    local_16c = (int *)0x4cfb25;
    FUN_00438d70();
  }
  iVar5 = local_144;
  local_168._4_4_ = (float *)param_1;
  local_16c = (int *)local_38;
  local_168._0_4_ = FUN_004ce330;
  local_170 = 0x4cfb45;
  iVar9 = FUN_0057d570();
  apiStack_184[4] = *(int **)(iVar9 + 0x24);
  local_170 = *(undefined4 *)(iVar9 + 0x28);
  local_16c = *(int **)(iVar9 + 0x2c);
  apiStack_184[3] = (int *)0x4cfb68;
  apiStack_184[3] = (int *)FUN_005eec70();
  apiStack_184[2] = (int *)0x4cfb71;
  FUN_005db580();
  *(undefined4 *)(iVar5 + 0x40b0) = 0;
  *(undefined4 *)(iVar5 + 0x40b4) = 0xbff00000;
  if (((*(int *)(param_1 + 0x5574) == 0) &&
      (piVar3 = *(int **)(param_1 + 0x5570), piVar3 != (int *)0x0)) && (*piVar3 == 0x1d)) {
    if (((float)_DAT_0064a668 < *(float *)piVar3[3]) && (piVar3[1] == 0)) {
      *(double *)(*(int *)(param_1 + 0x5460) + 0x40b0) = (double)*(float *)piVar3[3];
    }
    local_168._4_4_ = (float *)0x0;
    local_168._0_4_ = (code *)0x0;
    local_16c = (int *)0x4cfbd6;
    FUN_004cfc50();
  }
  if ((*param_2 & 1) == 0) {
    dVar2 = *(double *)(iVar5 + 0x40b0);
    local_140._0_4_ = SUB84(dVar2,0);
    local_140._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    local_168._4_4_ = (float *)local_140._4_4_;
    local_168._0_4_ = (code *)(int)local_140;
    local_16c = (int *)(uint)(dVar2 <= _DAT_0064a668);
    local_170 = (int)local_140;
    apiStack_184[3] = (int *)0x4cfc0f;
    apiStack_184[4] = piVar1;
    local_140 = dVar2;
    FUN_0041d3f0();
    apiStack_184[4] = (int *)0x4cfc14;
    FUN_00447150();
  }
  return 1;
}

