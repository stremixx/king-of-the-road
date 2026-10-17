
undefined4 FUN_006033f0(LPCSTR param_1,LPCSTR param_2,double param_3,float *param_4,LPCSTR param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  CHAR local_60 [96];
  
  GetPrivateProfileStringA(param_1,param_2,&DAT_00675160,local_60,0x60,param_5);
  iVar2 = -1;
  pcVar3 = local_60;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    iVar2 = _strncmp(local_60,&DAT_00675160,1);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_0061f358(local_60);
      *param_4 = (float)fVar4;
      return 0;
    }
  }
  *param_4 = (float)param_3;
  return 0;
}

