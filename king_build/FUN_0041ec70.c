
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0041ec70(int *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined1 local_c [4];
  double local_8;
  
  piVar2 = param_2;
  if (param_2[8] != 4) goto LAB_0041ed96;
  pbVar3 = (byte *)param_2[5];
  pcVar7 = s_STrailerStorm_0066c72c;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_0041ecb7:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0041ecbc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_0041ecb7;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0041ecbc:
  local_8 = _DAT_0064a660;
  if (iVar4 == 0) {
    local_8 = _DAT_0064a700;
  }
  local_8 = local_8 * *(double *)(param_2 + 0x1c);
  FUN_00477c00(&param_2);
  if (param_2 == DAT_0068a8f0) {
LAB_0041ed29:
    fVar9 = (float10)local_8;
  }
  else {
    iVar4 = *(int *)(DAT_0068bf38 + *(int *)(param_2[0x81] + 4) * 4);
    piVar6 = *(int **)(iVar4 + 100);
    piVar5 = *(int **)(iVar4 + 0x60);
    if (piVar5 == piVar6) goto LAB_0041ed29;
    do {
      if (*piVar5 == *piVar2) break;
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar6);
    if (piVar5 == piVar6) goto LAB_0041ed29;
    fVar9 = (float10)local_8 + (float10)local_8;
    local_8 = (double)fVar9;
  }
  if (*param_1 == -1) {
    return fVar9;
  }
  piVar6 = (int *)FUN_00404f10(local_c,*(int *)(DAT_0068be60 + *param_1 * 4) + 0x30);
  bVar1 = *(byte *)(piVar2 + 1);
  if ((*(byte *)(*(int *)(DAT_0068be20 + *piVar6 * 4) + 0x60) & 1) == 0) {
    if ((bVar1 & 1) == 0) {
      return (float10)local_8 * (float10)_DAT_0064a6f8;
    }
  }
  else if ((bVar1 & 1) != 0) {
    return (float10)local_8 * (float10)_DAT_0064a6f8;
  }
LAB_0041ed96:
  return (float10)_DAT_0064a668;
}

