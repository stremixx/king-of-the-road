
void FUN_004a5be0(int param_1)

{
  int *piVar1;
  undefined1 local_800 [2048];
  
  FUN_004a5b70();
  FUN_0061c369();
  if (((*(uint *)(param_1 + 0x68) & 0x10000) == 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x60) + 4);
    *piVar1 = *piVar1 + 1;
  }
  FUN_004b14e0(local_800);
  FUN_004a5980(param_1);
  if (((*(uint *)(param_1 + 0x68) & 0x10000) == 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x60) + 4);
    *piVar1 = *piVar1 + 1;
  }
  FUN_004b14e0(local_800);
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}

