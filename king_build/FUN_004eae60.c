
float10 __fastcall FUN_004eae60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  return ((float10)*(float *)(param_1 + 0xc + iVar1 * 4) - (float10)*(float *)(param_1 + iVar1 * 4))
         * (float10)*(float *)(param_1 + 0x24) + (float10)*(float *)(param_1 + iVar1 * 4);
}

