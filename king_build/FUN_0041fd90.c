
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041fd90(int param_1)

{
  double dVar1;
  undefined1 *puVar2;
  double *pdVar3;
  undefined1 *puVar4;
  double local_10;
  undefined1 local_8 [8];
  
  pdVar3 = &local_10;
  if ((*(int *)(param_1 + 0x5c) == 1) || (dVar1 = _DAT_0064a668, *(int *)(param_1 + 0x5c) == 2)) {
    puVar2 = local_8;
    puVar4 = puVar2;
    FUN_0041d3f0(&param_1);
    FUN_0041b9e0(puVar2,pdVar3,puVar4);
    dVar1 = local_10;
  }
  return (float10)dVar1;
}

