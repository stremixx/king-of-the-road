
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f1020(int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  short *psVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 auStack_280 [8];
  undefined4 uStack_260;
  undefined1 *puStack_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 *local_250;
  undefined4 *local_24c;
  undefined4 *local_248;
  float *local_244;
  float *local_240;
  float *local_23c;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  int local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_168 [9];
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [36];
  undefined1 local_114 [12];
  undefined1 local_108 [48];
  undefined1 local_d8 [52];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  
  local_23c = (float *)0x4f1036;
  FUN_004efcd0();
  iVar7 = 1;
  *(undefined4 *)(param_1 + 0xc90) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xc94) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xc98) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xcd8) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xcdc) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xce0) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xc9c) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xca0) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xca4) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xce4) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xce8) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xcec) = DAT_007015b8;
  while( true ) {
    local_208 = iVar7 * iVar7 * iVar7 + 1;
    local_204 = 0.0;
    local_200 = 0.0;
    fVar1 = (float)local_208;
    local_1fc = 0.0;
    local_22c = 0.0;
    local_228 = 0.0;
    local_224 = 0.0;
    local_1f8 = fVar1 * DAT_00701590;
    local_1f4 = fVar1 * DAT_00701594;
    local_220 = local_1f8 + (float)param_3[9];
    local_21c = local_1f4 + (float)param_3[10];
    local_218 = fVar1 * DAT_00701598 + (float)param_3[0xb];
    local_1ec = fVar1 * DAT_00701590;
    local_1e8 = fVar1 * DAT_00701594;
    local_214 = (float)param_3[9] - local_1ec;
    local_210 = (float)param_3[10] - local_1e8;
    local_20c = (float)param_3[0xb] - fVar1 * DAT_00701598;
    local_23c = (float *)0x4f11b4;
    local_1e0 = local_214;
    local_1dc = local_210;
    local_1d8 = local_20c;
    local_1d4 = local_220;
    local_1d0 = local_21c;
    local_1cc = local_218;
    FUN_005eebf0();
    local_23c = (float *)local_d8;
    local_240 = &local_1e0;
    local_244 = &local_1d4;
    local_24c = *(undefined4 **)(param_1 + 0x29d4);
    local_248 = (undefined4 *)param_2;
    local_250 = (undefined4 *)0x4f11d6;
    local_208 = FUN_004e5eb1();
    if (local_208 != 0) break;
    iVar7 = iVar7 + 1;
    if (3 < iVar7) goto LAB_004f14c3;
  }
  local_1fc = local_9c;
  local_224 = local_90;
  local_204 = local_a4;
  puVar5 = param_3;
  puVar8 = local_168;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  local_22c = local_98;
  local_200 = local_a0;
  local_240 = &local_198;
  local_23c = (float *)param_3;
  local_228 = local_94;
  local_244 = (float *)0x4f1251;
  FUN_005aba00();
  fVar1 = _DAT_0067338c * *(float *)(param_1 + 0x1f9c) +
          (*(float *)(param_1 + 0x1b70) - *(float *)(param_1 + 0x1cc4));
  local_1ec = local_22c * fVar1;
  local_1e8 = local_228 * fVar1;
  local_1f8 = local_1ec + local_204;
  local_1f4 = local_1e8 + local_200;
  local_1f0 = fVar1 * local_224 + local_1fc;
  fVar1 = local_198 * local_22c + local_180 * local_224 + local_18c * local_228;
  fVar2 = local_194 * local_22c + local_17c * local_224 + local_188 * local_228;
  fVar3 = local_190 * local_22c + local_178 * local_224 + local_184 * local_228;
  local_220 = fVar3 * DAT_00701594 - fVar2 * DAT_00701598;
  local_23c = (float *)param_3;
  local_240 = &local_220;
  local_21c = fVar1 * DAT_00701598 - fVar3 * DAT_00701590;
  local_218 = fVar2 * DAT_00701590 - fVar1 * DAT_00701594;
  local_244 = (float *)0x4f1378;
  local_214 = local_220;
  local_210 = local_21c;
  local_20c = local_218;
  fVar9 = (float10)FUN_005aabc0();
  local_240 = (float *)(float)fVar9;
  local_24c = (undefined4 *)local_220;
  local_248 = (undefined4 *)local_21c;
  local_244 = (float *)local_218;
  local_258 = DAT_007015b0;
  local_254 = DAT_007015b4;
  puStack_25c = local_138;
  local_250 = (undefined4 *)DAT_007015b8;
  uStack_260 = 0x4f13c0;
  local_240 = (float *)FUN_005ab380();
  local_244 = (float *)local_108;
  local_248 = (undefined4 *)0x4f13d1;
  puVar5 = (undefined4 *)FUN_005ab130();
  puVar8 = local_168;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  local_140 = local_1f4;
  local_144 = local_1f8;
  local_23c = (float *)local_168;
  local_13c = local_1f0;
  local_240 = (float *)param_2;
  local_244 = (float *)0x4f1418;
  FUN_004f0670();
  local_23c = (float *)0x4f141f;
  FUN_004f0080();
  local_23c = &local_22c;
  local_240 = &local_204;
  local_244 = (float *)0x1;
  local_248 = (undefined4 *)0x4f1432;
  FUN_004f1820();
  local_23c = (float *)(param_1 + 0x10);
  local_240 = (float *)0x4f143d;
  FUN_00504db0();
  iVar7 = *(int *)(param_1 + 0xdd4);
  *(undefined1 *)(param_1 + 0x19ba) = 0;
  if (*(int *)(param_1 + 0x2778) == 2) {
    iVar7 = iVar7 + -1;
  }
  if (0 < iVar7) {
    psVar6 = (short *)(param_1 + 0x19a4);
    do {
      if ((*(char *)(param_1 + 0x19ba) == '\0') && (*psVar6 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      psVar6 = psVar6 + 1;
      iVar7 = iVar7 + -1;
      *(undefined1 *)(param_1 + 0x19ba) = uVar4;
    } while (iVar7 != 0);
  }
  local_23c = (float *)local_138;
  local_240 = (float *)0x4f1494;
  FUN_004fc290();
  local_244 = *(float **)(param_1 + 0xf4);
  local_23c = (float *)local_114;
  local_240 = (float *)(param_1 + 0x34);
  local_248 = (undefined4 *)0x4f14ac;
  local_240 = (float *)FUN_004e5437();
  local_23c = (float *)local_138;
  local_244 = (float *)0x4f14bf;
  FUN_004f0670();
LAB_004f14c3:
  if (local_208 == 0) {
    local_23c = (float *)param_3;
    local_240 = (float *)param_2;
    local_244 = (float *)0x4f14da;
    FUN_004f0670();
    fVar1 = (_DAT_0067338c * *(float *)(param_1 + 0x1f9c) + *(float *)(param_1 + 0x1b70)) -
            *(float *)(param_1 + 0x1cc4);
    local_23c = (float *)(fVar1 * DAT_00701598);
    local_240 = (float *)(fVar1 * DAT_00701594);
    local_244 = (float *)(fVar1 * DAT_00701590);
    local_248 = (undefined4 *)0x4f151d;
    FUN_0041ce10();
    local_1e0 = local_1d4;
    local_1dc = local_1d0;
    local_23c = &local_1e0;
    local_1d8 = local_1cc;
    local_240 = (float *)(param_1 + 0x34);
    local_244 = &local_1ec;
    local_248 = (undefined4 *)0x4f1548;
    FUN_004bde20();
    local_240 = &local_1ec;
    local_23c = &DAT_00701590;
    local_244 = (float *)0x1;
    local_248 = (undefined4 *)0x4f155e;
    FUN_004f1820();
  }
  local_23c = (float *)0x4f1565;
  FUN_004f0080();
  local_23c = (float *)0x4f156c;
  FUN_004f04a0();
  local_23c = (float *)&local_1a0;
  local_240 = (float *)&local_1a8;
  local_244 = (float *)&local_1b0;
  local_248 = &local_1b8;
  local_24c = &local_1c0;
  local_250 = &local_1c8;
  puVar5 = (undefined4 *)(param_1 + 0x10);
  puVar8 = auStack_280;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_005de000();
  puVar5 = (undefined4 *)
           FUN_005da010(local_108,local_1c8,local_1c4,local_1c0,local_1bc,local_1b8,local_1b4,
                        local_1b0,local_1ac,local_1a8,local_1a4,local_1a0,local_19c);
  puVar8 = (undefined4 *)(param_1 + 0x10);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  local_23c = (float *)&local_1c8;
  local_240 = (float *)0x4f1638;
  FUN_004f63f0();
  return;
}

