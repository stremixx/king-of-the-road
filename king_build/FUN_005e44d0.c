
int __thiscall FUN_005e44d0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = 0;
  if (param_2 == (byte *)0x0) {
    return iVar2;
  }
  bVar1 = *param_2;
  pbVar5 = param_2;
  while (bVar1 != 0) {
    iVar2 = iVar2 + (uint)bVar1;
    pbVar3 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar3;
  }
  iVar2 = *(int *)(param_1 + 0x640 + (iVar2 % 100) * 4);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar5 = *(byte **)(iVar2 + 0xfb0);
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005e453e:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005e4543;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005e453e;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005e4543:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

