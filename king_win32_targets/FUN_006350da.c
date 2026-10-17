
undefined4 FUN_006350da(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00632d9a();
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_0061bb81(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageA(*(HWND *)(iVar3 + 0x1c),0x111,0xe146,0);
    return 1;
  }
  uVar4 = FUN_006333b8();
  return uVar4;
}

