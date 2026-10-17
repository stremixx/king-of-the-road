
int __fastcall FUN_005cd1b0(int param_1)

{
  int iVar1;
  
  iVar1 = 10;
  do {
    FUN_005cd100();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return param_1;
}

