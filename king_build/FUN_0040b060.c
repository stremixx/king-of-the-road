
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b060(int param_1,int param_2,double param_3,double param_4,double param_5)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  byte local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b6d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_4 = 0;
  if (param_2 == -1) {
    FUN_00401870(s_COMPL__0066b7ec);
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  pbVar8 = *(byte **)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xc0);
  if ((pbVar8 != (byte *)0x0) && ((*pbVar8 & 0x10) != 0)) {
    FUN_0040ade0();
  }
  if (*(int *)(param_1 + 0x5c) == 1) {
    if (DAT_0068c0e8 == 0) {
      if (((((_DAT_0064a668 < *(double *)(param_1 + 0xd0)) || (*(char *)(param_1 + 200) != '\0')) ||
           (_DAT_0064a668 < *(double *)(param_1 + 0xf0))) ||
          ((_DAT_0064a668 < *(double *)(param_1 + 0xf8) ||
           (_DAT_0064a668 < *(double *)(param_1 + 0x100))))) || (*(char *)(param_1 + 0x108) != '\0')
         ) {
        FUN_0040a5f0();
      }
      if ((_DAT_0064a668 < *(double *)(param_1 + 0xe0)) || (*(char *)(param_1 + 0xc9) != '\0')) {
        FUN_0040a960();
      }
    }
    if ((((pbVar8 != (byte *)0x0) && ((*pbVar8 & 0x10) == 0)) &&
        (_DAT_0064a668 <
         *(double *)(pbVar8 + 8) * param_3 +
         *(double *)(pbVar8 + 0x10) * param_4 + *(double *)(pbVar8 + 0x18) * param_5)) &&
       (fVar10 = (float10)FUN_00401000(),
       (float10)_DAT_0064a688 < ABS((float10)*(double *)(pbVar8 + 0x20) - fVar10))) {
      FUN_0056a570();
      fVar10 = (float10)FUN_00401000();
      *(double *)(pbVar8 + 0x20) = (double)fVar10;
    }
    if (DAT_0068c0e8 == 0) {
      FUN_0040a0e0();
      goto LAB_0040b238;
    }
LAB_0040b241:
    if (DAT_0068c0e8 != 1) goto LAB_0040b2d5;
  }
  else {
LAB_0040b238:
    if (DAT_0068c0e8 != 0) goto LAB_0040b241;
  }
  if (((*(int *)(param_1 + 100) == 5) && (*(int *)(param_1 + 0x5c) != 1)) &&
     (8 < *(int *)(param_1 + 0x2d4))) {
    FUN_0061c369(local_2c,s_finish_d_all_0066bcc0);
    puVar3 = *(uint **)(DAT_0068be60 + param_2 * 4);
    uVar4 = *puVar3;
    pbVar8 = local_2c;
    pbVar5 = (byte *)(-(uint)(uVar4 != puVar3[1]) & uVar4);
    do {
      bVar1 = *pbVar8;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0040b2bb:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0040b2c0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar9 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0040b2bb;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0040b2c0:
    if (iVar6 == 0) {
      FUN_0040ac60();
    }
  }
LAB_0040b2d5:
  if ((DAT_0068c0e8 == 2) && (*(int *)(param_1 + 100) == 5)) {
    puVar3 = *(uint **)(DAT_0068be60 + param_2 * 4);
    uVar4 = *puVar3;
    iVar6 = _strncmp(s_fline1_0066bcb8,(char *)(-(uint)(uVar4 != puVar3[1]) & uVar4),6);
    if (iVar6 == 0) {
      if (*(int *)(param_1 + 0x5c) != 1) {
        FUN_0040ac60();
      }
    }
    else {
      puVar3 = *(uint **)(DAT_0068be60 + param_2 * 4);
      uVar4 = *puVar3;
      iVar6 = _strncmp(s_check1_0066bcb0,(char *)(-(uint)(uVar4 != puVar3[1]) & uVar4),6);
      if ((iVar6 == 0) && (*(int *)(param_1 + 0x5c) != 1)) {
        *(undefined4 *)(param_1 + 0x2d4) = 1;
      }
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_onNodePass_PlayerId_player__Node_0066bcd0;
  cVar2 = s_onNodePass_PlayerId_player__Node_0066bcd0[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar7;
    }
  }
  ExceptionList = local_c;
  return;
}

