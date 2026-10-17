
int FUN_00633383(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  
  iVar1 = FUN_0063a41d(&LAB_0063949c);
  LVar2 = GetMessageTime();
  *(LONG *)(iVar1 + 0x44) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(iVar1 + 0x48) = (int)(short)DVar3;
  *(int *)(iVar1 + 0x4c) = (int)(short)(DVar3 >> 0x10);
  return iVar1 + 0x34;
}

