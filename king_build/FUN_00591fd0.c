
undefined4
FUN_00591fd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar1 = *(int *)(param_1 + 0x188);
    if ((iVar1 == 2) && (*(int *)(param_4 + 0x188) == 2)) {
      uVar2 = FUN_00591330(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar2;
    }
    if ((iVar1 == 1) && (*(int *)(param_4 + 0x188) == 1)) {
      uVar2 = FUN_00591a50(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar2;
    }
    if ((iVar1 == 2) && (*(int *)(param_4 + 0x188) == 1)) {
      uVar2 = FUN_00591bd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar2;
    }
    if ((*(int *)(param_4 + 0x188) == 2) && (iVar1 == 1)) {
      uVar2 = FUN_00591bd0(param_4,param_5,param_6,param_1,param_2,param_3,param_7);
      return uVar2;
    }
  }
  return 0;
}

