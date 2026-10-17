
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004f3990(int param_1,float *param_2,undefined4 *param_3,float *param_4,float *param_5,
            float param_6)

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 0x19b4) == '\0') {
    if ((param_4[2] * param_4[2] + param_4[1] * param_4[1] + *param_4 * *param_4 !=
         (float)_DAT_0064a668) ||
       (*(float *)(param_1 + 0x2640) * *(float *)(param_1 + 0x2640) * (float)_DAT_0064a5a8 <=
        *(float *)(param_1 + 0xc9c) * *(float *)(param_1 + 0xc9c) +
        *(float *)(param_1 + 0xca0) * *(float *)(param_1 + 0xca0) +
        *(float *)(param_1 + 0xca4) * *(float *)(param_1 + 0xca4))) {
      local_c4 = _DAT_0064b240 / *(float *)(param_1 + 0x2640);
      FUN_005aaad0(&local_a8,param_1 + 0xdc);
      FUN_0041ce10(local_a0 * *(float *)(param_1 + 0xd4) - local_a4 * *(float *)(param_1 + 0xd8),
                   local_a8 * *(float *)(param_1 + 0xd8) - local_a0 * *(float *)(param_1 + 0xd0),
                   local_a4 * *(float *)(param_1 + 0xd0) - local_a8 * *(float *)(param_1 + 0xd4));
      local_78 = local_d0;
      local_74 = local_cc;
      local_70 = local_c8;
      FUN_005aaad0(&local_c0,&local_78);
      FUN_0041ce10(local_bc * local_a0 - local_b8 * local_a4,
                   local_b8 * local_a8 - local_a0 * local_c0,
                   local_a4 * local_c0 - local_bc * local_a8);
      fVar1 = *(float *)(param_1 + 0x40) * local_a8 +
              *(float *)(param_1 + 0x48) * local_a0 + *(float *)(param_1 + 0x44) * local_a4;
      FUN_0041ce10(local_a8 * fVar1,local_a4 * fVar1,local_a0 * fVar1);
      fVar1 = local_c0 * *(float *)(param_1 + 0x40) +
              *(float *)(param_1 + 0x44) * local_bc + *(float *)(param_1 + 0x48) * local_b8;
      FUN_0041ce10(fVar1 * local_c0,local_bc * fVar1,local_b8 * fVar1);
      fVar1 = *(float *)(param_1 + 0x40) * local_b4 +
              *(float *)(param_1 + 0x48) * local_ac + *(float *)(param_1 + 0x44) * local_b0;
      FUN_0041ce10(local_b4 * fVar1,local_b0 * fVar1,local_ac * fVar1);
      fVar1 = *param_2 * local_a8 + local_a4 * param_2[1] + local_a0 * param_2[2];
      FUN_0041ce10(fVar1 * local_a8,local_a4 * fVar1,local_a0 * fVar1);
      local_90 = local_d0;
      local_8c = local_cc;
      local_88 = local_c8;
      fVar1 = *param_2 * local_c0 + local_bc * param_2[1] + local_b8 * param_2[2];
      FUN_0041ce10(fVar1 * local_c0,local_bc * fVar1,local_b8 * fVar1);
      local_4c = local_c8;
      local_54 = local_d0;
      local_50 = local_cc;
      fVar1 = local_ac * param_2[2] + local_b0 * param_2[1] + *param_2 * local_b4;
      FUN_0041ce10(local_b4 * fVar1,local_b0 * fVar1,local_ac * fVar1);
      local_c4 = local_c4 * param_6;
      local_7c = local_c8;
      local_84 = local_d0;
      local_80 = local_cc;
      FUN_0041ce10(local_90 * local_c4,local_8c * local_c4,local_88 * local_c4);
      FUN_0041ce10(local_48 + local_d0,local_44 + local_cc,local_40 + local_c8);
      FUN_0041ce10(local_54 * local_c4,local_50 * local_c4,local_4c * local_c4);
      FUN_0041ce10(local_6c + local_d0,local_68 + local_cc,local_64 + local_c8);
      FUN_0041ce10(local_84 * local_c4,local_80 * local_c4,local_7c * local_c4);
      FUN_0041ce10(local_60 + local_9c,local_5c + local_98,local_58 + local_94);
      if (local_3c * local_48 + local_34 * local_40 + local_38 * local_44 < (float)_DAT_0064a668) {
        fVar1 = local_48 * local_a8 + local_40 * local_a0 + local_44 * local_a4;
        FUN_005aad10(local_30,fVar1 / (fVar1 - (local_3c * local_a8 +
                                               local_34 * local_a0 + local_38 * local_a4)));
      }
      if (local_70 * local_64 + local_74 * local_68 + local_78 * local_6c < (float)_DAT_0064a668) {
        fVar1 = local_6c * local_c0 + local_68 * local_bc + local_64 * local_b8;
        FUN_005aad10(local_30,fVar1 / (fVar1 - (local_78 * local_c0 +
                                               local_74 * local_bc + local_70 * local_b8)));
      }
      if (local_c8 * local_58 + local_cc * local_5c + local_d0 * local_60 < (float)_DAT_0064a668) {
        fVar1 = local_58 * local_ac + local_5c * local_b0 + local_60 * local_b4;
        FUN_005aad10(local_30,fVar1 / (fVar1 - (local_c8 * local_ac +
                                               local_cc * local_b0 + local_d0 * local_b4)));
      }
      FUN_0041ce10(local_54 + local_90,local_50 + local_8c,local_4c + local_88);
      FUN_0041ce10(local_9c + local_84,local_98 + local_80,local_94 + local_7c);
      *param_2 = local_d0;
      param_2[1] = local_cc;
      param_2[2] = local_c8;
    }
    else {
      *param_2 = DAT_007015b0;
      param_2[1] = DAT_007015b4;
      param_2[2] = DAT_007015b8;
      FUN_004eeea0();
      *param_4 = DAT_007015b0;
      param_4[1] = DAT_007015b4;
      param_4[2] = DAT_007015b8;
    }
  }
  if (*(char *)(param_1 + 0x19b4) == '\0') {
    FUN_0041ce10(*(float *)(param_1 + 0x900) * *param_5 +
                 *(float *)(param_1 + 0x918) * param_5[2] + *(float *)(param_1 + 0x90c) * param_5[1]
                 ,*(float *)(param_1 + 0x904) * *param_5 +
                  *(float *)(param_1 + 0x91c) * param_5[2] +
                  *(float *)(param_1 + 0x910) * param_5[1],
                 *(float *)(param_1 + 0x908) * *param_5 +
                 *(float *)(param_1 + 0x920) * param_5[2] + *(float *)(param_1 + 0x914) * param_5[1]
                );
    local_d0 = *(float *)(param_1 + 0xe8);
    local_cc = *(float *)(param_1 + 0xec);
    local_c8 = *(float *)(param_1 + 0xf0);
    fVar6 = (float10)FUN_005aabc0((float *)(param_1 + 0xe8));
    if (fVar6 < (float10)_DAT_0064a648) {
      local_d0 = DAT_00701590;
      local_cc = (float)DAT_00701594;
      local_c8 = (float)DAT_00701598;
    }
    FUN_004e2984(local_c,&local_d0,param_1 + 0x1f48);
    FUN_005aaad0(&local_b4,local_c);
    FUN_0041ce10(local_ac * DAT_00701584 - local_b0 * DAT_00701588,
                 local_b4 * DAT_00701588 - local_ac * DAT_00701580,
                 local_b0 * DAT_00701580 - local_b4 * DAT_00701584);
    local_3c = local_9c;
    local_38 = local_98;
    local_34 = local_94;
    FUN_005aaad0(&local_c0,&local_3c);
    FUN_0041ce10(local_b8 * local_b0 - local_bc * local_ac,local_ac * local_c0 - local_b8 * local_b4
                 ,local_bc * local_b4 - local_b0 * local_c0);
    local_84 = local_9c;
    local_80 = local_98;
    local_7c = local_94;
    fVar6 = (float10)FUN_004e1080(&local_b4,&local_54);
    FUN_004bdd80(&local_78,&local_b4,(float)fVar6);
    fVar6 = (float10)FUN_004e1080(&local_c0,&local_54);
    FUN_004bdd80(&local_60,&local_c0,(float)fVar6);
    fVar6 = (float10)FUN_004e1080(&local_84,&local_54);
    FUN_004bdd80(&local_6c,&local_84,(float)fVar6);
    fVar6 = (float10)FUN_004e1080(param_3,&local_b4);
    FUN_004bdd80(&local_90,&local_b4,(float)fVar6);
    fVar6 = (float10)FUN_004e1080(param_3,&local_c0);
    FUN_004bdd80(&local_a8,&local_c0,(float)fVar6);
    fVar6 = (float10)FUN_004e1080(param_3,&local_84);
    FUN_004bdd80(&local_48,&local_84,(float)fVar6);
    uVar3 = FUN_004bdd80(&local_9c,&local_90,param_6);
    FUN_004bddd0(local_30,&local_78,uVar3);
    uVar3 = FUN_004bdd80(&local_9c,&local_48,param_6);
    FUN_004bddd0(local_18,&local_6c,uVar3);
    uVar3 = FUN_004bdd80(&local_9c,&local_a8,param_6);
    FUN_004bddd0(local_24,&local_60,uVar3);
    fVar6 = (float10)FUN_004e1080(&local_78,&local_78);
    local_c4 = (float)fVar6;
    fVar6 = (float10)FUN_004e1080(local_30,&local_78);
    if ((fVar6 < -(float10)local_c4 * (float10)_DAT_0064a728) &&
       ((float10)local_c4 * (float10)_DAT_0064c9c8 < fVar6)) {
      dVar2 = _DAT_0064ba38;
      if ((float)_DAT_0064a5a8 < ABS(*(float *)(param_1 + 0x1a50)) * *(float *)(param_1 + 0xdc4)) {
        dVar2 = _DAT_0064c9c0;
      }
      pfVar4 = (float *)FUN_004bdd80(&local_9c,&local_78,(float)dVar2 / param_6);
      local_90 = *pfVar4;
      local_8c = pfVar4[1];
      local_88 = pfVar4[2];
    }
    fVar6 = (float10)FUN_004e1080(param_4,param_4);
    if (fVar6 < (float10)_DAT_0064a660) {
      fVar6 = (float10)FUN_004e1080(local_24,&local_60);
      if (fVar6 < (float10)_DAT_0064a668) {
        fVar6 = (float10)FUN_004e1080(&local_c0,&local_60);
        local_c4 = (float)fVar6;
        fVar6 = (float10)FUN_004e1080(&local_c0,local_24);
        FUN_005aad10(&local_9c,(float)((float10)local_c4 / ((float10)local_c4 - fVar6)));
      }
      fVar6 = (float10)FUN_004e1080(local_18,&local_6c);
      if (fVar6 < (float10)_DAT_0064a668) {
        fVar6 = (float10)FUN_004e1080(&local_84,&local_6c);
        local_c4 = (float)fVar6;
        fVar6 = (float10)FUN_004e1080(&local_84,local_18);
        FUN_005aad10(&local_9c,(float)((float10)local_c4 / ((float10)local_c4 - fVar6)));
      }
    }
    uVar3 = FUN_004bddd0(&local_9c,&local_90,&local_a8,&local_48);
    puVar5 = (undefined4 *)FUN_004bddd0(&local_3c,uVar3);
    *param_3 = *puVar5;
    param_3[1] = puVar5[1];
    param_3[2] = puVar5[2];
  }
  return;
}

