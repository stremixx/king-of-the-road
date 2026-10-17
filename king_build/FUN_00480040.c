
void FUN_00480040(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint local_20 [8];
  
  if (((int)param_2 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_2)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_2);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x36,s_Invalid_id_0066bbf4,
                 s_RoadId_0066ec44,&DAT_0077d3c0);
  }
  local_20[0] = param_2;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0xffffffff;
  uVar1 = *(uint *)(*(int *)(*(int *)(DAT_0068be98 + param_2 * 4) + 0x70) + 0x10);
  local_20[1] = uVar1;
  if (((int)uVar1 < 0) || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= uVar1)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,uVar1);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x39,s_Invalid_id_0066bbf4,
                 s_NodeId_0066ec3c,&DAT_0077d3c0);
  }
  if ((((int)param_2 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_2)) &&
     (((int)uVar1 < 0 || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= uVar1)))) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,param_2,0,0,0,0,0);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x3a,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

