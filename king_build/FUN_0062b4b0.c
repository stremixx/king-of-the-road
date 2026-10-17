
uint FUN_0062b4b0(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_00779fa0 == 0) {
    DAT_00779fa0 = FUN_0062b560(0x10);
    if (DAT_00779fa0 == 0) {
      return 0x1fe;
    }
    FUN_0062b590(0x13,5,3);
    FUN_0062b8c0();
    FUN_0062b590(0xe,4,0xffffffff);
  }
  DAT_00779fa0 = DAT_00779fa0 + -1;
  uVar3 = (uint)*(ushort *)((int)&DAT_00769f30 + ((DAT_00779fc0 & 0xffff) >> 4) * 2);
  if (0x1fd < uVar3) {
    uVar2 = 8;
    do {
      if ((uVar2 & DAT_00779fc0 & 0xffff) == 0) {
        uVar1 = *(ushort *)((int)&DAT_00739df0 + uVar3 * 2);
      }
      else {
        uVar1 = (&DAT_00749df0)[uVar3];
      }
      uVar3 = (uint)uVar1;
      uVar2 = uVar2 >> 1;
    } while (0x1fd < uVar3);
  }
  FUN_0062b320((&DAT_007355ec)[uVar3]);
  return uVar3;
}

