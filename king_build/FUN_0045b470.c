
void FUN_0045b470(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (0x10 < (param_2 - param_1) / 0xc) {
    iVar1 = param_1 + 0xc0;
    iVar2 = param_1;
    if (param_1 != iVar1) {
      while (iVar2 = iVar2 + 0xc, iVar2 != iVar1) {
        FUN_00467770(param_1,iVar2,0,param_3);
      }
    }
    FUN_00467920(iVar1,param_2,0,param_3);
    return;
  }
  iVar1 = param_1;
  if (param_1 != param_2) {
    while (iVar1 = iVar1 + 0xc, iVar1 != param_2) {
      FUN_00467770(param_1,iVar1,0,param_3);
    }
  }
  return;
}

