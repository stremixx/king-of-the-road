
void FUN_00484790(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *param_1;
  if (iVar5 != param_1[1]) {
    do {
      if (*(int *)(iVar5 + 4) != 0) {
        puVar1 = (uint *)(*(int *)(iVar5 + 4) + 0x10);
        *puVar1 = *puVar1 | 0x400;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 != param_1[1]);
  }
  iVar5 = *param_1;
  if (iVar5 != param_1[1]) {
    do {
      if (*(int *)(iVar5 + 4) != 0) {
        puVar1 = (uint *)(*(int *)(iVar5 + 4) + 0x10);
        *puVar1 = *puVar1 & 0xfffffbff;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 != param_1[1]);
  }
  piVar6 = (int *)*param_1;
  if ((int *)*param_1 != (int *)param_1[1]) {
    do {
      iVar5 = piVar6[1];
      if (iVar5 == 0) {
        return;
      }
      iVar3 = *piVar6;
      iVar4 = piVar6[3];
      piVar2 = piVar6 + 3;
      if (iVar5 == piVar6[4]) {
        FUN_00484760(param_1,s_succroads_txt_0066f220);
      }
      iVar3 = *(int *)(DAT_0068be60 + iVar3 * 4);
      if (*(int *)(iVar5 + 0x70) == iVar3) {
        if (*(int *)(iVar5 + 0x74) != *(int *)(DAT_0068be60 + iVar4 * 4)) {
          FUN_00484760(param_1,s_ilhops_txt_0066d800);
          FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                       s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x110,
                       s_Incorrect_hops_sequence_10_0066f204,&DAT_0068c120,&DAT_0068c120);
        }
        *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) & 0xfe;
      }
      else if (*(int *)(iVar5 + 0x70) == *(int *)(DAT_0068be60 + iVar4 * 4)) {
        if (*(int *)(iVar5 + 0x74) != iVar3) {
          FUN_00484760(param_1,s_ilhops_txt_0066d800);
          FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                       s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x11a,
                       s_Incorrect_hops_sequence_11_0066f1c4,&DAT_0068c120,&DAT_0068c120);
        }
        *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 1;
      }
      else {
        FUN_00484760(param_1,s_ilhops_txt_0066d800);
        FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                     s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x121,
                     s_Incorrect_hops_sequence_12_0066f1a8,&DAT_0068c120,&DAT_0068c120);
      }
      piVar6 = piVar2;
    } while (piVar2 != (int *)param_1[1]);
  }
  return;
}

