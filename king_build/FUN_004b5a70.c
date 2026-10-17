
undefined4 * __thiscall FUN_004b5a70(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006440b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b1410();
  param_1[3] = 0;
  param_1[4] = 1;
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
  piVar7 = piVar1;
  for (iVar5 = 0x37; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  local_18 = 0x9a4ec86;
  param_1[0x47] = 0x9a4ec86;
  local_14 = 0;
  iVar5 = 1;
  do {
    iVar3 = local_18 - iVar5;
    piVar1[local_14 % 0x37] = iVar5;
    local_18 = piVar1[local_14 % 0x37];
    local_14 = local_14 + 0x15;
    iVar5 = iVar3;
  } while (local_14 < 0x46e);
  local_14 = 4;
  do {
    uVar6 = 0;
    piVar7 = piVar1;
    do {
      uVar2 = uVar6 + 0x1f;
      uVar6 = uVar6 + 1;
      *piVar7 = *piVar7 - piVar1[uVar2 % 0x37];
      piVar7 = piVar7 + 1;
    } while (uVar6 < 0x37);
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  param_1[0x48] = 0;
  param_1[0x49] = 0x1f;
  *param_1 = &PTR_LAB_0064b0a0;
  if ((param_3 & 2) != 0) {
    uVar4 = FUN_0061c356(param_2,&DAT_0066f3e4);
    param_1[3] = uVar4;
  }
  if ((param_3 & 1) != 0) {
    uVar4 = FUN_0061c356(param_2,&DAT_0066f3e8);
    param_1[3] = uVar4;
  }
  if (param_1[3] == 0) {
    param_1[5] = param_1[5] | 1;
  }
  else if ((param_3 & 1) != 0) {
    FUN_004b5540();
  }
  ExceptionList = local_c;
  return param_1;
}

