
float10 __thiscall FUN_0048e470(int param_1,double param_2,double param_3)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(double *)(param_1 + 0x570);
  uVar1 = (*(int *)(param_1 + 0x630) << 3) >> 3;
  if (1 < uVar1) {
    iVar2 = uVar1 - 1;
    pdVar3 = (double *)(param_1 + 0x578);
    do {
      iVar2 = iVar2 + -1;
      fVar4 = fVar4 * (float10)param_3 + (float10)*pdVar3;
      pdVar3 = pdVar3 + 1;
    } while (iVar2 != 0);
  }
  fVar5 = (float10)*(double *)(param_1 + 0x570);
  uVar1 = (*(int *)(param_1 + 0x630) << 3) >> 3;
  if (1 < uVar1) {
    iVar2 = uVar1 - 1;
    pdVar3 = (double *)(param_1 + 0x578);
    do {
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 * (float10)param_2 + (float10)*pdVar3;
      pdVar3 = pdVar3 + 1;
    } while (iVar2 != 0);
  }
  return fVar4 - fVar5;
}

