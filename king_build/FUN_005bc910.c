
void __thiscall FUN_005bc910(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = param_2;
    return;
  }
  iVar1 = FUN_005bc690();
  while (iVar1 != 0) {
    FUN_005bc6a0(param_2);
    iVar2 = FUN_005bc690();
    iVar1 = FUN_005bc690();
  }
  FUN_005bc6a0(param_2);
  if (iVar2 == 0) {
    FUN_005d1840(0);
    return;
  }
  FUN_005d1840(iVar2 + 0x10);
  return;
}

