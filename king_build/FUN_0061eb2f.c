
int FUN_0061eb2f(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0061eb5d(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_00625a02(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

