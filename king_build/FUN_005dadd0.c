
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005dadd0(int param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006487c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00631d33(0xb4);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005e9eb0(param_3);
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar4;
  uVar6 = 0xffffffff;
  pbVar5 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  local_4 = 0xffffffff;
  uVar7 = 0xffffffff;
  pcVar9 = param_3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  if (0x7f < ~uVar6 + (~uVar7 - 1)) {
    FUN_005d2520(s_The_path_is_too_long__00681ca8,0);
  }
  pbVar8 = &DAT_00670204;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    bVar12 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_005dae8a:
      iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_005dae8f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar12 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_005dae8a;
    pbVar5 = pbVar5 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005dae8f:
  if (iVar3 == 0) {
    DAT_0071fc68._0_1_ = '\0';
  }
  else {
    uVar6 = 0xffffffff;
    pbVar5 = param_2;
    do {
      pbVar8 = pbVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar8 = pbVar5 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar8;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar5 = pbVar8 + -uVar6;
    pbVar8 = (byte *)&DAT_0071fc68;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar8 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar8 = pbVar8 + 1;
    }
  }
  uVar6 = 0xffffffff;
  do {
    pcVar9 = param_3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  pcVar11 = (char *)&DAT_0071fc68;
  do {
    pcVar10 = pcVar11;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar10;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -uVar6;
  pcVar11 = pcVar10 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (*(code **)(param_1 + 0x218) != (code *)0x0) {
    (**(code **)(param_1 + 0x218))();
  }
  if (*(int *)(DAT_007206b0 + 0x158) != 0) {
    FUN_005fc460();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x38) = *(undefined4 *)(param_1 + 0x218);
  _DAT_0071d78c = *(undefined4 *)(param_1 + 0x1d4);
  iVar3 = FUN_005da350(*(undefined4 *)(param_1 + 0x1d4),param_2,&DAT_0071fc68);
  if (iVar3 == 0) {
    if (*(undefined4 **)(param_1 + 0x1d4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1d4))(1);
    }
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  DAT_00720214 = (char *)&DAT_0071fc68;
  cVar2 = (char)DAT_0071fc68;
  while (cVar2 != '\0') {
    DAT_00720214 = DAT_00720214 + 1;
    cVar2 = *DAT_00720214;
  }
  if (*DAT_00720214 != '.') {
    do {
      if (DAT_00720214 < (char *)((int)&DAT_0071fc68 + 1)) break;
      DAT_00720214 = DAT_00720214 + -1;
    } while (*DAT_00720214 != '.');
    if (*DAT_00720214 != '.') goto LAB_005db08b;
  }
  DAT_00720214 = DAT_00720214 + 1;
  uVar4 = 1;
  *DAT_00720214 = 'o';
  DAT_00720214 = DAT_00720214 + 1;
  *DAT_00720214 = 'v';
  DAT_00720214 = DAT_00720214 + 1;
  *DAT_00720214 = 'l';
  DAT_00720214 = DAT_00720214 + 1;
  *DAT_00720214 = '\0';
  if ((iVar3 == 3) || ((iVar3 == 2 && (DAT_0071f864 != 0)))) {
    uVar4 = 0;
  }
  iVar3 = FUN_00631d33(0x14);
  local_4 = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005edbb0(&DAT_0071fc68,*(undefined4 *)(param_1 + 0x1d4),uVar4);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x88) = uVar4;
  if ((*(int *)(*(int *)(param_1 + 0x1d4) + 0x58) != 0) &&
     ((*(uint *)(DAT_007206b0 + 0x10c) & 0x800) != 0)) {
    FUN_005ba4e0(0);
  }
  iVar3 = FUN_00631d33(50000);
  if (iVar3 == 0) {
    FUN_005d2520(s_Not_enough_memory_00681be4,0);
  }
  else {
    FUN_00631d5c(iVar3);
  }
LAB_005db08b:
  _DAT_0071d78c = 0;
  ExceptionList = pvStack_c;
  return *(undefined4 *)(param_1 + 0x1d4);
}

