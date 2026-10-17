
void FUN_0062052e(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0061de0c((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_00687ea4 < 2) {
        uVar4 = (byte)PTR_DAT_00687c98[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_00624e08((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_00687ea8;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

