
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00473650(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined8 local_8;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) {
    local_8 = *(double *)(*(int *)(DAT_0068bf38 + *(int *)(iVar1 + 4) * 4) + 0x30);
    if ((*(uint *)(iVar1 + 0x28) & 1) != 0) {
      local_8 = local_8 * _DAT_0066b720;
    }
    if ((*(uint *)(iVar1 + 0x28) & 2) != 0) {
      local_8 = _DAT_0066b728 * local_8;
    }
    fVar2 = (float10)FUN_00476a20(iVar1);
    return fVar2 + (float10)local_8;
  }
  return (float10)_DAT_0064a668;
}

