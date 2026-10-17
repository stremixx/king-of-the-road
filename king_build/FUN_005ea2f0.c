
int __thiscall FUN_005ea2f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x60)) {
    FUN_005d2520(s_Palettes_more_then_declared__00682558,0);
  }
  *(undefined4 *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x20) * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  return iVar1;
}

