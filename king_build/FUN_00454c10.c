
uint __thiscall
FUN_00454c10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10
            ,int param_11)

{
  uint uVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  if (param_11 < param_8) {
    uVar1 = (**(code **)(*param_1 + 8))
                      (param_2,param_3,param_4,param_5,param_9,param_10,param_11,param_6,param_7,
                       param_8);
    return uVar1;
  }
  if (param_11 == param_8) {
    if ((double)CONCAT44(param_10,param_9) < (double)CONCAT44(param_7,param_6)) {
      uVar1 = (**(code **)(*param_1 + 8))
                        (param_2,param_3,param_4,param_5,param_9,param_10,param_11,param_6,param_7,
                         param_8);
      return uVar1;
    }
    iVar2 = FUN_0048def0(param_2,param_3,param_4,param_6,param_7,param_9,param_10);
    if (iVar2 != 0) {
      *param_5 = param_8;
      return 1;
    }
  }
  else {
    iVar2 = FUN_0048def0(param_2,param_3,param_4,param_6,param_7,0,0x3ff00000);
    if (iVar2 != 0) {
      *param_5 = param_8;
    }
    local_10 = (uint)(iVar2 != 0);
    while (param_8 = param_8 + 1, param_8 < param_11) {
      iVar2 = FUN_0048de00(param_2,param_3,param_4);
      if (iVar2 != 0) {
        local_10 = 1;
        *param_5 = param_8;
      }
    }
    iVar2 = FUN_0048def0(param_2,param_3,param_4,0,0,param_9,param_10);
    if (iVar2 != 0) {
      local_10 = 1;
      *param_5 = param_11;
    }
  }
  return local_10;
}

