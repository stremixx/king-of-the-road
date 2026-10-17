
void __fastcall FUN_005803c0(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_004e1fd9();
  pfVar1 = (float *)(param_1 + 0x1a0);
  *pfVar1 = (float)(fVar2 * (float10)*(float *)(param_1 + 0x314) + (float10)*pfVar1);
  *(float *)(param_1 + 0x1a4) =
       (float)(fVar2 * (float10)*(float *)(param_1 + 0x318)) + *(float *)(param_1 + 0x1a4);
  *(float *)(param_1 + 0x1a8) =
       (float)(fVar2 * (float10)*(float *)(param_1 + 0x31c)) + *(float *)(param_1 + 0x1a8);
  *(float *)(param_1 + 0xc4c) = (float)(fVar2 * (float10)*pfVar1);
  *(float *)(param_1 + 0xc50) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x1a4));
  *(float *)(param_1 + 0xc54) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x1a8));
  *(float *)(param_1 + 0xc58) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x1ac));
  *(float *)(param_1 + 0xc5c) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x1b0));
  *(float *)(param_1 + 0xc60) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x1b4));
  FUN_004e20b1(pfVar1,s__MovingItem__make_new_Pos_0067c3d4,0x43160000);
  return;
}

