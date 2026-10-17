
void __thiscall FUN_00472640(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fa18;
  local_c = ExceptionList;
  local_14 = param_2;
  ExceptionList = &local_c;
  FUN_00490d40(param_2,&DAT_0066e9d0,local_10);
  param_2 = param_1[2];
  local_4 = 0;
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
  local_1c = *param_1;
  local_18 = param_1[1];
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&local_1c,&local_14);
  local_4 = 0xffffffff;
  FUN_00490d90(local_14,local_10);
  ExceptionList = local_c;
  return;
}

