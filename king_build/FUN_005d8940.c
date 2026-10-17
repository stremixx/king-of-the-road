
int __thiscall FUN_005d8940(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x1d4);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar3 = *(byte **)(iVar2 + 0x3c);
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005d897f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005d8984;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005d897f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005d8984:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

