
void FUN_0041bba0(int param_1,double *param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  int *piVar5;
  
  pdVar3 = param_2;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  iVar2 = *(int *)(param_1 + 0x208);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
    iVar2 = *(int *)(param_1 + 0x204);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      pdVar4 = param_2;
    }
    else {
      pdVar4 = (double *)(iVar2 + 0x1c);
    }
  }
  else {
    pdVar4 = (double *)(iVar2 + 0x1c);
  }
  piVar5 = *(int **)pdVar4;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x208);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
      iVar2 = *(int *)(param_1 + 0x204);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
      }
      else {
        param_2 = (double *)(iVar2 + 0x1c);
      }
    }
    else {
      param_2 = (double *)(iVar2 + 0x1c);
    }
    if (piVar5 == *(int **)((int)param_2 + 4)) break;
    dVar1 = *(double *)(DAT_0068bc18 + 0x18 + *piVar5 * 0x68);
    *pdVar3 = *(double *)(DAT_0068bc18 + 0x10 + *piVar5 * 0x68) * *(double *)(piVar5 + 0xe) +
              *pdVar3;
    *param_3 = dVar1 * *(double *)(piVar5 + 0xe) + *param_3;
    piVar5 = piVar5 + 0x24;
  }
  return;
}

