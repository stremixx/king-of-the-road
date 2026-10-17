
undefined * FUN_004a5b70(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  param_1 = (&PTR_s_0_NULL_dereference_0066fe08)[(int)param_1];
  iVar2 = FUN_0061e066(param_1,&param_1,0);
  if (iVar2 != iVar1) {
    FUN_0061d86c(&DAT_006852e0,s_MESSAGE_TABLE_CORRUPT__0066fdc8);
  }
  FUN_0061c369(&DAT_006911b0,s________03d__006700ec,iVar1);
  _strncat(&DAT_006911b0,param_1,0x400);
  return &DAT_006911b0;
}

