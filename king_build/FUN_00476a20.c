
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00476a20(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)_DAT_0064a668;
  piVar3 = (int *)(DAT_0068bb68 + 0xc);
  iVar4 = 0x13;
  piVar2 = *(int **)(param_1 + 0x10);
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 6;
    iVar4 = iVar4 + -1;
    fVar5 = (float10)*(double *)(iVar1 + *piVar2 * 0x18) * (float10)*(double *)(piVar2 + 2) + fVar5;
    piVar2 = piVar2 + 4;
  } while (iVar4 != 0);
  return fVar5;
}

