
float10 __thiscall FUN_0048ea10(double *param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)*param_1;
  uVar2 = (*(int *)(param_1 + 0x18) << 3) >> 3;
  if (1 < uVar2) {
    iVar1 = uVar2 - 1;
    do {
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
      fVar3 = fVar3 * (float10)*param_2 + (float10)*param_1;
    } while (iVar1 != 0);
  }
  return fVar3;
}

