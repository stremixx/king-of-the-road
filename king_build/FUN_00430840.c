
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00430840(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double local_10;
  
  local_10 = 0.0;
  iVar3 = *(int *)(param_1 + 0x208);
  local_10._0_4_ = (int *)0x0;
  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == -1)) {
    iVar3 = *(int *)(param_1 + 0x204);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      piVar2 = local_10._0_4_;
    }
    else {
      piVar2 = (int *)(iVar3 + 0x1c);
    }
  }
  else {
    piVar2 = (int *)(iVar3 + 0x1c);
  }
  iVar3 = *piVar2;
  piVar2 = local_10._0_4_;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x208);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
      iVar1 = *(int *)(param_1 + 0x204);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
      }
      else {
        piVar2 = (int *)(iVar1 + 0x1c);
      }
    }
    else {
      piVar2 = (int *)(iVar1 + 0x1c);
    }
    if (iVar3 == piVar2[1]) break;
    if (*(int *)(iVar3 + 4) != -1) {
      local_10 = *(double *)(DAT_0068bc18 + 0x50 + *(int *)(iVar3 + 4) * 0x68) * _DAT_0064a880 +
                 local_10;
    }
    iVar3 = iVar3 + 0x90;
  }
  return (float10)local_10;
}

