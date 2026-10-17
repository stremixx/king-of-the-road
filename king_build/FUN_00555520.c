
float10 __fastcall FUN_00555520(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2540);
  return ABS((float10)*(float *)(iVar1 + 0x34)) * (float10)*(float *)(param_1 + 0x28c8) +
         ABS((float10)*(float *)(iVar1 + 0x48)) * (float10)*(float *)(param_1 + 0x28cc) +
         ABS((float10)*(float *)(iVar1 + 0xc)) * (float10)*(float *)(param_1 + 0x28c0) +
         ABS((float10)*(float *)(iVar1 + 0x20)) * (float10)*(float *)(param_1 + 0x28c4);
}

