
undefined4 __thiscall FUN_0052acd0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005863c0(param_2);
  if (iVar1 == 0) {
    if (*param_2 != *(int *)(param_1 + 0x4a4)) {
      FUN_004e1e9c(s__TrashBox__receiveNetMessage___r_00677420);
    }
    if (param_2[1] != 0xd) {
      return 0;
    }
    if (param_2[2] == 1) {
      FUN_0052a600(param_2[3]);
    }
  }
  return 1;
}

