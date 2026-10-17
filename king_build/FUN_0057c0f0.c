
int FUN_0057c0f0(void)

{
  int iVar1;
  
  DAT_0067c04c = DAT_0067c04c + 1;
  iVar1 = 0;
  do {
    if (*(char *)((int)&DAT_006f5344 + iVar1) == '\0') {
      *(undefined1 *)((int)&DAT_006f5344 + iVar1) = 1;
      DAT_0067c04c = iVar1 + 100;
      return iVar1 + 100;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 300);
  return DAT_0067c04c;
}

