
void __thiscall FUN_00592690(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00631d33(0xc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00592470();
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  FUN_00592520(iVar1);
  *(int *)(param_1 + 8) = iVar1;
  return;
}

