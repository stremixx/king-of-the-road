
void FUN_00439180(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uStack_4c;
  double dStack_44;
  double dStack_3c;
  undefined4 local_34 [2];
  double dStack_2c;
  double dStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d988;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00401870();
  FUN_004018b0(s__getTangent_PositionId_pos__0066d640);
  local_c = 0;
  puVar8 = &param_2;
  puVar10 = local_34;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar5 = FUN_0040a460();
  iVar4 = param_7;
  iVar6 = param_6;
  uVar3 = param_2;
  if (iVar5 == 0) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,param_2,param_4,param_5,param_6,param_7,
                 param_8);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3bf9,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  if (((-1 < (int)uVar3) && (uVar3 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) &&
     ((iVar5 = *(int *)(DAT_0068be98 + uVar3 * 4), iVar2 = *(int *)(iVar5 + 0x78),
      *(int *)(iVar5 + 0x7c) - iVar2 >> 2 <= iVar4 ||
      (iVar5 = (**(code **)(**(int **)(iVar2 + iVar4 * 4) + 0x18))(), iVar5 <= iVar6)))) {
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3bf9,s_Invalid_Position_Id_0066bbe0,
                 &DAT_0068c120,&DAT_0068c120);
  }
  if (uVar3 == 0xffffffff) {
    uStack_4c = 0.0;
    dStack_44 = 1.0;
    dStack_3c = 0.0;
  }
  else {
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + uVar3 * 4) + 0x78) + iVar4 * 4) + 4))
              (local_34,CONCAT44(param_5,param_4),iVar6);
    dStack_44 = dStack_2c;
    dStack_3c = dStack_24;
    uStack_4c = (double)CONCAT44(local_34[1],local_34[0]);
  }
  if ((param_8 & 1) != 0) {
    dStack_2c = -dStack_44;
    dStack_24 = -dStack_3c;
    uStack_4c = -uStack_4c;
    dStack_44 = -dStack_44;
    dStack_3c = -dStack_3c;
  }
  puVar9 = &uStack_4c;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_1 = *(undefined4 *)puVar9;
    puVar9 = (undefined8 *)((int)puVar9 + 4);
    param_1 = param_1 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s__getTangent_PositionId_pos__0066d640;
  cVar1 = s__getTangent_PositionId_pos__0066d640[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar7;
    }
  }
  ExceptionList = pvStack_14;
  return;
}

