
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471640(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 auStack_84 [8];
  int aiStack_64 [3];
  char *pcStack_58;
  char *pcStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  int *piStack_48;
  undefined4 *puStack_44;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [9];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[0x1a] = 1;
  puStack_44 = (undefined4 *)0x471674;
  fVar8 = (float10)FUN_00401000();
  dVar1 = *(double *)(param_2 + 6);
  param_1[4] = param_3;
  *(double *)(param_1 + 0x12) = (double)(fVar8 + (float10)dVar1);
  puVar5 = (undefined4 *)&stack0x00000010;
  puVar7 = param_1 + 6;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puStack_44 = (undefined4 *)0x471692;
  fVar8 = (float10)FUN_00401000();
  *(double *)(param_1 + 0x14) = (double)fVar8;
  bVar2 = (double)CONCAT44(in_stack_00000034,in_stack_00000030) < _DAT_0064a668;
  param_1[0xe] = in_stack_00000030;
  param_1[0xf] = in_stack_00000034;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3ff00000;
  if (bVar2) {
    puStack_44 = (undefined4 *)&DAT_0068c120;
    piStack_48 = (int *)&DAT_0068c120;
    pcStack_4c = &DAT_0066c624;
    uStack_50 = 0xf4;
    pcStack_54 = s__Id__ai_ordr_cpp_2001_9_10_18_14_0066e7c8;
    pcStack_58 = s__C__Nek_Vrappl_Gi_Htai_Ai_ordr_c_0066e8a7 + 1;
    aiStack_64[2] = 0x200;
    aiStack_64[1] = 0;
    aiStack_64[0] = 0x4716e6;
    FUN_00401010();
  }
  puStack_44 = *(undefined4 **)(DAT_0068be20 + param_1[3] * 4);
  piStack_48 = &local_34;
  pcStack_4c = (char *)0x471700;
  FUN_00404d60();
  if (local_34 == -1) {
    puStack_44 = (undefined4 *)&DAT_0068c120;
    piStack_48 = *(int **)(*(int *)(DAT_0068be20 + param_1[3] * 4) + 0xc);
    pcStack_4c = s_Unload_node_not_present_for_town_0066e8cc;
    uStack_50 = 0xf8;
    pcStack_54 = s__Id__ai_ordr_cpp_2001_9_10_18_14_0066e7c8;
    pcStack_58 = s__C__Nek_Vrappl_Gi_Htai_Ai_ordr_c_0066e8a7 + 1;
    aiStack_64[2] = 100;
    aiStack_64[1] = 0x2d;
    aiStack_64[0] = 0x47173f;
    FUN_00401010();
  }
  puStack_44 = &local_30;
  local_28[0] = -1;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0xffffffff;
  local_28[1] = local_34;
  local_28[2] = 0;
  local_28[3] = 0;
  piVar4 = local_28;
  piVar6 = aiStack_64;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  puVar5 = param_1 + 6;
  puVar7 = auStack_84;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_30 = 0;
  local_2c = 0;
  FUN_00487600(0);
  param_1[0x1c] = local_30;
  param_1[0x1d] = local_2c;
  param_1[0x16] = param_2[6];
  param_1[0x17] = param_2[7];
  return;
}

