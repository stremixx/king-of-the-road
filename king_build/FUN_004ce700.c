
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce700(int param_1)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  undefined1 local_c8 [36];
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  byte local_50 [80];
  
  if (DAT_00671980 == -1) {
    GetPrivateProfileStringA
              (s_EFFECTS_00671998,s_carshow_006719a0,&DAT_006719a8,(LPSTR)local_50,0x32,DAT_006957c8
              );
    pbVar8 = &DAT_00671994;
    pbVar5 = local_50;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_004ce771:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_004ce776;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_004ce771;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_004ce776:
    if (iVar6 != 0) {
      DAT_00671980 = 0;
      return;
    }
    DAT_00671980 = 1;
  }
  else if (DAT_00671980 == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x5460);
  FUN_0057d570(local_c8);
  local_118 = local_a4;
  local_114 = local_a0;
  local_110 = local_9c;
  fVar1 = *(float *)(iVar6 + 0x270c);
  local_f4 = local_a4 + fVar1 * DAT_00701590;
  local_f0 = local_a0 + fVar1 * DAT_00701594;
  local_ec = local_9c + fVar1 * DAT_00701598;
  local_100 = local_f4 + DAT_007015a0;
  local_fc = local_f0 + DAT_007015a4;
  local_f8 = local_ec + DAT_007015a8;
  local_10c = local_a4 + DAT_007015a0;
  local_108 = local_a0 + DAT_007015a4;
  local_104 = local_9c + DAT_007015a8;
  FUN_005b4090(local_10c,local_108,local_104,local_100,local_fc,local_f8,5);
  fVar1 = *(float *)(iVar6 + 10000);
  local_100 = fVar1 * DAT_00701590;
  local_fc = fVar1 * DAT_00701594;
  FUN_0041ce10(local_118 - local_100,local_114 - local_fc,local_110 - fVar1 * DAT_00701598);
  local_f0 = local_108;
  local_f4 = local_10c;
  local_ec = local_104;
  FUN_0041ce10(local_10c + DAT_007015a0,local_108 + DAT_007015a4,local_104 + DAT_007015a8);
  fVar3 = local_fc;
  fVar1 = local_100;
  local_dc = local_f8;
  FUN_0041ce10(local_118 + DAT_007015a0,local_114 + DAT_007015a4,local_110 + DAT_007015a8);
  FUN_005b4090(local_10c,local_108,local_104,fVar1,fVar3,local_dc,7);
  if ((*(byte *)(iVar6 + 0x4070) & 8) != 0) {
    FUN_0041ce10(DAT_00701590 + DAT_00701590,DAT_00701594 + DAT_00701594,DAT_00701598 + DAT_00701598
                );
    FUN_0041ce10(local_100 + local_118,local_fc + local_114,local_f8 + local_110);
    FUN_005b4090(local_118,local_114,local_110,local_10c,local_108,local_104,7);
    return;
  }
  if (*(double *)(iVar6 + 0x40b0) <= _DAT_0064a668) {
    local_e8 = 2;
    do {
      iVar4 = local_e8;
      if (*(int *)(iVar6 + 0x4060) + 4 <= local_e8) {
        return;
      }
      FUN_0041ce10(DAT_00701590 * _DAT_0064b2f8,DAT_00701594 * _DAT_0064b2f8,
                   DAT_00701598 * _DAT_0064b2f8);
      FUN_0041ce10(local_100 + local_118,local_fc + local_114,local_f8 + local_110);
      local_d8 = 1;
      local_f4 = local_10c;
      local_f0 = local_108;
      local_ec = local_104;
      if ((*(uint *)(iVar6 + 0x4064) & 1 << ((byte)iVar4 & 0x1f)) == 0) {
        uVar10 = 6;
      }
      else {
        uVar10 = 5;
      }
      FUN_005b4090(local_118,local_114,local_110,local_10c,local_108,local_104,uVar10);
      iVar4 = local_e8;
      if (*(int *)(iVar6 + 0x405c) + 4 == local_e8) {
        FUN_0041ce10(DAT_00701590 * _DAT_0064b328,DAT_00701594 * _DAT_0064b328,
                     DAT_00701598 * _DAT_0064b328);
        local_e4 = local_d4;
        local_e0 = local_d0;
        local_dc = local_cc;
        uVar10 = 7;
        puVar7 = (undefined4 *)FUN_004bddd0(local_5c,&local_f4,&local_e4,7);
        FUN_005b4090(local_f4,local_f0,local_ec,*puVar7,puVar7[1],puVar7[2],uVar10);
      }
      if (iVar4 == 4) {
        iVar11 = iVar4;
        uVar10 = FUN_004bdd80(local_68,&DAT_007015a0,0x3f000000,4);
        puVar7 = (undefined4 *)FUN_004bddd0(local_98,&local_118,uVar10);
        FUN_005b4090(local_118,local_114,local_110,*puVar7,puVar7[1],puVar7[2],iVar11);
        iVar11 = iVar4;
        uVar10 = FUN_004bdd80(local_74,&DAT_00701580,0x3f000000,4);
        puVar7 = (undefined4 *)FUN_004bddd0(local_8c,&local_118,uVar10);
        FUN_005b4090(local_118,local_114,local_110,*puVar7,puVar7[1],puVar7[2],iVar11);
      }
      FUN_005aae00(local_80,&DAT_00701590);
      local_e8 = iVar4 + 1;
    } while (local_e8 < 10);
    return;
  }
  FUN_0041ce10(DAT_00701590 + DAT_00701590,DAT_00701594 + DAT_00701594,DAT_00701598 + DAT_00701598);
  FUN_0041ce10(local_100 + local_118,local_fc + local_114,local_f8 + local_110);
  FUN_005b4090(local_118,local_114,local_110,local_10c,local_108,local_104,5);
  return;
}

