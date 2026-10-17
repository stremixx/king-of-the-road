
void FUN_0050b090(undefined4 *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  undefined8 *puVar8;
  int local_2c;
  undefined8 local_28;
  
  FUN_0050ace0();
  pdVar6 = (double *)&local_28;
  local_2c = 4;
  do {
    *(undefined4 *)pdVar6 = 0;
    *(undefined4 *)((int)pdVar6 + 4) = 0;
    dVar1 = *pdVar6;
    pdVar4 = (double *)((param_3 - (int)&local_28) + (int)pdVar6);
    iVar7 = 4;
    pdVar5 = param_2;
    do {
      dVar2 = *pdVar5;
      dVar3 = *pdVar4;
      pdVar4 = pdVar4 + 4;
      pdVar5 = pdVar5 + 1;
      iVar7 = iVar7 + -1;
      dVar1 = dVar2 * dVar3 + dVar1;
    } while (iVar7 != 0);
    *pdVar6 = dVar1;
    pdVar6 = pdVar6 + 1;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  puVar8 = &local_28;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_1 = *(undefined4 *)puVar8;
    puVar8 = (undefined8 *)((int)puVar8 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

