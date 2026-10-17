
undefined4 FUN_005e8290(char *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar4 = FUN_0061c356(param_1,&DAT_0066f3e8);
  if (iVar4 == 0) {
    DAT_0072081c = 1;
    return 0;
  }
  iVar5 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar1 = iVar5 + 1;
    iVar5 = iVar5 + 1;
    cVar2 = param_1[iVar1];
  }
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) break;
  } while (param_1[iVar5] != '.');
  if (iVar5 == 0) {
    return 0;
  }
  pbVar8 = &DAT_00682400;
  pbVar6 = (byte *)(param_1 + iVar5);
  do {
    bVar3 = *pbVar6;
    bVar9 = bVar3 < *pbVar8;
    if (bVar3 != *pbVar8) {
LAB_005e8312:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_005e8317;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar6[1];
    bVar9 = bVar3 < pbVar8[1];
    if (bVar3 != pbVar8[1]) goto LAB_005e8312;
    pbVar6 = pbVar6 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_005e8317:
  if (iVar5 == 0) {
    uVar7 = FUN_005e8450();
  }
  else {
    uVar7 = FUN_005e8340(iVar4);
  }
  FUN_0061c25a(iVar4);
  return uVar7;
}

