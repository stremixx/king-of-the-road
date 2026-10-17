
undefined4 FUN_004b86c0(void)

{
  int iVar1;
  char *pcVar2;
  
  if ((((DAT_006d0fd8 != 0) && (*(int *)(DAT_006d0fd8 + 0x268) != 0)) &&
      (iVar1 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x134), iVar1 != 0)) &&
     ((pcVar2 = *(char **)(iVar1 + 0x3c), pcVar2 != (char *)0x0 &&
      (((*pcVar2 == 'a' && (pcVar2[1] == 'a')) || ((*pcVar2 == 't' && (pcVar2[1] == 'r')))))))) {
    return 1;
  }
  return 0;
}

