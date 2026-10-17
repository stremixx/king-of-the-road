
undefined4 * FUN_0049a8c0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  if ((param_3[1] - iVar1) / 0xc != 2) {
    FUN_004a5be0(param_2,0x21,&PTR_DAT_0066f7f0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  if (*(char *)(iVar1 + 0x14) == '\x02') {
    FUN_00409000(param_1,iVar1 + 0xc);
    return param_1;
  }
  FUN_004a5cd0(param_2,0xf,&DAT_0066bb08,&PTR_DAT_0066f7f0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

