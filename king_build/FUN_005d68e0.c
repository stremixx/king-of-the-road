
void FUN_005d68e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_430 [500];
  char acStack_23c [568];
  char *pcStack_4;
  
  (**(code **)(*param_1 + 0x6c))(param_1,local_430,0);
  _strncpy(pcStack_4,acStack_23c,0xff);
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (pcStack_4[iVar1] == ' ') {
      iVar2 = iVar2 + 1;
    }
    if (pcStack_4[iVar1] == '\0') {
      return;
    }
    if (iVar2 == 3) {
      pcStack_4[iVar1] = '\0';
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return;
}

