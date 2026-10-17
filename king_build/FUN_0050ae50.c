
void __thiscall FUN_0050ae50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 4;
  param_2 = param_2 - param_1;
  do {
    FUN_0050ad40(param_2 + param_1);
    param_1 = param_1 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

