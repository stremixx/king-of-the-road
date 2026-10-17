
void FUN_00480520(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (-1 < (int)param_2) {
    if (param_2 < (uint)(DAT_0068be64 - DAT_0068be60 >> 2)) goto LAB_00480584;
  }
  FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_2);
  FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
               s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x67,s_Invalid_id_0066bbf4,
               s_NodeId_0066ec3c,&DAT_0077d3c0);
LAB_00480584:
  if (((int)param_3 < 0) || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= param_3)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_3);
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
                 s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x68,s_Invalid_id_0066bbf4,
                 s_NodeId_0066ec3c,&DAT_0077d3c0);
  }
  if (DAT_0068be98 != DAT_0068be9c) {
    iVar4 = *(int *)(DAT_0068be60 + param_2 * 4);
    piVar3 = DAT_0068be98;
    do {
      iVar1 = *piVar3;
      if (((*(int *)(iVar1 + 0x70) == iVar4) &&
          (*(int *)(iVar1 + 0x74) == *(int *)(DAT_0068be60 + param_3 * 4))) ||
         ((iVar4 = *(int *)(DAT_0068be60 + param_2 * 4), *(int *)(iVar1 + 0x74) == iVar4 &&
          (*(int *)(iVar1 + 0x70) == *(int *)(DAT_0068be60 + param_3 * 4))))) {
        *param_1 = (int)piVar3 - (int)DAT_0068be98 >> 2;
        return;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != DAT_0068be9c);
  }
  uVar2 = FUN_00436570(param_3);
  uVar2 = FUN_00436570(param_2,uVar2);
  FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_Ai_road_cp_0066ec18,
               s__Id__ai_road_cpp_2000_8_29_17_19_0066eb68,0x71,
               s_Can_node_find_road_connecting_0066ec4c,uVar2);
  *param_1 = -1;
  return;
}

