
void FUN_00467bf0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    iVar1 = *param_1;
    iVar2 = param_1[-1];
    piVar3 = param_1;
    piVar4 = param_1;
    if (*(int *)(iVar1 + 0x148) < *(int *)(iVar2 + 0x148)) {
      do {
        piVar4 = piVar3 + -1;
        *piVar3 = iVar2;
        iVar2 = piVar3[-2];
        piVar3 = piVar4;
      } while (*(int *)(iVar1 + 0x148) < *(int *)(iVar2 + 0x148));
    }
    *piVar4 = iVar1;
  }
  return;
}

