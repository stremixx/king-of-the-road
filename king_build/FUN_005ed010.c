
undefined4 * __thiscall
FUN_005ed010(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ed4e0(param_5,param_6);
  local_4 = 0;
  *param_1 = &PTR_FUN_0065176c;
  param_1[0xc] = 0;
  param_1[0xb] = param_2;
  if (param_2 == 0) {
    param_1[0x11] = 0;
  }
  else {
    uVar1 = FUN_00631d33(param_2 * 4);
    param_1[0x11] = uVar1;
    iVar2 = 0;
    if (0 < (int)param_1[0xb]) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[0x11] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < (int)param_1[0xb]);
    }
  }
  param_1[0xe] = 0;
  param_1[0xd] = param_3;
  if (param_3 == 0) {
    param_1[0x12] = 0;
  }
  else {
    uVar1 = FUN_00631d33(param_3 * 4);
    param_1[0x12] = uVar1;
    iVar2 = 0;
    if (0 < (int)param_1[0xd]) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[0x12] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < (int)param_1[0xd]);
    }
  }
  param_1[0x10] = 0;
  param_1[0xf] = param_4;
  if (param_4 == 0) {
    param_1[0x13] = 0;
  }
  else {
    uVar1 = FUN_00631d33(param_4 * 4);
    param_1[0x13] = uVar1;
    iVar2 = 0;
    if (0 < (int)param_1[0xf]) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[0x13] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < (int)param_1[0xf]);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

