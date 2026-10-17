
void __fastcall FUN_00487800(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)(param_1 + 0x6000) * 0xc;
  for (; param_1 != iVar1; param_1 = param_1 + 0xc) {
    FUN_0046e090();
  }
  return;
}

