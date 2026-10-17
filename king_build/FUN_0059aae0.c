
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059aae0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,float *param_4,
            undefined4 param_5,float param_6,float param_7,float param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_24;
  float fStack_20;
  float local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006474a8;
  local_c = ExceptionList;
  local_24 = param_6;
  fStack_20 = 0.0;
  ExceptionList = &local_c;
  FUN_0059a200(param_2,param_3,param_7,param_7 * _DAT_0064b310,param_5,param_6,
               param_8 / (float)(uint)param_6,param_8,100);
  pfVar1 = (float *)(param_1 + 0x30);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *pfVar1 = 0.0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *param_1 = &PTR_LAB_0064fcc8;
  param_1[5] = &PTR_LAB_0064fc7c;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  local_4 = 0;
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  fVar2 = param_4[2];
  param_1[0x2b] = 0x40400000;
  param_1[0x2a] = fVar2;
  param_1[0x2c] = 0;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  fVar2 = (fVar2 - (float)iVar3 * _DAT_0064b244) * _DAT_0064fb58;
  param_1[0x2d] = fVar2 + fVar2;
  param_1[0x2f] = 0x3f3504f3;
  param_1[0x2e] = 0x3f3504f3;
  local_24 = DAT_00701598 * param_4[1] - DAT_00701594 * param_4[2];
  fStack_20 = DAT_00701590 * param_4[2] - DAT_00701598 * *param_4;
  local_1c = DAT_00701594 * *param_4;
  fVar2 = DAT_00701590 * param_4[1];
  *pfVar1 = local_24;
  local_1c = local_1c - fVar2;
  param_1[0x31] = fStack_20;
  param_1[0x32] = local_1c;
  fVar4 = (float10)FUN_005aabc0(pfVar1);
  if ((float10)_DAT_0064a590 <= fVar4) {
    FUN_005aad50(&local_24,(float)fVar4);
  }
  else {
    *pfVar1 = DAT_007015a0;
    param_1[0x31] = DAT_007015a4;
    param_1[0x32] = DAT_007015a8;
  }
  FUN_005aad10(local_18,0x3c23d70a);
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  param_1[0x33] = ((float)iVar3 * _DAT_0064b244 - fVar2) * _DAT_0064fc78;
  iVar3 = _rand();
  param_1[0x34] = (float)iVar3 * _DAT_0064fc74;
  ExceptionList = local_c;
  return param_1;
}

