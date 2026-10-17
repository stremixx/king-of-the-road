
void __fastcall FUN_004427d0(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x58);
  }
  return;
}

