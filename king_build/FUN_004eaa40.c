
undefined4 * __thiscall FUN_004eaa40(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((param_3 < 0) || (3 < param_3)) {
    *param_2 = DAT_007015b0;
    param_2[1] = DAT_007015b4;
    param_2[2] = DAT_007015b8;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x3c + param_3 * 0xc);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  return param_2;
}

