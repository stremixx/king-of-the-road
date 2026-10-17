
int FUN_0063167c(void)

{
  DWORD DVar1;
  int iVar2;
  CHAR local_108;
  char local_107;
  
  iVar2 = 0;
  DVar1 = GetCurrentDirectoryA(0x104,&local_108);
  if ((DVar1 != 0) && (local_107 == ':')) {
    iVar2 = FUN_0061e299(local_108);
    iVar2 = iVar2 + -0x40;
  }
  return iVar2;
}

