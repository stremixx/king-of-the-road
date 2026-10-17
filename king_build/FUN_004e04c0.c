
void __fastcall FUN_004e04c0(int param_1)

{
  FUN_005777d0(0);
  FUN_004e2e5f();
  FUN_004e01e0();
  FUN_0053f420(param_1,&DAT_006956b0,0x3d4,DAT_00695834);
  DAT_00671d84 = DAT_0067c04a + 1;
  FUN_0052a470();
  *(float *)(param_1 + 0x24a0) = (float)*(double *)(param_1 + 0xbe8);
  *(float *)(param_1 + 0x24a4) = (float)*(double *)(param_1 + 0xbf0);
  thunk_FUN_005df860();
  FUN_004b95b0(param_1);
  return;
}

