
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004e3f01(int *param_1)

{
  int iVar1;
  
  if ((*param_1 == 1) && (iVar1 = _strcmp((char *)param_1[1],&DAT_006729d0), iVar1 == 0)) {
    if ((*(double *)(param_1 + 2) < _DAT_0064ba38) && (_DAT_0064c910 < *(double *)(param_1 + 2))) {
      param_1[6] = 0x4d12d84a;
      param_1[7] = 0x400921fb;
      return 1;
    }
    if ((_DAT_0064a660 < *(double *)(param_1 + 2)) && (*(double *)(param_1 + 2) < _DAT_0064c908)) {
      param_1[6] = 0;
      param_1[7] = 0;
      return 1;
    }
  }
  if ((*param_1 == 1) && (iVar1 = _strcmp((char *)param_1[1],&DAT_006729d8), iVar1 == 0)) {
    param_1[6] = 0;
    param_1[7] = 0;
    return 1;
  }
  return 0;
}

