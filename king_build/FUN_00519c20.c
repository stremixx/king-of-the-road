
int FUN_00519c20(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (0 < DAT_006cd28c) {
    pbVar5 = &DAT_006970c6;
    pbVar2 = (&PTR_s_Peterbilt_00674a84)[*(int *)(DAT_006cdbf4 + 0x328)];
    pbVar6 = pbVar5;
LAB_00519c4a:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00519c6e;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
          if (bVar1 != 0) goto LAB_00519c4a;
        }
        iVar3 = 0;
      }
      else {
LAB_00519c6e:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar6 + 0x970;
      pbVar2 = (&PTR_s_Peterbilt_00674a84)[*(int *)(DAT_006cdbf4 + 0x328)];
      pbVar6 = pbVar5;
    } while (iVar4 < DAT_006cd28c);
  }
  FUN_005d2520(s_Incorrect_prefix_00676340,
               (&PTR_s_Peterbilt_00674a84)[*(int *)(DAT_006cdbf4 + 0x328)]);
  return 0;
}

