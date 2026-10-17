
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00439400(float *param_1,char *param_2,undefined4 param_3,char *param_4,
                    undefined4 param_5,char *param_6,undefined1 *param_7,undefined1 *param_8)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  double *pdVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char **ppcVar12;
  char *apcStack_60 [4];
  undefined4 uStack_50;
  char *pcStack_4c;
  undefined1 *puStack_48;
  char *pcStack_44;
  undefined4 local_2c [2];
  double local_24;
  int local_1c;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d9a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &pvStack_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar8 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &pvStack_c;
    *(undefined4 *)pcVar8 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar8 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcStack_44 = s_getTangent_PositionId_pos__0066d65c;
  puStack_48 = (undefined1 *)0x439475;
  FUN_004018b0();
  local_4 = 0;
  puVar10 = &param_2;
  puVar11 = local_2c;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  pcStack_44 = (undefined1 *)0x439495;
  iVar9 = FUN_00423b20();
  puVar6 = param_7;
  pcVar5 = param_6;
  pcVar8 = param_2;
  if (iVar9 == 0) {
    pcStack_44 = (undefined1 *)0x4394ae;
    iVar9 = FUN_00423b50();
    if (iVar9 != 0) goto LAB_004394b2;
LAB_004394e4:
    pcStack_44 = param_8;
    puStack_48 = puVar6;
    pcStack_4c = pcVar5;
    uStack_50 = param_5;
    apcStack_60[3] = param_4;
    apcStack_60[2] = pcVar8;
    apcStack_60[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_60[0] = &DAT_0077d640;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3c0b,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  else {
LAB_004394b2:
    if ((((local_24 < _DAT_0064a678) || (_DAT_0064a670 < local_24)) || (local_1c < 0)) ||
       (local_18 < 0)) goto LAB_004394e4;
  }
  if ((-1 < (int)pcVar8) && (pcVar8 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar9 = *(int *)(DAT_0068be98 + (int)pcVar8 * 4);
    iVar4 = *(int *)(iVar9 + 0x78);
    if ((int)puVar6 < *(int *)(iVar9 + 0x7c) - iVar4 >> 2) {
      pcStack_44 = (undefined1 *)0x439563;
      iVar9 = (**(code **)(**(int **)(iVar4 + (int)puVar6 * 4) + 0x18))();
      if ((int)pcVar5 < iVar9) goto LAB_00439591;
    }
    pcStack_44 = &DAT_0068c120;
    puStack_48 = &DAT_0068c120;
    pcStack_4c = s_Invalid_Position_Id_0066bbe0;
    uStack_50 = 0x3c0b;
    apcStack_60[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_60[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_60[1] = (char *)0x64;
    apcStack_60[0] = (char *)0x21;
    FUN_00401010();
  }
LAB_00439591:
  puVar10 = &param_2;
  ppcVar12 = apcStack_60;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppcVar12 = (char *)*puVar10;
    puVar10 = puVar10 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  pdVar7 = (double *)FUN_00439180(&param_2);
  dVar1 = pdVar7[2];
  dVar2 = pdVar7[1];
  *param_1 = (float)*pdVar7;
  param_1[1] = (float)dVar2;
  param_1[2] = (float)dVar1;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar8 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar8 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar8 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar8 = s_getTangent_PositionId_pos__0066d65c;
  cVar3 = s_getTangent_PositionId_pos__0066d65c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar8;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

