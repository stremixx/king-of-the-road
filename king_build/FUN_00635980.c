
void __fastcall FUN_00635980(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != 0x40) && (iVar1 != 0x80)) && (iVar1 != 0x100)) && (iVar1 != 0x200)) {
    FUN_00631d5c(param_1);
    return;
  }
  FUN_0061c1de(param_1);
  return;
}

