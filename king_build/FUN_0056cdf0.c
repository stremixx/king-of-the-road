
void FUN_0056cdf0(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(DAT_006cdbf8 + 0x180) != 2)) {
    FUN_004364a0(&local_8);
    if (local_8 != DAT_0068a8f0) {
      do {
        uVar1 = FUN_0043f700(local_8);
        if ((uVar1 & 0x4000) != 0) {
          uVar1 = FUN_0043f700(local_8);
          uVar1 = uVar1 & 0xfffffffb;
          uVar3 = extraout_ECX;
          FUN_0041d3f0(&local_8);
          FUN_0043f770(uVar3,uVar1);
        }
        piVar2 = (int *)FUN_004364d0(local_4,local_8);
        local_8 = *piVar2;
      } while (local_8 != DAT_0068a8f0);
    }
    if (DAT_00695288 == 0) {
      FUN_00427600();
    }
    else {
      FUN_00427990();
    }
  }
  if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
    *(undefined4 *)(DAT_006f2390 + 0x3c) = 0;
    *(uint *)(DAT_006f230c + 0x23c) = *(uint *)(DAT_006f230c + 0x23c) & 0xfffeffff;
  }
  return;
}

