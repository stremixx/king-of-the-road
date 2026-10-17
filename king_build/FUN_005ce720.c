
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ce720(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = _rand();
    *(float *)((int)&DAT_0070de7c + iVar3) =
         (float)(iVar1 % 100) * (float)_DAT_0064a948 - (float)_DAT_0064a660;
    iVar1 = _rand();
    *(float *)((int)&DAT_0070e00c + iVar3) =
         (float)(iVar1 % 100) * (float)_DAT_0064a948 - (float)_DAT_0064a660;
    iVar1 = _rand();
    *(float *)((int)&DAT_0070e19c + iVar3) =
         (float)(iVar1 % 100) * (float)_DAT_0064a948 - (float)_DAT_0064a660;
    uVar2 = _rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)((int)&DAT_0070db5c + iVar3) = (-(uint)(uVar2 != 0) & 0xffc00010) - 0x3f3f20;
    uVar2 = _rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = iVar3 + 4;
    *(uint *)((int)&DAT_0070dcec + iVar3) = (-(uint)(uVar2 != 0) & 0x3750) - 0x3792;
    iVar3 = iVar1;
  } while (iVar1 < 400);
  _DAT_0070e330 = 1;
  return;
}

