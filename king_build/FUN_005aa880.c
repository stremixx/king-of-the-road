
byte * FUN_005aa880(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    return (byte *)0x0;
  }
  for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
  }
  bVar2 = *pbVar4;
  if (0x1f < bVar2) {
    pbVar3 = pbVar4;
    while (0x20 < bVar2) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar1;
    }
    if ((*pbVar4 != 0x20) && (*pbVar4 != 9)) {
      *param_1 = 0;
      *pbVar4 = 0;
      return pbVar3;
    }
    *pbVar4 = 0;
    if ((pbVar4[1] < 0x20) && (pbVar4[1] != 9)) {
      *param_1 = 0;
      return pbVar3;
    }
    *param_1 = pbVar4 + 1;
    return pbVar3;
  }
  *param_1 = 0;
  return (byte *)0x0;
}

