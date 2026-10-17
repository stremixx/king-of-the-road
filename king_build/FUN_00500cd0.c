
int FUN_00500cd0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00501020(iVar1,*param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 0x1b);
  return iVar1;
}

