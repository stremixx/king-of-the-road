
void FUN_004ab690(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00643554;
  local_c = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    if ((*(uint *)(param_2 + 0xc) & 0x10000) == 0) {
      ExceptionList = &local_c;
      param_1[2] = 0;
      if (*(int *)(param_2 + 4) == 0) {
        param_1[1] = 0;
        param_1[3] = 0;
      }
      else {
        param_1[1] = *(int *)(param_2 + 4);
        param_1[3] = *(undefined4 *)(param_2 + 0xc);
        *(int *)(param_1[1] + 4) = *(int *)(param_1[1] + 4) + 1;
      }
    }
    else {
      ExceptionList = &local_c;
      param_1[3] = *(uint *)(param_2 + 0xc);
      param_1[1] = *(undefined4 *)(param_2 + 4);
      param_1[2] = *(undefined4 *)(param_2 + 8);
    }
    iVar1 = (*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10)) / 0xc;
    local_4 = 1;
    uStack_3 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0044b6e0(iVar1 * 0xc);
    }
    param_1[4] = iVar2;
    param_1[5] = iVar2;
    param_1[6] = iVar2 + iVar1 * 0xc;
    _local_4 = CONCAT31(uStack_3,2);
    uVar3 = FUN_004a2e60(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),iVar2,
                         param_1);
    param_1[5] = uVar3;
    param_1[7] = *(undefined4 *)(param_2 + 0x1c);
    if ((*(uint *)(param_2 + 0x28) & 0x10000) == 0) {
      param_1[9] = 0;
      iVar1 = *(int *)(param_2 + 0x20);
      if (iVar1 == 0) {
        param_1[8] = 0;
        param_1[10] = 0;
      }
      else {
        param_1[8] = iVar1;
        param_1[10] = *(undefined4 *)(param_2 + 0x28);
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_1[10] = *(uint *)(param_2 + 0x28);
      param_1[8] = *(undefined4 *)(param_2 + 0x20);
      param_1[9] = *(undefined4 *)(param_2 + 0x24);
    }
    *param_1 = &PTR_FUN_0064af58;
  }
  ExceptionList = local_c;
  return;
}

