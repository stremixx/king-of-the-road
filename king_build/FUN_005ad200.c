
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005ad200(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  float10 fVar2;
  undefined8 local_10;
  
  iVar1 = *(int *)(param_1 + 0x2030);
  local_10 = 0.0;
  if (-1 < iVar1 + -1) {
    do {
      fVar2 = (float10)FUN_005ace90(param_2,param_3,0,0);
      iVar1 = iVar1 + -1;
      local_10 = (double)(fVar2 + (float10)local_10);
    } while (iVar1 != 0);
  }
  fVar2 = ((float10)_DAT_0064a660 - (float10)param_4) * (float10)local_10 + (float10)param_4;
  if ((float10)_DAT_0064a660 < fVar2) {
    fVar2 = (float10)_DAT_0064a660;
  }
  return fVar2;
}

