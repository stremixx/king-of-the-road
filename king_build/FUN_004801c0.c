
void FUN_004801c0(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_20 [5];
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((int)param_2 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_2)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_2);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x40,s_Invalid_id_0066bbf4,
                 s_RoadId_0066ec44,&DAT_0077d3c0);
  }
  local_20[0] = param_2;
  local_20[2] = 0;
  local_20[3] = 0x3ff00000;
  iVar3 = *(int *)(DAT_0068be98 + param_2 * 4);
  iVar1 = *(int *)(iVar3 + 0x7c);
  iVar3 = *(int *)(iVar3 + 0x78);
  iVar2 = (**(code **)(**(int **)(iVar3 + -4 + (iVar1 - iVar3 >> 2) * 4) + 0x18))();
  local_20[4] = iVar2 + -1;
  iStack_c = (iVar1 - iVar3 >> 2) + -1;
  local_20[1] = *(uint *)(*(int *)(*(int *)(DAT_0068be98 + param_2 * 4) + 0x74) + 0x10);
  uStack_8 = 0;
  uStack_4 = 0xffffffff;
  if (((((int)param_2 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_2)) &&
      (((int)local_20[1] < 0 || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= local_20[1])))) ||
     (((int)local_20[4] < 0 || (iStack_c < 0)))) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,param_2,0,0x3ff00000,local_20[4],iStack_c
                 ,0);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x43,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar4 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

