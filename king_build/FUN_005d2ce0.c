
void __fastcall FUN_005d2ce0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    FUN_005d2250(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x1c),*(undefined4 *)(iVar1 + 0x14));
    iVar1 = FUN_005d2730();
  }
  return;
}

