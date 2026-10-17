
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fa630(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_19c [12];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined1 local_160 [48];
  undefined1 local_130 [48];
  undefined1 local_100 [48];
  undefined1 local_d0 [104];
  undefined4 local_68;
  
  puVar7 = &DAT_00701550;
  puVar10 = (undefined4 *)(param_1 + 0x2244);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar7 = &DAT_00701550;
  puVar10 = (undefined4 *)(param_1 + 0x2274);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  pfVar1 = (float *)(param_1 + 0x2304);
  *(undefined4 *)(param_1 + 0x2334) = *(undefined4 *)(param_1 + 0xa08);
  *(undefined4 *)(param_1 + 0x2338) = *(undefined4 *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0x233c) = *(undefined4 *)(param_1 + 0xa10);
  local_184 = *(float *)(param_1 + 0xc54);
  pfVar8 = (float *)(param_1 + 0x930);
  pfVar5 = pfVar1;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar5 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar5 = pfVar5 + 1;
  }
  puVar7 = (undefined4 *)(param_1 + 0x8d0);
  puVar10 = (undefined4 *)(param_1 + 0x22a4);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  local_180 = *(float *)(param_1 + 0xc58);
  local_1a8 = DAT_007015b0;
  local_17c = *(float *)(param_1 + 0xc5c);
  iVar9 = 0;
  local_1a4 = DAT_007015b4;
  local_1a0 = DAT_007015b8;
  if (0 < *(int *)(param_1 + 0x27c0)) {
    pfVar8 = (float *)(param_1 + 0x280c);
    do {
      local_190 = pfVar8[0xd] + pfVar8[-2];
      local_18c = pfVar8[0xe] + pfVar8[-1];
      local_188 = *pfVar8 + pfVar8[0xf];
      local_16c = local_190;
      local_168 = local_18c;
      local_164 = local_188;
      FUN_005aae00(local_19c,&local_190);
      fVar2 = pfVar8[-1] * *(float *)(param_1 + 0x2310) +
              pfVar8[-2] * *pfVar1 + *(float *)(param_1 + 0x231c) * *pfVar8;
      fVar4 = pfVar8[-1] * *(float *)(param_1 + 0x2314) +
              *pfVar8 * *(float *)(param_1 + 0x2320) + *(float *)(param_1 + 0x2308) * pfVar8[-2];
      fVar3 = pfVar8[-1] * *(float *)(param_1 + 0x2318) +
              *pfVar8 * *(float *)(param_1 + 0x2324) + *(float *)(param_1 + 0x230c) * pfVar8[-2];
      local_1b4 = fVar3 * pfVar8[-0x10] - fVar4 * pfVar8[-0xf];
      local_1b0 = fVar2 * pfVar8[-0xf] - fVar3 * pfVar8[-0x11];
      local_1a8 = local_1a8 + local_1b4;
      local_1a4 = local_1b0 + local_1a4;
      local_1a0 = (fVar4 * pfVar8[-0x11] - fVar2 * pfVar8[-0x10]) + local_1a0;
      iVar9 = iVar9 + 1;
      pfVar8 = pfVar8 + 3;
    } while (iVar9 < *(int *)(param_1 + 0x27c0));
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x27c4)) {
    pfVar8 = (float *)(param_1 + 0x28bc);
    do {
      local_1b4 = pfVar8[-0x10] + pfVar8[-1];
      local_1b0 = pfVar8[-0xf] + *pfVar8;
      local_1ac = pfVar8[-0xe] + pfVar8[1];
      FUN_005aae00(local_19c,&local_1b4);
      iVar9 = iVar9 + 1;
      pfVar8 = pfVar8 + 3;
    } while (iVar9 < *(int *)(param_1 + 0x27c4));
  }
  local_1ac = param_2 / *(float *)(param_1 + 0x2640);
  local_1b4 = local_184 * local_1ac;
  local_1b0 = local_180 * local_1ac;
  local_1ac = local_17c * local_1ac;
  FUN_005aae00(local_19c,&local_1b4);
  pfVar8 = (float *)(param_1 + 0x234c);
  *pfVar8 = *(float *)(param_1 + 0x4c) * *pfVar1 +
            *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0x50) +
            *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x2350) =
       *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0x50) +
       *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0x4c) +
       *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0x54);
  local_1b4 = local_1a8 * param_2;
  *(float *)(param_1 + 0x2354) =
       *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0x50) +
       *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0x4c) +
       *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0x54);
  local_1b0 = local_1a4 * param_2;
  local_1ac = local_1a0 * param_2;
  FUN_005aae00(local_19c,&local_1b4);
  pfVar5 = (float *)FUN_004e29c2(local_19c,pfVar8,param_1 + 0x1f48);
  *(float *)(param_1 + 0x2358) = *pfVar5;
  *(float *)(param_1 + 0x235c) = pfVar5[1];
  *(float *)(param_1 + 0x2360) = pfVar5[2];
  FUN_0041ce10(*pfVar8 * *(float *)(param_1 + 0x22a4) +
               *(float *)(param_1 + 0x22b0) * *(float *)(param_1 + 0x2350) +
               *(float *)(param_1 + 0x22bc) * *(float *)(param_1 + 0x2354),
               *(float *)(param_1 + 0x22b4) * *(float *)(param_1 + 0x2350) +
               *(float *)(param_1 + 0x22a8) * *pfVar8 +
               *(float *)(param_1 + 0x22c0) * *(float *)(param_1 + 0x2354),
               *(float *)(param_1 + 0x22b8) * *(float *)(param_1 + 0x2350) +
               *(float *)(param_1 + 0x22ac) * *pfVar8 +
               *(float *)(param_1 + 0x22c4) * *(float *)(param_1 + 0x2354));
  *(float *)(param_1 + 0x2340) = local_1b4;
  *(float *)(param_1 + 0x2344) = local_1b0;
  *(float *)(param_1 + 0x2348) = local_1ac;
  FUN_0041ce10(*(float *)(param_1 + 0x2364) * _DAT_0064b248,
               *(float *)(param_1 + 0x2368) * _DAT_0064b248,
               *(float *)(param_1 + 0x236c) * _DAT_0064b248);
  FUN_0041ce10(*(float *)(param_1 + 0x2358) - local_1b4,*(float *)(param_1 + 0x235c) - local_1b0,
               *(float *)(param_1 + 0x2360) - local_1ac);
  local_178 = local_190;
  local_174 = local_18c;
  local_170 = local_188;
  uVar6 = FUN_004bdd80(local_19c,&local_178,param_2);
  fVar11 = (float10)FUN_005aabc0(uVar6);
  puVar7 = (undefined4 *)
           FUN_005ab380(local_100,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_178,local_174,
                        local_170,(float)fVar11);
  puVar10 = (undefined4 *)(param_1 + 0x25e4);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar7 = (undefined4 *)FUN_004bdd80(local_19c,param_1 + 0x2334,param_2);
  FUN_005ab330(local_160,*puVar7,puVar7[1],puVar7[2]);
  puVar7 = (undefined4 *)(param_1 + 0x22a4);
  puVar10 = (undefined4 *)(param_1 + 0x22d4);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar6 = FUN_005ab130(local_100,param_1 + 0x25e4,(undefined4 *)(param_1 + 0x22d4),local_160);
  puVar7 = (undefined4 *)FUN_005ab130(local_130,uVar6);
  puVar10 = (undefined4 *)(param_1 + 0x22a4);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  pfVar8 = (float *)FUN_005aba00(local_130,(undefined4 *)(param_1 + 0x22a4));
  pfVar5 = pfVar1;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar5 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar5 = pfVar5 + 1;
  }
  puVar7 = (undefined4 *)FUN_004cb300(local_19c,param_1 + 0xd0,pfVar1);
  *(undefined4 *)(param_1 + 0x2598) = *puVar7;
  *(undefined4 *)(param_1 + 0x259c) = puVar7[1];
  *(undefined4 *)(param_1 + 0x25a0) = puVar7[2];
  puVar7 = (undefined4 *)FUN_004cb300(local_19c,param_1 + 0x2340,pfVar1);
  *(undefined4 *)(param_1 + 0x234c) = *puVar7;
  *(undefined4 *)(param_1 + 0x2350) = puVar7[1];
  *(undefined4 *)(param_1 + 0x2354) = puVar7[2];
  puVar7 = (undefined4 *)FUN_004e29c2(local_19c,(undefined4 *)(param_1 + 0x234c),param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x2358) = *puVar7;
  *(undefined4 *)(param_1 + 0x235c) = puVar7[1];
  *(undefined4 *)(param_1 + 0x2360) = puVar7[2];
  *(float *)(param_1 + 0x2364) = DAT_007015b0;
  *(float *)(param_1 + 0x2368) = DAT_007015b4;
  *(float *)(param_1 + 0x236c) = DAT_007015b8;
  FUN_004f1650(param_1 + 0x2334);
  FUN_004f16a0(param_1 + 0x2340);
  puVar7 = (undefined4 *)(param_1 + 0x22a4);
  puVar10 = (undefined4 *)(param_1 + 0x10);
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_005eebf0();
  iVar9 = FUN_004e53b2(*(undefined4 *)(param_1 + 0x1a10),param_1 + 0x8f4,param_1 + 0x34,local_d0);
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0xf4) = local_68;
  }
  FUN_004f04a0();
  FUN_004effa0();
  FUN_004f0060();
  return;
}

