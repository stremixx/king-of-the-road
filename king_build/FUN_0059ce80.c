
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059ce80(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,float *param_4,float param_5
            ,float param_6,undefined4 param_7,float param_8,int param_9,float param_10)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_24;
  float fStack_20;
  float local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006474c8;
  local_c = ExceptionList;
  local_24 = param_8;
  fStack_20 = 0.0;
  ExceptionList = &local_c;
  FUN_0059a2a0(param_2,param_3,param_5 + param_5,param_6 + param_6,param_5,param_6,param_7,param_8,
               param_10 / (float)(uint)param_8,param_10,100);
  pfVar1 = (float *)(param_1 + 0x28);
  pfVar2 = (float *)(param_1 + 0x2b);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *pfVar1 = 0.0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *pfVar2 = 0.0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = &PTR_LAB_0064ff24;
  param_1[5] = &PTR_LAB_0064fed8;
  param_1[0x20] = param_1[0x20] | 1;
  local_4 = 0;
  *pfVar1 = *param_4;
  param_1[0x29] = param_4[1];
  param_1[0x2a] = param_4[2];
  local_24 = DAT_00701598 * (float)param_1[0x29] - DAT_00701594 * (float)param_1[0x2a];
  fStack_20 = DAT_00701590 * (float)param_1[0x2a] - DAT_00701598 * *pfVar1;
  local_1c = DAT_00701594 * *pfVar1 - DAT_00701590 * (float)param_1[0x29];
  *pfVar2 = local_24;
  param_1[0x2c] = fStack_20;
  param_1[0x2d] = local_1c;
  fVar5 = (float10)FUN_005aabc0(pfVar2);
  if ((float10)_DAT_0064a590 <= fVar5) {
    FUN_005aad50(&local_24,(float)fVar5);
  }
  else {
    *pfVar2 = DAT_007015a0;
    param_1[0x2c] = DAT_007015a4;
    param_1[0x2d] = DAT_007015a8;
  }
  FUN_005aad10(local_18,0x3f000000);
  param_1[0x30] = 0;
  iVar4 = _rand();
  fVar3 = (float)iVar4 * _DAT_0064b244;
  iVar4 = _rand();
  param_1[0x2e] = ((float)iVar4 * _DAT_0064b244 - fVar3) * _DAT_0064fed4;
  iVar4 = _rand();
  param_1[0x2f] = (float)iVar4 * _DAT_0064c3f0;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  DAT_006f59cc = DAT_006f59cc + 1;
  if (param_9 == 0) {
    param_1[0x31] = 0xfc;
  }
  else if (param_9 == 1) {
    param_1[0x31] = 0xfd;
  }
  else if (param_9 == 2) {
    param_1[0x31] = 0xfe;
  }
  ExceptionList = local_c;
  return param_1;
}

