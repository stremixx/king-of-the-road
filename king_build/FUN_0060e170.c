
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060e170(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [4];
  float local_90;
  float local_8c [11];
  undefined4 local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  if (*(int *)(param_1 + 0x74) == 0) {
    fVar1 = *(float *)(param_1 + 0x9c) - (float)*(double *)(*(int *)(param_1 + 0x70) + 0xb90);
  }
  else {
    fVar1 = (float)*(double *)(*(int *)(param_1 + 0x70) + 0xb90) + *(float *)(param_1 + 0x9c);
  }
  *(float *)(param_1 + 0x9c) = fVar1;
  if (_DAT_0064b254 < *(float *)(param_1 + 0x9c)) {
    local_104 = *(float *)(param_1 + 0x9c) / DAT_00651ff8;
    if (local_104 <= _DAT_0064b240) {
      if (local_104 < _DAT_0064b254) {
        local_104 = 0.0;
      }
    }
    else {
      local_104 = 1.0;
    }
    fVar1 = (float)*(double *)(param_4 + 0x2118);
    FUN_0041ce10(fVar1 * *param_3,fVar1 * param_3[1],fVar1 * param_3[2]);
    FUN_0041ce10(local_d0 * _DAT_0065207c,local_cc * _DAT_0065207c,local_c8 * _DAT_0065207c);
    FUN_0041ce10(local_f4 + *param_2,local_f0 + param_2[1],local_ec);
    local_e8 = param_3[1] - _DAT_0064b254;
    local_100 = 0.0;
    local_fc = 0.0;
    local_f8 = 1.0;
    FUN_0041ce10(-local_e8,-(_DAT_0064b254 - *param_3),-_DAT_0064b254);
    fVar8 = (float10)FUN_005eaac0();
    fVar10 = (float10)_DAT_0064b248;
    fVar9 = (float10)FUN_005eaad0();
    fVar10 = (float10)fptan((float10)(float)(fVar8 * fVar10));
    fVar1 = (float)(fVar10 * (float10)*(double *)(param_4 + 0x2118));
    fVar10 = (float10)fptan(fVar9 * (float10)_DAT_0064b248);
    fVar10 = fVar10 * (float10)*(double *)(param_4 + 0x2118);
    fVar1 = (float)SQRT((float10)fVar1 * (float10)fVar1 + fVar10 * fVar10);
    FUN_0041ce10(local_100 * _DAT_00651ffc,local_fc * _DAT_00651ffc,local_f8 * _DAT_00651ffc);
    FUN_0041ce10(local_f4 * local_104,local_f0 * local_104,local_ec * local_104);
    FUN_0041ce10(local_b8 * fVar1,local_b4 * fVar1,local_b0 * fVar1);
    FUN_0041ce10(local_c4 - local_d0,local_c0 - local_cc,local_bc - local_c8);
    FUN_0041ce10(local_ac + local_dc,local_a8 + local_d8,local_a4 + local_d4);
    local_a0[2] = local_e0;
    local_a0[0] = local_e8;
    local_a0[1] = local_e4;
    local_8c[0] = local_f8;
    local_a0[3] = local_100;
    local_90 = local_fc;
    local_8c[1] = 0.0;
    local_8c[2] = 0.0;
    pfVar5 = local_a0;
    pfVar6 = local_8c + 3;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_0041ce10(local_100 * _DAT_00651ffc,local_fc * _DAT_00651ffc,local_f8 * _DAT_00651ffc);
    FUN_0041ce10(local_e8 * local_104,local_e4 * local_104,local_e0 * local_104);
    FUN_0041ce10(local_b8 * fVar1,local_b4 * fVar1,local_b0 * fVar1);
    FUN_0041ce10(local_dc + local_c4,local_d8 + local_c0,local_d4 + local_bc);
    uVar12 = 0;
    pfVar5 = &local_100;
    uVar11 = 0x3f800000;
    uVar2 = FUN_004bfef0(&local_d0,&local_f4,&local_ac,pfVar5,0x3f800000,0);
    puVar3 = (undefined4 *)FUN_004bded0(uVar2,pfVar5,uVar11,uVar12);
    uVar2 = 0x3f800000;
    puVar7 = local_60;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    pfVar5 = &local_100;
    uVar12 = 0x3f800000;
    uVar11 = FUN_004c03a0(&local_e8,&local_100,DAT_00652000,pfVar5,0x3f800000,0x3f800000);
    uVar11 = FUN_004c03a0(&local_dc,&local_b8,fVar1,uVar11);
    uVar11 = FUN_004bfef0(&local_ac,&local_c4,uVar11);
    uVar11 = FUN_004be230(&local_f4,uVar11);
    puVar3 = (undefined4 *)FUN_004bded0(uVar11,pfVar5,uVar12,uVar2);
    puVar7 = local_40;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar12 = 0x3f800000;
    pfVar5 = &local_100;
    uVar11 = 0;
    uVar2 = FUN_004c03a0(&local_e8,&local_100,DAT_00652000,pfVar5,0,0x3f800000);
    uVar2 = FUN_004c03a0(&local_dc,&local_b8,fVar1,uVar2);
    uVar2 = FUN_004be230(&local_ac,&local_c4,uVar2);
    uVar2 = FUN_004be230(&local_f4,uVar2);
    puVar3 = (undefined4 *)FUN_004bded0(uVar2,pfVar5,uVar11,uVar12);
    uVar2 = *(undefined4 *)(param_1 + 0x98);
    puVar7 = local_20;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_005b06d0(uVar2,1,0,0);
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,1);
    (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,0x112,local_8c,4,0);
  }
  return;
}

