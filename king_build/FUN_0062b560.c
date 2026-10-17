
uint FUN_0062b560(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00779fc0 & 0xffff;
  FUN_0062b320(param_1);
  return uVar1 >> (0x10U - (char)param_1 & 0x1f);
}

