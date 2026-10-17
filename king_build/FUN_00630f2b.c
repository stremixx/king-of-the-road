
void FUN_00630f2b(char *param_1)

{
  char *_Str;
  size_t sVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0062848f(2);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    sVar1 = _strlen(param_1);
    FUN_00624ba5(2,param_1,sVar1);
    FUN_00624ba5(2,&DAT_0065460c,2);
  }
  piVar2 = (int *)FUN_006204a3();
  iVar3 = DAT_006880d0;
  if ((-1 < *piVar2) &&
     (piVar2 = (int *)FUN_006204a3(), iVar3 = DAT_006880d0, *piVar2 < DAT_006880d0)) {
    piVar2 = (int *)FUN_006204a3();
    iVar3 = *piVar2;
  }
  _Str = (&PTR_s_No_error_00688020)[iVar3];
  sVar1 = _strlen(_Str);
  FUN_00624ba5(2,_Str,sVar1);
  FUN_00624ba5(2,&DAT_0066b4e4,1);
  FUN_006284ee(2);
  return;
}

