
byte * FUN_005eeb70(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  iVar2 = *(int *)(param_2 + 0x48);
  pbVar3 = *(byte **)(param_2 + 0x4c);
  pbVar4 = param_1;
  pbVar7 = pbVar3;
  pbVar6 = pbVar3;
  if (0 < iVar2) {
LAB_005eeb8e:
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 == *pbVar7) {
        if (bVar1 != 0) {
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_005eebb2;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
          if (bVar1 != 0) goto LAB_005eeb8e;
        }
        iVar5 = 0;
      }
      else {
LAB_005eebb2:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar5 == 0) break;
      iVar8 = iVar8 + 1;
      pbVar4 = param_1;
      pbVar7 = pbVar6 + 0x7c;
      pbVar6 = pbVar6 + 0x7c;
    } while (iVar8 < iVar2);
  }
  if (iVar8 < iVar2) {
    *param_3 = iVar8;
    return pbVar3 + iVar8 * 0x7c;
  }
  return (byte *)0x0;
}

