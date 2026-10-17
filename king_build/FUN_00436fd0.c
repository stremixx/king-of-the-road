
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00436fd0(uint *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  char *local_5c;
  undefined *local_58;
  uint local_54 [2];
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34 [2];
  double dStack_2c;
  int iStack_24;
  int iStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d848;
  local_14 = ExceptionList;
  local_5c = s_getPositionIdV_RoomId_room__dvec_0066d508;
  local_58 = &DAT_0071d768;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_getPositionIdV_RoomId_room__dvec_0066d508);
  uVar7 = 0;
  local_c = 0;
  if (((int)param_2 < 0) || ((uint)(DAT_0068c03c - DAT_0068c038 >> 2) <= param_2)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_2);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x39ef,s_Invalid_id_0066bbf4,
                 s_RoomId_0066d4c8,&DAT_0077d3c0);
  }
  local_68 = 0xffffffff;
  local_64 = 0x7fefffff;
  local_70 = 0;
  uStack_6c = 0;
  local_74 = 0;
  iVar5 = *(int *)(DAT_0068c038 + param_2 * 4);
  local_78 = 0;
  if (*(int *)(iVar5 + 0x1c) == *(int *)(iVar5 + 0x20)) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[7] = 0xffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_00401870(s_COMPL__0066b7ec,8);
    FUN_004018b0(s_getPositionIdV_RoomId_room__dvec_0066d508);
    ExceptionList = local_14;
    return param_1;
  }
  iVar3 = *(int *)(iVar5 + 0x1c);
  if (*(int *)(iVar5 + 0x20) - iVar3 >> 2 != 0) {
    do {
      piVar2 = *(int **)(iVar3 + uVar7 * 4);
      if (piVar2 == (int *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        puVar4 = (uint *)(piVar2 + 2);
      }
      if (((~(byte)(*puVar4 >> 5) & 1) != 0) &&
         (iVar3 = (**(code **)(*piVar2 + 0xc))(param_3,&local_68,&local_70,&local_74), iVar3 != 0))
      {
        local_78 = uVar7;
      }
      iVar3 = *(int *)(iVar5 + 0x1c);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(iVar5 + 0x20) - iVar3 >> 2));
  }
  local_4c = CONCAT44(uStack_6c,local_70);
  iVar5 = *(int *)(*(int *)(*(int *)(DAT_0068c038 + param_2 * 4) + 0x1c) + local_78 * 4);
  local_54[1] = 0xffffffff;
  local_38 = 0xffffffff;
  uVar7 = *(uint *)(iVar5 + 0xc);
  local_54[0] = uVar7;
  uStack_44 = local_74;
  uStack_40 = *(undefined4 *)(iVar5 + 0x18);
  uStack_3c = 0;
  puVar4 = local_54;
  puVar8 = local_34;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((((((int)uVar7 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= uVar7)) &&
       (iVar5 = FUN_00423b50(), iVar5 == 0)) ||
      ((dStack_2c < _DAT_0064a678 || (_DAT_0064a670 < dStack_2c)))) ||
     ((iStack_24 < 0 || (iStack_20 < 0)))) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,uVar7,(undefined4)local_4c,local_4c._4_4_
                 ,uStack_44,uStack_40,0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x39fc,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar4 = local_54;
  puVar8 = param_1;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_getPositionIdV_RoomId_room__dvec_0066d508;
  cVar1 = s_getPositionIdV_RoomId_room__dvec_0066d508[0];
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

