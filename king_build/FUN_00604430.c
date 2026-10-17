
bool FUN_00604430(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_007230c4 != (int *)0x0) {
    return false;
  }
  DAT_007230c8._0_2_ = (undefined2)param_1;
  piVar2 = (int *)FUN_00631d33(param_1 * 0x18 + 4);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar2 = param_1;
    FUN_0061d173(piVar1,0x18,param_1,&LAB_006044a0,&LAB_006044c0);
    DAT_007230c4 = piVar1;
    return piVar1 != (int *)0x0;
  }
  DAT_007230c4 = (int *)0x0;
  return false;
}

