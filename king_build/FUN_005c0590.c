
int __thiscall FUN_005c0590(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = *(int *)(param_1 + 0x128);
  iVar4 = 0;
  if (iVar6 == 0) {
    return -1;
  }
  do {
    pbVar5 = *(byte **)(iVar6 + 0xc);
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005c05cd:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005c05d2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005c05cd;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005c05d2:
    if (iVar3 == 0) {
      if (iVar6 == 0) {
        return -1;
      }
      return iVar4;
    }
    iVar6 = *(int *)(iVar6 + 8);
    iVar4 = iVar4 + 1;
    if (iVar6 == 0) {
      return -1;
    }
  } while( true );
}

