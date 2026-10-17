
uint FUN_0040a5b0(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0x1c)) {
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
    pbVar1 = *(byte **)(*(int *)(DAT_0068be60 + *piVar2 * 4) + 0xc0);
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x10) != 0)) break;
    piVar2 = piVar2 + 3;
  }
  return (uint)piVar2 & 0xffffff00;
}

