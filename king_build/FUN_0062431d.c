
LPVOID FUN_0062431d(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00653a88;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_0077d80c == 3) {
        if (uVar2 <= DAT_0077d804) {
          FUN_006238a4(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_00622a03(uVar2);
          local_8 = 0xffffffff;
          FUN_006243b6();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_0062440a;
LAB_006243f9:
          _memset(local_24,0,_Size);
        }
LAB_00624405:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_0077d80c != 2) || (DAT_00687974 < uVar3)) goto LAB_00624405;
        FUN_006238a4(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_006234a6(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_0062443f();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_006243f9;
      }
LAB_0062440a:
      local_24 = HeapAlloc(DAT_0077d808,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_0072d1b8 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_0061f3f0(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}

