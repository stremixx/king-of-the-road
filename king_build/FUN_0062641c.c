
undefined4 FUN_0062641c(uint param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_006263f6();
    return in_EAX;
  }
  FUN_006263f6();
  return in_EAX;
}

