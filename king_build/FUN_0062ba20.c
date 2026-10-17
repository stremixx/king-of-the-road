
int FUN_0062ba20(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)((int)&DAT_00779fc4 + ((DAT_00779fc0 & 0xffff) >> 8) * 2);
  if (0xd < uVar4) {
    uVar2 = 0x80;
    do {
      if ((uVar2 & DAT_00779fc0 & 0xffff) == 0) {
        uVar1 = *(ushort *)((int)&DAT_00739df0 + uVar4 * 2);
      }
      else {
        uVar1 = (&DAT_00749df0)[uVar4];
      }
      uVar4 = (uint)uVar1;
      uVar2 = uVar2 >> 1;
    } while (0xd < uVar4);
  }
  FUN_0062b320(*(undefined1 *)((int)&DAT_00779fa4 + uVar4));
  if (uVar4 != 0) {
    iVar3 = FUN_0062b560(uVar4 - 1);
    return iVar3 + (1 << ((char)uVar4 - 1U & 0x1f));
  }
  return 0;
}

