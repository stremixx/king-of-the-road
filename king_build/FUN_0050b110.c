
void FUN_0050b110(undefined4 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  
  FUN_0050ace0();
  pdVar4 = (double *)&local_28;
  iVar6 = 4;
  do {
    *(undefined4 *)pdVar4 = 0;
    *(undefined4 *)((int)pdVar4 + 4) = 0;
    dVar1 = *pdVar4;
    iVar7 = 4;
    pdVar5 = param_3;
    do {
      dVar2 = *param_2;
      dVar3 = *pdVar5;
      param_2 = param_2 + 1;
      pdVar5 = pdVar5 + 1;
      iVar7 = iVar7 + -1;
      dVar1 = dVar2 * dVar3 + dVar1;
    } while (iVar7 != 0);
    *pdVar4 = dVar1;
    pdVar4 = pdVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar8 = &local_28;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_1 = *(undefined4 *)puVar8;
    puVar8 = (undefined8 *)((int)puVar8 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

