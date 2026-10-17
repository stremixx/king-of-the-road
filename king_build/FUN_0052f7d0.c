
char __thiscall FUN_0052f7d0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x108 + param_2 * 4);
  if ((pcVar2 != (char *)0x0) && (cVar1 = *pcVar2, cVar1 != '\0')) {
    return cVar1;
  }
  pcVar2 = *(char **)(param_1 + 0x1c4 + param_2 * 4);
  if ((pcVar2 != (char *)0x0) && (cVar1 = *pcVar2, cVar1 != '\0')) {
    return cVar1;
  }
  return '\0';
}

