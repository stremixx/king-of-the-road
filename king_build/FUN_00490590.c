
undefined4 * FUN_00490590(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640c02;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0048e970(3);
  local_c = 1;
  if ((uint)(local_18 - local_20 >> 3) < 8) {
    iVar3 = local_1c - local_20;
    iVar1 = FUN_00458e70(8,local_20,local_1c);
    iVar2 = local_18 - local_20 >> 3;
    if (iVar2 != 0) {
      FUN_0044b440(local_20,iVar2 << 3);
    }
    local_1c = iVar1 + (iVar3 >> 3) * 8;
    local_18 = iVar1 + 0x40;
    local_20 = iVar1;
  }
  local_38 = 0;
  local_34 = 0;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0x3ff00000;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0x3ff00000;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0x3ff00000;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  local_38 = 0;
  local_34 = 0x3ff00000;
  if (local_1c == local_18) {
    FUN_0044c410(local_1c,&local_38);
  }
  else {
    FUN_00460900(local_1c,&local_38);
    local_1c = local_1c + 8;
  }
  FUN_00489ce0(local_28,param_2,param_2 + 0x60);
  *param_1 = local_30;
  FUN_004908d0(local_2c);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_004909e0(&local_20);
  local_c = 3;
  FUN_0047aba0();
  local_c = local_c & 0xffffff00;
  FUN_00447240();
  ExceptionList = local_14;
  return param_1;
}

