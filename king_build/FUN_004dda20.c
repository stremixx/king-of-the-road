
undefined4 * __thiscall FUN_004dda20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645312;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d9610(DAT_006957ac,&param_2,DAT_00695c0c,*(undefined4 *)(DAT_00695c00 + 0x1d8));
  local_4 = 0;
  local_14 = 0x50;
  puVar1 = param_1 + 0x8c;
  do {
    FUN_004011e0(puVar1,0xc,4,FUN_004042a0);
    local_14 = local_14 + -1;
    puVar2 = &DAT_00701550;
    puVar4 = puVar1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1 = puVar1 + 0xc;
  } while (local_14 != 0);
  FUN_004ea3e8(FUN_004ea2d1,0x3e99999a,0,0);
  local_4._0_1_ = 1;
  FUN_004ea3e8(FUN_004ea2d1,0x3f800000,FUN_004ea2d1,0);
  local_4._0_1_ = 2;
  FUN_004ea3e8(FUN_004ea2d1,0x3f000000,FUN_004ea2d1,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004ea3e8(FUN_004ea2d1,0x3f19999a,0,0);
  iVar3 = 4;
  puVar1 = param_1 + 0x4d1;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = &DAT_00701550;
  puVar2 = param_1 + 0x4cf;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar3 = 4;
  puVar1 = param_1 + 0x4dd;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = &DAT_00701550;
  puVar2 = param_1 + 0x4db;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar3 = 4;
  puVar1 = param_1 + 0x4e9;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = &DAT_00701550;
  puVar2 = param_1 + 0x4e7;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x4f9] = 0;
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  *param_1 = &PTR_FUN_0064c5dc;
  param_1[0x4b5] = DAT_00695c00;
  *(undefined4 *)(DAT_00695c0c + 0x58) = 0x40000000;
  puVar1 = param_1 + 0x8c;
  *(undefined4 *)(DAT_00695c0c + 0x54) = 0x3fc00000;
  puVar2 = param_1 + 0x44c;
  param_2 = 0x50;
  do {
    *puVar2 = 0;
    puVar4 = &DAT_00701550;
    puVar5 = puVar1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 0xc;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  param_1[0x49c] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c1] = 0;
  param_1[0x89] = 0;
  ExceptionList = local_c;
  return param_1;
}

