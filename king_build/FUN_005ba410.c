
int __fastcall FUN_005ba410(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x18) * (uint)*(ushort *)(param_1 + 0x16) *
          (uint)*(ushort *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 0x34) & 0x10) != 0) {
    iVar1 = iVar1 + iVar1 / 2;
  }
  return iVar1;
}

