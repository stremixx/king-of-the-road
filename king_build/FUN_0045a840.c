
uint FUN_0045a840(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_b4;
  int *local_b0;
  undefined4 local_a4;
  int local_78;
  int *local_74;
  undefined4 local_68;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_2c;
  
  if (param_2 == (int *)0x0) {
    return (uint)(param_1 != (int *)0x0);
  }
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *param_1;
  local_b4 = *param_2;
  if ((char)param_1[2] != '\0') {
    local_b4 = 0;
    local_b0 = param_1;
    local_a4 = 0;
    local_74 = param_1;
    local_68 = 0;
    local_78 = iVar1;
    if ((char)param_2[2] == '\0') {
      FUN_00461b40(&local_78);
      FUN_00461b40(&local_b4);
      uVar3 = FUN_004632d0();
      return uVar3;
    }
    local_3c = 0;
    local_38 = param_2;
    local_2c = 0;
    FUN_00461b40(&local_3c);
    FUN_00461b40(&local_78);
    FUN_00461b40(&local_b4);
    uVar3 = FUN_00463310();
    return uVar3;
  }
  if ((char)param_2[2] == '\0') {
    uVar3 = FUN_004666f0(param_1[5],param_1[5] + iVar1,param_2[5],local_b4 + param_2[5]);
    return uVar3;
  }
  local_74 = param_2;
  local_b0 = param_2;
  local_78 = 0;
  local_68 = 0;
  local_a4 = 0;
  FUN_00461b40(&local_b4);
  iVar2 = param_1[5];
  FUN_00461b40(&local_78);
  uVar3 = FUN_00463260(iVar2,iVar2 + iVar1);
  return uVar3;
}

