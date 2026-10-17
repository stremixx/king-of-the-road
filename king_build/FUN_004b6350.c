
undefined4 * __thiscall FUN_004b6350(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644133;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = 0xffffffff;
  *param_1 = &PTR_LAB_0064b0f8;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = 1;
  FUN_0044c1c0(param_1[4],param_2,param_2 + ~uVar2);
  ExceptionList = local_c;
  return param_1;
}

