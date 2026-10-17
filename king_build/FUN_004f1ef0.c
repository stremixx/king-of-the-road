
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004f1ef0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,
            float param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float *local_ec;
  int local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
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
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x2638) < 2) {
    local_ec = (float *)0x1;
    if (param_7 <= _DAT_0064b254) {
      local_ec = (float *)0xffffffff;
    }
    local_e8 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      fVar5 = (float)(int)local_ec;
      local_ec = (float *)(param_1 + 0x10c);
      pfVar6 = (float *)(param_1 + 0xaa8);
      pfVar8 = (float *)(param_1 + 0x1984);
      do {
        pfVar6[0x37f] = *param_5;
        pfVar6[0x380] = param_5[1];
        pfVar6[0x381] = param_5[2];
        pfVar8[-8] = fVar5 * param_7;
        *pfVar8 = fVar5 * param_7 * *local_ec;
        fVar1 = param_8[1];
        fVar2 = param_8[2];
        pfVar6[0x397] = fVar5 * *param_8;
        pfVar6[0x398] = fVar5 * fVar1;
        pfVar6[0x399] = fVar5 * fVar2;
        fVar1 = param_8[1];
        fVar2 = param_8[2];
        pfVar6[-0x19] = fVar5 * *param_8;
        pfVar6[-0x18] = fVar5 * fVar1;
        pfVar6[-0x17] = fVar5 * fVar2;
        pfVar6[-1] = *param_8;
        *pfVar6 = param_8[1];
        pfVar6[1] = param_8[2];
        fVar1 = *(float *)(param_1 + 0xd8);
        fVar2 = *(float *)(param_1 + 0xd0);
        fVar3 = *(float *)(param_1 + 0xd0);
        fVar4 = *(float *)(param_1 + 0xd4);
        pfVar6[0x2f] = *(float *)(param_1 + 0xd4) * pfVar6[1] - *(float *)(param_1 + 0xd8) * *pfVar6
        ;
        pfVar6[0x30] = fVar1 * pfVar6[-1] - pfVar6[1] * fVar2;
        pfVar6[0x31] = *pfVar6 * fVar3 - fVar4 * pfVar6[-1];
        fVar1 = *(float *)(param_1 + 0xd8);
        fVar2 = *(float *)(param_1 + 0xd0);
        fVar3 = *(float *)(param_1 + 0xd0);
        fVar4 = *(float *)(param_1 + 0xd4);
        pfVar6[0x17] = pfVar6[-0x17] * *(float *)(param_1 + 0xd4) -
                       *(float *)(param_1 + 0xd8) * pfVar6[-0x18];
        pfVar6[0x18] = fVar1 * pfVar6[-0x19] - pfVar6[-0x17] * fVar2;
        pfVar6[0x19] = pfVar6[-0x18] * fVar3 - pfVar6[-0x19] * fVar4;
        pfVar8[0x36] = 0.0;
        pfVar8[0x3e] = 1.0;
        pfVar8[0x2b] = 0.0;
        local_ec = local_ec + 0x3e;
        local_e8 = local_e8 + 1;
        pfVar8[-0x321] = pfVar8[0x33b] * pfVar8[-0x319];
        pfVar6 = pfVar6 + 3;
        pfVar8 = pfVar8 + 1;
      } while (local_e8 < *(int *)(param_1 + 0xdd4));
      return;
    }
  }
  else {
    local_e4 = param_4[6] * param_6[2] + param_4[3] * param_6[1] + *param_4 * *param_6;
    local_e0 = *param_6 * param_4[1] + param_4[4] * param_6[1] + param_6[2] * param_4[7];
    local_dc = param_4[8] * param_6[2] + *param_6 * param_4[2] + param_4[5] * param_6[1];
    FUN_004e2984(&local_84,&local_e4,param_1 + 0x1f54);
    local_e8 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      pfVar6 = (float *)(param_1 + 0x108);
      pfVar8 = (float *)(param_1 + 0x1848);
      pfVar9 = (float *)(param_1 + 0x1a5c);
      do {
        fVar5 = param_4[6] * pfVar6[1] + *param_4 * pfVar6[-1] + param_4[3] * *pfVar6;
        local_e0 = *pfVar6 * param_4[4] + pfVar6[1] * param_4[7] + param_4[1] * pfVar6[-1];
        local_dc = pfVar6[-1] * param_4[2] + param_4[8] * pfVar6[1] + param_4[5] * *pfVar6;
        fVar1 = local_e0 * local_80 + local_dc * local_7c + fVar5 * local_84;
        fVar5 = fVar5 * fVar1;
        local_d8 = local_e0 * fVar1 * pfVar8[1] - local_dc * fVar1 * *pfVar8;
        local_d4 = local_dc * fVar1 * pfVar8[-1] - fVar5 * pfVar8[1];
        fVar5 = fVar5 * *pfVar8 - local_e0 * fVar1 * pfVar8[-1];
        local_c0 = local_d8 * *param_3 + local_d4 * param_3[3] + fVar5 * param_3[6];
        local_bc = local_d8 * param_3[1] + local_d4 * param_3[4] + fVar5 * param_3[7];
        pfVar7 = pfVar8 + 0x17;
        local_b8 = local_d4 * param_3[5] + fVar5 * param_3[8] + local_d8 * param_3[2];
        *pfVar7 = local_c0;
        pfVar8[0x18] = local_bc;
        pfVar8[0x19] = local_b8;
        FUN_0041ce10(pfVar8[0x19] * *pfVar6 - pfVar8[0x18] * pfVar6[1],
                     *pfVar7 * pfVar6[1] - pfVar8[0x19] * pfVar6[-1],
                     pfVar8[0x18] * pfVar6[-1] - *pfVar7 * *pfVar6);
        FUN_0041ce10(local_c8 * pfVar6[1] - local_c4 * *pfVar6,
                     local_c4 * pfVar6[-1] - local_cc * pfVar6[1],
                     local_cc * *pfVar6 - local_c8 * pfVar6[-1]);
        FUN_0041ce10(local_9c + *param_5,local_98 + param_5[1],local_94 + param_5[2]);
        pfVar8[0x17] = local_b4;
        pfVar8[0x18] = local_b0;
        pfVar8[0x19] = local_ac;
        fVar10 = (float10)FUN_005aabc0(pfVar8 + 0x17);
        pfVar9[-0x3e] = (float)fVar10;
        pfVar9[-0x36] = (float)(fVar10 * (float10)pfVar6[1]);
        if (pfVar9[-0x3e] <= (float)_DAT_0064a648) {
          pfVar8[0x2f] = *param_8;
          pfVar8[0x30] = param_8[1];
          pfVar8[0x31] = param_8[2];
        }
        else {
          fVar5 = pfVar9[-0x3e];
          FUN_0041ce10(pfVar8[0x17] / fVar5,pfVar8[0x18] / fVar5,pfVar8[0x19] / fVar5);
          pfVar8[0x2f] = local_a8;
          pfVar8[0x30] = local_a4;
          pfVar8[0x31] = local_a0;
        }
        if (pfVar9[0x5e] == 0.0) {
          pfVar8[-0x381] = *param_8;
          pfVar8[-0x380] = param_8[1];
          pfVar8[-0x37f] = param_8[2];
        }
        else if (pfVar8[0x11e] <= _DAT_0064b254) {
          FUN_005ab380(local_30,DAT_007015b0,DAT_007015b4,DAT_007015b8,
                       *(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                       *(undefined4 *)(param_1 + 0xd8),-*(float *)(param_1 + 0x1a20));
          pfVar7 = (float *)FUN_004cb300(local_54,param_8,local_30);
          pfVar8[-0x381] = *pfVar7;
          pfVar8[-0x380] = pfVar7[1];
          pfVar8[-0x37f] = pfVar7[2];
        }
        else {
          FUN_0041ce10(*param_8 * *param_2 + param_2[3] * param_8[1] + param_2[6] * param_8[2],
                       param_2[4] * param_8[1] + param_2[1] * *param_8 + param_2[7] * param_8[2],
                       param_2[5] * param_8[1] + param_2[2] * *param_8 + param_2[8] * param_8[2]);
          pfVar8[-0x381] = local_90;
          pfVar8[-0x380] = local_8c;
          pfVar8[-0x37f] = local_88;
        }
        pfVar8[-0x369] = pfVar8[-0x381];
        pfVar8[-0x368] = pfVar8[-0x380];
        pfVar8[-0x367] = pfVar8[-0x37f];
        FUN_0041ce10(*(float *)(param_1 + 0xd4) * pfVar8[-0x367] -
                     pfVar8[-0x368] * *(float *)(param_1 + 0xd8),
                     *(float *)(param_1 + 0xd8) * pfVar8[-0x369] -
                     pfVar8[-0x367] * *(float *)(param_1 + 0xd0),
                     pfVar8[-0x368] * *(float *)(param_1 + 0xd0) -
                     *(float *)(param_1 + 0xd4) * pfVar8[-0x369]);
        pfVar8[-0x339] = local_78;
        pfVar8[-0x338] = local_74;
        pfVar8[-0x337] = local_70;
        fVar10 = (float10)FUN_004e1080(pfVar8 + -0x381,pfVar8 + 0x2f);
        if (fVar10 < (float10)_DAT_0064a668) {
          pfVar7 = (float *)FUN_004cb2c0(local_3c,pfVar8 + -0x381);
          pfVar8[-0x381] = *pfVar7;
          pfVar8[-0x380] = pfVar7[1];
          pfVar8[-0x37f] = pfVar7[2];
        }
        pfVar7 = (float *)FUN_004bde70(local_60,param_1 + 0xd0,pfVar8 + -0x381);
        pfVar8[-0x351] = *pfVar7;
        pfVar8[-0x350] = pfVar7[1];
        pfVar8[-0x34f] = pfVar7[2];
        FUN_004bde70(local_6c,pfVar8 + 0x2f,pfVar8 + -0x381);
        fVar10 = (float10)FUN_004e1080(local_6c,param_1 + 0xd0);
        *pfVar9 = (float)fVar10;
        fVar10 = (float10)FUN_004e1080(pfVar8 + 0x2f,pfVar8 + -0x381);
        pfVar9[8] = (float)fVar10;
        if ((float)_DAT_0064a660 < *pfVar9) {
          *pfVar9 = 1.0;
        }
        if (*pfVar9 < (float)_DAT_0064ba38) {
          *pfVar9 = -1.0;
        }
        if (*pfVar9 < _DAT_0064b254) {
          pfVar7 = (float *)FUN_004cb2c0(local_48,pfVar8 + -0x351);
          pfVar8[-0x351] = *pfVar7;
          pfVar8[-0x350] = pfVar7[1];
          pfVar8[-0x34f] = pfVar7[2];
        }
        fVar10 = (float10)FUN_0061e4b0();
        pfVar9[-0xb] = (float)fVar10;
        local_e8 = local_e8 + 1;
        pfVar6 = pfVar6 + 0x3e;
        pfVar8 = pfVar8 + 3;
        pfVar9[-0x357] = pfVar9[-0x34f] * pfVar9[0x305];
        pfVar9 = pfVar9 + 1;
      } while (local_e8 < *(int *)(param_1 + 0xdd4));
    }
  }
  return;
}

