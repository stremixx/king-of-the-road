
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00549970(int *param_1,float param_2)

{
  int iVar1;
  
  if (_DAT_0064e4a8 < (float)*(double *)(DAT_006ee15c + 0xb98) - (float)param_1[2]) {
    iVar1 = param_1[3];
    param_1[2] = (int)(float)*(double *)(DAT_006ee15c + 0xb98);
    param_1[3] = iVar1 + 1U;
    if (0x1f < iVar1 + 1U) {
      param_1[3] = 0;
    }
  }
  if (param_2 < _DAT_0064b254) {
    param_2 = (float)param_1[1];
  }
  *(float *)(*param_1 + 0x60) = param_2;
  *(undefined4 *)(*param_1 + 0x6c) = (&DAT_00694f10)[param_1[3]];
  *(undefined4 *)(*param_1 + 0x70) = (&DAT_00694288)[param_1[3]];
  *(undefined4 *)(*param_1 + 0x74) = (&DAT_00694d90)[param_1[3]];
  return;
}

