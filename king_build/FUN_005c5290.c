
int __fastcall FUN_005c5290(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x20b4 + iVar1) == '\0') {
      *(undefined1 *)(iVar1 + 0x20b4 + param_1) = 1;
      return *(int *)(param_1 + 0x20b0) + iVar1 * 10;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1000);
  FUN_005d2520(s_anmindex_limit_0067e820,0);
  return -1;
}

