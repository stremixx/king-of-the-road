
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f3170(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  short *local_c4;
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
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
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
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  *param_2 = DAT_007015b0;
  param_2[1] = DAT_007015b4;
  param_2[2] = DAT_007015b8;
  *param_3 = DAT_007015b0;
  param_3[1] = DAT_007015b4;
  param_3[2] = DAT_007015b8;
  if (*(int *)(param_1 + 0x2768) == 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      local_c4 = (short *)(param_1 + 0x19a4);
      iVar7 = param_1 + 0x900;
      pfVar4 = (float *)(param_1 + 0xf08);
      do {
        local_e0 = DAT_007015b8;
        local_d4 = DAT_007015b8;
        local_c8 = DAT_007015b8;
        local_e8 = DAT_007015b0;
        local_e4 = DAT_007015b4;
        local_dc = DAT_007015b0;
        local_d8 = DAT_007015b4;
        local_d0 = DAT_007015b0;
        local_cc = DAT_007015b4;
        if (*local_c4 == 0) {
          local_e8 = pfVar4[0x4ab];
          local_e4 = pfVar4[0x4ac];
          local_d0 = *pfVar4;
          local_e0 = pfVar4[0x4ad];
          local_cc = pfVar4[1];
          local_c8 = pfVar4[2];
          local_dc = pfVar4[0x47b];
          local_d8 = pfVar4[0x47c];
          local_d4 = pfVar4[0x47d];
        }
        uVar2 = FUN_004bddd0(local_c,&local_e8,&local_d0,&local_dc);
        uVar2 = FUN_004bddd0(local_24,uVar2);
        FUN_005aae00(&local_84,uVar2);
        pfVar3 = (float *)FUN_004cb300(&local_48,&local_e8,iVar7);
        local_e8 = *pfVar3;
        local_e4 = pfVar3[1];
        local_e0 = pfVar3[2];
        pfVar3 = (float *)FUN_004cb300(&local_60,&local_dc,iVar7);
        local_dc = *pfVar3;
        local_d8 = pfVar3[1];
        local_d4 = pfVar3[2];
        pfVar3 = (float *)FUN_004cb300(&local_6c,&local_d0,iVar7);
        local_d0 = *pfVar3;
        local_cc = pfVar3[1];
        local_c8 = pfVar3[2];
        uVar2 = FUN_004bde70(&local_78,pfVar4 + 0x24f,&local_e8);
        FUN_005aae00(&local_54,uVar2);
        iVar6 = iVar6 + 1;
        local_c4 = local_c4 + 1;
        pfVar4 = pfVar4 + 3;
      } while (iVar6 < *(int *)(param_1 + 0xdd4));
    }
    local_ac = DAT_007015b8;
    iVar6 = 0;
    local_b4 = DAT_007015b0;
    local_b0 = DAT_007015b4;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      iVar7 = param_1 + 0x1844;
      psVar5 = (short *)(param_1 + 0x19a4);
      do {
        local_e8 = DAT_007015b0;
        local_e4 = DAT_007015b4;
        local_e0 = DAT_007015b8;
        if (*psVar5 == 0) {
          local_e8 = *(float *)(iVar7 + 0x8b0);
          local_e4 = *(float *)(iVar7 + 0x8b4);
          local_e0 = *(float *)(iVar7 + 0x8b8);
        }
        pfVar4 = (float *)FUN_004cb300(local_c,&local_e8,param_1 + 0x900);
        local_e8 = *pfVar4;
        local_e4 = pfVar4[1];
        local_e0 = pfVar4[2];
        uVar2 = FUN_004bde70(local_24,iVar7,&local_e8);
        FUN_005aae00(&local_84,uVar2);
        iVar6 = iVar6 + 1;
        psVar5 = psVar5 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar6 < *(int *)(param_1 + 0xdd4));
    }
    uVar2 = FUN_004e1030(local_c,&local_b4,_DAT_0067337c * _DAT_0067337c);
    FUN_005aae00(local_24,uVar2);
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      local_c4 = (short *)(param_1 + 0x19a4);
      pfVar4 = (float *)(param_1 + 0xf68);
      pfVar3 = (float *)(param_1 + 0x1848);
      do {
        local_c8 = DAT_007015b8;
        local_d4 = DAT_007015b8;
        local_e0 = DAT_007015b8;
        local_d0 = DAT_007015b0;
        local_cc = DAT_007015b4;
        local_dc = DAT_007015b0;
        local_d8 = DAT_007015b4;
        local_e8 = DAT_007015b0;
        local_e4 = DAT_007015b4;
        if (*local_c4 == 0) {
          local_d0 = pfVar3[0x25b];
          local_cc = pfVar3[0x25c];
          local_e8 = pfVar3[-0x250];
          local_c8 = pfVar3[0x25d];
          local_e4 = pfVar3[-0x24f];
          local_e0 = pfVar3[-0x24e];
          local_dc = pfVar3[0x22b];
          local_d8 = pfVar3[0x22c];
          local_d4 = pfVar3[0x22d];
        }
        local_38 = local_e4 + local_cc;
        local_34 = local_e0 + local_c8;
        local_b4 = local_dc + local_e8 + local_d0;
        local_b0 = local_38 + local_d8;
        local_ac = local_34 + local_d4;
        local_18 = local_b4;
        local_14 = local_b0;
        local_10 = local_ac;
        FUN_005aae00(local_24,&local_18);
        local_9c = local_d0 * *(float *)(param_1 + 0x900) +
                   local_c8 * *(float *)(param_1 + 0x918) + local_cc * *(float *)(param_1 + 0x90c);
        local_98 = local_d0 * *(float *)(param_1 + 0x904) +
                   local_c8 * *(float *)(param_1 + 0x91c) + local_cc * *(float *)(param_1 + 0x910);
        local_94 = local_d0 * *(float *)(param_1 + 0x908) +
                   local_c8 * *(float *)(param_1 + 0x920) + local_cc * *(float *)(param_1 + 0x914);
        local_a8 = local_dc * *(float *)(param_1 + 0x900) +
                   local_d4 * *(float *)(param_1 + 0x918) + local_d8 * *(float *)(param_1 + 0x90c);
        local_a4 = local_dc * *(float *)(param_1 + 0x904) +
                   local_d4 * *(float *)(param_1 + 0x91c) + local_d8 * *(float *)(param_1 + 0x910);
        local_a0 = local_dc * *(float *)(param_1 + 0x908) +
                   local_d4 * *(float *)(param_1 + 0x920) + local_d8 * *(float *)(param_1 + 0x914);
        FUN_0041ce10(local_e0 * *(float *)(param_1 + 0x918) +
                     local_e4 * *(float *)(param_1 + 0x90c) + local_e8 * *(float *)(param_1 + 0x900)
                     ,local_e8 * *(float *)(param_1 + 0x904) +
                      local_e0 * *(float *)(param_1 + 0x91c) +
                      local_e4 * *(float *)(param_1 + 0x910),
                     local_e8 * *(float *)(param_1 + 0x908) +
                     local_e0 * *(float *)(param_1 + 0x920) + local_e4 * *(float *)(param_1 + 0x914)
                    );
        fVar1 = *pfVar4;
        FUN_0041ce10(fVar1 * DAT_00701590,fVar1 * DAT_00701594,fVar1 * DAT_00701598);
        FUN_0041ce10(local_30 + pfVar3[-1],local_2c + *pfVar3,local_28 + pfVar3[1]);
        FUN_0041ce10(local_bc * local_94 - local_b8 * local_98,
                     local_b8 * local_9c - local_c0 * local_94,
                     local_c0 * local_98 - local_bc * local_9c);
        FUN_0041ce10(local_bc * local_a0 - local_b8 * local_a4,
                     local_b8 * local_a8 - local_c0 * local_a0,
                     local_c0 * local_a4 - local_bc * local_a8);
        FUN_0041ce10(local_88 * local_bc - local_8c * local_b8,
                     local_90 * local_b8 - local_88 * local_c0,
                     local_8c * local_c0 - local_90 * local_bc);
        FUN_0041ce10(local_54 + local_78,local_50 + local_74,local_4c + local_70);
        FUN_0041ce10(local_6c + local_60,local_68 + local_5c,local_64 + local_58);
        local_84 = local_48;
        local_80 = local_44;
        local_7c = local_40;
        FUN_005aae00(local_c,&local_84);
        iVar6 = iVar6 + 1;
        local_c4 = local_c4 + 1;
        pfVar4 = pfVar4 + 1;
        pfVar3 = pfVar3 + 3;
      } while (iVar6 < *(int *)(param_1 + 0xdd4));
      return;
    }
  }
  return;
}

