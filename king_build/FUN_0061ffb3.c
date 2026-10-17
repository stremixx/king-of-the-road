
byte * FUN_0061ffb3(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if ((*(byte *)((int)&DAT_0077d940 + *param_1 + 1) & 4) != 0) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}

