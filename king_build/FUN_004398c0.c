
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004398c0(double *param_1,double *param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  int iVar11;
  char *pcVar12;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  undefined1 local_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d9e8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s__getOrientation_dvector3_const___0066d698);
  pdVar10 = &local_5c;
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pdVar10 = *param_3;
    param_3 = param_3 + 1;
    pdVar10 = (double *)((int)pdVar10 + 4);
  }
  local_c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0x3ff0000000000000;
  dVar1 = _DAT_0064a660 / SQRT(local_5c * local_5c + local_4c * local_4c + local_54 * local_54);
  local_5c = dVar1 * local_5c;
  local_54 = local_54 * dVar1;
  local_4c = local_4c * dVar1;
  FUN_00487e90(&local_44,&local_5c,&local_74);
  pdVar10 = (double *)FUN_00487e90(local_2c,&local_44,&local_5c);
  dVar1 = *pdVar10;
  dVar2 = pdVar10[1];
  dVar3 = pdVar10[2];
  dVar8 = _DAT_0064a660 / SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  dVar9 = _DAT_0064a660 / SQRT(local_34 * local_34 + local_3c * local_3c + local_44 * local_44);
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  dVar6 = *param_2;
  *param_1 = dVar9 * local_44;
  param_1[1] = local_3c * dVar9;
  param_1[2] = local_34 * dVar9;
  param_1[3] = local_5c;
  param_1[4] = local_54;
  param_1[5] = local_4c;
  param_1[6] = dVar8 * dVar1;
  param_1[7] = dVar2 * dVar8;
  param_1[8] = dVar3 * dVar8;
  param_1[9] = dVar6;
  param_1[10] = dVar5;
  param_1[0xb] = dVar4;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar12 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar12 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar12 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar12 = s__getOrientation_dvector3_const___0066d698;
  cVar7 = s__getOrientation_dvector3_const___0066d698[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar7 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar7 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar7;
      cVar7 = *pcVar12;
    }
  }
  ExceptionList = local_14;
  return;
}

