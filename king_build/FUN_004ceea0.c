
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ceea0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  iVar1 = FUN_0057d570(local_60);
  iVar2 = FUN_0057d570(local_30);
  local_6c = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
  local_68 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
  local_64 = *(float *)(iVar1 + 0x2c) - *(float *)(iVar2 + 0x2c);
  fVar3 = (float10)FUN_005aabc0(&local_6c);
  if ((float10)_DAT_0064a680 < fVar3) {
    return 1;
  }
  if ((((float10)_DAT_0064a690 <= fVar3) &&
      (ABS(*(double *)(*(int *)(param_1 + 0x5460) + 0x40b8)) <= _DAT_0064a6d0)) &&
     ((*(byte *)(*(int *)(param_1 + 0x5460) + 0x4070) & 2) == 0)) {
    return 1;
  }
  return 0;
}

