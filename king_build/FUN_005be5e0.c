
void __thiscall
FUN_005be5e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (0 < param_6) {
    do {
      iVar1 = FUN_005d2730();
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  if (iVar1 != 0) {
    FUN_005bcc50(param_4);
    FUN_005bcc50(param_2);
    FUN_005bcc50(param_5);
    FUN_005bcc50(param_3);
  }
  return;
}

