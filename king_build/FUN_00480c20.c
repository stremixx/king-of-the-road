
void FUN_00480c20(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_c [2];
  
  DAT_0068c630 = *(int *)*param_2;
  *param_2 = *param_2 + 4;
  if (DAT_0068c630 != DAT_0066ed64) {
    FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                 s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x5c,
                 s_This_game_was_saved_by_an_older__0066ed94,&DAT_0068c120,&DAT_0068c120);
  }
  iVar1 = *(int *)*param_2;
  *param_2 = (int)((int *)*param_2 + 1);
  if (iVar1 != DAT_0066b730) {
    FUN_00401010(1,100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                 s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x68,
                 s_This_game_was_saved_by_an_older__0066ed94,&DAT_0068c120,&DAT_0068c120);
  }
  DAT_0068c628 = *(undefined4 *)*param_2;
  DAT_0068c62c = ((undefined4 *)*param_2)[1];
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0068c050 = *puVar4;
  DAT_0068c054 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0068c058 = *puVar4;
  DAT_0068c05c = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0068c060 = *puVar4;
  DAT_0068c064 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0066b6d8 = *puVar4;
  DAT_0066b6dc = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0068c0f0 = *puVar4;
  DAT_0068c0f4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0068c0f8 = *puVar4;
  DAT_0068c0fc = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0068c0d0 = *puVar4;
  DAT_0068c0d4 = *(undefined4 *)(iVar1 + 0xc);
  *param_2 = *param_2 + 8;
  puVar4 = &DAT_0068a928;
  do {
    puVar2 = puVar4 + 1;
    *puVar4 = *(undefined4 *)*param_2;
    iVar1 = *param_2;
    *param_2 = iVar1 + 4;
    puVar4 = puVar2;
  } while (puVar2 < &DAT_0068aa04);
  *param_2 = iVar1 + 8;
  iVar5 = *(int *)(iVar1 + 8);
  *param_2 = iVar1 + 0xc;
  FUN_0044ac60(DAT_00689790,DAT_00689794);
  FUN_004838d0(iVar5);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    local_c[0] = *(undefined4 *)*param_2;
    *param_2 = (int)((undefined4 *)*param_2 + 1);
    FUN_00448a90(local_c);
  }
  DAT_0068c0b8 = *(undefined4 *)*param_2;
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 4);
  *param_2 = (int)puVar4;
  DAT_0066b6a0 = *puVar4;
  DAT_0066b6a4 = *(undefined4 *)(iVar1 + 8);
  iVar1 = *param_2;
  *param_2 = iVar1 + 8;
  DAT_0068c0c4 = *(undefined4 *)(iVar1 + 8);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  DAT_0068c0c8 = *(undefined1 *)(iVar1 + 4);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  DAT_0066b6e0 = *(undefined4 *)(iVar1 + 1);
  iVar1 = *param_2;
  piVar3 = (int *)(iVar1 + 4);
  *param_2 = (int)piVar3;
  iVar5 = *piVar3;
  *param_2 = iVar1 + 8;
  FUN_0044ac60(DAT_0068bbe8,DAT_0068bbec);
  FUN_004838d0(iVar5);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    local_c[0] = *(undefined4 *)*param_2;
    *param_2 = (int)((undefined4 *)*param_2 + 1);
    FUN_00448a90(local_c);
  }
  DAT_0066b6f8 = *(undefined4 *)*param_2;
  DAT_0066b6fc = ((undefined4 *)*param_2)[1];
  iVar1 = *param_2;
  puVar4 = (undefined4 *)(iVar1 + 8);
  *param_2 = (int)puVar4;
  DAT_0066b710 = *puVar4;
  DAT_0066b714 = *(undefined4 *)(iVar1 + 0xc);
  *param_2 = *param_2 + 8;
  FUN_00480770(&DAT_0068c050);
  FUN_00480770(&DAT_0068c058);
  FUN_00480770(&DAT_0068c060);
  FUN_00480770(&DAT_0066b6d8);
  FUN_00480770(&DAT_0068c0f8);
  FUN_00480770(&DAT_0068c0d0);
  if ((param_1[2] - *(int *)*param_1) + param_1[1] != 0) {
    DAT_0068c0bc = *(undefined4 *)*param_2;
    *param_2 = *param_2 + 4;
  }
  if ((param_1[2] - *(int *)*param_1) + param_1[1] != 0) {
    DAT_0068c0c0 = *(undefined4 *)*param_2;
    *param_2 = *param_2 + 4;
  }
  if ((param_1[2] - *(int *)*param_1) + param_1[1] != 0) {
    DAT_0068c068 = *(undefined4 *)*param_2;
    DAT_0068c06c = ((undefined4 *)*param_2)[1];
    *param_2 = *param_2 + 8;
    FUN_00480770(&DAT_0068c068);
  }
  return;
}

