
undefined4 * __thiscall FUN_00492220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640e28;
  local_c = ExceptionList;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  ExceptionList = &local_c;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  local_4 = 0;
  if ((param_2[2] & 0x10000) == 0) {
    FUN_004a5470(6,1);
  }
  if (*(char *)(param_2 + 2) != '\a') {
    FUN_004a55b0(2,1,s_Boolean_0066f648);
  }
  ExceptionList = local_c;
  return param_1;
}

