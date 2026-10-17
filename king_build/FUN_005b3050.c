
int __thiscall FUN_005b3050(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2034)) {
    iVar3 = param_1 + 0x1ee0;
    iVar1 = param_3;
    while( true ) {
      iVar1 = FUN_005ae6b0(param_2,iVar1,param_4,iVar3);
      param_3 = 0;
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
      if (*(int *)(param_1 + 0x2034) <= iVar2) {
        return iVar1;
      }
    }
  }
  return param_3;
}

