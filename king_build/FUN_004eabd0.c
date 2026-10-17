
void __thiscall FUN_004eabd0(int param_1,float param_2)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x14) <= param_2) && (*(int *)(param_1 + 0x20) == 0)) {
    if ((*(int *)(param_1 + 0x24) != 0) &&
       (iVar1 = FUN_004eb460(*(undefined4 *)(param_1 + 0x1c)), iVar1 != 0)) {
      FUN_004eab70();
      if (iVar1 != 1) {
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x3c88) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}

