
undefined4 FUN_005d8c80(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(int *)(param_1 + 0x10) != 0xe) || ((*(byte *)(param_1 + 0x28) & 2) == 0)) ||
     (iVar5 = *(int *)(param_2 + 4), iVar5 == 0)) {
    return 0xffffffff;
  }
  do {
    pbVar2 = *(byte **)(iVar5 + 0x3c);
    pbVar4 = (byte *)(param_1 + 0x84);
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005d8cdc:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005d8ce1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005d8cdc;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005d8ce1:
    if (iVar3 == 0) {
      if (iVar5 == 0) {
        return 0xffffffff;
      }
      iVar5 = *(int *)(iVar5 + 0x40);
      if (iVar5 == 0) {
        return 0xffffffff;
      }
      do {
        pbVar2 = *(byte **)(iVar5 + 0xc);
        pbVar4 = (byte *)(param_1 + 0xa4);
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_005d8d2e:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005d8d33;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_005d8d2e;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_005d8d33:
        if (iVar3 == 0) {
          if (iVar5 == 0) {
            return 0xffffffff;
          }
          FUN_005d8b20(*(undefined4 *)(param_2 + 8),iVar5);
          *(undefined4 *)(param_1 + 0x80) = 0;
          return 0xffffffff;
        }
        iVar5 = *(int *)(iVar5 + 8);
        if (iVar5 == 0) {
          return 0xffffffff;
        }
        if (iVar5 == 0) {
          return 0xffffffff;
        }
      } while( true );
    }
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    if (iVar5 == 0) {
      return 0xffffffff;
    }
  } while( true );
}

