
uint FUN_00404bd0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  while( true ) {
    if (uVar2 == *(uint *)(param_1 + 0x20)) {
      return uVar2 & 0xffffff00;
    }
    if ((*(byte *)(uVar2 + 4) & 1) != 0) break;
    uVar2 = uVar2 + 0x10;
  }
  uVar1 = *(uint *)(DAT_0068bc18 + 0x30 + param_2 * 0x68);
  if ((*(byte *)(uVar2 + 4) & 4) != 0) {
    return uVar1 >> 2 & 1;
  }
  return ~uVar1 >> 2 & 1;
}

