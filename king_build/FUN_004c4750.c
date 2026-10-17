
byte * FUN_004c4750(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  if (*(uint *)(param_2 + 0x48) == 0) {
    return (byte *)0x0;
  }
  pbVar2 = *(byte **)(param_2 + 0x4c);
  pbVar5 = pbVar2;
  pbVar6 = param_1;
  pbVar4 = pbVar2;
LAB_004c4772:
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 == *pbVar6) {
      if (bVar1 != 0) {
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004c4796;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
        if (bVar1 != 0) goto LAB_004c4772;
      }
      iVar3 = 0;
    }
    else {
LAB_004c4796:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 == 0) {
      return pbVar2 + uVar7 * 0x7c;
    }
    uVar7 = uVar7 + 1;
    pbVar5 = pbVar4 + 0x7c;
    pbVar6 = param_1;
    pbVar4 = pbVar5;
    if (*(uint *)(param_2 + 0x48) <= uVar7) {
      return (byte *)0x0;
    }
  } while( true );
}

