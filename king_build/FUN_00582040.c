
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00582040(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = *(float *)(param_1 + 0x48c) - *(float *)(param_1 + 0x218);
  pfVar1 = (float *)(param_1 + 0x218);
  fVar3 = *(float *)(param_1 + 0x490) - *(float *)(param_1 + 0x21c);
  fVar4 = *(float *)(param_1 + 0x494) - *(float *)(param_1 + 0x220);
  if (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <
      *(float *)(param_1 + 400) * (float)_DAT_0064a658) {
    *param_2 = *(undefined4 *)(param_1 + 0x498);
    param_2[1] = *(undefined4 *)(param_1 + 0x49c);
    param_2[2] = *(undefined4 *)(param_1 + 0x4a0);
    return;
  }
  fVar2 = *(float *)(param_1 + 400);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_24 = *pfVar1 - DAT_00701590 * fVar2 * _DAT_0064b440;
  local_20 = *(float *)(param_1 + 0x21c) - DAT_00701594 * fVar2 * _DAT_0064b440;
  local_1c = *(float *)(param_1 + 0x220) - fVar2 * DAT_00701598 * _DAT_0064b440;
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  uVar5 = FUN_004e6af1(*(undefined4 *)(param_1 + 800),0,0,pfVar1,&local_18,&local_30,&local_3c);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x48c) = local_30;
    *(undefined4 *)(param_1 + 0x498) = local_3c;
    *(undefined4 *)(param_1 + 0x490) = local_2c;
    *(undefined4 *)(param_1 + 0x49c) = local_38;
    *(undefined4 *)(param_1 + 0x494) = local_28;
    *(undefined4 *)(param_1 + 0x4a0) = local_34;
    *param_2 = local_3c;
    param_2[1] = local_38;
    param_2[2] = local_34;
    return;
  }
  local_24 = DAT_00701590 * _DAT_0064b2e8;
  local_20 = DAT_00701594 * _DAT_0064b2e8;
  local_1c = DAT_00701598 * _DAT_0064b2e8;
  local_18 = *pfVar1 - local_24;
  local_14 = *(float *)(param_1 + 0x21c) - local_20;
  local_10 = *(float *)(param_1 + 0x220) - local_1c;
  local_c = local_24;
  local_8 = local_20;
  local_4 = local_1c;
  uVar6 = FUN_004bddd0(&local_24,pfVar1,&local_c,&local_18,&local_30,&local_3c);
  uVar5 = FUN_004e6af1(*(undefined4 *)(param_1 + 800),0,0,uVar6);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x498) = local_3c;
    *(undefined4 *)(param_1 + 0x49c) = local_38;
    *(undefined4 *)(param_1 + 0x48c) = local_30;
    *(undefined4 *)(param_1 + 0x4a0) = local_34;
    *(undefined4 *)(param_1 + 0x490) = local_2c;
    *(undefined4 *)(param_1 + 0x494) = local_28;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x498);
  param_2[1] = *(undefined4 *)(param_1 + 0x49c);
  param_2[2] = *(undefined4 *)(param_1 + 0x4a0);
  return;
}

