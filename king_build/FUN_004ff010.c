
void __fastcall FUN_004ff010(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x1c1c) = 1;
  *(undefined4 *)(param_1 + 0x1c24) = 0;
  fVar2 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x1c3c) = (float)fVar2;
  fVar1 = *(float *)(param_1 + 0x29d8) * *(float *)(param_1 + 0x1c88);
  fVar1 = fVar1 + fVar1;
  *(float *)(param_1 + 0x1c84) = fVar1;
  FUN_004ea55e(fVar1,s_set_NeutralGearBox_filterEngineT_006737e8);
  fVar2 = (float10)FUN_004ea828();
  *(float *)(param_1 + 0x1c84) = (float)fVar2;
  return;
}

