
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004807a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 local_29;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 local_18 [4];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006400c8;
  local_14 = ExceptionList;
  local_1c = param_1;
  ExceptionList = &local_14;
  FUN_00490d40(param_1,&DAT_0066ed68,local_18);
  local_c = 0;
  fVar3 = (float10)FUN_00401000();
  _DAT_0068c628 = (double)fVar3;
  local_28 = DAT_0066ed64;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_28 = DAT_0066b730;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_24 = DAT_0068c62c;
  local_28 = DAT_0068c628;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_28 = DAT_0068c050;
  local_24 = DAT_0068c054;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_24 = DAT_0068c05c;
  local_28 = DAT_0068c058;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_28 = DAT_0068c060;
  local_24 = DAT_0068c064;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_24 = DAT_0066b6dc;
  local_28 = DAT_0066b6d8;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_28 = DAT_0068c0f0;
  local_24 = DAT_0068c0f4;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_24 = DAT_0068c0fc;
  local_28 = DAT_0068c0f8;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_28 = DAT_0068c0d0;
  local_24 = DAT_0068c0d4;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  piVar1 = &DAT_0068a928;
  do {
    local_28 = *piVar1;
    FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_0068aa04);
  local_28 = 0;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_28 = DAT_00689794 - DAT_00689790 >> 2;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  uVar2 = 0;
  if (DAT_00689794 - DAT_00689790 >> 2 != 0) {
    do {
      local_28 = *(int *)(DAT_00689790 + uVar2 * 4);
      FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(DAT_00689794 - DAT_00689790 >> 2));
  }
  local_28 = DAT_0068c0b8;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_24 = DAT_0066b6a4;
  local_28 = DAT_0066b6a0;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_28 = DAT_0068c0c4;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_29 = DAT_0068c0c8;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_29,&local_28);
  local_28 = DAT_0066b6e0;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_28 = DAT_0068bbec - DAT_0068bbe8 >> 2;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  uVar2 = 0;
  if (DAT_0068bbec - DAT_0068bbe8 >> 2 != 0) {
    do {
      local_28 = *(int *)(DAT_0068bbe8 + uVar2 * 4);
      FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(DAT_0068bbec - DAT_0068bbe8 >> 2));
  }
  local_28 = DAT_0066b6f8;
  local_24 = DAT_0066b6fc;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_24 = DAT_0066b714;
  local_28 = DAT_0066b710;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_28 = DAT_0068c0bc;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_28 = DAT_0068c0c0;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,&local_24);
  local_24 = DAT_0068c06c;
  local_28 = DAT_0068c068;
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
  local_c = 0xffffffff;
  FUN_00490d90(local_1c,local_18);
  ExceptionList = local_14;
  return;
}

