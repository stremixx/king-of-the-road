
undefined4 FUN_00405510(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pbVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b09b;
  local_c = ExceptionList;
  for (puVar7 = DAT_0068c028; puVar7 != DAT_0068c02c; puVar7 = puVar7 + 1) {
    pbVar4 = *(byte **)*puVar7;
    pbVar2 = (byte *)((undefined4 *)*puVar7)[1];
    if ((pbVar4 != pbVar2) && (pbVar4 != (byte *)0x0)) {
      pbVar6 = param_1;
      if (pbVar4 == pbVar2) {
        pbVar4 = (byte *)0x0;
      }
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00405579:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0040557e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00405579;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0040557e:
      if (iVar5 == 0) break;
    }
  }
  if (puVar7 != DAT_0068c02c) {
    return *puVar7;
  }
  ExceptionList = &local_c;
  iVar5 = FUN_00631d33(0x18);
  local_4 = 0;
  if (iVar5 == 0) {
    param_1 = (byte *)0x0;
  }
  else {
    param_1 = (byte *)FUN_004806a0(pbVar3);
  }
  local_4 = 0xffffffff;
  if (DAT_0068c02c == DAT_0068c030) {
    FUN_0044d740(DAT_0068c02c,&param_1);
  }
  else {
    if (DAT_0068c02c != (undefined4 *)0x0) {
      *DAT_0068c02c = param_1;
    }
    DAT_0068c02c = DAT_0068c02c + 1;
  }
  ExceptionList = local_c;
  return DAT_0068c02c[-1];
}

