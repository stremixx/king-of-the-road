
uint __thiscall FUN_005b9c70(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 0x1a) == 0) {
    return 0;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x14);
  if (0 < param_2) {
    do {
      uVar1 = (int)uVar1 >> 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}

