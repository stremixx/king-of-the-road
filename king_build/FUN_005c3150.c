
void __fastcall FUN_005c3150(int param_1)

{
  if (*(int *)(param_1 + 0x1a0) != 0) {
    Sleep(1000);
    FUN_00601910();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

