
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a2a0(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_18;
  int local_14;
  double local_10;
  
  FUN_00477c00(&local_14);
  if (local_14 == DAT_0068a8f0) {
    return;
  }
  do {
    local_18 = (undefined4 *)*DAT_0068becc;
    while( true ) {
      if (local_18 == DAT_0068becc) {
        return;
      }
      iVar6 = local_18[2];
      fVar4 = (float10)FUN_00401000();
      if (((((float10)_DAT_0064a840 < fVar4 - (float10)*(double *)(iVar6 + 0x60)) &&
           (iVar1 = *(int *)(iVar6 + 0x14), *(char *)(iVar6 + 0x68) != '\0')) && (iVar1 != 0)) &&
         ((iVar5 = *(int *)(iVar1 + 0x20), *(int *)(iVar1 + 0x1c) == iVar5 &&
          (dVar2 = *(double *)(local_14 + 0x270) - *(double *)(iVar6 + 0x20),
          dVar3 = *(double *)(local_14 + 0x278) - *(double *)(iVar6 + 0x28),
          local_10 = *(double *)(local_14 + 0x280) - *(double *)(iVar6 + 0x30),
          _DAT_0064a838 < SQRT(dVar2 * dVar2 + local_10 * local_10 + dVar3 * dVar3))))) break;
      local_18 = (undefined4 *)*local_18;
    }
    iVar6 = iVar5;
    FUN_0041d3f0(&local_18);
    FUN_004042b0(iVar5);
    FUN_0041f000(iVar6);
  } while( true );
}

