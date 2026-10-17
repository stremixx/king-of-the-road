
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471250(int param_1,int *param_2,char param_3,char param_4)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_8c [8];
  int aiStack_6c [3];
  char *pcStack_60;
  char *pcStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  int *piStack_50;
  int *piStack_4c;
  int local_3c;
  int local_38;
  int local_34;
  double local_30;
  int local_28 [9];
  
  local_30 = ((_DAT_0064a660 - *(double *)(DAT_0068bc18 + *param_2 * 0x68 + 0x20)) + _DAT_0064a830)
             * SQRT(*(double *)(DAT_0068bc18 + 0x28 + *param_2 * 0x68) * *(double *)(param_2 + 0xe))
  ;
  if (*(double *)(param_2 + 0x1c) == _DAT_0064a668) {
    piStack_4c = *(int **)(DAT_0068be20 + param_2[3] * 4);
    piStack_50 = &local_3c;
    pcStack_54 = (char *)0x4712b8;
    FUN_00404d60();
    if (local_3c == -1) {
      piStack_4c = (int *)&DAT_0068c120;
      piStack_50 = *(int **)(*(int *)(DAT_0068be20 + param_2[3] * 4) + 0xc);
      pcStack_54 = s_Unload_node_not_present_for_town_0066e8cc;
      uStack_58 = 0x87;
      pcStack_5c = s__Id__ai_ordr_cpp_2001_9_10_18_14_0066e7c8;
      pcStack_60 = s__C__Nek_Vrappl_Gi_Htai_Ai_ordr_c_0066e8a7 + 1;
      aiStack_6c[2] = 100;
      aiStack_6c[1] = 0x2d;
      aiStack_6c[0] = 0x4712f7;
      FUN_00401010();
    }
    if (param_2[4] == -1) {
      piStack_4c = &local_38;
      local_28[0] = -1;
      local_28[1] = local_3c;
      local_28[7] = 0xffffffff;
      local_28[2] = 0;
      local_28[3] = 0;
      local_28[4] = 0;
      local_28[5] = 0;
      local_28[6] = 0;
      piVar3 = local_28;
      piVar4 = aiStack_6c;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      piVar3 = param_2 + 6;
      piVar4 = aiStack_8c;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      local_38 = 0;
      local_34 = 0;
      FUN_00487600(0);
      param_2[0x1c] = local_38;
      param_2[0x1d] = local_34;
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_0068be20 + param_2[4] * 4) + 100);
      param_2[0x1c] = *(int *)(iVar2 + param_2[3] * 8);
      param_2[0x1d] = *(int *)(iVar2 + 4 + param_2[3] * 8);
    }
  }
  dVar1 = _DAT_0064ab88;
  if (((param_1 != DAT_0068a8f0) && (param_1 != -8)) &&
     ((*(int *)(param_1 + 0x204) == 0 ||
      ((iVar2 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x204) + 4) * 4) + 0x20
                        ), iVar2 != 2 && (iVar2 != 3)))))) {
    dVar1 = _DAT_0064ab80;
  }
  dVar1 = (dVar1 * *(double *)(param_2 + 0x1c) * _DAT_0064a648 + local_30) * _DAT_0064a778;
  if (*(double *)(param_2 + 0xe) == _DAT_0064a668) {
    dVar1 = _DAT_0064a668;
  }
  if ((param_3 != '\0') && (param_2[0x1a] != 1)) {
    dVar1 = dVar1 * _DAT_0066e880;
  }
  if (param_4 != '\0') {
    dVar1 = dVar1 * _DAT_0066e888;
  }
  if ((param_2[0x1a] == 3) || ((param_3 != '\0' && (param_4 == '\0')))) {
    dVar1 = dVar1 * _DAT_0066e890;
  }
  *(double *)(param_2 + 0x10) = dVar1;
  return;
}

