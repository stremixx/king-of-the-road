
undefined4 FUN_00441f10(int param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_getServiceInfo_ServiceId_service_0066e058);
  iVar4 = *(int *)(DAT_0068bb48 + param_1 * 4);
  dVar1 = *(double *)(iVar4 + 0x158);
  dVar2 = *(double *)(iVar4 + 0x160);
  param_2[2] = (float)*(double *)(iVar4 + 0x150);
  param_2[3] = (float)dVar1;
  param_2[4] = (float)dVar2;
  *param_2 = *(undefined4 *)(*(int *)(DAT_0068bb48 + param_1 * 4) + 0x148);
  param_2[1] = *(undefined4 *)(*(int *)(DAT_0068bb48 + param_1 * 4) + 0x14c);
  iVar4 = 0;
  puVar6 = param_2 + 6;
  do {
    puVar7 = (undefined4 *)(*(int *)(DAT_0068bb48 + param_1 * 4) + iVar4);
    iVar4 = iVar4 + 0x10;
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
    puVar6[2] = puVar7[2];
    puVar6[3] = puVar7[3];
    puVar6 = puVar6 + 4;
  } while (iVar4 < 0x130);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_getServiceInfo_ServiceId_service_0066e058;
  cVar3 = s_getServiceInfo_ServiceId_service_0066e058[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar5;
    }
  }
  return 0;
}

