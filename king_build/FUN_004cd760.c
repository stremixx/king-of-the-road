
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004cd760(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_005e4980(param_1);
  if (iVar1 == 0) {
    return (float10)_DAT_0064a668;
  }
  if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cd78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float10)(**(code **)(**(int **)(iVar1 + 0x1c) + 0x54))();
    return fVar2;
  }
  return (float10)*(float *)(*(int *)(iVar1 + 0x18) + 0xf4);
}

