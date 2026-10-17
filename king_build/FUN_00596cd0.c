
void __thiscall FUN_00596cd0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x6c);
  *(int *)(param_1 + 0x78) = iVar2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  puVar5 = (undefined4 *)(param_1 + 0x18);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(iVar2 + 0x4c) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x58) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x54) = 0x3f800000;
  FUN_004e4172(*(undefined4 *)(param_1 + 0x14),0,(undefined4 *)(param_1 + 0x18));
  FUN_005d95a0(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x1d4));
  FUN_005d95c0();
  uVar1 = *(uint *)(DAT_006cdbd0 + 0x198) & 0xf0;
  if (uVar1 == 0x10) {
    iVar2 = FUN_005686e0();
    if (iVar2 == 2) {
      uVar3 = FUN_005eea00(s_m15_mirrLS_msk_0067d274);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m15_mirrRS_msk_0067d264);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m15_mirrTS_msk_0067d254;
    }
    else {
      uVar3 = FUN_005eea00(s_m16_mirrLS_msk_0067d244);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m16_mirrRS_msk_0067d234);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m16_mirrTS_msk_0067d224;
    }
    uVar3 = FUN_005eea00(pcVar6);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    DAT_006f599c = 0x1d4;
    DAT_006f59a0 = 0x32;
    DAT_006f597c = 7;
    DAT_006f5974 = 6;
    DAT_006f58ac = 0x9c;
    DAT_006f58a0 = 0x32;
    DAT_006f5980 = 5;
    DAT_006f5970 = 7;
    DAT_006f58b0 = 0x33;
    DAT_006f589c = 0x99;
    DAT_006f5984 = 4;
    DAT_006f5978 = 3;
    DAT_006f58b4 = 0x19;
    DAT_006f58a4 = 0x48;
  }
  else if (uVar1 == 0x20) {
    iVar2 = FUN_005686e0();
    if (iVar2 == 2) {
      uVar3 = FUN_005eea00(s_m15_mirrLM_msk_0067d214);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m15_mirrRM_msk_0067d204);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m15_mirrTM_msk_0067d1f4;
    }
    else {
      uVar3 = FUN_005eea00(s_m16_mirrLM_msk_0067d1e4);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m16_mirrRM_msk_0067d1d4);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m16_mirrTM_msk_0067d1c4;
    }
    uVar3 = FUN_005eea00(pcVar6);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    DAT_006f599c = 0x23c;
    DAT_006f59a0 = 0x32;
    DAT_006f597c = 8;
    DAT_006f5974 = 8;
    DAT_006f58ac = 0xd2;
    DAT_006f58a0 = 0x3c;
    DAT_006f5980 = 7;
    DAT_006f5970 = 9;
    DAT_006f58b0 = 0x3f;
    DAT_006f589c = 0xbe;
    DAT_006f5984 = 6;
    DAT_006f5978 = 4;
    DAT_006f58b4 = 0x1e;
    DAT_006f58a4 = 0x5a;
  }
  else if (uVar1 == 0x30) {
    iVar2 = FUN_005686e0();
    if (iVar2 == 2) {
      uVar3 = FUN_005eea00(s_m15_mirrLL_msk_0067d1b4);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m15_mirrRL_msk_0067d1a4);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m15_mirrTL_msk_0067d194;
    }
    else {
      uVar3 = FUN_005eea00(s_m16_mirrLL_msk_0067d184);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m16_mirrRL_msk_0067d174);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m16_mirrTL_msk_0067d164;
    }
    uVar3 = FUN_005eea00(pcVar6);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    DAT_006f599c = 0x2a8;
    DAT_006f59a0 = 0x32;
    DAT_006f597c = 10;
    DAT_006f5974 = 10;
    DAT_006f58ac = 0x118;
    DAT_006f58a0 = 0x50;
    DAT_006f5980 = 9;
    DAT_006f5970 = 0xc;
    DAT_006f58b0 = 0x51;
    DAT_006f589c = 0xf3;
    DAT_006f5984 = 8;
    DAT_006f5978 = 6;
    DAT_006f58b4 = 0x26;
    DAT_006f58a4 = 0x72;
  }
  else if (uVar1 == 0x40) {
    iVar2 = FUN_005686e0();
    if (iVar2 == 2) {
      uVar3 = FUN_005eea00(s_m15_mirrLH_msk_0067d154);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m15_mirrRH_msk_0067d144);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m15_mirrTH_msk_0067d134;
    }
    else {
      uVar3 = FUN_005eea00(s_m16_mirrLH_msk_0067d124);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      uVar3 = FUN_005eea00(s_m16_mirrRH_msk_0067d114);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      pcVar6 = s_m16_mirrTH_msk_0067d104;
    }
    uVar3 = FUN_005eea00(pcVar6);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    DAT_006f597c = 10;
    DAT_006f5974 = 10;
    DAT_006f599c = 0x45d;
    DAT_006f59a0 = 0x32;
    DAT_006f58ac = 0x1cc;
    DAT_006f58a0 = 0x96;
    DAT_006f5980 = 0xe;
    DAT_006f5970 = 0x13;
    DAT_006f58b0 = 0x7e;
    DAT_006f589c = 0x17b;
    DAT_006f5984 = 0xe;
    DAT_006f5978 = 9;
    DAT_006f58b4 = 0x3c;
    DAT_006f58a4 = 0xb6;
  }
  DAT_006f585c = FUN_005ee8e0(0,s_RainNode_0067d0f8);
  return;
}

