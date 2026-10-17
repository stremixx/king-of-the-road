
int FUN_00429460(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_0068a8f0;
  iVar2 = 0;
  if (piVar3 != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(piVar3);
      if ((*(int *)(iVar1 + 0x54) == 2) &&
         ((*(int *)(iVar1 + 0x98) != *(int *)(iVar1 + 0x9c) ||
          (*(int **)(iVar1 + 0xa8) != DAT_0068a8f0)))) {
        iVar2 = iVar2 + 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_0068a8f0);
  }
  return iVar2;
}

