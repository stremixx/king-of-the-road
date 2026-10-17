
float10 __fastcall FUN_005ab9c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)FUN_005ab8d0(0,2);
  fVar1 = param_1[2];
  fVar4 = (float10)FUN_005ab8d0(0,1);
  fVar2 = param_1[1];
  fVar5 = (float10)FUN_005ab8d0(0,0);
  return fVar5 * (float10)*param_1 +
         (float10)(float)(fVar4 * (float10)fVar2 + (float10)(float)(fVar3 * (float10)fVar1));
}

