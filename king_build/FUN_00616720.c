
undefined4 * __thiscall
FUN_00616720(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[3] = param_3 * 3;
  iVar1 = FUN_00631d33(param_3 * 0x48);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  param_1[1] = iVar1;
  param_1[4] = 0;
  param_1[7] = 0xffffffff;
  param_1[2] = 0;
  FUN_00616360(0x86e);
  return param_1;
}

