
void FUN_0047fe10(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_20 [8];
  
  local_20[2] = 0;
  uVar1 = *(uint *)(param_2 + 0xc);
  local_20[0] = uVar1;
  local_20[3] = 0;
  uVar2 = *(uint *)(*(int *)(param_2 + 0x70) + 0x10);
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0xffffffff;
  local_20[1] = uVar2;
  if (((int)uVar2 < 0) || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= uVar2)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,uVar2);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x26,s_Invalid_id_0066bbf4,
                 s_NodeId_0066ec3c,&DAT_0077d3c0);
  }
  if ((((int)uVar1 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= uVar1)) &&
     (((int)uVar2 < 0 || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= uVar2)))) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,uVar1,0,0,0,0,0);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x27,s_Invalid_id_0066bbf4,
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

