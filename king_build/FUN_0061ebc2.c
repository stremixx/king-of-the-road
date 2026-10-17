
int FUN_0061ebc2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_006238a4(2);
  iVar3 = 0;
  if (0 < DAT_0077ea60) {
    do {
      iVar1 = *(int *)(DAT_0077da5c + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_0061d6db(iVar3,iVar1);
        iVar1 = *(int *)(DAT_0077da5c + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_0061eb2f(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_0061eb2f(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_0061d72d(iVar3,*(undefined4 *)(DAT_0077da5c + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0077ea60);
  }
  FUN_00623905(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

