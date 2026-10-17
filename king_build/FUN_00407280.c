
uint __thiscall FUN_00407280(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)*param_2;
  if ((pbVar2 != (byte *)param_2[1]) && (pbVar2 != (byte *)0x0)) {
    pbVar3 = (byte *)*param_1;
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_004072bd:
        pbVar2 = (byte *)((1 - (uint)bVar4) - (uint)(bVar4 != 0));
        goto LAB_004072c2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_004072bd;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    pbVar2 = (byte *)0x0;
LAB_004072c2:
    if (pbVar2 == (byte *)0x0) {
      return 1;
    }
  }
  return (uint)pbVar2 & 0xffffff00;
}

