
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00653780;
  puStack_10 = &LAB_00623924;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_0072d094 = DVar1 >> 8 & 0xff;
  _DAT_0072d090 = DVar1 & 0xff;
  _DAT_0072d08c = _DAT_0072d090 * 0x100 + _DAT_0072d094;
  _DAT_0072d088 = DVar1 >> 0x10;
  iVar2 = FUN_0062260a(1);
  if (iVar2 == 0) {
    FUN_0061f6a7(0x1c);
  }
  iVar2 = FUN_0062220c();
  if (iVar2 == 0) {
    FUN_0061f6a7(0x10);
  }
  local_8 = 0;
  FUN_00624161();
  DAT_0077da48 = GetCommandLineA();
  DAT_0072d0f4 = FUN_006270da();
  FUN_00626e8d();
  FUN_00626dd4();
  FUN_0061df46();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_00626d7c();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00630ec0(pHVar5,uVar6,uVar3,uVar4);
  FUN_0061df73(uVar3);
  FUN_00626c04(*(undefined4 *)*local_18,local_18);
  return;
}

