
int FUN_0044f5f0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return (int)pcVar3 - (int)param_1;
}

