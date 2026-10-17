
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042b5a0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  iVar4 = param_1;
  if (param_1 == 0) {
    return 1;
  }
  FUN_00477c00(&param_1);
  if (param_1 == DAT_0068a8f0) {
    return 1;
  }
  dVar2 = *(double *)(iVar4 + 0x38) - *(double *)(param_1 + 0x270);
  dVar1 = *(double *)(iVar4 + 0x40) - *(double *)(param_1 + 0x278);
  dVar3 = *(double *)(iVar4 + 0x48) - *(double *)(param_1 + 0x280);
  if (_DAT_0064a860 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) {
    return 1;
  }
  return 0;
}

