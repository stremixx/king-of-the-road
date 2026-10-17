
void FUN_00417dd0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 local_64;
  uint local_60 [4];
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  uint local_40 [5];
  int local_2c;
  uint local_20 [4];
  int iStack_10;
  
  iVar1 = param_1;
  FUN_00447d40();
  *(undefined1 *)(iVar1 + 0x368) = 1;
  iVar1 = FUN_00477850(param_1 + 8);
  if (iVar1 == 0) {
    FUN_00401010(0x164,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1180,s_Internal_error_356_0066c2a8,
                 &DAT_0068c120,&DAT_0068c120);
  }
  iVar1 = FUN_00477920(param_1);
  FUN_00404d60(&local_64,*(undefined4 *)(DAT_0068be20 + *(int *)(iVar1 + 0xc) * 4));
  FUN_0040a430(local_64);
  uVar5 = extraout_ECX;
  FUN_0041d3f0(&param_1);
  FUN_00478300(uVar5);
  puVar2 = (uint *)(param_1 + 0x28);
  puVar3 = local_60;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_0040a460();
  if (iVar1 == 0) {
    puVar2 = (uint *)(param_1 + 0x28);
    puVar3 = local_60;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,local_60[0],local_60[2],local_60[3],
                 local_50,local_4c,local_48);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1185,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar2 = (uint *)(param_1 + 0x28);
  puVar3 = puVar2;
  puVar4 = local_60;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((-1 < (int)local_60[0]) && (local_60[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar3 = puVar2;
    puVar4 = local_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = puVar2;
    puVar4 = local_60;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar1 = *(int *)(DAT_0068be98 + local_60[0] * 4);
    if (local_2c < *(int *)(iVar1 + 0x7c) - *(int *)(iVar1 + 0x78) >> 2) {
      puVar3 = puVar2;
      puVar4 = local_20;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = puVar2;
      puVar4 = local_60;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_40;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_40[0] * 4) + 0x78) +
                                     local_4c * 4) + 0x18))();
      if (iStack_10 < iVar1) {
        return;
      }
    }
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1185,s_Invalid_Position_Id_0066bbe0,
                 &DAT_0068c120,&DAT_0068c120);
  }
  return;
}

