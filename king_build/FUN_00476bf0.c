
void FUN_00476bf0(int param_1)

{
  int iVar1;
  
  DAT_0068c0ec = DAT_0068c0ec + -1;
  if (*(int *)(param_1 + 0x5c) != 1) {
    iVar1 = *(int *)(param_1 + 0x9c);
    if (iVar1 != -1) {
      *(uint *)(DAT_0068bbe8 + iVar1 * 4) = *(uint *)(DAT_0068bbe8 + iVar1 * 4) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
      return;
    }
    FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x535,s_Internal_error_569_0066eab8,
                 &DAT_0068c120,&DAT_0068c120);
  }
  return;
}

