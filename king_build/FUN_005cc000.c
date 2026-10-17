
undefined4 * __fastcall FUN_005cc000(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064836b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[4] = 0x41200000;
  param_1[5] = 0x42340000;
  param_1[3] = 0x40800000;
  param_1[6] = 0x3f000000;
  param_1[7] = 0x3f733333;
  param_1[8] = 4;
  param_1[1] = 0;
  param_1[10] = 0;
  iVar1 = FUN_00631d33(0x28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005cb0d0(0,0x3f800000);
  }
  param_1[9] = uVar2;
  puVar3 = (undefined4 *)FUN_00631d33(0x15e0);
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_14 = 100;
    puVar4 = puVar3;
    do {
      FUN_004011e0(puVar4,0xc,4,FUN_004042a0);
      local_14 = local_14 + -1;
      puVar5 = &DAT_00701550;
      puVar6 = puVar4;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = puVar4 + 0xe;
    } while (local_14 != 0);
    *param_1 = puVar3;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}

