
float10 FUN_00541980(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = -(float10)param_2;
  if (fVar1 <= (float10)param_1) {
    if (param_2 < param_1) {
      return (float10)param_2;
    }
    fVar1 = (float10)param_1;
  }
  return fVar1;
}

