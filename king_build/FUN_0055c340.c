
void __fastcall FUN_0055c340(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [12];
  float local_108 [4];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined4 local_90 [12];
  undefined4 local_60 [12];
  undefined4 local_30 [12];
  
  if ((*(int *)(param_1 + 0x5580) != 0) && (iVar2 = *(int *)(param_1 + 0x5578), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x5580) = 0;
    local_16c = *(undefined4 *)(iVar2 + 0xcd4);
    *(undefined4 *)(iVar2 + 0x557c) = 0;
    local_170 = *(undefined4 *)(param_1 + 0xcd4);
    pfVar12 = (float *)(param_1 + 0x710);
    pfVar14 = local_108;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar14 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar14 = pfVar14 + 1;
    }
    puVar11 = (undefined4 *)(iVar2 + 0x710);
    puVar13 = local_90;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    local_15c = *(undefined4 *)(param_1 + 0xce8);
    puVar11 = (undefined4 *)(param_1 + 0x740);
    puVar13 = local_30;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar11 = (undefined4 *)(iVar2 + 0x740);
    puVar13 = local_60;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    local_158 = *(undefined4 *)(param_1 + 0xcec);
    local_154 = *(undefined4 *)(param_1 + 0xcf0);
    local_150 = *(undefined4 *)(iVar2 + 0xce8);
    local_14c = *(undefined4 *)(iVar2 + 0xcec);
    local_148 = *(undefined4 *)(iVar2 + 0xcf0);
    iVar9 = *(int *)(param_1 + 0x28b4);
    pfVar12 = (float *)(param_1 + 0x2c4);
    pfVar14 = local_1a0;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar14 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar14 = pfVar14 + 1;
    }
    fVar3 = local_1a0[3] * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_188 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] +
            local_1a0[0] * (float)(&DAT_00696f98)[iVar9 * 0x25c] + local_17c;
    fVar4 = local_190 * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_184 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] +
            local_1a0[1] * (float)(&DAT_00696f98)[iVar9 * 0x25c] + local_178;
    fVar5 = local_18c * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_180 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] +
            local_1a0[2] * (float)(&DAT_00696f98)[iVar9 * 0x25c] + local_174;
    fVar1 = *(float *)(&DAT_00696fc8 + iVar9 * 0x970);
    iVar9 = *(int *)(iVar2 + 0x28b4);
    local_168 = fVar1 * DAT_00701580;
    pfVar12 = (float *)(iVar2 + 0x2c4);
    pfVar14 = local_1a0;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar14 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar14 = pfVar14 + 1;
    }
    local_164 = fVar1 * DAT_00701584;
    fVar6 = local_168 + (float)(&DAT_00696fa4)[iVar9 * 0x25c];
    fVar7 = local_164 + (float)(&DAT_00696fa8)[iVar9 * 0x25c];
    fVar1 = fVar1 * DAT_00701588 + (float)(&DAT_00696fac)[iVar9 * 0x25c];
    FUN_0041ce10(local_1a0[0] * fVar6 + fVar7 * local_1a0[3] + fVar1 * local_188 + local_17c,
                 local_1a0[1] * fVar6 + fVar7 * local_190 + fVar1 * local_184 + local_178,
                 local_1a0[2] * fVar6 + fVar7 * local_18c + fVar1 * local_180 + local_174);
    FUN_0041ce10(local_108[0] * fVar3 + local_108[3] * fVar4 + local_f0 * fVar5,
                 local_108[1] * fVar3 + local_f8 * fVar4 + local_ec * fVar5,
                 local_108[2] * fVar3 + local_f4 * fVar4 + local_e8 * fVar5);
    FUN_004cb300(local_b4,local_9c,local_90);
    local_120 = *(undefined4 *)(param_1 + 0x5588);
    local_11c = *(undefined4 *)(param_1 + 0x558c);
    local_118 = *(undefined4 *)(param_1 + 0x5590);
    local_12c = *(undefined4 *)(iVar2 + 0x5580);
    local_128 = *(undefined4 *)(iVar2 + 0x5584);
    local_124 = *(undefined4 *)(iVar2 + 0x5588);
    uVar8 = FUN_004e2984(&local_168,param_1 + 0x5594,&local_15c,local_108);
    FUN_004cb300(local_c0,uVar8);
    uVar8 = FUN_004e2984(&local_168,iVar2 + 0x558c,&local_150,local_90);
    FUN_004cb300(local_a8,uVar8);
    local_144 = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    FUN_004042a0();
    FUN_004042a0();
    (*(code *)PTR_FUN_006793e8)
              (local_170,local_16c,local_cc,local_b4,&local_120,&local_12c,local_c0,local_a8,
               local_108,local_90,local_30,local_60,&local_15c,&local_150,&local_144,&local_138,
               local_114,local_d8);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x90))(&local_144,0);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x98))(&local_11c,0);
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x90))(&local_148,0);
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x98))(&local_f0,0);
  }
  return;
}

