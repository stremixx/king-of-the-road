
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_004309c0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1 != '\0';
  if (_DAT_0064a668 < *(double *)(param_1 + 8)) {
    cVar1 = cVar1 + '\x01';
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0x28)) {
    cVar1 = cVar1 + '\x01';
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0x30)) {
    cVar1 = cVar1 + '\x01';
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0x38)) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_1[0x40] != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

