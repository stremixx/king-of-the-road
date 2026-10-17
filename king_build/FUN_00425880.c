
void FUN_00425880(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_0068c0e8 == 0) && (*(int *)(param_1 + 100) != 5)) {
    if (*(int *)(param_1 + 0x5c) == 1) {
      iVar2 = FUN_00477850(param_1 + 8);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x68) != 1)) {
        FUN_004257e0();
        *(undefined4 *)(param_1 + 0x20c) = 0;
        *(undefined4 *)(param_1 + 0x210) = 0;
        *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
        return;
      }
    }
    else {
      cVar1 = FUN_004171e0(param_1);
      if ((cVar1 != '\0') && (iVar2 = FUN_00477850(param_1 + 8), iVar2 == 0)) {
        FUN_00417430(param_1);
      }
    }
  }
  return;
}

