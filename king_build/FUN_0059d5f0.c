
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059d5f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  float fVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059a2a0(param_2,param_3,param_5,param_5,param_5,param_5,param_6,param_7,0x447a0000,0x40400000
               ,100);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_LAB_0064ffb8;
  param_1[5] = &PTR_LAB_0064ff6c;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_4;
  local_4 = 0;
  param_1[0x26] = param_4[1];
  param_1[0x27] = param_4[2];
  iVar2 = _rand();
  FUN_0061e749((double)((float)iVar2 * (float)param_7 * _DAT_0064b244));
  iVar2 = __ftol();
  param_1[0x1d] = iVar2;
  if (param_7 + -1 < iVar2) {
    iVar2 = param_7 + -1;
  }
  param_1[0x1d] = iVar2;
  FUN_005aabc0();
  iVar2 = _rand();
  param_1[0x2c] = 0xc11cf5c3;
  param_1[0x2b] = 0x3f3504f3;
  param_1[0x2a] = 0x3f3504f3;
  fVar1 = (float)iVar2 * _DAT_0064b244;
  param_1[0x29] = 0;
  param_1[0x28] = (fVar1 + _DAT_0064b240) * _DAT_0064fed4;
  ExceptionList = local_c;
  return param_1;
}

