
void FUN_00477480(int param_1)

{
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x94)) {
    FUN_0047bf30(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),0,0,param_1);
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -8;
  }
  return;
}

