
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cf0a0(int param_1,int param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  float **ppfVar4;
  float *apfStack_170 [8];
  undefined8 local_140;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_11c [12];
  undefined4 local_110 [8];
  undefined1 local_f0 [48];
  undefined1 local_c0 [160];
  undefined4 local_20;
  undefined4 local_1c;
  
  apfStack_170[7] = (float *)local_f0;
  apfStack_170[6] = (float *)0x4cf0c0;
  FUN_0057d570();
  apfStack_170[7] = (float *)0x4cf0c7;
  FUN_0057d5d0();
  local_134 = DAT_00701580;
  local_12c = DAT_00701588;
  local_130 = DAT_00701584;
  local_140 = (double)*(float *)(param_1 + 0x51e4);
  if (param_2 != DAT_0068a8f0) {
    apfStack_170[7] = (float *)local_c0;
    apfStack_170[5] = (float *)&param_2;
    apfStack_170[6] = (float *)param_2;
    apfStack_170[4] = (float *)0x4cf11a;
    FUN_0041d3f0();
    apfStack_170[5] = (float *)0x4cf11f;
    FUN_0043fd20();
    local_140 = (double)CONCAT44(local_1c,local_20);
    apfStack_170[6] = (float *)local_110;
    apfStack_170[7] = (float *)param_2;
    apfStack_170[5] = (float *)0x4cf14d;
    FUN_00437600();
    puVar1 = local_110;
    ppfVar4 = apfStack_170;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppfVar4 = (float *)*puVar1;
      puVar1 = puVar1 + 1;
      ppfVar4 = ppfVar4 + 1;
    }
    puVar1 = (undefined4 *)FUN_00439400(&local_128);
    apfStack_170[6] = (float *)*puVar1;
    local_130 = puVar1[1];
    local_12c = puVar1[2];
    local_134 = apfStack_170[6];
    if (param_4 != 0) {
      apfStack_170[7] = (float *)(*param_3 | 1);
      *param_3 = (uint)apfStack_170[7];
      apfStack_170[5] = (float *)&param_2;
      apfStack_170[4] = (float *)0x4cf1aa;
      FUN_0041d3f0();
      apfStack_170[5] = (float *)0x4cf1af;
      FUN_0043f770();
    }
  }
  if (_DAT_0064ba78 < local_140) {
    local_140 = 18.0;
  }
  apfStack_170[7] = (float *)&local_134;
  apfStack_170[6] = (float *)local_11c;
  apfStack_170[5] = (float *)0x4cf1e2;
  pfVar2 = (float *)FUN_005aaad0();
  local_120 = (float)local_140;
  local_128 = local_120 * *pfVar2;
  apfStack_170[7] = (float *)0x0;
  local_124 = local_120 * pfVar2[1];
  local_120 = local_120 * pfVar2[2];
  apfStack_170[6] = &local_128;
  apfStack_170[5] = (float *)0x4cf22a;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x90))();
  apfStack_170[5] = (float *)0x0;
  apfStack_170[4] = (float *)&DAT_007015b0;
  apfStack_170[3] = (float *)0x4cf23b;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x94))();
  apfStack_170[3] = (float *)0x1;
  apfStack_170[2] = (float *)0x4cf244;
  FUN_0054c170();
  apfStack_170[3] = (float *)0x3;
  apfStack_170[2] = (float *)0x4cf24d;
  FUN_0058e9d0();
  return;
}

