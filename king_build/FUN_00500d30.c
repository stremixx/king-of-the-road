
int __thiscall FUN_00500d30(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00500d00(param_2);
  *(float *)(param_2 + iVar1 * 4) = (float)*(double *)(param_1 + 0xee0);
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 1) * 4) = (float)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 2) * 4) = (float)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 3) * 4) = (float)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 4) * 4) = (float)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 5) * 4) = (float)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 6) * 4) = (float)fVar2;
  fVar2 = (float10)FUN_004eaf10();
  *(float *)(param_2 + (iVar1 + 7) * 4) = (float)fVar2;
  if (iVar1 + 8 != 0x23) {
    FUN_004e1e9c(s__Car_V__get_state___i__MAX_CARV__0067388c);
  }
  return iVar1 + 8;
}

