
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8f2e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,float param_8,undefined4 param_9,
                 undefined4 *param_10,undefined4 *param_11)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  float local_114;
  undefined1 local_110 [12];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  float local_e0;
  undefined1 local_dc [12];
  float local_d0;
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  float local_a8;
  undefined1 local_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [12];
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  FUN_004bde20(local_c0,param_1 + 0x24,param_6);
  fVar3 = (float10)FUN_004e1080(local_c0,local_c0);
  local_e0 = (float)fVar3;
  fVar3 = (float10)FUN_0061ed94((double)fVar3);
  local_d0 = (float)fVar3;
  local_6c = 0x3f800000;
  FUN_004e1030(&local_88,local_c0,local_d0);
  FUN_004cb300(local_4c,param_4,param_1);
  FUN_004042a0();
  FUN_004042a0();
  FUN_004042a0();
  local_68 = 0.0;
  local_70 = 0.0;
  if ((float)_DAT_0064c940 < *(float *)(param_7 + 8)) {
    fVar3 = (float10)FUN_004e1080(&local_88,param_7);
    if ((float10)_DAT_0064b948 < fVar3) {
      uVar1 = FUN_004bde70(local_120,param_7,&local_88,param_7);
      puVar2 = (undefined4 *)FUN_004bde70(local_12c,uVar1);
      local_1c = *puVar2;
      local_18 = puVar2[1];
      local_14 = puVar2[2];
      fVar3 = (float10)FUN_004e1080(&local_88,param_7);
      puVar2 = (undefined4 *)FUN_004bdd80(local_138,param_7,(float)fVar3);
      local_40 = *puVar2;
      local_3c = puVar2[1];
      local_38 = puVar2[2];
      fVar3 = (float10)FUN_005aabc0();
      local_68 = (float)fVar3;
      if ((float)_DAT_0064a738 < local_68) {
        fVar3 = (float10)FUN_005aabc0();
        local_70 = (float)fVar3;
        uVar1 = FUN_004bdd80(local_144,&local_40,(float)_DAT_0064c938 / local_70);
        uVar1 = FUN_004bdd80(local_150,&local_1c,(float)_DAT_0064b948 / local_68,uVar1);
        puVar2 = (undefined4 *)FUN_004bddd0(local_15c,uVar1);
        local_88 = *puVar2;
        local_84 = puVar2[1];
        local_80 = puVar2[2];
        local_64 = local_88;
        local_60 = local_84;
        local_5c = local_80;
      }
    }
  }
  fVar3 = (float10)FUN_004e1080(param_3,&local_88);
  FUN_004bdd80(local_b4,&local_88,(float)fVar3);
  uVar1 = FUN_004bde70(local_168,&local_88,param_3,&local_88);
  FUN_004bde70(local_dc,uVar1);
  fVar3 = (float10)FUN_004e1080(local_4c,&local_88);
  FUN_004bdd80(local_cc,&local_88,(float)fVar3);
  uVar1 = FUN_004bde70(local_174,&local_88,local_4c,&local_88);
  FUN_004bde70(local_ec,uVar1);
  uVar1 = FUN_004cb2c0(local_180,local_b4,param_9);
  FUN_004bdd80(local_f8,uVar1);
  uVar1 = FUN_004bde70(local_18c,local_c0,local_dc,param_8);
  uVar1 = FUN_004bdd80(local_198,uVar1);
  uVar1 = FUN_004cb300(local_1a4,local_ec,param_2,param_1,uVar1);
  uVar1 = FUN_004e2984(local_1b0,param_5,uVar1);
  uVar1 = FUN_004cb300(local_1bc,uVar1);
  FUN_004bddd0(local_a4,uVar1);
  uVar1 = FUN_004bdd80(local_1c8,&DAT_00696408,param_8,local_e0);
  uVar1 = FUN_004bdd80(local_1d4,uVar1);
  FUN_004bddd0(local_7c,param_5,uVar1);
  FUN_004e29c2(local_34,local_a4,local_7c);
  local_6c = 0x3f19999a;
  fVar3 = (float10)FUN_004e1080(local_34,local_ec);
  if (fVar3 < (float10)_DAT_0064a668) {
    local_6c = 0x3e99999a;
  }
  FUN_004bdd80(local_28,local_34,local_6c);
  FUN_004bde70(local_10,local_28,local_c0);
  FUN_004bdd80(local_110,local_cc,0x3f7851ec);
  FUN_004bddd0(local_58,local_28,local_110);
  FUN_004cb300(&local_98,local_58,param_2);
  FUN_004bddd0(&local_104,local_10,local_f8);
  fVar4 = (float10)FUN_004e1080(param_3,param_3);
  fVar3 = (float10)_DAT_0064a6d0;
  uVar1 = FUN_004e2984(local_1e0,param_5,param_4,param_4);
  fVar5 = (float10)FUN_004e1080(uVar1);
  local_8c = (float)(fVar5 * (float10)_DAT_0064a6d0 +
                    (float10)(double)(fVar4 * (float10)param_8 * fVar3));
  fVar4 = (float10)FUN_004e1080(&local_104,&local_104);
  fVar3 = (float10)_DAT_0064a6d0;
  uVar1 = FUN_004e2984(local_1ec,param_5,&local_98,&local_98);
  fVar5 = (float10)FUN_004e1080(uVar1);
  local_a8 = (float)(fVar5 * (float10)_DAT_0064a6d0 +
                    (float10)(double)(fVar4 * (float10)param_8 * fVar3));
  if ((local_8c * (float)_DAT_0064c908 < local_a8) && (_DAT_0064b254 < local_8c)) {
    local_114 = local_a8 / local_8c;
    FUN_005aad50(local_1f8,local_114 + (float)_DAT_0064a5a8);
    FUN_005aad50(local_204,local_114 + (float)_DAT_0064a5a8);
  }
  *param_11 = local_98;
  param_11[1] = local_94;
  param_11[2] = local_90;
  *param_10 = local_104;
  param_10[1] = local_100;
  param_10[2] = local_fc;
  return;
}

