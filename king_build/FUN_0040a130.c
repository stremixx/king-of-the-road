
void FUN_0040a130(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_20 [8];
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + -0xc);
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x4c)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + -0x24);
      if ((iVar1 != -1) && (iVar1 != iVar4)) {
        FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x897,
                     s_Internal_error_0753_0066bbcc,&DAT_0068c120,&DAT_0068c120);
      }
      piVar2 = (int *)(param_1 + 0x28);
      piVar3 = local_20;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if (local_20[1] != iVar4) {
        FUN_0041d3f0(&param_1);
        FUN_00487330(iVar1,iVar4);
      }
      if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
        FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x89d,
                     s_Internal_error_45712_0066bbb4,&DAT_0068c120,&DAT_0068c120);
      }
    }
  }
  return;
}

