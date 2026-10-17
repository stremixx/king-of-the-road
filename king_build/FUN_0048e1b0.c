
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048e1b0(double *param_1,double param_2)

{
  double dVar1;
  
  if (param_2 <= _DAT_0064a668) {
    if (*param_1 <= _DAT_0064a668) {
      return 1;
    }
    dVar1 = *param_1;
    *param_1 = param_2 + dVar1;
    if (param_2 + dVar1 <= _DAT_0064a668) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
    }
  }
  else {
    if (_DAT_0064a660 <= *param_1) {
      return 1;
    }
    dVar1 = *param_1;
    *param_1 = param_2 + dVar1;
    if (_DAT_0064a660 <= param_2 + dVar1) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0x3ff00000;
      return 0;
    }
  }
  return 0;
}

