
undefined4 FUN_0061f3af(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 1) != param_1) {
    return 0xffffffff;
  }
  uVar1 = DAT_0072d1b8;
  DAT_0072d1b8 = param_1;
  return uVar1;
}

