
undefined4 FUN_005d8b80(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if ((*(int *)(param_1 + 0x10) == 0xe) && ((*(byte *)(param_1 + 0x28) & 2) != 0)) {
    pbVar4 = (byte *)(param_1 + 0x84);
    pbVar2 = *(byte **)(*param_2 + 0x3c);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005d8bca:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_005d8bcf;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005d8bca;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005d8bcf:
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
  }
  return 0xffffffff;
}

