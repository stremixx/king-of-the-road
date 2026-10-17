
void __thiscall FUN_00544d00(int param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float local_14c;
  float local_148;
  float local_144;
  float *local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined1 local_120 [36];
  undefined1 local_fc [12];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  pfVar1 = (float *)(param_1 + 0x2c4);
  FUN_005ab130(local_c0,pfVar1,param_1 + 0x204);
  fVar2 = *(float *)(param_1 + 0x2550);
  local_13c = fVar2 + param_2;
  iVar8 = *(int *)(param_1 + 0x28b4) * 0x5d0;
  local_130 = *(float *)(&DAT_006d133c + iVar8);
  local_124 = param_3[2];
  local_12c = *(float *)(&DAT_006d1334 + iVar8) * fVar2;
  local_128 = *(float *)(&DAT_006d1338 + iVar8) * fVar2;
  local_138 = local_12c + *param_3 * param_2;
  local_134 = param_3[1] * param_2 + local_128;
  local_14c = local_138 / local_13c;
  local_148 = local_134 / local_13c;
  local_144 = (fVar2 * local_130 + local_124 * param_2) / local_13c;
  *(float *)(param_1 + 0x19c) = local_13c;
  *(float *)(param_1 + 0xcd4) = local_13c;
  FUN_00541cb0();
  puVar3 = (undefined4 *)FUN_005ab330(local_f0,local_14c,local_148,local_144);
  puVar6 = (undefined4 *)(param_1 + 0x2f4);
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  pfVar4 = (float *)FUN_005aba00(local_f0,param_1 + 0x2f4);
  pfVar10 = pfVar1;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  iVar8 = *(int *)(param_1 + 0x28b4);
  iVar5 = iVar8 * 0x5d0;
  pfVar4 = (float *)(&DAT_006d1370 + iVar5);
  local_14c = *pfVar1 * *pfVar4 +
              *(float *)(param_1 + 0x2d0) * *(float *)(&DAT_006d1374 + iVar5) +
              *(float *)(param_1 + 0x2dc) * *(float *)(&DAT_006d1378 + iVar5) +
              *(float *)(param_1 + 0x2e8);
  local_148 = *(float *)(param_1 + 0x2c8) * *pfVar4 +
              *(float *)(param_1 + 0x2d4) * *(float *)(&DAT_006d1374 + iVar5) +
              *(float *)(param_1 + 0x2e0) * *(float *)(&DAT_006d1378 + iVar5) +
              *(float *)(param_1 + 0x2ec);
  local_144 = *(float *)(param_1 + 0x2cc) * *pfVar4 +
              *(float *)(param_1 + 0x2d8) * *(float *)(&DAT_006d1374 + iVar5) +
              *(float *)(param_1 + 0x2e4) * *(float *)(&DAT_006d1378 + iVar5) +
              *(float *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0xd7c) = local_14c;
  *(float *)(param_1 + 0xd80) = local_148;
  *(float *)(param_1 + 0xd84) = local_144;
  local_12c = *(float *)(param_1 + 0x4f84) * *pfVar1 +
              *(float *)(param_1 + 0x2d0) * *(float *)(param_1 + 0x4f88) +
              *(float *)(param_1 + 0x2dc) * *(float *)(param_1 + 0x4f8c) +
              *(float *)(param_1 + 0x2e8);
  local_128 = *(float *)(param_1 + 0x2d4) * *(float *)(param_1 + 0x4f88) +
              *(float *)(param_1 + 0x2c8) * *(float *)(param_1 + 0x4f84) +
              *(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x4f8c) +
              *(float *)(param_1 + 0x2ec);
  local_124 = *(float *)(param_1 + 0x2d8) * *(float *)(param_1 + 0x4f88) +
              *(float *)(param_1 + 0x2cc) * *(float *)(param_1 + 0x4f84) +
              *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x4f8c) +
              *(float *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0x4f6c) = local_12c;
  *(float *)(param_1 + 0x4f70) = local_128;
  *(float *)(param_1 + 0x4f74) = local_124;
  local_138 = *pfVar1 * *(float *)(param_1 + 0x4f90) +
              *(float *)(param_1 + 0x2d0) * *(float *)(param_1 + 0x4f94) +
              *(float *)(param_1 + 0x2dc) * *(float *)(param_1 + 0x4f98) +
              *(float *)(param_1 + 0x2e8);
  local_134 = *(float *)(param_1 + 0x2c8) * *(float *)(param_1 + 0x4f90) +
              *(float *)(param_1 + 0x2d4) * *(float *)(param_1 + 0x4f94) +
              *(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x4f98) +
              *(float *)(param_1 + 0x2ec);
  local_130 = *(float *)(param_1 + 0x2cc) * *(float *)(param_1 + 0x4f90) +
              *(float *)(param_1 + 0x2d8) * *(float *)(param_1 + 0x4f94) +
              *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x4f98) +
              *(float *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0x4f78) = local_138;
  *(float *)(param_1 + 0x4f7c) = local_134;
  *(float *)(param_1 + 0x4f80) = local_130;
  if (*(int *)(param_1 + 0x4f68) == 0) {
    *(float *)(param_1 + 0xd88) = local_138;
    *(float *)(param_1 + 0xd8c) = local_134;
    *(float *)(param_1 + 0xd90) = local_130;
  }
  else {
    *(float *)(param_1 + 0xd88) = local_12c;
    *(float *)(param_1 + 0xd8c) = local_128;
    *(float *)(param_1 + 0xd90) = local_124;
  }
  iVar5 = 0;
  if (0 < (int)(&DAT_00696d3c)[iVar8 * 0x25c]) {
    iVar9 = 0;
    local_140 = (float *)(param_1 + 0xf08);
    do {
      iVar8 = iVar8 * 0x970;
      FUN_0041ce10(*(float *)(&DAT_00696d40 + iVar8 + iVar9) * *pfVar1 +
                   *(float *)(&DAT_00696d44 + iVar8 + iVar9) * *(float *)(param_1 + 0x2d0) +
                   *(float *)(&DAT_00696d48 + iVar8 + iVar9) * *(float *)(param_1 + 0x2dc) +
                   *(float *)(param_1 + 0x2e8),
                   *(float *)(&DAT_00696d48 + iVar8 + iVar9) * *(float *)(param_1 + 0x2e0) +
                   *(float *)(&DAT_00696d40 + iVar8 + iVar9) * *(float *)(param_1 + 0x2c8) +
                   *(float *)(&DAT_00696d44 + iVar8 + iVar9) * *(float *)(param_1 + 0x2d4) +
                   *(float *)(param_1 + 0x2ec),
                   *(float *)(&DAT_00696d48 + iVar8 + iVar9) * *(float *)(param_1 + 0x2e4) +
                   *(float *)(&DAT_00696d40 + iVar8 + iVar9) * *(float *)(param_1 + 0x2cc) +
                   *(float *)(&DAT_00696d44 + iVar8 + iVar9) * *(float *)(param_1 + 0x2d8) +
                   *(float *)(param_1 + 0x2f0));
      pfVar4 = local_140 + 3;
      iVar5 = iVar5 + 1;
      *local_140 = local_14c;
      iVar9 = iVar9 + 0xc;
      local_140[1] = local_148;
      local_140[2] = local_144;
      iVar8 = *(int *)(param_1 + 0x28b4);
      local_140 = pfVar4;
    } while (iVar5 < (int)(&DAT_00696d3c)[iVar8 * 0x25c]);
  }
  iVar8 = *(int *)(param_1 + 0x28b4);
  iVar5 = 0;
  if (0 < (int)(&DAT_00696b30)[iVar8 * 0x25c]) {
    local_140 = (float *)(param_1 + 0xe18);
    iVar9 = 0;
    do {
      pfVar4 = (float *)FUN_0043f690(&local_14c,(int)&DAT_00696b38 + iVar8 * 0x970 + iVar9,pfVar1);
      iVar5 = iVar5 + 1;
      *local_140 = *pfVar4;
      iVar9 = iVar9 + 0xc;
      local_140[1] = pfVar4[1];
      local_140[2] = pfVar4[2];
      local_140 = local_140 + 3;
      iVar8 = *(int *)(param_1 + 0x28b4);
    } while (iVar5 < (int)(&DAT_00696b30)[iVar8 * 0x25c]);
  }
  iVar8 = *(int *)(param_1 + 0x28b4);
  iVar5 = 0;
  if (0 < (int)(&DAT_00696b34)[iVar8 * 0x25c]) {
    iVar9 = 0;
    do {
      puVar6 = (undefined4 *)FUN_0043f690(&local_14c,&DAT_00696c28 + iVar8 * 0x970 + iVar9,pfVar1);
      iVar9 = iVar9 + 0xc;
      iVar8 = (&DAT_00696b30)[*(int *)(param_1 + 0x28b4) * 0x25c] + iVar5;
      iVar5 = iVar5 + 1;
      puVar3 = (undefined4 *)(param_1 + 0xe18 + iVar8 * 0xc);
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3[2] = puVar6[2];
      iVar8 = *(int *)(param_1 + 0x28b4);
    } while (iVar5 < (int)(&DAT_00696b34)[iVar8 * 0x25c]);
  }
  iVar8 = 0;
  if (*(int *)(param_1 + 0x28b8) != *(int *)(param_1 + 0x28bc) &&
      -1 < *(int *)(param_1 + 0x28b8) - *(int *)(param_1 + 0x28bc)) {
    puVar3 = (undefined4 *)(param_1 + 0x29d8);
    do {
      puVar6 = (undefined4 *)FUN_0043f690(&local_14c,puVar3 + -0x18,pfVar1);
      iVar8 = iVar8 + 1;
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3[2] = puVar6[2];
      puVar3 = puVar3 + 3;
    } while (iVar8 < *(int *)(param_1 + 0x28b8) - *(int *)(param_1 + 0x28bc));
  }
  FUN_0058c9b0();
  FUN_005419b0();
  if (*(int *)(param_1 + 0x5460) != 0) {
    FUN_004eddc0(local_13c,param_1 + 0x2f4,param_1 + 0x1a4);
  }
  FUN_005ab130(local_120,param_1 + 0x2f4,local_c0);
  iVar8 = FUN_004e5437(*(undefined4 *)(param_1 + 0x330),param_1 + 0x228,local_fc);
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x330);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(1);
  }
  FUN_0054bf30(iVar8,local_120);
  iVar8 = *(int *)(param_1 + 0x28b4);
  uVar7 = FUN_005ab330(local_f0,(&DAT_00696954)[iVar8 * 0x25c],(&DAT_00696958)[iVar8 * 0x25c],
                       (&DAT_0069695c)[iVar8 * 0x25c],pfVar1);
  uVar7 = FUN_005ab5d0(auStack_90,(&DAT_00696960)[*(int *)(param_1 + 0x28b4) * 0x25c],uVar7);
  uVar7 = FUN_005ab130(auStack_60,uVar7);
  puVar3 = (undefined4 *)FUN_005ab130(auStack_30,uVar7);
  iVar8 = *(int *)(param_1 + 0x184);
  puVar6 = (undefined4 *)(param_1 + 0x2734);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar8 == 0) {
    FUN_00545550();
  }
  return;
}

