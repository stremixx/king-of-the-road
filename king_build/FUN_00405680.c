
undefined4 * FUN_00405680(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *local_60;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined1 local_48 [4];
  undefined4 local_44 [2];
  undefined4 local_3c [6];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b0b8;
  local_c = ExceptionList;
  puStack_58 = param_2;
  param_2 = &iStack_5c;
  local_60 = (undefined1 *)&iStack_5c;
  ExceptionList = &local_c;
  FUN_004896a0();
  FUN_004af790(&local_60);
  FUN_004548d0(&param_2);
  if (param_2 == (int *)DAT_0068beb8) {
    local_44[0] = 0;
    puVar3 = local_3c;
    for (iStack_5c = 6; iStack_5c != 0; iStack_5c = iStack_5c + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    puStack_58 = local_44;
    local_60 = (undefined1 *)&iStack_5c;
    FUN_004896a0();
    local_60 = local_48;
    FUN_0044b000();
    iVar1 = (local_18 - local_20) / 0xc;
    local_4 = 0xffffffff;
    if (iVar1 != 0) {
      puStack_58 = (undefined4 *)(iVar1 * 0xc);
      iStack_5c = local_20;
      local_60 = (undefined1 *)0x40575f;
      FUN_0044b440();
    }
    *(undefined4 *)(*(int *)(DAT_0068beb8 + 4) + 0x38) = param_3;
    *(undefined4 *)(*(int *)(DAT_0068beb8 + 4) + 0x3c) = param_4;
    *param_1 = *(undefined4 *)(DAT_0068beb8 + 4);
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = param_2;
  ExceptionList = local_c;
  return param_1;
}

