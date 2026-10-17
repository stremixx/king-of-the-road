
void FUN_00421b10(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int in_stack_0000002c;
  undefined1 local_64 [4];
  uint local_60 [4];
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  uint local_40 [5];
  int local_2c;
  uint local_20 [4];
  int iStack_10;
  
  uVar1 = FUN_00415840(9,0,in_stack_0000002c);
  piVar2 = (int *)FUN_00422480(local_64,uVar1);
  iVar3 = *piVar2;
  in_stack_0000002c = iVar3;
  FUN_00421970(&stack0x00000008);
  FUN_004742e0(&stack0x00000008);
  FUN_00477cd0(uVar1);
  puVar4 = (uint *)(iVar3 + 0x28);
  puVar5 = puVar4;
  puVar6 = local_60;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = FUN_0040a460();
  if (iVar3 == 0) {
    puVar5 = puVar4;
    puVar6 = local_60;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,local_60[0],local_60[2],local_60[3],
                 local_50,local_4c,local_48);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1e59,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar5 = puVar4;
  puVar6 = local_60;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (-1 < (int)local_60[0]) {
    if (local_60[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2)) {
      puVar5 = puVar4;
      puVar6 = local_40;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = puVar4;
      puVar6 = local_60;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar3 = *(int *)(DAT_0068be98 + local_60[0] * 4);
      if (local_2c < *(int *)(iVar3 + 0x7c) - *(int *)(iVar3 + 0x78) >> 2) {
        puVar5 = puVar4;
        puVar6 = local_20;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = puVar4;
        puVar6 = local_60;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar5 = local_40;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_40[0] * 4) + 0x78) +
                                       local_4c * 4) + 0x18))();
        if (iStack_10 < iVar3) goto LAB_00421cb9;
      }
      FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1e59,s_Invalid_Position_Id_0066bbe0
                   ,&DAT_0068c120,&DAT_0068c120);
    }
  }
LAB_00421cb9:
  if (DAT_0068c27c != '\0') {
    FUN_0046db70(uVar1);
  }
  iVar3 = in_stack_0000002c;
  FUN_004200f0(in_stack_0000002c);
  *param_1 = iVar3;
  return;
}

