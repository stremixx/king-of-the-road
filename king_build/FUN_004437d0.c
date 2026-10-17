
int __fastcall FUN_004437d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x200);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) {
    return iVar1 + 0x1c;
  }
  iVar1 = *(int *)(param_1 + 0x1fc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) {
    return iVar1 + 0x1c;
  }
  iVar1 = FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                       s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
  return iVar1;
}

