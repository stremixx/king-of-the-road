
int FUN_004d0830(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int local_c4;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644e75;
  pvStack_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  if (param_3 != DAT_0068a8f0) {
    ExceptionList = &pvStack_c;
    FUN_0041d3f0(&param_3);
    FUN_0043fd20();
    if (local_c4 == 1) {
      bVar1 = true;
      *(ushort *)(param_2 + 0x2718) = -(ushort)(DAT_006f2270 != 0) & 2;
      if (*(int *)(DAT_006cdbcc + 0x514) == 1) {
        FUN_006022c0();
        local_4 = 0;
        FUN_006027f0(0x3bf);
        FUN_005c2d10();
        local_4 = 0xffffffff;
        FUN_00602560();
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x8cc);
  if ((iVar2 < DAT_006cd298) || (DAT_006cd29c <= iVar2)) {
    if ((iVar2 < DAT_006cd290) || (DAT_006cd294 <= iVar2)) {
      iVar2 = FUN_00631d33();
      local_4 = 3;
      if (iVar2 != 0) {
        iVar2 = FUN_004d0d90(param_1);
        goto LAB_004d09fb;
      }
    }
    else {
      iVar2 = FUN_00631d33();
      local_4 = 2;
      if (iVar2 != 0) {
        iVar2 = FUN_004d10a0(param_1);
        goto LAB_004d09fb;
      }
    }
  }
  else {
    iVar2 = FUN_00631d33();
    local_4 = 1;
    if (iVar2 != 0) {
      iVar2 = FUN_004d2490(param_1);
      goto LAB_004d09fb;
    }
  }
  iVar2 = 0;
LAB_004d09fb:
  local_4 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_005d2520();
  }
  if (bVar1) {
    *(undefined4 *)(iVar2 + 0x51b8) = DAT_006f2274;
  }
  FUN_0051f7e0();
  (**(code **)(*(int *)(iVar2 + 0x10) + 0x18))();
  *(byte *)(iVar2 + 0x138) = *(byte *)(iVar2 + 0x138) | 8;
  ExceptionList = pvStack_10;
  return iVar2;
}

