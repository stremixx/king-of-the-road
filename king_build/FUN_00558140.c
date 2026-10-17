
undefined4 __fastcall FUN_00558140(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float local_144;
  float local_140;
  float fStack_13c;
  float local_138 [4];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined4 auStack_90 [9];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  iVar10 = *(int *)(param_1 + 0x28b4);
  iVar2 = *(int *)(param_1 + 0x5578);
  pfVar6 = (float *)(param_1 + 0x2c4);
  pfVar11 = local_138;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar3 = local_138[3] * (float)(&DAT_00696f9c)[iVar10 * 0x25c] +
          local_120 * (float)(&DAT_00696fa0)[iVar10 * 0x25c] +
          local_138[0] * (float)(&DAT_00696f98)[iVar10 * 0x25c] + local_114;
  fVar4 = local_128 * (float)(&DAT_00696f9c)[iVar10 * 0x25c] +
          local_11c * (float)(&DAT_00696fa0)[iVar10 * 0x25c] +
          local_138[1] * (float)(&DAT_00696f98)[iVar10 * 0x25c] + local_110;
  fVar5 = local_124 * (float)(&DAT_00696f9c)[iVar10 * 0x25c] +
          local_118 * (float)(&DAT_00696fa0)[iVar10 * 0x25c] +
          local_138[2] * (float)(&DAT_00696f98)[iVar10 * 0x25c] + local_10c;
  pfVar6 = (float *)(iVar2 + 0x2c4);
  pfVar11 = local_138;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar1 = *(float *)(&DAT_00696fc8 + iVar10 * 0x970);
  local_108 = fVar1 * DAT_00701580;
  local_104 = fVar1 * DAT_00701584;
  iVar10 = *(int *)(iVar2 + 0x28b4);
  local_144 = local_108 + (float)(&DAT_00696fa4)[iVar10 * 0x25c];
  local_140 = local_104 + (float)(&DAT_00696fa8)[iVar10 * 0x25c];
  fVar1 = fVar1 * DAT_00701588 + (float)(&DAT_00696fac)[iVar10 * 0x25c];
  local_fc = local_138[0] * local_144 + local_140 * local_138[3] + fVar1 * local_120 + local_114;
  local_f8 = local_138[1] * local_144 + local_140 * local_128 + fVar1 * local_11c + local_110;
  local_f4 = local_138[2] * local_144 + local_140 * local_124 + fVar1 * local_118 + local_10c;
  fVar13 = (float10)FUN_005aabc0(&local_fc);
  fVar1 = (float)fVar13;
  *(undefined4 *)(*(int *)(param_1 + 0x5460) + 0x278c) =
       *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0xcd4);
  (**(code **)**(undefined4 **)(param_1 + 0x5460))();
  FUN_004f1650(*(int *)(param_1 + 0x5460) + 0x2a50);
  FUN_004f1770(*(int *)(param_1 + 0x5460) + 0x2a74);
  pfVar6 = (float *)(*(int *)(param_1 + 0x5460) + 0x29f0);
  pfVar11 = local_138;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar11 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar11 = pfVar11 + 1;
  }
  puVar8 = (undefined4 *)(*(int *)(iVar2 + 0x5460) + 0x29f0);
  puVar12 = auStack_90;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_0055ae00(local_138,auStack_90);
  FUN_0041ce10(local_138[0] * fVar3 + local_138[3] * fVar4 + local_120 * fVar5 + local_114,
               local_138[1] * fVar3 + local_128 * fVar4 + local_11c * fVar5 + local_110,
               local_138[2] * fVar3 + local_124 * fVar4 + local_118 * fVar5 + local_10c);
  FUN_0043f690(&local_108,auStack_cc,*(int *)(iVar2 + 0x5460) + 0x2a20);
  pfVar6 = (float *)FUN_005aaad0(auStack_a8,&local_108);
  FUN_0041ce10(fVar1 * *pfVar6,fVar1 * pfVar6[1],fVar1 * pfVar6[2]);
  local_144 = fVar3;
  local_140 = fVar4;
  fStack_13c = fVar5;
  FUN_005aaad0(auStack_b4,&local_fc);
  FUN_0041ce10(local_108 - local_144,local_104 - local_140,fStack_100 - fStack_13c);
  fStack_e4 = fVar3;
  fStack_e0 = fVar4;
  fStack_dc = fVar5;
  FUN_004cb300(auStack_9c,&fStack_e4,*(int *)(iVar2 + 0x5460) + 0x29f0);
  FUN_005aaad0(auStack_c0,&local_144);
  FUN_004bde70(auStack_d8,auStack_b4,auStack_c0);
  fVar13 = (float10)FUN_005aabc0(auStack_d8);
  FUN_004e1030(&uStack_f0,auStack_d8,(float)fVar13);
  fVar13 = (float10)FUN_0061e4b0(*(int *)(iVar2 + 0x5460) + 0x29f0);
  uVar7 = FUN_005ab380(auStack_60,DAT_007015b0,DAT_007015b4,DAT_007015b8,uStack_f0,uStack_ec,
                       uStack_e8,(float)fVar13);
  puVar8 = (undefined4 *)FUN_005ab130(auStack_30,uVar7);
  puVar12 = auStack_90;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_005aae00(auStack_a8,auStack_9c);
  FUN_0057d5d0();
  uVar7 = FUN_0057d5d0(iVar2 + 0xd3c,auStack_6c);
  uVar7 = FUN_004e5437(uVar7);
  FUN_004f1020(uVar7,auStack_90,&local_fc);
  return 0;
}

