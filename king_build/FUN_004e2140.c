
undefined4 FUN_004e2140(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  if (((((param_2 < fVar1) || (param_2 < fVar2)) || (param_2 < fVar3)) ||
      ((((param_2 < fVar1 || (param_2 < fVar2)) ||
        ((param_2 < fVar3 || ((param_2 < -fVar1 || (param_2 < -fVar2)))))) || (param_2 < -fVar3))))
     || (((fVar1 < -param_2 || (fVar2 < -param_2)) || (fVar3 < -param_2)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

