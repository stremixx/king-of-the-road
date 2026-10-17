
void __fastcall FUN_004f60e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 auStack_1b0 [12];
  undefined4 *puStack_180;
  undefined4 *puStack_17c;
  undefined4 *puStack_178;
  float *pfStack_174;
  float *pfStack_170;
  float *pfStack_16c;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [48];
  undefined1 local_d8 [104];
  undefined4 local_70;
  
  pfStack_16c = (float *)&local_110;
  pfStack_170 = (float *)&local_118;
  pfStack_174 = (float *)&local_120;
  puStack_178 = &local_128;
  puStack_17c = &local_130;
  puStack_180 = &local_138;
  puVar5 = (undefined4 *)(param_1 + 0x10);
  puVar7 = auStack_1b0;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_005de000();
  puVar5 = (undefined4 *)
           FUN_005da010(local_108,local_138,local_134,local_130,local_12c,local_128,local_124,
                        local_120,local_11c,local_118,local_114,local_110,local_10c);
  puVar7 = (undefined4 *)(param_1 + 0x10);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  pfStack_16c = (float *)0x4f61ad;
  FUN_005eebf0();
  puStack_178 = *(undefined4 **)(param_1 + 0x1a10);
  pfStack_16c = (float *)local_d8;
  puStack_17c = (undefined4 *)0x4f61cc;
  pfStack_174 = (float *)(param_1 + 0x8f4);
  pfStack_170 = (float *)(param_1 + 0x34);
  iVar6 = FUN_004e53b2();
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0xf4) = local_70;
  }
  if (*(char *)(param_1 + 0x19b4) == '\0') {
    fVar1 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x8f4);
    fVar4 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x8f8);
    fVar3 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x8fc);
    fVar2 = fVar3 * *(float *)(param_1 + 0xd4) - fVar4 * *(float *)(param_1 + 0xd8);
    fVar3 = fVar1 * *(float *)(param_1 + 0xd8) - fVar3 * *(float *)(param_1 + 0xd0);
    fVar1 = fVar4 * *(float *)(param_1 + 0xd0) - fVar1 * *(float *)(param_1 + 0xd4);
    local_154 = fVar3 * *(float *)(param_1 + 0xd8) - fVar1 * *(float *)(param_1 + 0xd4);
    local_150 = fVar1 * *(float *)(param_1 + 0xd0) - fVar2 * *(float *)(param_1 + 0xd8);
    pfStack_16c = &local_154;
    local_14c = fVar2 * *(float *)(param_1 + 0xd4) - fVar3 * *(float *)(param_1 + 0xd0);
    pfStack_170 = (float *)0x4f62a6;
    local_144 = local_154;
    local_140 = local_150;
    local_13c = local_14c;
    fVar8 = (float10)FUN_005aabc0();
    pfStack_16c = (float *)(float)fVar8;
    *(double *)(param_1 + 0xee0) = (double)(fVar8 + (float10)*(double *)(param_1 + 0xee0));
    pfStack_170 = (float *)0x4f62c9;
    local_148 = (float)pfStack_16c;
    FUN_004eaf60();
  }
  pfStack_16c = (float *)0x4f62d0;
  FUN_004f0560();
  pfStack_16c = (float *)&local_138;
  pfStack_170 = (float *)0x4f62dc;
  FUN_004f63f0();
  pfStack_16c = (float *)0x4f62e3;
  iVar6 = FUN_004ef880();
  if (iVar6 != 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      puVar5 = (undefined4 *)(param_1 + 0xdd8);
      do {
        iVar6 = iVar6 + 1;
        *puVar5 = puVar5[0x471];
        puVar5 = puVar5 + 1;
      } while (iVar6 < *(int *)(param_1 + 0xdd4));
    }
    *(undefined4 *)(param_1 + 0x3344) = 1;
    return;
  }
  pfStack_16c = (float *)0x4f6328;
  FUN_004843e0();
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x27c0)) {
    puVar5 = (undefined4 *)(param_1 + 0x2840);
    do {
      iVar6 = iVar6 + 1;
      puVar5[-0xf] = DAT_007015b0;
      puVar5[-0xe] = DAT_007015b4;
      puVar5[-0xd] = DAT_007015b8;
      *puVar5 = DAT_007015b0;
      puVar5[1] = DAT_007015b4;
      puVar5[2] = DAT_007015b8;
      puVar5 = puVar5 + 3;
    } while (iVar6 < *(int *)(param_1 + 0x27c0));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x27c4)) {
    puVar5 = (undefined4 *)(param_1 + 0x28b8);
    do {
      iVar6 = iVar6 + 1;
      puVar5[-0xf] = DAT_007015b0;
      puVar5[-0xe] = DAT_007015b4;
      puVar5[-0xd] = DAT_007015b8;
      *puVar5 = DAT_007015b0;
      puVar5[1] = DAT_007015b4;
      puVar5[2] = DAT_007015b8;
      puVar5 = puVar5 + 3;
    } while (iVar6 < *(int *)(param_1 + 0x27c4));
  }
  *(undefined4 *)(param_1 + 0x27c0) = 0;
  *(undefined4 *)(param_1 + 0x27c4) = 0;
  return;
}

