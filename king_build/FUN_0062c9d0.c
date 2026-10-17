
void FUN_0062c9d0(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 < 1) || (9 < param_1)) {
    FUN_0062b1c0(s_bad_pack_level_00689358);
  }
  DAT_0077a43c = (uint)*(ushort *)(&DAT_0068930c + param_1 * 8);
  DAT_0077a444 = param_1;
  puVar3 = (undefined4 *)&DAT_00749df0;
  for (iVar2 = 0x4000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0077a430 = (uint)*(ushort *)(&DAT_0068930a + param_1 * 8);
  DAT_0077a448 = (uint)*(ushort *)(&DAT_00689308 + param_1 * 8);
  DAT_0077a440 = (uint)*(ushort *)(&DAT_0068930e + param_1 * 8);
  if (param_1 == 1) {
    *param_2 = *param_2 | 4;
  }
  else if (param_1 == 9) {
    *param_2 = *param_2 | 2;
  }
  DAT_0077a42c = 0;
  DAT_0077a450 = 0;
  DAT_0077a454 = (*DAT_0077d350)(&DAT_00759df0,0x10000);
  if ((DAT_0077a454 != 0) && (DAT_0077a454 != 0xffffffff)) {
    DAT_0077a438 = 0;
    while ((DAT_0077a454 < 0x106 && (DAT_0077a438 == 0))) {
      FUN_0062cc40();
    }
    DAT_0077a434 = 0;
    uVar1 = 0;
    do {
      DAT_0077a434 = (DAT_0077a434 & 0x3ff) << 5 ^ (uint)*(byte *)((int)&DAT_00759df0 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    return;
  }
  DAT_0077a454 = 0;
  DAT_0077a438 = 1;
  return;
}

