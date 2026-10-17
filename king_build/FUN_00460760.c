
void FUN_00460760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    pbVar2 = (byte *)param_2[2];
    if ((pbVar2 != (byte *)param_2[3]) && (pbVar4 = param_4, pbVar2 != (byte *)0x0)) {
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_004607a8:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_004607ad;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_004607a8;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004607ad:
      if (iVar3 == 0) break;
    }
  }
  *param_1 = param_2;
  return;
}

