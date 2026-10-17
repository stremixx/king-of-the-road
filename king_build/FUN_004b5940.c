
undefined4 * __fastcall FUN_004b5940(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b1410();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_004abfe0(0);
  piVar1 = param_1 + 0x11;
  *(undefined1 *)(param_1 + 0x10) = 0;
  piVar6 = piVar1;
  for (iVar3 = 0x37; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_10 = 0x9a4ec86;
  param_1[0x47] = 0x9a4ec86;
  iVar3 = 1;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 0x15;
    iVar2 = local_10 - iVar3;
    piVar1[uVar4 % 0x37] = iVar3;
    local_10 = piVar1[uVar4 % 0x37];
    iVar3 = iVar2;
    uVar4 = uVar5;
  } while (uVar5 < 0x46e);
  local_10 = 4;
  do {
    uVar4 = 0;
    piVar6 = piVar1;
    do {
      uVar5 = uVar4 + 0x1f;
      uVar4 = uVar4 + 1;
      *piVar6 = *piVar6 - piVar1[uVar5 % 0x37];
      piVar6 = piVar6 + 1;
    } while (uVar4 < 0x37);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  param_1[0x48] = 0;
  param_1[0x49] = 0x1f;
  *param_1 = &PTR_LAB_0064b0a0;
  ExceptionList = local_c;
  return param_1;
}

