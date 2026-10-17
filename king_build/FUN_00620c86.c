
undefined4 * FUN_00620c86(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_006238a4(2);
  iVar3 = 0;
  if (0 < DAT_0077ea60) {
    do {
      iVar1 = *(int *)(DAT_0077da5c + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_0077da5c) = pvVar2;
        if (*(int *)(iVar3 + DAT_0077da5c) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_0077da5c) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_0077da5c) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_0077da5c);
LAB_00620d2a:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_0061d6db(iVar3,iVar1);
        iVar1 = *(int *)(DAT_0077da5c + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_0077da5c + iVar3 * 4);
          goto LAB_00620d2a;
        }
        FUN_0061d72d(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0077ea60);
  }
  FUN_00623905(2);
  return puVar4;
}

