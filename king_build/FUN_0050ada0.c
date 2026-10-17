
int __thiscall FUN_0050ada0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    FUN_0050ace0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = 4;
  iVar2 = param_1;
  do {
    FUN_0050ad40((param_2 - param_1) + iVar2);
    iVar2 = iVar2 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}

