
uint FUN_005d1bb0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    while (bVar2 != 0) {
      uVar3 = uVar3 + bVar2;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    }
    return uVar3 % 500;
  }
  return uVar3;
}

