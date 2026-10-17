
undefined4 * __thiscall
FUN_006048c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006036c0(param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = &PTR_FUN_00651e10;
  local_4 = 0;
  uVar1 = *(undefined4 *)(*(int *)(DAT_007230c4 + 0x14 + param_2 * 0x18) + 4);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  FUN_00604980();
  ExceptionList = local_c;
  return param_1;
}

