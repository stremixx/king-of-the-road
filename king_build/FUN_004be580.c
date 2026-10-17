
float10 FUN_004be580(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  fVar1 = (float10)param_2;
  if (fVar1 < (float10)param_3) {
    fVar1 = (float10)param_3;
  }
  return fVar1;
}

