
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00565cd0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  param_1[0x313] = 1.4013e-45;
  local_30 = param_1[0x32e] - param_1[9];
  local_2c = param_1[0x32f] - param_1[10];
  local_28 = param_1[0x330] - param_1[0xb];
  local_1c = 0;
  local_24 = local_30;
  local_20 = local_2c;
  fVar8 = (float10)FUN_005aabc0(&local_24);
  fVar1 = (float)fVar8;
  if ((float10)_DAT_0064a668 < fVar8) {
    FUN_005aad10(&local_18,(float)_DAT_0064a660 / fVar1);
  }
  fVar2 = DAT_00701580 * *param_1 + DAT_00701584 * param_1[3] + DAT_00701588 * param_1[6];
  fVar3 = DAT_00701580 * param_1[1] + DAT_00701584 * param_1[4] + DAT_00701588 * param_1[7];
  fVar5 = DAT_00701580 * param_1[2] + DAT_00701584 * param_1[5] + DAT_00701588 * param_1[8];
  fVar4 = fVar5 * DAT_00701594 - fVar3 * DAT_00701598;
  fVar5 = fVar2 * DAT_00701598 - fVar5 * DAT_00701590;
  fVar2 = fVar3 * DAT_00701590 - fVar2 * DAT_00701594;
  local_30 = fVar5 * DAT_00701598 - fVar2 * DAT_00701594;
  local_2c = fVar2 * DAT_00701590 - fVar4 * DAT_00701598;
  local_28 = fVar4 * DAT_00701594 - fVar5 * DAT_00701590;
  local_18 = local_30;
  local_14 = local_2c;
  local_10 = local_28;
  FUN_005aaad0(local_c,&local_30);
  fVar8 = (float10)FUN_00562330(local_c);
  if ((float10)fVar1 < fVar8 + (float10)_DAT_0064b310) {
    return 1;
  }
  param_1[0x350] = 1.4013e-45;
  param_1[0x35c] = 0.0;
  param_1[0x34e] = 1.4013e-45;
  param_1[0x34f] = 0.0;
  param_1[0x35b] = 1.4013e-45;
  param_1[0x362] = 1.4013e-45;
  param_1[0x35e] =
       ((fVar1 + _DAT_0064b440) *
       ((float)_DAT_0064a650 /
       (ABS(param_1[0xd] * param_1[0x19] +
            param_1[0x1a] * param_1[0x10] + param_1[0x1b] * param_1[0x13]) + (float)_DAT_0064a778)))
       / (fVar1 + _DAT_0064b2e8);
  sVar6 = FUN_00560680();
  if (sVar6 == -1) {
    param_1[0x363] = param_1[0x32e];
    param_1[0x364] = param_1[0x32f];
    param_1[0x365] = param_1[0x330];
  }
  else {
    pfVar7 = (float *)FUN_00436540(&local_18,(int)sVar6);
    param_1[0x363] = *pfVar7;
    param_1[0x364] = pfVar7[1];
    param_1[0x365] = pfVar7[2];
  }
  FUN_0041ce10(param_1[0x363] - param_1[9],param_1[0x364] - param_1[10],
               param_1[0x365] - param_1[0xb]);
  local_30 = local_18;
  local_2c = local_14;
  local_28 = local_10;
  fVar8 = (float10)FUN_005aabc0(&local_30);
  if (fVar8 < (float10)_DAT_0064b31c) {
    FUN_005606a0();
  }
  return 0;
}

