
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004366b0(uint *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint local_60;
  int local_58;
  int *piStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *local_3c;
  undefined *local_38;
  uint auStack_34 [2];
  double dStack_2c;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d7e8;
  local_14 = ExceptionList;
  local_3c = s_getPositionIdEx_RoomId_room__dve_0066d470;
  local_38 = &DAT_0071d768;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_getPositionIdEx_RoomId_room__dve_0066d470);
  local_c = 0;
  if (param_2 == -1) {
    FUN_004369e0(param_1,param_3);
    FUN_00401870(s_COMPL__0066b7ec,8);
    FUN_004018b0(s_getPositionIdEx_RoomId_room__dve_0066d470);
    ExceptionList = local_14;
    return param_1;
  }
  local_48 = 0xffffffff;
  local_44 = 0x7fefffff;
  local_50 = 0;
  local_4c = 0;
  local_58 = 0;
  local_60 = 0;
  if (DAT_0068be98 == DAT_0068be9c) {
    FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x398a,s_No_roads_defined_0066d45c,
                 &DAT_0068c120,&DAT_0068c120);
  }
  bVar3 = true;
  iVar5 = *(int *)(DAT_0068c038 + param_2 * 4);
  piVar7 = *(int **)(iVar5 + 0x28);
  uVar9 = 0;
  if (piVar7 != *(int **)(iVar5 + 0x2c)) {
    do {
      iVar5 = *piVar7;
      uVar9 = 0;
      bVar2 = false;
      iVar4 = *(int *)(iVar5 + 0x78);
      if (*(int *)(iVar5 + 0x7c) - iVar4 >> 2 != 0) {
        do {
          iVar4 = (**(code **)(**(int **)(iVar4 + uVar9 * 4) + 0xc))
                            (param_3,&local_48,&local_50,&local_58);
          if (iVar4 != 0) {
            bVar2 = true;
            local_60 = uVar9;
          }
          iVar4 = *(int *)(iVar5 + 0x78);
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)(*(int *)(iVar5 + 0x7c) - iVar4 >> 2));
        if (bVar2) {
          bVar3 = false;
          piStack_54 = piVar7;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int **)(*(int *)(DAT_0068c038 + param_2 * 4) + 0x2c));
    uVar9 = local_60;
    if (!bVar3) goto LAB_0043687d;
  }
  FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3998,s_Internal_error_59812_0066d444,
               &DAT_0068c120,&DAT_0068c120);
LAB_0043687d:
  dStack_2c = (double)CONCAT44(local_4c,local_50);
  auStack_34[0] = *(uint *)(*piStack_54 + 0xc);
  auStack_34[1] = 0xffffffff;
  iStack_24 = local_58;
  uStack_20 = uVar9;
  uStack_1c = 0;
  uStack_18 = 0xffffffff;
  if ((((((int)auStack_34[0] < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= auStack_34[0])) ||
       (dStack_2c < _DAT_0064a678)) || ((_DAT_0064a670 < dStack_2c || (local_58 < 0)))) ||
     ((int)uVar9 < 0)) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,auStack_34[0],local_50,local_4c,local_58,
                 uVar9,0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x399b,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar8 = auStack_34;
  puVar10 = param_1;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_getPositionIdEx_RoomId_room__dve_0066d470;
  cVar1 = s_getPositionIdEx_RoomId_room__dve_0066d470[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar6;
    }
  }
  ExceptionList = local_14;
  return param_1;
}

