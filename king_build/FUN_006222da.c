
void FUN_006222da(LPVOID param_1)

{
  if (DAT_00685940 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_00685940), param_1 != (LPVOID)0x0)) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_0061c888(*(int *)((int)param_1 + 0x24));
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_0061c888(*(int *)((int)param_1 + 0x28));
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_0061c888(*(int *)((int)param_1 + 0x30));
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_0061c888(*(int *)((int)param_1 + 0x38));
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_0061c888(*(int *)((int)param_1 + 0x40));
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_0061c888(*(int *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_00688240) {
        FUN_0061c888(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_0061c888(param_1);
    }
    TlsSetValue(DAT_00685940,(LPVOID)0x0);
    return;
  }
  return;
}

