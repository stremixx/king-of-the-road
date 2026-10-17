
int FUN_00604b50(ushort param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = DAT_00723084; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if ((*(int *)(iVar1 + 0x38) == 0) && (param_1 < *(ushort *)(iVar1 + 0x24))) {
      iVar2 = iVar1;
      param_1 = *(ushort *)(iVar1 + 0x24);
    }
  }
  return iVar2;
}

