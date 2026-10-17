
int __fastcall FUN_0063a81b(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  HCURSOR pHVar3;
  int iVar4;
  
  DVar2 = GetVersion();
  *(DWORD *)(param_1 + 0x54) = (DVar2 >> 8 & 0xff) + (DVar2 & 0xff) * 0x100;
  *(DWORD *)(param_1 + 0x58) = DVar2 >> 0x1f;
  uVar1 = (uint)(3 < (byte)DVar2);
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x60) = 1 - uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (uVar1 != 0) {
    DVar2 = GetProcessVersion(0);
    *(uint *)(param_1 + 0x68) = (uint)(0x3ffff < DVar2);
  }
  FUN_00635e78();
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_00635e34();
  pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  *(HCURSOR *)(param_1 + 0x3c) = pHVar3;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HCURSOR *)(param_1 + 0x40) = pHVar3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar4 = (*(int *)(param_1 + 0x5c) != 0) + 1;
  *(int *)(param_1 + 0x10) = iVar4;
  *(int *)(param_1 + 0x14) = iVar4;
  return param_1;
}

