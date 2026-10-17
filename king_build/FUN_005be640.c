
void __thiscall FUN_005be640(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (0 < param_3) {
    do {
      iVar1 = FUN_005d2730();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (iVar1 != 0) {
    FUN_005bcc50(param_2);
  }
  return;
}

