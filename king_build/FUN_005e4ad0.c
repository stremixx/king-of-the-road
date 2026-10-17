
int __thiscall FUN_005e4ad0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return -1;
  }
  iVar1 = FUN_005e4a30(param_2,param_3);
  if (iVar1 == -1) {
    return -1;
  }
  if (iVar1 == 1) {
    if ((*(byte *)(param_3 + 2) & 1) == 0) {
      FUN_005e3f10(param_1);
      return 1;
    }
  }
  else if ((iVar1 == 2) && (*param_3 == 1)) {
    if (param_4 != 0) {
      FUN_005e3fe0(param_1);
      return 2;
    }
    *(int *)(param_1 + 2000) = *(int *)(param_1 + 2000) + param_3[4];
    if (param_3[4] != 0) {
      DAT_00720704 = DAT_00720704 + -1;
      FUN_004843e0(*(undefined4 *)(param_1 + 2000),param_3,2);
    }
  }
  return iVar1;
}

