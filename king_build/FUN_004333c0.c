
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004333c0(float param_1,float param_2,float param_3)

{
  int iVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined4 auStack_38 [5];
  undefined4 uStack_24;
  double local_18;
  double local_10;
  double local_8;
  
  local_18 = (double)param_1;
  local_10 = (double)param_2;
  local_8 = (double)param_3;
  pdVar2 = &local_18;
  puVar3 = auStack_38;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar3 = puVar3 + 1;
  }
  FUN_00433320();
  uStack_24 = 0x433418;
  iVar1 = __ftol();
  return (float10)iVar1 * (float10)_DAT_0064a5a8;
}

