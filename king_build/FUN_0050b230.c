
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050b230(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  double *pdVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double local_108 [16];
  undefined4 local_88 [33];
  
  FUN_0050ad70();
  FUN_0050ad70();
  puVar5 = local_88;
  iVar3 = 4;
  do {
    iVar4 = 4;
    puVar1 = param_2;
    puVar2 = puVar5;
    do {
      param_2 = puVar1 + 2;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2 = puVar2 + 8;
      iVar4 = iVar4 + -1;
      puVar1 = param_2;
    } while (iVar4 != 0);
    puVar5 = puVar5 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar8 = (float10)FUN_0050aea0();
  if (fVar8 == (float10)_DAT_0064a668) {
    FUN_0050ada0(local_108);
    return param_1;
  }
  fVar9 = (float10)_DAT_0064a660;
  iVar3 = 0;
  pdVar6 = local_108;
  do {
    iVar4 = 0;
    pdVar7 = pdVar6;
    do {
      fVar10 = (float10)FUN_0050b180(iVar3,iVar4);
      iVar4 = iVar4 + 1;
      pdVar6 = pdVar7 + 1;
      *pdVar7 = (double)(fVar10 * (float10)(double)(fVar9 / fVar8));
      pdVar7 = pdVar6;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_0050ada0(local_108);
  return param_1;
}

