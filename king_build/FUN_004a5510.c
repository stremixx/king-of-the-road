
undefined * FUN_004a5510(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = (int)param_1;
  param_1 = (&PTR_s_0_NULL_dereference_0066fa7c)[(int)param_1];
  iVar3 = FUN_0061e066(param_1,&param_1,0);
  if (iVar3 != iVar1) {
    FUN_0061d86c(&DAT_006852e0,s_MESSAGE_TABLE_CORRUPT__0066fdc8);
  }
  if (param_2 < 0x300) {
    if (param_2 < 0x200) {
      if (param_2 < 0x100) {
        cVar2 = ((param_2 < 1) - 1U & 7) + 0x3f;
      }
      else {
        cVar2 = 'E';
      }
    }
    else {
      cVar2 = 'W';
    }
  }
  else {
    cVar2 = 'I';
  }
  FUN_0061c369(&DAT_00690da4,s_______c___03d__0066fdb8,cVar2,iVar1);
  _strncat(&DAT_00690da4,param_1,0x400);
  return &DAT_00690da4;
}

