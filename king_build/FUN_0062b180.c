
char * FUN_0062b180(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = _strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  pcVar1 = _strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  pcVar1 = _strrchr(param_1,0x3a);
  if (pcVar1 != (char *)0x0) {
    return pcVar1 + 1;
  }
  return param_1;
}

