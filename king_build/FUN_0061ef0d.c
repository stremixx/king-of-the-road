
uint FUN_0061ef0d(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  if (!in_ZF) {
    if ((param_2 & 0x7ff00000) == 0) {
      if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
        uVar1 = 2;
        goto LAB_0061ef9d;
      }
    }
    else if ((param_2 & 0x80000000) != 0) goto LAB_0061ef6c;
    log2(in_ST0);
LAB_0061ef3a:
    if (DAT_0072d078 != 0) {
      return param_2;
    }
    uVar1 = __math_exit();
    return uVar1;
  }
  if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
    uVar1 = FUN_00623e6c();
    goto LAB_0061ef9d;
  }
  param_2 = 0;
  if ((in_EAX & 0x80000000) == 0) goto LAB_0061ef3a;
LAB_0061ef6c:
  uVar1 = 1;
LAB_0061ef9d:
  if (DAT_0072d078 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

