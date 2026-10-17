
void FUN_005eb6e0(char *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_0061f40b(param_2);
  if (cVar1 == '\0') {
    *param_1 = '\0';
    return;
  }
  do {
    if ((*(byte *)(param_2 + 0xc) & 0x10) != 0) break;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    cVar1 = FUN_0061f40b(param_2);
  } while (cVar1 != '\0');
  *param_1 = '\0';
  return;
}

