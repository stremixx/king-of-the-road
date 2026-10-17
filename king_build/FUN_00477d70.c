
void FUN_00477d70(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x54) == 9) {
    FUN_00401010(0,200,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x705,s_Dealer_released_0066eb14,
                 &DAT_0068c120,&DAT_0068c120);
    return;
  }
  if (((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x5c) == 0x100)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x3c4) + 0xc);
    *piVar1 = *piVar1 + -1;
  }
  if (((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x5c) == 0x101)) {
    DAT_0068c0b4 = DAT_0068c0b4 + -1;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xf7fffffb;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

