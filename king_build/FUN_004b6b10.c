
void FUN_004b6b10(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1[2] & 0x10000U) == 0) && (*param_1 != 0)) {
    piVar1 = (int *)(*param_1 + 4);
    *piVar1 = *piVar1 + 1;
  }
  FUN_004b1450(0xd);
  if (((param_1[2] & 0x10000U) == 0) && (*param_1 != 0)) {
    piVar1 = (int *)(*param_1 + 4);
    *piVar1 = *piVar1 + 1;
  }
  FUN_004b1450(10);
  iVar2 = 0;
  if (*(int *)(param_2 + 4) != 1 && -1 < *(int *)(param_2 + 4) + -1) {
    do {
      if (((param_1[2] & 0x10000U) == 0) && (*param_1 != 0)) {
        piVar1 = (int *)(*param_1 + 4);
        *piVar1 = *piVar1 + 1;
      }
      FUN_004b14e0(&DAT_006705b8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 4) + -1);
  }
  return;
}

