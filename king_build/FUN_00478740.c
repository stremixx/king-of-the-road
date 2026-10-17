
/* WARNING: Removing unreachable block (ram,0x004788be) */
/* WARNING: Removing unreachable block (ram,0x004788d0) */
/* WARNING: Removing unreachable block (ram,0x004788cc) */

void FUN_00478740(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_20 [8];
  
  iVar3 = FUN_00456670(param_1);
  if (iVar3 != 0) {
    FUN_0061c369(&DAT_0077d5c0,&DAT_0066c4e4);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x7e6,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  puVar5 = &param_2;
  puVar6 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = FUN_0040a460();
  if (iVar3 == 0) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,param_2,param_4,param_5,param_6,param_7,
                 param_8);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x7e7,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  if (((-1 < (int)param_2) && (param_2 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) &&
     ((iVar3 = *(int *)(DAT_0068be98 + param_2 * 4), iVar1 = *(int *)(iVar3 + 0x78),
      *(int *)(iVar3 + 0x7c) - iVar1 >> 2 <= param_7 ||
      (iVar3 = (**(code **)(**(int **)(iVar1 + param_7 * 4) + 0x18))(), iVar3 <= param_6)))) {
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x7e7,s_Invalid_Position_Id_0066bbe0,
                 &DAT_0068c120,&DAT_0068c120);
  }
  if ((*(int *)(param_1 + 0x54) != -1) &&
     (iVar3 = FUN_004d89a0(*(int *)(param_1 + 0x54)), iVar3 != 0)) {
    FUN_004d8a40(*(undefined4 *)(param_1 + 0x54));
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x18);
  for (iVar4 = iVar1; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
    FUN_004030a0(iVar4);
  }
  iVar3 = (int)((ulonglong)((longlong)(iVar3 - iVar1) * -0x2aaaaaab) >> 0x20);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + ((iVar3 >> 1) - (iVar3 >> 0x1f)) * 0xc;
  *(undefined1 *)(param_1 + 0x368) = 1;
  FUN_00478120();
  FUN_004742e0(&param_2);
  return;
}

