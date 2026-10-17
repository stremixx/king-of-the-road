
int __thiscall FUN_0050bf80(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  iVar7 = 0;
  if (0 < iVar2) {
    pbVar6 = (byte *)(param_1 + 1);
    pbVar3 = param_2;
    pbVar5 = pbVar6;
LAB_0050bf95:
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0050bfb9;
          pbVar6 = pbVar6 + 2;
          pbVar3 = pbVar3 + 2;
          if (bVar1 != 0) goto LAB_0050bf95;
        }
        iVar4 = 0;
      }
      else {
LAB_0050bfb9:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar4 == 0) break;
      iVar7 = iVar7 + 1;
      pbVar6 = pbVar5 + 0x10;
      pbVar3 = param_2;
      pbVar5 = pbVar6;
    } while (iVar7 < iVar2);
  }
  if (iVar2 <= iVar7) {
    return -1;
  }
  return iVar7;
}

