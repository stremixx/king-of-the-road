
undefined4 __fastcall FUN_005fe8c0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006492cb;
  local_14 = ExceptionList;
  if (DAT_00722c88 == DAT_00722c8c) {
    return 0xffffffff;
  }
  ExceptionList = &local_14;
  iVar3 = FUN_00631d33(0x14);
  local_c = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_006031d0();
  }
  local_c = 0xffffffff;
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return 0xfffffffb;
  }
  bVar1 = *(byte *)(param_1 + 8);
  while ((bVar1 & 1) == 0) {
    iVar3 = FUN_00602ed0();
    if ((iVar3 == 1) || (iVar3 == 0)) {
      FUN_005fea20();
    }
    Sleep(400);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00722aa0);
    uVar2 = DAT_00682bb4;
    if (*(double *)(param_1 + 0x18) == (double)CONCAT44(DAT_00682bb4,DAT_00682bb0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00722aa0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = DAT_00682bb0;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00722aa0);
      FUN_006030f0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
    bVar1 = *(byte *)(param_1 + 8);
  }
  FUN_006030c0();
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    FUN_00603220();
    FUN_00631d5c(iVar3);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_14;
  return 0;
}

