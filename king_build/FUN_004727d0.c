
void __thiscall FUN_004727d0(undefined1 *param_1,int param_2)

{
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 local_18 [4];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063fa58;
  local_14 = ExceptionList;
  local_1c = param_2;
  ExceptionList = &local_14;
  FUN_00490d40(param_2,&DAT_0066ea14,local_18);
  local_c = 0;
  FUN_00472640(param_2);
  FUN_00472640(param_2);
  local_29 = *param_1;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_29,&local_28);
  local_28 = *(undefined4 *)(param_1 + 0x28);
  local_24 = *(undefined4 *)(param_1 + 0x2c);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_28,local_20);
  local_24 = *(undefined4 *)(param_1 + 0x34);
  local_28 = *(undefined4 *)(param_1 + 0x30);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_28,local_20);
  local_28 = *(undefined4 *)(param_1 + 0x38);
  local_24 = *(undefined4 *)(param_1 + 0x3c);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_28,local_20);
  local_29 = param_1[0x40];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_29,&local_28);
  local_29 = param_1[1];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_29,&local_28);
  local_c = 0xffffffff;
  FUN_00490d90(local_1c,local_18);
  ExceptionList = local_14;
  return;
}

