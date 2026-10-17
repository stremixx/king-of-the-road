
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00488110(double *param_1,int param_2)

{
  double dVar1;
  
  if (param_2 < 1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 4) = 0x3ff00000;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    return;
  }
  dVar1 = _DAT_0064a660 / (double)param_2;
  *param_1 = dVar1;
  param_1[1] = _DAT_0064a660 - dVar1;
  return;
}

