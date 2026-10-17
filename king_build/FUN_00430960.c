
float10 FUN_00430960(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00430840(param_1);
  fVar1 = (float10)*(double *)(param_1 + 0x100) + (float10)*(double *)(param_1 + 0xf8) +
          (float10)*(double *)(param_1 + 0xf0) + (float10)*(double *)(param_1 + 0xd0) + fVar1;
  if (*(char *)(param_1 + 0x108) != '\0') {
    fVar2 = (float10)FUN_004736c0(param_1);
    fVar1 = fVar2 + (float10)(double)fVar1;
  }
  return fVar1;
}

