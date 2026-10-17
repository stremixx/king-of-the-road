
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fc290(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  float afStack_208 [4];
  undefined4 uStack_1f8;
  undefined1 *puStack_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float *local_1d0;
  float *local_1cc;
  float *local_1c8;
  float *local_1c4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  undefined8 local_198;
  float local_190;
  float local_188;
  float *local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_134 [12];
  undefined1 local_128 [12];
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined1 local_104 [8];
  undefined1 local_fc [8];
  undefined1 local_f4 [32];
  float local_d4 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  local_184 = (float *)(param_1 + 0x10);
  pfVar6 = local_184;
  pfVar8 = local_d4;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar8 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_17c = *(float *)(param_1 + 0xd0);
  local_178 = *(float *)(param_1 + 0xd4);
  local_174 = *(float *)(param_1 + 0xd8);
  local_158 = *(float *)(param_1 + 0x2214);
  local_154 = *(float *)(param_1 + 0x2218);
  local_150 = *(float *)(param_1 + 0x221c);
  local_1c4 = (float *)0x4fc2f5;
  fVar10 = (float10)FUN_004e1fd9();
  local_14c = (float)fVar10;
  if (*(char *)(param_1 + 0x19b4) == '\0') {
    if ((*(char *)(param_1 + 0x19ba) == '\0') || (*(float *)(param_1 + 0xe38) < _DAT_0064b240)) {
      local_17c = *(float *)(param_1 + 0xd0);
      local_178 = *(float *)(param_1 + 0xd4);
      local_174 = *(float *)(param_1 + 0xd8);
      local_1c4 = *(float **)(param_1 + 0x2640);
      local_1c8 = (float *)(param_1 + 0xc78);
      local_1cc = (float *)(param_1 + 0xc6c);
      local_1d0 = (float *)local_a4;
      local_1d8 = (double)CONCAT44(0x4fd1b5,(undefined4)local_1d8);
      local_1c8 = (float *)FUN_004bddd0();
      local_1cc = (float *)local_110;
      local_1d0 = (float *)0x4fd1c6;
      local_1c4 = (float *)FUN_004e1030();
      local_1c8 = *(float **)(param_1 + 0xd48);
      local_1d0 = (float *)local_11c;
      local_1cc = &local_17c;
      local_1d8 = (double)CONCAT44(0x4fd1e3,(undefined4)local_1d8);
      uVar7 = FUN_004bdd80();
      local_1d8 = (double)CONCAT44(uVar7,param_1 + 0xd40);
      local_1e0 = (double)CONCAT44(local_128,0x4fd1f8);
      local_1c8 = (float *)FUN_004bde20();
      local_1cc = (float *)local_134;
      local_1d0 = (float *)0x4fd209;
      FUN_004bde20();
      local_1c4 = &local_17c;
      local_1c8 = (float *)local_134;
      local_1cc = &local_17c;
      local_1d0 = (float *)local_128;
      local_1d8 = (double)CONCAT44(0x4fd22b,(undefined4)local_1d8);
      local_1c8 = (float *)FUN_004bde70();
      local_1cc = &local_1a4;
      local_1d0 = (float *)0x4fd239;
      FUN_004bde70();
      pfVar6 = (float *)(param_1 + 0xa38);
      local_1b0 = *pfVar6;
      local_1d0 = &local_1a4;
      local_1ac = *(float *)(param_1 + 0xa3c);
      local_1a8 = *(float *)(param_1 + 0xa40);
      local_1d8 = (double)CONCAT44(0x4fd25f,(undefined4)local_1d8);
      fVar10 = (float10)FUN_005aabc0();
      local_1c4 = (float *)(float)fVar10;
      local_160 = (float)(fVar10 * (float10)_DAT_0064ca10);
      if ((float10)_DAT_0064ca08 < fVar10 * (float10)_DAT_0064ca10) {
        local_160 = 0.0435;
      }
      local_15c = (float)local_1c4;
      if ((float10)_DAT_0064a590 < fVar10) {
        local_1c8 = &local_1a4;
        local_1cc = (float *)local_128;
        local_1d0 = (float *)0x4fd2ab;
        pfVar8 = (float *)FUN_004e1030();
        local_1b0 = *pfVar8;
        local_1ac = pfVar8[1];
        local_1a8 = pfVar8[2];
      }
      local_1c4 = &local_1b0;
      local_1cc = (float *)0x4fd2cd;
      local_1c8 = pfVar6;
      fVar10 = (float10)FUN_004e1080();
      pfVar8 = local_184;
      local_1c4 = &local_1b0;
      local_1c8 = &local_17c;
      local_1cc = local_184;
      local_1d8._4_4_ = local_128;
      local_1d0 = &DAT_007015a0;
      local_180 = (float)(fVar10 * (float10)local_160 * (float10)_DAT_0064a830);
      local_1d8._0_4_ = 0x4fd2ff;
      uVar7 = FUN_004cb300();
      local_1d8 = (double)CONCAT44(local_1d8._4_4_,uVar7);
      local_1e0 = (double)CONCAT44(&local_17c,local_11c);
      local_1e8 = (double)CONCAT44(0x4fd312,(undefined4)local_1e8);
      local_1cc = (float *)FUN_004bde70();
      local_1d0 = (float *)local_110;
      local_1d8 = (double)CONCAT44(0x4fd323,(undefined4)local_1d8);
      local_1c8 = (float *)FUN_004bde70();
      local_1cc = (float *)0x4fd32c;
      fVar10 = (float10)FUN_004e1080();
      local_184 = (float *)(float)(fVar10 * (float10)local_160);
      local_1cc = (float *)0x4fd33f;
      fVar10 = (float10)FUN_0061e4b0();
      local_1cc = &local_17c;
      local_15c = (float)-fVar10;
      local_1d8 = (double)CONCAT44(local_128,0x4fd358);
      local_1d0 = pfVar6;
      FUN_004bde70();
      local_1c4 = (float *)0x4fd363;
      fVar10 = (float10)FUN_0061e4b0();
      local_160 = (float)-fVar10;
      fVar10 = (float10)fpatan((float10)*(float *)(param_1 + 0xa2c),
                               (float10)*(float *)(param_1 + 0xa30));
      local_1c4 = (float *)&local_148;
      local_1c8 = (float *)&local_198;
      local_1cc = &local_170;
      local_1d0 = (float *)local_f4;
      local_1d8 = (double)CONCAT44(local_fc,local_104);
      pfVar6 = afStack_208;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar6 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar6 = pfVar6 + 1;
      }
      local_188 = (float)-fVar10;
      FUN_005de000();
      fVar10 = (float10)FUN_0061d200();
      local_198 = (double)(fVar10 * (float10)local_198 +
                          ((float10)local_15c + (float10)local_180) *
                          ((float10)_DAT_0064b240 - fVar10));
      local_148 = (double)(fVar10 * (float10)local_148 +
                          ((float10)local_160 + (float10)(float)local_184) *
                          ((float10)_DAT_0064b240 - fVar10));
      pfVar6 = (float *)FUN_004e5bf2(local_128,param_1 + 0x2214,&local_17c,param_1 + 0x34);
      local_158 = *pfVar6;
      local_1c4 = *(float **)(param_1 + 0x2220);
      local_154 = pfVar6[1];
      local_1c8 = &local_17c;
      local_150 = pfVar6[2];
      local_1cc = (float *)local_128;
      local_1d0 = (float *)0x4fd46a;
      local_1c4 = (float *)FUN_004bdd80();
      local_1c8 = (float *)local_11c;
      local_1cc = (float *)0x4fd47f;
      FUN_005aae00();
      local_1c4 = (float *)local_148._4_4_;
      local_1c8 = (float *)(undefined4)local_148;
      local_1cc = (float *)local_198._4_4_;
      local_1d0 = (float *)(float)local_198;
      puStack_1f4 = local_98;
      local_1d8 = (double)local_188;
      local_1e0 = (double)local_150;
      local_1e8 = (double)local_154;
      local_1f0 = (double)local_158;
      uStack_1f8 = 0x4fd4d1;
      pfVar6 = (float *)FUN_005da010();
    }
    else {
      local_170 = DAT_007015b0;
      local_158 = DAT_007015b0;
      local_16c = DAT_007015b4;
      local_168 = DAT_007015b8;
      local_188 = 0.0;
      local_160 = 0.0;
      local_180 = 0.0;
      local_154 = DAT_007015b4;
      local_150 = DAT_007015b8;
      local_15c = 0.0;
      if (0 < *(int *)(param_1 + 0xdd4)) {
        pfVar6 = (float *)(param_1 + 0x1f7c);
        pfVar8 = (float *)(param_1 + 0x1cc4);
        do {
          fVar1 = pfVar6[-0x102];
          local_198 = (double)CONCAT44(fVar1 * DAT_00701594,fVar1 * DAT_00701590);
          local_1b0 = pfVar8[-2] - fVar1 * DAT_00701590;
          local_1ac = pfVar8[-1] - fVar1 * DAT_00701594;
          local_1c4 = &local_1a4;
          local_1a8 = *pfVar8 - fVar1 * DAT_00701598;
          local_1c8 = (float *)local_134;
          local_1cc = (float *)0x4fc401;
          local_1a4 = local_1b0;
          local_1a0 = local_1ac;
          local_19c = local_1a8;
          FUN_005aae00();
          local_160 = local_160 + *pfVar6;
          local_15c = (float)((int)local_15c + 1);
          pfVar8 = pfVar8 + 3;
          pfVar6 = pfVar6 + 1;
        } while ((int)local_15c < *(int *)(param_1 + 0xdd4));
      }
      local_160 = local_160 * (float)_DAT_0064a728;
      local_1c8 = (float *)local_134;
      local_1c4 = (float *)0x3e800000;
      local_1cc = (float *)0x4fc44c;
      FUN_005aad10();
      pfVar6 = local_184;
      if (*(char *)(param_1 + 0x19b5) == '\0') {
        if (*(char *)(param_1 + 0x19b6) == '\0') {
          if (*(char *)(param_1 + 0x19b8) == '\0') {
            if (*(char *)(param_1 + 0x19b7) == '\0') {
              if (*(short *)(param_1 + 0x19a4) == 0) {
                if (*(short *)(param_1 + 0x19a6) == 0) {
                  if (*(short *)(param_1 + 0x19a8) == 0) {
                    if (*(short *)(param_1 + 0x19aa) != 0) {
                      local_188 = *(float *)(param_1 + 0xe24);
                      local_1c4 = (float *)(DAT_007015a0 * local_184[2] +
                                           DAT_007015a4 * local_184[5] + DAT_007015a8 * local_184[8]
                                           );
                      local_1c8 = (float *)(DAT_007015a0 * local_184[1] +
                                           DAT_007015a4 * local_184[4] + DAT_007015a8 * local_184[7]
                                           );
                      local_1cc = (float *)(DAT_007015a0 * *local_184 +
                                           DAT_007015a4 * local_184[3] + DAT_007015a8 * local_184[6]
                                           );
                      local_1d0 = (float *)0x4fcdbf;
                      local_180 = local_188;
                      FUN_0041ce10();
                      local_1c4 = (float *)-*(float *)(param_1 + 0xa40);
                      local_1c8 = (float *)-*(float *)(param_1 + 0xa3c);
                      local_1cc = (float *)-*(float *)(param_1 + 0xa38);
                      local_1d0 = (float *)0x4fcdec;
                      FUN_0041ce10();
                      local_1c4 = (float *)(local_19c - local_1a8);
                      local_1c8 = (float *)(local_1a0 - local_1ac);
                      local_1cc = (float *)(local_1a4 - local_1b0);
                      local_1d0 = (float *)0x4fce19;
                      FUN_0041ce10();
                      local_1c4 = (float *)(*(float *)(param_1 + 0x204) +
                                           *(float *)(param_1 + 0x2fc));
                      local_170 = (float)local_198;
                      local_16c = local_198._4_4_;
                      local_168 = local_190;
                      local_1c8 = (float *)(*(float *)(param_1 + 0x200) +
                                           *(float *)(param_1 + 0x2f8));
                      local_1cc = (float *)(*(float *)(param_1 + 0x2f4) +
                                           *(float *)(param_1 + 0x1fc));
                      local_1d0 = (float *)0x4fce6a;
                      FUN_0041ce10();
                      local_1c4 = (float *)(local_19c + *(float *)(param_1 + 0x10c));
                      local_1c8 = (float *)(local_1a0 + *(float *)(param_1 + 0x108));
                      local_1cc = (float *)(local_1a4 + *(float *)(param_1 + 0x104));
                      local_1d0 = (float *)0x4fce9d;
                      FUN_0041ce10();
                      local_1c4 = (float *)(local_1a8 * _DAT_0064ca18);
                      local_1c8 = (float *)(local_1ac * _DAT_0064ca18);
                      local_1cc = (float *)(local_1b0 * _DAT_0064ca18);
                      local_1d0 = (float *)0x4fced0;
                      FUN_0041ce10();
                      local_17c = (float)local_198;
                      local_178 = local_198._4_4_;
                      pfVar6 = local_184;
                      local_174 = local_190;
                    }
                  }
                  else {
                    local_188 = *(float *)(param_1 + 0xe20);
                    local_1c4 = (float *)(DAT_007015a0 * local_184[2] +
                                         DAT_007015a4 * local_184[5] + DAT_007015a8 * local_184[8]);
                    local_1c8 = (float *)(DAT_007015a0 * local_184[1] +
                                         DAT_007015a4 * local_184[4] + DAT_007015a8 * local_184[7]);
                    local_1cc = (float *)(DAT_007015a0 * *local_184 +
                                         DAT_007015a4 * local_184[3] + DAT_007015a8 * local_184[6]);
                    local_1d0 = (float *)0x4fcc04;
                    local_180 = local_188;
                    FUN_0041ce10();
                    local_1c4 = (float *)-*(float *)(param_1 + 0xa40);
                    local_1c8 = (float *)-*(float *)(param_1 + 0xa3c);
                    local_1cc = (float *)-*(float *)(param_1 + 0xa38);
                    local_1d0 = (float *)0x4fcc31;
                    FUN_0041ce10();
                    local_1c4 = (float *)(local_19c - local_1a8);
                    local_1c8 = (float *)(local_1a0 - local_1ac);
                    local_1cc = (float *)(local_1a4 - local_1b0);
                    local_1d0 = (float *)0x4fcc5e;
                    FUN_0041ce10();
                    local_1c4 = (float *)(*(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x10c))
                    ;
                    local_170 = (float)local_198;
                    local_16c = local_198._4_4_;
                    local_168 = local_190;
                    local_1c8 = (float *)(*(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x108))
                    ;
                    local_1cc = (float *)(*(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x104))
                    ;
                    local_1d0 = (float *)0x4fccaf;
                    FUN_0041ce10();
                    local_1c4 = (float *)(local_19c + *(float *)(param_1 + 0x3f4));
                    local_1c8 = (float *)(local_1a0 + *(float *)(param_1 + 0x3f0));
                    local_1cc = (float *)(local_1a4 + *(float *)(param_1 + 0x3ec));
                    local_1d0 = (float *)0x4fcce2;
                    FUN_0041ce10();
                    local_1c4 = (float *)(local_1a8 * _DAT_0064ca18);
                    local_1c8 = (float *)(local_1ac * _DAT_0064ca18);
                    local_1cc = (float *)(local_1b0 * _DAT_0064ca18);
                    local_1d0 = (float *)0x4fcd15;
                    FUN_0041ce10();
                    local_17c = (float)local_198;
                    local_178 = local_198._4_4_;
                    pfVar6 = local_184;
                    local_174 = local_190;
                  }
                }
                else {
                  local_188 = *(float *)(param_1 + 0xe1c);
                  local_1c4 = (float *)(DAT_007015a0 * local_184[2] +
                                       DAT_007015a4 * local_184[5] + DAT_007015a8 * local_184[8]);
                  local_1c8 = (float *)(DAT_007015a0 * local_184[1] +
                                       DAT_007015a4 * local_184[4] + DAT_007015a8 * local_184[7]);
                  local_1cc = (float *)(DAT_007015a0 * *local_184 +
                                       DAT_007015a4 * local_184[3] + DAT_007015a8 * local_184[6]);
                  local_1d0 = (float *)0x4fca70;
                  local_180 = local_188;
                  FUN_0041ce10();
                  local_1c4 = (float *)(local_19c + *(float *)(param_1 + 0xa40));
                  local_1c8 = (float *)(local_1a0 + *(float *)(param_1 + 0xa3c));
                  local_1cc = (float *)(local_1a4 + *(float *)(param_1 + 0xa38));
                  local_1d0 = (float *)0x4fcaa3;
                  FUN_0041ce10();
                  local_1c4 = (float *)(*(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x2fc));
                  local_168 = local_1a8;
                  local_170 = local_1b0;
                  local_16c = local_1ac;
                  local_1c8 = (float *)(*(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x2f8));
                  local_1cc = (float *)(*(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x2f4));
                  local_1d0 = (float *)0x4fcaf4;
                  FUN_0041ce10();
                  local_1c4 = (float *)(local_19c + *(float *)(param_1 + 0x3f4));
                  local_1c8 = (float *)(local_1a0 + *(float *)(param_1 + 0x3f0));
                  local_1cc = (float *)(local_1a4 + *(float *)(param_1 + 0x3ec));
                  local_1d0 = (float *)0x4fcb27;
                  FUN_0041ce10();
                  local_1c4 = (float *)(local_1a8 * _DAT_0064ca18);
                  local_1c8 = (float *)(local_1ac * _DAT_0064ca18);
                  local_1cc = (float *)(local_1b0 * _DAT_0064ca18);
                  local_1d0 = (float *)0x4fcb5a;
                  FUN_0041ce10();
                  local_17c = (float)local_198;
                  local_178 = local_198._4_4_;
                  pfVar6 = local_184;
                  local_174 = local_190;
                }
              }
              else {
                local_188 = *(float *)(param_1 + 0xe18);
                local_1c4 = (float *)(*(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x2fc));
                local_1c8 = (float *)(*(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x2f8));
                local_1cc = (float *)(*(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x2f4));
                local_1d0 = (float *)0x4fc89c;
                local_180 = local_188;
                FUN_0041ce10();
                local_1c4 = (float *)(local_19c + *(float *)(param_1 + 0x3f4));
                local_1c8 = (float *)(local_1a0 + *(float *)(param_1 + 0x3f0));
                local_1cc = (float *)(local_1a4 + *(float *)(param_1 + 0x3ec));
                local_1d0 = (float *)0x4fc8cf;
                FUN_0041ce10();
                local_1c4 = (float *)(local_1a8 * _DAT_0064ca18);
                local_1c8 = (float *)(local_1ac * _DAT_0064ca18);
                local_1cc = (float *)(local_1b0 * _DAT_0064ca18);
                local_1d0 = (float *)0x4fc902;
                FUN_0041ce10();
                pfVar6 = local_184;
                local_17c = (float)local_198;
                local_178 = local_198._4_4_;
                local_174 = local_190;
                local_1c4 = (float *)(DAT_007015a0 * local_184[2] +
                                     DAT_007015a4 * local_184[5] + DAT_007015a8 * local_184[8]);
                local_1c8 = (float *)(DAT_007015a0 * local_184[1] +
                                     DAT_007015a4 * local_184[4] + DAT_007015a8 * local_184[7]);
                local_1cc = (float *)(DAT_007015a0 * *local_184 +
                                     DAT_007015a4 * local_184[3] + DAT_007015a8 * local_184[6]);
                local_1d0 = (float *)0x4fc98f;
                FUN_0041ce10();
                local_1c4 = (float *)(*(float *)(param_1 + 0xa40) - local_19c);
                local_1c8 = (float *)(*(float *)(param_1 + 0xa3c) - local_1a0);
                local_1cc = (float *)(*(float *)(param_1 + 0xa38) - local_1a4);
                local_1d0 = (float *)0x4fc9c2;
                FUN_0041ce10();
                local_170 = local_1b0;
                local_16c = local_1ac;
                local_168 = local_1a8;
              }
            }
            else {
              pfVar6 = (float *)(param_1 + 0xe24);
              pfVar8 = (float *)(param_1 + 0xe20);
              pfVar3 = pfVar6;
              if (*(float *)(param_1 + 0xe20) <= *(float *)(param_1 + 0xe24)) {
                pfVar3 = pfVar8;
              }
              local_188 = *pfVar3;
              if (*pfVar6 <= *pfVar8) {
                pfVar6 = pfVar8;
              }
              local_1b0 = -*(float *)(param_1 + 0xa38);
              local_1ac = -*(float *)(param_1 + 0xa3c);
              local_1a8 = -*(float *)(param_1 + 0xa40);
              local_180 = *pfVar6;
              local_1c4 = (float *)((*(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x204)) *
                                   _DAT_0064b248);
              local_1c8 = (float *)((*(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x200)) *
                                   _DAT_0064b248);
              local_1cc = (float *)((*(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x1fc)) *
                                   _DAT_0064b248);
              local_1d0 = (float *)0x4fc82e;
              local_170 = local_1b0;
              local_16c = local_1ac;
              local_168 = local_1a8;
              FUN_0041ce10();
              local_17c = local_1a4;
              local_178 = local_1a0;
              pfVar6 = local_184;
              local_174 = local_19c;
            }
          }
          else {
            pfVar8 = (float *)(param_1 + 0xe24);
            pfVar3 = (float *)(param_1 + 0xe1c);
            pfVar2 = pfVar8;
            if (*(float *)(param_1 + 0xe1c) <= *(float *)(param_1 + 0xe24)) {
              pfVar2 = pfVar3;
            }
            local_188 = *pfVar2;
            if (*pfVar8 < *pfVar3) {
              pfVar8 = pfVar3;
            }
            local_1a0 = *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x2f8);
            local_180 = *pfVar8;
            local_19c = *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x2fc);
            local_17c = (*(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x2f4)) * _DAT_0064b248;
            local_178 = local_1a0 * _DAT_0064b248;
            local_198 = (double)CONCAT44(local_178,local_17c);
            local_190 = local_19c * _DAT_0064b248;
            local_1b0 = local_190 * *(float *)(param_1 + 0xa3c) -
                        local_178 * *(float *)(param_1 + 0xa40);
            local_1ac = local_17c * *(float *)(param_1 + 0xa40) -
                        local_190 * *(float *)(param_1 + 0xa38);
            local_1a8 = local_178 * *(float *)(param_1 + 0xa38) -
                        local_17c * *(float *)(param_1 + 0xa3c);
            local_174 = local_190;
            local_170 = local_1b0;
            local_16c = local_1ac;
            local_168 = local_1a8;
          }
        }
        else {
          pfVar8 = (float *)(param_1 + 0xe20);
          pfVar3 = (float *)(param_1 + 0xe18);
          pfVar2 = pfVar8;
          if (*(float *)(param_1 + 0xe18) <= *(float *)(param_1 + 0xe20)) {
            pfVar2 = pfVar3;
          }
          local_188 = *pfVar2;
          if (*pfVar8 <= *pfVar3) {
            pfVar8 = pfVar3;
          }
          local_1a0 = *(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x3f0);
          local_180 = *pfVar8;
          local_19c = *(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x3f4);
          local_17c = (*(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x3ec)) * _DAT_0064b248;
          local_178 = local_1a0 * _DAT_0064b248;
          local_198 = (double)CONCAT44(local_178,local_17c);
          local_190 = local_19c * _DAT_0064b248;
          local_1b0 = local_178 * *(float *)(param_1 + 0xa40) -
                      local_190 * *(float *)(param_1 + 0xa3c);
          local_1ac = local_190 * *(float *)(param_1 + 0xa38) -
                      local_17c * *(float *)(param_1 + 0xa40);
          local_1a8 = local_17c * *(float *)(param_1 + 0xa3c) -
                      local_178 * *(float *)(param_1 + 0xa38);
          local_174 = local_190;
          local_170 = local_1b0;
          local_16c = local_1ac;
          local_168 = local_1a8;
        }
      }
      else {
        pfVar8 = (float *)(param_1 + 0xe1c);
        pfVar3 = (float *)(param_1 + 0xe18);
        pfVar2 = pfVar8;
        if (*(float *)(param_1 + 0xe18) <= *(float *)(param_1 + 0xe1c)) {
          pfVar2 = pfVar3;
        }
        local_188 = *pfVar2;
        if (*pfVar8 <= *pfVar3) {
          pfVar8 = pfVar3;
        }
        local_1a0 = *(float *)(param_1 + 0x2f8) + *(float *)(param_1 + 0x3f0);
        local_180 = *pfVar8;
        local_19c = *(float *)(param_1 + 0x2fc) + *(float *)(param_1 + 0x3f4);
        local_170 = *(float *)(param_1 + 0xa38);
        local_16c = *(float *)(param_1 + 0xa3c);
        local_1b0 = (*(float *)(param_1 + 0x2f4) + *(float *)(param_1 + 0x3ec)) * _DAT_0064b248;
        local_168 = *(float *)(param_1 + 0xa40);
        local_1ac = local_1a0 * _DAT_0064b248;
        local_1a8 = local_19c * _DAT_0064b248;
        local_17c = local_1b0;
        local_178 = local_1ac;
        local_174 = local_1a8;
      }
      local_188 = local_188 - local_160;
      if (_DAT_0064b254 <= local_188) {
        if (_DAT_0064b240 < local_188) {
          local_188 = 1.0;
        }
      }
      else {
        local_188 = 0.0;
      }
      if (_DAT_0064b254 <= local_180) {
        if (_DAT_0064b240 < local_180) {
          local_180 = 1.0;
        }
      }
      else {
        local_180 = 0.0;
      }
      local_1c4 = &local_170;
      local_1c8 = &local_17c;
      local_1cc = (float *)&local_148;
      local_1d0 = (float *)0x4fcf70;
      FUN_004bde70();
      local_1d0 = (float *)(param_1 + 0x900);
      local_1d8 = (double)CONCAT44(&local_148,local_134);
      local_1e0 = (double)CONCAT44(0x4fcf8c,(undefined4)local_1e0);
      puVar4 = (undefined8 *)FUN_004cb300();
      local_148 = (double)*puVar4;
      local_1c4 = (float *)(local_188 * local_14c * _DAT_0064b440);
      local_140 = *(undefined4 *)(puVar4 + 1);
      local_1c8 = (float *)local_134;
      local_1cc = (float *)0x4fcfce;
      FUN_005aad10();
      fVar1 = local_14c * (float)_DAT_0064c308;
      local_1c8 = &local_17c;
      local_1cc = (float *)local_134;
      local_1d0 = (float *)0x4fcff3;
      local_1c4 = (float *)fVar1;
      local_15c = fVar1;
      local_1c4 = (float *)FUN_004bdd80();
      local_1c8 = &local_1a4;
      local_1cc = (float *)0x4fd005;
      FUN_005aae40();
      if (_DAT_0064b254 < local_168) {
        local_168 = 0.0;
      }
      if (*(float *)(param_1 + 0xdc0) < _DAT_0064b440) {
        local_1c4 = &local_170;
        local_1c8 = (float *)(param_1 + 0xa08);
        local_1cc = (float *)local_134;
        local_1d0 = (float *)0x4fd04a;
        puVar5 = (undefined4 *)FUN_004bddd0();
        *(undefined4 *)(param_1 + 0x40) = *puVar5;
        *(undefined4 *)(param_1 + 0x44) = puVar5[1];
        *(undefined4 *)(param_1 + 0x48) = puVar5[2];
      }
      local_1c8 = &local_17c;
      local_1cc = (float *)local_134;
      local_1d0 = (float *)0x4fd073;
      local_1c4 = (float *)fVar1;
      local_1c4 = (float *)FUN_004bdd80();
      local_1c8 = &local_1a4;
      local_1cc = (float *)0x4fd085;
      FUN_005aae40();
      local_15c = DAT_006733d0;
      if (*(float *)(param_1 + 0xe38) < _DAT_0064c2e8) {
        local_15c = DAT_006733d0 * _DAT_0064c2e8;
      }
      local_1c8 = &local_170;
      local_1c4 = (float *)local_14c;
      local_1cc = (float *)local_134;
      local_1d0 = (float *)0x4fd0c9;
      puVar5 = (undefined4 *)FUN_004bdd80();
      local_1cc = (float *)*puVar5;
      local_1c8 = (float *)puVar5[1];
      local_1c4 = (float *)puVar5[2];
      local_1d0 = (float *)local_104;
      local_1d8 = (double)CONCAT44(0x4fd0e8,(undefined4)local_1d8);
      local_1c4 = (float *)FUN_005ab330();
      local_1cc = (float *)(local_15c * local_180 * local_14c * (float)_DAT_0064c8f0);
      local_1d8 = local_148;
      local_1d0 = (float *)local_140;
      local_1e8 = (double)CONCAT44(local_158,local_68);
      local_1e0 = (double)CONCAT44(local_150,local_154);
      local_1f0 = (double)CONCAT44(0x4fd155,(undefined4)local_1f0);
      local_1c8 = pfVar6;
      local_1cc = (float *)FUN_005ab380();
      local_1d0 = (float *)local_38;
      local_1d8 = (double)CONCAT44(0x4fd166,(undefined4)local_1d8);
      local_1c8 = (float *)FUN_005ab130();
      local_1cc = (float *)local_98;
      local_1d0 = (float *)0x4fd177;
      pfVar6 = (float *)FUN_005ab130();
    }
    pfVar8 = local_d4;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
  }
  pfVar6 = local_d4;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_2 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

