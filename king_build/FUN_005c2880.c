
undefined4 __thiscall
FUN_005c2880(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((param_2 % 10) * 0x20 + param_1 + 8);
  do {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 8);
  } while (*(int *)(iVar2 + 0xc) != param_2);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar1 != param_3) {
    if (param_3 == 3) {
      if ((iVar1 != 0) && (iVar1 != 2)) {
        return 0;
      }
    }
    else if ((param_3 != 6) || (iVar1 != 5)) {
      return 0;
    }
  }
  FUN_005c2dc0(param_4,param_5);
  return 1;
}

