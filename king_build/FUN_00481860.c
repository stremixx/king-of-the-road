
void FUN_00481860(int param_1,int *param_2)

{
  int *piVar1;
  undefined1 local_31;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006401c8;
  local_14 = ExceptionList;
  local_20 = param_1;
  ExceptionList = &local_14;
  FUN_00490d40(param_1,&DAT_0066ee40,local_1c);
  local_c = 0;
  local_30 = param_2[2];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[3];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[4];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[6];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = *param_2;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  FUN_004817f0(param_1,param_2 + 8);
  local_30 = param_2[0x14];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[0xf];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[0xe];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_2c = param_2[0x11];
  local_30 = param_2[0x10];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_28);
  local_30 = param_2[0x12];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[0x13];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_30 = param_2[0x15];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  local_2c = param_2[0x19];
  local_30 = param_2[0x18];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_28);
  local_31 = (undefined1)param_2[0x1a];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_31,&local_30);
  local_30 = param_2[0x1b];
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
  if (param_2[0x16] != 0) {
    local_28 = param_1;
    FUN_00490d40(param_1,&DAT_0066ee38,local_24);
    piVar1 = (int *)param_2[0x16];
    local_c._0_1_ = 1;
    local_30 = *piVar1;
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
    local_30 = piVar1[1];
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
    local_30 = piVar1[3];
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
    local_2c = piVar1[5];
    local_30 = piVar1[4];
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_28);
    local_30 = piVar1[6];
    local_2c = piVar1[7];
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_28);
    local_2c = local_1c[0];
    local_30 = local_20;
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_28);
    local_30 = piVar1[2];
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_30,&local_2c);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00490d90(local_28,local_24);
  }
  if (param_2[5] != 0) {
    local_28 = param_1;
    FUN_00490d40(param_1,&DAT_0066ee30,local_24);
    local_c._0_1_ = 2;
    FUN_00472310(param_1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00490d90(local_28,local_24);
  }
  local_c = 0xffffffff;
  FUN_00490d90(local_20,local_1c);
  ExceptionList = local_14;
  return;
}

