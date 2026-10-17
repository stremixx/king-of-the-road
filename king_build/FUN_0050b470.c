
char * FUN_0050b470(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (*param_1 == ' ') {
    cVar2 = ' ';
    do {
      if (cVar2 == '\0') break;
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar2 == ' ');
  }
  pcVar1 = param_1;
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  cVar2 = *pcVar3;
  while (cVar2 == ' ') {
    *pcVar3 = '\0';
    pcVar1 = pcVar3 + -1;
    pcVar3 = pcVar3 + -1;
    cVar2 = *pcVar1;
  }
  return param_1;
}

