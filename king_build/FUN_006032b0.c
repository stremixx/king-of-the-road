
undefined4
FUN_006032b0(LPCSTR param_1,LPCSTR param_2,undefined2 param_3,undefined2 *param_4,LPCSTR param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  CHAR local_60 [96];
  
  GetPrivateProfileStringA(param_1,param_2,&DAT_00675160,local_60,0x60,param_5);
  iVar3 = -1;
  pcVar4 = local_60;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    iVar3 = _strncmp(local_60,&DAT_00675160,1);
    if (iVar3 != 0) {
      uVar2 = FUN_0061f2c2(local_60);
      *param_4 = uVar2;
      return 0;
    }
  }
  *param_4 = param_3;
  return 0;
}

