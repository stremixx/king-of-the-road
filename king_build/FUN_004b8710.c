
undefined4 FUN_004b8710(void)

{
  int iVar1;
  char *pcVar2;
  
  if ((((DAT_006d0fd8 != 0) && (*(int *)(DAT_006d0fd8 + 0x268) != 0)) &&
      (iVar1 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x134), iVar1 != 0)) &&
     ((pcVar2 = *(char **)(iVar1 + 0x3c), pcVar2 != (char *)0x0 &&
      (((*pcVar2 == 'd' && (pcVar2[1] == 'b')) || ((*pcVar2 == 'a' && (pcVar2[1] == 'c')))))))) {
    return 1;
  }
  return 0;
}

