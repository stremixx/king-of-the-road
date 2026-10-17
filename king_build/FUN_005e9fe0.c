
void __fastcall FUN_005e9fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648c88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0065173c;
  local_4 = 0;
  FUN_005d1ae0(param_1);
  if (param_1[0xf] != 0) {
    FUN_00631d5c(param_1[0xf]);
  }
  iVar3 = param_1[0x13];
  if (iVar3 != 0) {
    FUN_0061ccb5(iVar3,0x7c,*(undefined4 *)(iVar3 + -4),FUN_004030a0);
    FUN_00631d5c(iVar3 + -4);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x14]) {
    do {
      puVar1 = *(undefined4 **)(param_1[0x15] + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x14]);
  }
  if (param_1[0x15] != 0) {
    FUN_00631d5c(param_1[0x15]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x16]) {
    do {
      puVar1 = *(undefined4 **)(param_1[0x17] + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x16]);
  }
  if (param_1[0x17] != 0) {
    FUN_00631d5c(param_1[0x17]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x18]) {
    do {
      iVar2 = *(int *)(param_1[0x19] + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_005b8bd0();
        FUN_00631d5c(iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x18]);
  }
  if (param_1[0x19] != 0) {
    FUN_00631d5c(param_1[0x19]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x1a]) {
    do {
      iVar2 = *(int *)(param_1[0x1b] + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_005bb480();
        FUN_00631d5c(iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x1a]);
  }
  if (param_1[0x1b] != 0) {
    FUN_00631d5c(param_1[0x1b]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x1c]) {
    do {
      puVar1 = *(undefined4 **)(param_1[0x1d] + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_FUN_0064c568;
        FUN_00631d5c(puVar1[1]);
        FUN_00631d5c(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x1c]);
  }
  if (param_1[0x1d] != 0) {
    FUN_00631d5c(param_1[0x1d]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x21]) {
    do {
      FUN_00631d5c(*(undefined4 *)(param_1[0x1f] + iVar3 * 4));
      FUN_00631d5c(*(undefined4 *)(param_1[0x20] + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x21]);
  }
  if (param_1[0x1f] != 0) {
    FUN_00631d5c(param_1[0x1f]);
  }
  if (param_1[0x20] != 0) {
    FUN_00631d5c(param_1[0x20]);
  }
  iVar3 = param_1[0x1e];
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    while (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar3 + 8);
      FUN_005d1860();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = param_1[0x1e];
      iVar2 = *(int *)(iVar3 + 8);
    }
    if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1e])(1);
    }
  }
  iVar3 = param_1[0x11];
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    while (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar3 + 8);
      FUN_005d1860();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = param_1[0x11];
      iVar2 = *(int *)(iVar3 + 8);
    }
    if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x11])(1);
    }
  }
  iVar3 = param_1[0x10];
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    while (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar3 + 8);
      FUN_005d1860();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = param_1[0x10];
      iVar2 = *(int *)(iVar3 + 8);
    }
    if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x10])(1);
    }
  }
  iVar3 = param_1[0x22];
  if (iVar3 != 0) {
    FUN_005edac0();
    FUN_00631d5c(iVar3);
  }
  if (param_1[9] != 0) {
    FUN_0061c25a(param_1[9]);
    iVar3 = param_1[0xd];
    if (iVar3 != 0) {
      FUN_005e61c0();
      FUN_00631d5c(iVar3);
    }
    if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
      UnmapViewOfFile((LPCVOID)param_1[10]);
      CloseHandle((HANDLE)param_1[0xc]);
      CloseHandle((HANDLE)param_1[0xb]);
    }
  }
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = pvStack_c;
  return;
}

