
float10 FUN_004be5b0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  if (param_1 < param_2) {
    param_2 = param_1;
  }
  fVar1 = (float10)param_2;
  if ((float10)param_3 < fVar1) {
    fVar1 = (float10)param_3;
  }
  return fVar1;
}

