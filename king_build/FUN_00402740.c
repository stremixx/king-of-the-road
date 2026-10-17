
undefined4 __thiscall
FUN_00402740(int *param_1,int param_2,int param_3,double param_4,int param_5,int param_6,int param_7
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_20 [2];
  double local_18;
  int local_10;
  int local_c;
  
  if (((((*param_1 != param_2) || (param_1[1] != param_3)) || (*(double *)(param_1 + 2) != param_4))
      || ((param_1[4] != param_5 || (param_1[5] != param_6)))) || (param_1[6] != param_7)) {
    piVar4 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *param_1;
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    }
    if (local_20[0] == -1) {
      local_20[0] = param_2;
    }
    if (param_2 == -1) {
      param_2 = local_20[0];
    }
    if ((local_20[0] == -1) || (local_20[0] != param_2)) {
      FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x193,s_Internal_error_05491_0066b840
                   ,&DAT_0068c120,&DAT_0068c120);
    }
    else {
      iVar3 = *(int *)(DAT_0068be98 + local_20[0] * 4);
      iVar1 = *(int *)(DAT_0068be60 + param_3 * 4);
      iVar2 = *(int *)(iVar3 + 0x74);
      if (iVar1 == iVar2) {
        return 1;
      }
      iVar3 = *(int *)(iVar3 + 0x70);
      if (iVar1 != iVar3) {
        iVar1 = *(int *)(DAT_0068be60 + local_20[1] * 4);
        if (iVar1 == iVar3) {
          return 1;
        }
        if (iVar1 != iVar2) {
          if (local_c < param_6) {
            return 1;
          }
          if (local_c <= param_6) {
            if (local_10 < param_5) {
              return 1;
            }
            if (local_10 <= param_5) {
              if (local_18 < param_4) {
                return 1;
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

