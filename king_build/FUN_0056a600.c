
undefined4 * __thiscall FUN_0056a600(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0xb,&DAT_0067a8b0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064ee24;
  param_1[0xf] = 0;
  param_1[10] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  iVar1 = FUN_005686e0();
  if (iVar1 == 2) {
    pcVar3 = s_m_15_MessTop_txr_0067a89c;
  }
  else {
    pcVar3 = s_m_16_MessTop_txr_0067a888;
  }
  uVar2 = FUN_005eea00(pcVar3);
  param_1[0xb] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

