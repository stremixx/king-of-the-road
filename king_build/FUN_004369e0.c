
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004369e0(uint *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
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
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d808;
  pvStack_14 = ExceptionList;
  local_3c = s_getPositionId_dvector3_const___v_0066d4a4;
  local_38 = &DAT_0071d768;
  ExceptionList = &pvStack_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_getPositionId_dvector3_const___v_0066d4a4);
  local_c = 0;
  local_48 = 0xffffffff;
  local_44 = 0x7fefffff;
  local_50 = 0;
  local_4c = 0;
  local_58 = 0;
  local_60 = 0;
  if (DAT_0068be98 == DAT_0068be9c) {
    FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x39ae,s_No_roads_defined_0066d45c,
                 &DAT_0068c120,&DAT_0068c120);
  }
  bVar3 = true;
  piVar7 = DAT_0068be9c;
  piVar8 = DAT_0068be98;
  uVar10 = 0;
  if (DAT_0068be98 != DAT_0068be9c) {
    do {
      iVar5 = *piVar8;
      uVar10 = 0;
      bVar2 = false;
      iVar4 = *(int *)(iVar5 + 0x78);
      if (*(int *)(iVar5 + 0x7c) - iVar4 >> 2 != 0) {
        do {
          iVar4 = (**(code **)(**(int **)(iVar4 + uVar10 * 4) + 0xc))
                            (param_2,&local_48,&local_50,&local_58);
          if (iVar4 != 0) {
            bVar2 = true;
            local_60 = uVar10;
          }
          iVar4 = *(int *)(iVar5 + 0x78);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (uint)(*(int *)(iVar5 + 0x7c) - iVar4 >> 2));
        piVar7 = DAT_0068be9c;
        if (bVar2) {
          bVar3 = false;
          piStack_54 = piVar8;
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar7);
    uVar10 = local_60;
    if (!bVar3) goto LAB_00436b51;
  }
  FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x39bc,s_Internal_error_59812_0066d444,
               &DAT_0068c120,&DAT_0068c120);
  piVar7 = DAT_0068be9c;
LAB_00436b51:
  dStack_2c = (double)CONCAT44(local_4c,local_50);
  auStack_34[0] = (int)piStack_54 - (int)DAT_0068be98 >> 2;
  auStack_34[1] = 0xffffffff;
  iStack_24 = local_58;
  uStack_20 = uVar10;
  uStack_1c = 0;
  uStack_18 = 0xffffffff;
  if ((((((int)auStack_34[0] < 0) || ((uint)((int)piVar7 - (int)DAT_0068be98 >> 2) <= auStack_34[0])
        ) || (dStack_2c < _DAT_0064a678)) || ((_DAT_0064a670 < dStack_2c || (local_58 < 0)))) ||
     ((int)uVar10 < 0)) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,auStack_34[0],local_50,local_4c,local_58,
                 uVar10,0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x39bf,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar9 = auStack_34;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *puVar9;
    puVar9 = puVar9 + 1;
    param_1 = param_1 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_getPositionId_dvector3_const___v_0066d4a4;
  cVar1 = s_getPositionId_dvector3_const___v_0066d4a4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar6;
    }
  }
  ExceptionList = pvStack_14;
  return;
}

