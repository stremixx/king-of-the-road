
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00506360(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  int local_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float local_164;
  float local_160;
  float local_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined1 auStack_124 [12];
  undefined4 local_118;
  undefined4 local_114 [15];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int *piStack_b0;
  undefined4 local_a4;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [48];
  
  FUN_005eebf0();
  local_198 = *(float *)(param_1 + 0x34);
  puVar6 = &DAT_00701550;
  puVar8 = local_114;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_198 = local_198 - *(float *)(param_1 + 0x8f4);
  pfVar1 = (float *)(param_1 + 0x34);
  local_194 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x8f8);
  local_190 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x8fc);
  local_18c = *pfVar1;
  local_164 = local_198 + local_18c;
  local_188 = *(float *)(param_1 + 0x38);
  local_184 = *(float *)(param_1 + 0x3c);
  local_160 = local_194 + local_188;
  local_cc = *pfVar1;
  local_15c = local_190 + local_184;
  local_c8 = *(float *)(param_1 + 0x38);
  local_c4 = *(float *)(param_1 + 0x3c);
  local_118 = *(undefined4 *)(param_1 + 0x1a0c);
  local_a4 = 0;
  local_174 = 0;
  local_180 = local_198;
  local_17c = local_194;
  local_178 = local_190;
  local_c0 = local_164;
  local_bc = local_160;
  local_b8 = local_15c;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x1a10);
    uStack_14c = (**(code **)(*piVar2 + 0x34))(6,&local_118);
    if (((uStack_14c & 2) != 0) && (piStack_b0 == (int *)0x0)) {
      *(undefined4 *)(param_1 + 0x3c54) = 1;
      piStack_b0 = piVar2;
    }
    if (((byte)uStack_14c & 1) != 1) break;
    fVar9 = (float10)FUN_005aabc0(&local_198);
    FUN_0041ce10((float)((float10)fStack_d8 * fVar9),(float)((float10)fStack_d4 * fVar9),
                 (float)((float10)fStack_d0 * fVar9));
    fVar3 = (float)local_174;
    FUN_0041ce10(local_164 * fVar3,local_160 * fVar3,local_15c * fVar3);
    FUN_0041ce10(fStack_130 * _DAT_0064b324,fStack_12c * _DAT_0064b324,fStack_128 * _DAT_0064b324);
    uStack_154 = uStack_144;
    fStack_158 = fStack_148;
    uStack_150 = uStack_140;
    FUN_0041ce10(fStack_d4 * local_190 - fStack_d0 * local_194,
                 fStack_d0 * local_198 - local_190 * fStack_d8,
                 local_194 * fStack_d8 - fStack_d4 * local_198);
    fStack_170 = fStack_13c;
    uStack_16c = uStack_138;
    uStack_168 = uStack_134;
    uVar4 = FUN_004bde70(auStack_3c,&fStack_170,&fStack_d8,&fStack_158);
    pfVar5 = (float *)FUN_004bddd0(auStack_48,uVar4);
    local_198 = *pfVar5;
    local_194 = pfVar5[1];
    local_190 = pfVar5[2];
    local_cc = local_18c;
    local_c8 = local_188;
    local_c4 = local_184;
    pfVar5 = (float *)FUN_004bddd0(auStack_124,&local_18c,&local_198);
    local_c0 = *pfVar5;
    local_bc = pfVar5[1];
    local_b8 = pfVar5[2];
    local_174 = local_174 + 1;
    if (2 < local_174) {
      *pfVar1 = *(float *)(param_1 + 0x8f4);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x8f8);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x8fc);
      puVar6 = (undefined4 *)FUN_005aba00(auStack_30,param_1 + 0x10);
      puVar8 = (undefined4 *)(param_1 + 0x900);
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      return 0;
    }
  }
  FUN_0041ce10(local_18c + local_198,local_194 + local_188,local_190 + local_184);
  *pfVar1 = fStack_170;
  *(undefined4 *)(param_1 + 0x38) = uStack_16c;
  *(undefined4 *)(param_1 + 0x3c) = uStack_168;
  FUN_0041ce10(local_198 - local_180,local_194 - local_17c,local_190 - local_178);
  fStack_158 = fStack_170;
  uStack_154 = uStack_16c;
  uStack_150 = uStack_168;
  FUN_005aae00(auStack_124,&fStack_158);
  puVar6 = (undefined4 *)FUN_005aba00(auStack_30,param_1 + 0x10);
  puVar8 = (undefined4 *)(param_1 + 0x900);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)FUN_005aba00(auStack_30,param_1 + 0x8d0);
  puVar8 = (undefined4 *)(param_1 + 0x930);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((uStack_14c & 2) != 0) {
    *(int **)(param_1 + 0xf4) = piStack_b0;
  }
  return 1;
}

