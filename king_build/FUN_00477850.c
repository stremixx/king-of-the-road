
int FUN_00477850(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[0x80];
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
    iVar1 = param_1[0x7f];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      piVar2 = param_1;
    }
    else {
      piVar2 = (int *)(iVar1 + 0x1c);
    }
  }
  else {
    piVar2 = (int *)(iVar1 + 0x1c);
  }
  if (*piVar2 == piVar2[1]) {
    return 0;
  }
  iVar1 = param_1[0x80];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) {
    return *(int *)(iVar1 + 0x1c);
  }
  iVar1 = param_1[0x7f];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) {
    return *(int *)(iVar1 + 0x1c);
  }
  FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
               s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x2e4,s_Internal_error_9012_0066c41c,
               &DAT_0068c120,&DAT_0068c120);
  return *param_1;
}

