
void __fastcall FUN_004ef9e0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fptan((float10)*(float *)(param_1 + 0x1a20));
  fVar2 = (float10)fpatan(((float10)*(float *)(param_1 + 0x1f78) /
                          (float10)*(float *)(param_1 + 0x1f60)) * fVar1,(float10)1);
  *(float *)(param_1 + 0x1a24) = (float)fVar2;
  fVar1 = (float10)fsin((float10)*(float *)(param_1 + 0x1a20));
  *(float *)(param_1 + 0x1a50) = (float)fVar1;
  fVar1 = (float10)fsin(fVar2);
  *(float *)(param_1 + 0x1a54) = (float)fVar1;
  fVar1 = (float10)fsin((float10)*(float *)(param_1 + 0x1a20) - fVar2);
  *(float *)(param_1 + 0x1a58) = (float)fVar1;
  return;
}

