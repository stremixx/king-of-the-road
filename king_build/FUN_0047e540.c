
void FUN_0047e540(double *param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)((int)param_2 + 4);
  uVar2 = *(undefined4 *)param_2;
  if (*param_2 <= *param_1) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((int)param_2 + 4);
    dVar3 = *param_2;
    while (pdVar4 = param_2 + -1, *pdVar4 < dVar3) {
      *(undefined4 *)param_2 = *(undefined4 *)pdVar4;
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_2 + -4);
      param_2 = pdVar4;
    }
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((int)param_2 + 4) = uVar2;
    return;
  }
  pdVar4 = param_2 + 1;
  iVar5 = (int)param_2 - (int)param_1 >> 3;
  if (0 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
      *(undefined4 *)(pdVar4 + -1) = *(undefined4 *)(param_2 + -1);
      *(undefined4 *)((int)pdVar4 + -4) = *(undefined4 *)((int)param_2 + -4);
      pdVar4 = pdVar4 + -1;
      param_2 = param_2 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)((int)param_1 + 4) = uVar1;
  return;
}

