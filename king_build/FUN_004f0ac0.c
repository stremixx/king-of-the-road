
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f0ac0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  int local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_160 [9];
  float local_13c;
  float local_138;
  float local_134;
  undefined1 local_130 [52];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0xc90) = DAT_007015b0;
  iVar4 = 1;
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
    local_1b4 = 0.0;
    local_1e8 = iVar4 * iVar4 * iVar4 + 1;
    local_1b0 = 0.0;
    local_1ac = 0.0;
    fVar1 = (float)local_1e8;
    local_1f4 = 0.0;
    local_1f0 = 0.0;
    local_1ec = 0.0;
    local_1c0 = fVar1 * DAT_00701590;
    local_1bc = fVar1 * DAT_00701594;
    local_1d8 = local_1c0 + (float)param_4[9];
    local_1d4 = local_1bc + (float)param_4[10];
    local_1d0 = fVar1 * DAT_00701598 + (float)param_4[0xb];
    local_1e4 = fVar1 * DAT_00701590;
    local_1e0 = fVar1 * DAT_00701594;
    local_1cc = (float)param_4[9] - local_1e4;
    local_1c8 = (float)param_4[10] - local_1e0;
    local_1c4 = (float)param_4[0xb] - fVar1 * DAT_00701598;
    local_1a8 = local_1d8;
    local_1a4 = local_1d4;
    local_1a0 = local_1d0;
    local_19c = local_1cc;
    local_198 = local_1c8;
    local_194 = local_1c4;
    FUN_005eebf0();
    local_1e8 = FUN_004e5eb1(*(undefined4 *)(param_1 + 0x29d4),param_3,&local_1a8,&local_19c,
                             local_130);
    if (local_1e8 != 0) break;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) goto LAB_004f0f37;
  }
  local_1b4 = local_fc;
  local_1ac = local_f4;
  local_1f4 = local_f0;
  local_1ec = local_e8;
  local_1b0 = local_f8;
  puVar3 = param_4;
  puVar5 = local_160;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1f0 = local_ec;
  FUN_005aba00(&local_190,param_4);
  if (param_2 == 2) {
    fVar1 = _DAT_0067338c * *(float *)(param_1 + 0x1f9c) +
            (*(float *)(param_1 + 0x1b70) - *(float *)(param_1 + 0x1cc4));
    local_1e4 = local_1f4 * fVar1;
    local_1e0 = local_1f0 * fVar1;
    local_1c0 = local_1e4 + local_1b4;
    local_1bc = local_1e0 + local_1b0;
    local_1b8 = fVar1 * local_1ec + local_1ac;
    fVar1 = local_190 * local_1f4 + local_178 * local_1ec + local_184 * local_1f0;
    local_1c8 = local_18c * local_1f4 + local_174 * local_1ec + local_180 * local_1f0;
    local_1c4 = local_188 * local_1f4 + local_170 * local_1ec + local_17c * local_1f0;
    FUN_0041ce10(local_1c4 * DAT_00701594 - local_1c8 * DAT_00701598,
                 fVar1 * DAT_00701598 - local_1c4 * DAT_00701590,
                 local_1c8 * DAT_00701590 - fVar1 * DAT_00701594);
    local_1d8 = local_1e4;
    local_1d4 = local_1e0;
    local_1d0 = local_1dc;
    fVar6 = (float10)FUN_005aabc0(&local_1d8,param_4);
    uVar2 = FUN_005ab380(local_30,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_1d8,local_1d4,
                         local_1d0,(float)fVar6);
    puVar3 = (undefined4 *)FUN_005ab130(local_60,uVar2);
    puVar5 = local_160;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_138 = local_1bc;
    local_13c = local_1c0;
    local_134 = local_1b8;
  }
  FUN_004f0670(param_3,local_160);
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  puVar5 = (undefined4 *)(param_1 + 0x8d0);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x900);
  puVar5 = (undefined4 *)(param_1 + 0x930);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x1a10) = uVar2;
  FUN_004f1820(1,&local_1b4,&local_1f4);
  if ((param_2 == 1) || (param_2 == 2)) {
    FUN_005045b0();
  }
LAB_004f0f37:
  if (local_1e8 == 0) {
    FUN_004f0670(param_3,param_4);
    puVar3 = (undefined4 *)(param_1 + 0x10);
    puVar5 = (undefined4 *)(param_1 + 0x8d0);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0x1a10) = *(undefined4 *)(param_1 + 0xf4);
    puVar3 = (undefined4 *)(param_1 + 0x900);
    puVar5 = (undefined4 *)(param_1 + 0x930);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    fVar1 = (_DAT_0067338c * *(float *)(param_1 + 0x1f9c) + *(float *)(param_1 + 0x1b70)) -
            *(float *)(param_1 + 0x1cc4);
    FUN_0041ce10(fVar1 * DAT_00701590,fVar1 * DAT_00701594,fVar1 * DAT_00701598);
    local_19c = local_1a8;
    local_198 = local_1a4;
    local_194 = local_1a0;
    FUN_004bde20(&local_1e4,param_1 + 0x34,&local_19c);
    FUN_004f1820(1,&local_1e4,&DAT_00701590);
  }
  FUN_004f0080();
  FUN_004f04a0();
  return;
}

