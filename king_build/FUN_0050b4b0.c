
char * FUN_0050b4b0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  while( true ) {
    iVar2 = FUN_0061dce4((int)*pcVar3);
    if ((((iVar2 == 0) && (cVar1 = *pcVar3, cVar1 != '-')) && (cVar1 != '_')) && (cVar1 != ' '))
    break;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  return param_1;
}

