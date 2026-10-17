
void FUN_0040a200(int param_1)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int local_64;
  uint local_60 [4];
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  uint local_40 [5];
  int local_2c;
  uint local_20 [4];
  int iStack_10;
  
  iVar2 = param_1;
  FUN_00447d40();
  *(undefined1 *)(iVar2 + 0x368) = 1;
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    do {
      FUN_0040a4e0(&stack0x00000008,&param_1);
      FUN_00455850(&local_64);
      if (local_64 == -1) {
        FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x8eb,
                     s_Can_not_find_node_to_trace_to_0066bc20,&DAT_0068c120,&DAT_0068c120);
      }
      FUN_0040a430(local_64);
      uVar5 = extraout_ECX;
      FUN_0041d3f0(&param_1);
      FUN_00478300(uVar5);
    } while (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c));
  }
  puVar1 = (uint *)(param_1 + 0x28);
  puVar3 = local_60;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_0040a460();
  if (iVar2 == 0) {
    puVar1 = (uint *)(param_1 + 0x28);
    puVar3 = local_60;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,local_60[0],local_60[2],local_60[3],
                 local_50,local_4c,local_48);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x8ee,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar1 = (uint *)(param_1 + 0x28);
  puVar3 = puVar1;
  puVar4 = local_60;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((-1 < (int)local_60[0]) && (local_60[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar3 = puVar1;
    puVar4 = local_40;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = puVar1;
    puVar4 = local_60;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = *(int *)(DAT_0068be98 + local_60[0] * 4);
    if (local_2c < *(int *)(iVar2 + 0x7c) - *(int *)(iVar2 + 0x78) >> 2) {
      puVar3 = puVar1;
      puVar4 = local_20;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = puVar1;
      puVar4 = local_60;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_40;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_40[0] * 4) + 0x78) +
                                     local_4c * 4) + 0x18))();
      if (iStack_10 < iVar2) {
        return;
      }
    }
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x8ee,s_Invalid_Position_Id_0066bbe0,
                 &DAT_0068c120,&DAT_0068c120);
  }
  return;
}

