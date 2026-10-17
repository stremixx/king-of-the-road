
void __thiscall FUN_00587340(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xdb4);
  iVar2 = 6;
  do {
    if (param_2 == *piVar1) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

