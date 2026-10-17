
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005cc1f0(int param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,
            float param_6,int param_7)

{
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  fVar10 = (float10)thunk_FUN_00603580();
  fVar2 = (float10)_DAT_0064b938;
  *(undefined4 *)(param_1 + 0x20) = 4;
  *(undefined4 *)(param_1 + 4) = 0;
  *(float *)(param_1 + 0x28) = (float)(fVar10 * fVar2);
  if (param_7 == 0) {
    switch(param_5) {
    case 0:
    case 1:
    case 2:
    case 5:
      uVar7 = FUN_005cc130(uVar7,(param_2[9] - param_2[6]) * _DAT_0064b250 + param_2[6],
                           (param_2[10] - param_2[7]) * _DAT_0064b250 + param_2[7],
                           (param_2[0xb] - param_2[8]) * _DAT_0064b250 + param_2[8],
                           param_3[1] + _DAT_00650d50,*param_3 * _DAT_0064b328,
                           (param_4 * _DAT_0064b24c) / param_6);
      fVar14 = param_2[7] - param_2[4];
      fVar13 = param_2[8] - param_2[5];
      fVar5 = fVar14 * _DAT_0064b930;
      fVar6 = fVar13 * _DAT_0064b930;
      fVar4 = (param_2[6] - param_2[3]) * _DAT_0064b930 + param_2[3];
      fVar12 = fVar5 + param_2[4];
      fVar3 = fVar6 + param_2[5];
      uVar7 = FUN_005cc130(uVar7,fVar4,fVar12,fVar3,*param_3 + _DAT_00650d48,
                           param_3[1] * _DAT_0064b328,(param_4 * _DAT_00650d4c) / param_6);
      FUN_0041ce10((param_2[6] - param_2[3]) * _DAT_0064b328,
                   (param_2[7] - param_2[4]) * _DAT_0064b328,
                   (param_2[8] - param_2[5]) * _DAT_0064b328);
      FUN_0041ce10(local_f4 + param_2[3],fVar5 + param_2[4],fVar6 + param_2[5]);
      uVar7 = FUN_005cc130(uVar7,local_104,fVar14,fVar13,param_3[3] + _DAT_00650d40,
                           param_3[2] * _DAT_0064b328,(param_4 * _DAT_00650d44) / param_6);
      FUN_0041ce10(param_2[3] - *param_2,param_2[4] - param_2[1],param_2[5] - param_2[2]);
      FUN_0041ce10(local_f4 * _DAT_006506f0,fVar5 * _DAT_006506f0,fVar6 * _DAT_006506f0);
      FUN_0041ce10(local_104 + *param_2,fVar14 + param_2[1],fVar13 + param_2[2]);
      uVar7 = FUN_005cc130(uVar7,fVar4,fVar12,fVar3,param_3[2] + _DAT_00650d38,
                           param_3[3] * _DAT_0064b328,(param_4 * _DAT_00650d3c) / param_6);
      FUN_0041ce10(param_2[3] - *param_2,param_2[4] - param_2[1],param_2[5] - param_2[2]);
      FUN_0041ce10(local_f4 * _DAT_0064b2f4,fVar5 * _DAT_0064b2f4,fVar6 * _DAT_0064b2f4);
      FUN_0041ce10(local_104 + *param_2,fVar14 + param_2[1],fVar13 + param_2[2]);
      FUN_005cc130(uVar7,fVar4,fVar12,fVar3,param_3[1] + _DAT_00650d30,*param_3 * _DAT_0064b328,
                   (param_4 * _DAT_00650d34) / param_6);
      return;
    case 3:
    case 4:
    case 6:
      FUN_0041ce10(param_2[9] - param_2[6],param_2[10] - param_2[7],param_2[0xb] - param_2[8]);
      FUN_0041ce10(0,0,0);
      FUN_0041ce10(local_f4 + param_2[6],local_f0 + param_2[7],local_ec + param_2[8]);
      uVar7 = FUN_005cc130(uVar7,local_104,local_100,local_fc,param_3[1] + _DAT_00650d50,
                           *param_3 * _DAT_0064b328,(param_4 * _DAT_00650d44) / param_6);
      FUN_0041ce10(param_2[6] - param_2[3],param_2[7] - param_2[4],param_2[8] - param_2[5]);
      FUN_0041ce10(local_f4 * _DAT_0064b248,local_f0 * _DAT_0064b248,local_ec * _DAT_0064b248);
      FUN_0041ce10(local_104 + param_2[3],local_100 + param_2[4],local_fc + param_2[5]);
      uVar7 = FUN_005cc130(uVar7,local_e8,local_e4,local_e0,*param_3 + _DAT_00650d48,
                           param_3[1] * _DAT_0064b328,(param_4 * _DAT_00650d2c) / param_6);
      FUN_0041ce10(param_2[6] - param_2[3],param_2[7] - param_2[4],param_2[8] - param_2[5]);
      FUN_0041ce10(0,0,0);
      FUN_0041ce10(local_f4 + param_2[3],local_f0 + param_2[4],local_ec + param_2[5]);
      uVar7 = FUN_005cc130(uVar7,local_104,local_100,local_fc,param_3[3] + _DAT_00650d40,
                           param_3[2] * _DAT_0064b328,(param_4 * _DAT_00650d34) / param_6);
      FUN_0041ce10(param_2[3] - *param_2,param_2[4] - param_2[1],param_2[5] - param_2[2]);
      FUN_0041ce10(local_f4 * _DAT_0064b248,local_f0 * _DAT_0064b248,local_ec * _DAT_0064b248);
      FUN_0041ce10(local_104 + *param_2,local_100 + param_2[1],local_fc + param_2[2]);
      param_6 = (param_4 + param_4) / param_6;
      uVar7 = FUN_005cc130(uVar7,local_e8,local_e4,local_e0,param_3[2] + _DAT_00650d38,
                           param_3[3] * _DAT_0064b328,param_6);
      FUN_0041ce10(param_2[3] - *param_2,param_2[4] - param_2[1],param_2[5] - param_2[2]);
      FUN_0041ce10(0,0,0);
      FUN_0041ce10(local_f4 + *param_2,local_f0 + param_2[1],local_ec + param_2[2]);
      FUN_005cc130(uVar7,local_104,local_100,local_fc,param_3[1] + _DAT_00650d30,
                   *param_3 * _DAT_0064b328,param_6);
      return;
    }
  }
  else {
    switch(param_5) {
    case 0:
    case 1:
    case 2:
    case 5:
      FUN_0041ce10(param_2[9] - param_2[6],param_2[10] - param_2[7],param_2[0xb] - param_2[8]);
      FUN_0041ce10(local_f4 * _DAT_0064b250,local_f0 * _DAT_0064b250,local_ec * _DAT_0064b250);
      FUN_0041ce10(local_104 + param_2[6],local_100 + param_2[7],local_fc + param_2[8]);
      uVar7 = FUN_005cc130(uVar7,local_e8,local_e4,local_e0,param_3[1] + _DAT_00650d50,
                           *param_3 * _DAT_0064b328,(param_4 * _DAT_00650d28) / param_6);
      pfVar1 = param_2 + 3;
      FUN_0041ce10(param_2[6] - *pfVar1,param_2[7] - param_2[4],param_2[8] - param_2[5]);
      FUN_0041ce10(local_f4 * _DAT_0064b930,local_f0 * _DAT_0064b930,local_ec * _DAT_0064b930);
      FUN_0041ce10(local_104 + *pfVar1,local_100 + param_2[4],local_fc + param_2[5]);
      uVar7 = FUN_005cc130(uVar7,local_e8,local_e4,local_e0,*param_3 + _DAT_00650d48,
                           param_3[1] * _DAT_0064b328,(param_4 * _DAT_00650d24) / param_6);
      FUN_0041ce10(param_2[6] - *pfVar1,param_2[7] - param_2[4],param_2[8] - param_2[5]);
      FUN_0041ce10(local_f4 * _DAT_0064b328,local_f0 * _DAT_0064b328,local_ec * _DAT_0064b328);
      FUN_0041ce10(local_104 + *pfVar1,local_100 + param_2[4],local_fc + param_2[5]);
      uVar7 = FUN_005cc130(uVar7,local_e8,local_e4,local_e0,param_3[3] + _DAT_00650d40,
                           param_3[2] * _DAT_0064b328,(param_4 * _DAT_00650d20) / param_6);
      FUN_0041ce10(*pfVar1 - *param_2,param_2[4] - param_2[1],param_2[5] - param_2[2]);
      FUN_0041ce10(local_f4 * _DAT_006506f0,local_f0 * _DAT_006506f0,local_ec * _DAT_006506f0);
      FUN_0041ce10(local_104 + *param_2,local_100 + param_2[1],local_fc + param_2[2]);
      local_f8 = FUN_005cc130(uVar7,local_e8,local_e4,local_e0,param_3[2] + _DAT_00650d38,
                              param_3[3] * _DAT_0064b328,(param_4 * _DAT_00650d1c) / param_6);
      param_6 = (param_4 * _DAT_00650d18) / param_6;
      fVar14 = *param_3 * _DAT_0064b328;
      fVar13 = param_3[1] + _DAT_00650d30;
      uVar7 = FUN_004bde20(local_48,pfVar1,param_2,0x3dcccccd,fVar13,fVar14,param_6);
      uVar7 = FUN_004bdd80(local_c0,uVar7);
      puVar9 = (undefined4 *)FUN_004bddd0(local_60,param_2,uVar7);
      uVar7 = *puVar9;
      uVar8 = puVar9[1];
      uVar11 = puVar9[2];
      break;
    case 3:
    case 4:
    case 6:
      fVar14 = (param_4 * _DAT_00650d44) / param_6;
      fVar13 = *param_3 * _DAT_0064b328;
      fVar12 = param_3[1] + _DAT_00650d50;
      uVar8 = FUN_004bde20(local_a8,param_2 + 9,param_2 + 6,0,fVar12,fVar13,fVar14);
      uVar8 = FUN_004bdd80(local_30,uVar8);
      puVar9 = (undefined4 *)FUN_004bddd0(local_90,param_2 + 6,uVar8);
      uVar7 = FUN_005cc130(uVar7,*puVar9,puVar9[1],puVar9[2],fVar12,fVar13,fVar14);
      pfVar1 = param_2 + 3;
      fVar14 = (param_4 * _DAT_00650d2c) / param_6;
      fVar13 = param_3[1] * _DAT_0064b328;
      fVar12 = *param_3 + _DAT_00650d48;
      uVar8 = FUN_004bde20(local_d8,param_2 + 6,pfVar1,0x3f000000,fVar12,fVar13,fVar14);
      uVar8 = FUN_004bdd80(local_78,uVar8);
      puVar9 = (undefined4 *)FUN_004bddd0(local_18,pfVar1,uVar8);
      uVar7 = FUN_005cc130(uVar7,*puVar9,puVar9[1],puVar9[2],fVar12,fVar13,fVar14);
      fVar14 = (param_4 * _DAT_00650d34) / param_6;
      fVar13 = param_3[2] * _DAT_0064b328;
      fVar12 = param_3[3] + _DAT_00650d40;
      uVar8 = FUN_004bde20(local_cc,param_2 + 6,pfVar1,0,fVar12,fVar13,fVar14);
      uVar8 = FUN_004bdd80(local_b4,uVar8);
      puVar9 = (undefined4 *)FUN_004bddd0(local_9c,pfVar1,uVar8);
      uVar7 = FUN_005cc130(uVar7,*puVar9,puVar9[1],puVar9[2],fVar12,fVar13,fVar14);
      param_6 = (param_4 + param_4) / param_6;
      fVar14 = param_3[3] * _DAT_0064b328;
      fVar13 = param_3[2] + _DAT_00650d38;
      fVar12 = param_6;
      uVar8 = FUN_004bde20(local_84,pfVar1,param_2,0x3f000000,fVar13,fVar14,param_6);
      uVar8 = FUN_004bdd80(local_6c,uVar8);
      puVar9 = (undefined4 *)FUN_004bddd0(local_54,param_2,uVar8);
      local_f8 = FUN_005cc130(uVar7,*puVar9,puVar9[1],puVar9[2],fVar13,fVar14,fVar12);
      fVar14 = *param_3 * _DAT_0064b328;
      fVar13 = param_3[1] + _DAT_00650d30;
      uVar7 = FUN_004bde20(local_3c,pfVar1,param_2,0,fVar13,fVar14,param_6);
      uVar7 = FUN_004bdd80(local_24,uVar7);
      puVar9 = (undefined4 *)FUN_004bddd0(local_c,param_2,uVar7);
      uVar7 = *puVar9;
      uVar8 = puVar9[1];
      uVar11 = puVar9[2];
      break;
    default:
      goto switchD_005cc23e_default;
    }
    FUN_005cc130(local_f8,uVar7,uVar8,uVar11,fVar13,fVar14,param_6);
  }
switchD_005cc23e_default:
  return;
}

