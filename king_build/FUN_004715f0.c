
float10 FUN_004715f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00471470(param_1);
  fVar2 = (float10)FUN_00471440(param_1);
  fVar3 = (float10)FUN_004715b0(param_1,param_2,param_3,param_4);
  return fVar3 + (float10)(double)((float10)(double)fVar1 - fVar2);
}

