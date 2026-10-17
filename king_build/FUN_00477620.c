
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00477620(int param_1,double *param_2)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x94)) {
    return 0xffffffff;
  }
  FUN_0047bf30(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),0,0,param_2);
  iVar1 = *(int *)(param_1 + 0x94);
  fVar2 = (float10)FUN_00401000();
  fVar2 = (float10)*(double *)(iVar1 + -8) - fVar2;
  *param_2 = (double)fVar2;
  if (fVar2 < (float10)_DAT_0064a668) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
  }
  return 0;
}

