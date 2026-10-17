
undefined4 FUN_005e8cc0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  byte local_8 [8];
  
  FUN_0061dd53(param_2,param_3,0);
  FUN_0061d8bf(local_8,4,1,param_2);
  local_8[4] = 0;
  pbVar4 = &DAT_00682478;
  pbVar2 = local_8;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005e8d1c:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005e8d21;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005e8d1c;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005e8d21:
  if (iVar3 != 0) {
    pbVar4 = &DAT_00682470;
    pbVar2 = local_8;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005e8d5a:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_005e8d5f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005e8d5a;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005e8d5f:
    if (iVar3 != 0) {
      pbVar4 = &DAT_00682468;
      pbVar2 = local_8;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_005e8d90:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_005e8d95;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_005e8d90;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005e8d95:
      if (iVar3 == 0) goto LAB_005e8dd7;
      pbVar4 = &DAT_00682460;
      pbVar2 = local_8;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_005e8dc6:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_005e8dcb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_005e8dc6;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005e8dcb:
      if (iVar3 != 0) {
        return 0;
      }
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
  }
LAB_005e8dd7:
  FUN_005aa7c0(param_2);
  FUN_005aa7c0(param_2);
  FUN_0061dd53(param_2,param_3 + 0x308,0);
  FUN_0061d8bf(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),1,param_2);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  return 1;
}

