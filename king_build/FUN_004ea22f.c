
undefined4 FUN_004ea22f(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  CHAR local_194 [400];
  
  sVar1 = _strlen(param_2);
  iVar2 = Ordinal_19(DAT_00695db8,param_2,sVar1 + 1,0);
  if (iVar2 == 0) {
    uVar3 = Ordinal_111();
    wsprintfA(local_194,s_SendMsg_Error_____d_00673280,uVar3);
    FUN_004e1de6(local_194);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

