
undefined4 * __thiscall FUN_004aada0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006434e3;
  local_c = ExceptionList;
  if ((*(uint *)(param_2 + 0xc) & 0x10000) == 0) {
    ExceptionList = &local_c;
    param_1[2] = 0;
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 0) {
      param_1[1] = 0;
      param_1[3] = 0;
    }
    else {
      param_1[1] = iVar2;
      param_1[3] = *(undefined4 *)(param_2 + 0xc);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  else {
    ExceptionList = &local_c;
    param_1[3] = *(uint *)(param_2 + 0xc);
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
  }
  piVar1 = param_1 + 4;
  iVar2 = (*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10)) / 0xc;
  local_4 = 0;
  *piVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0044b6e0(iVar2 * 0xc);
  }
  *piVar1 = iVar3;
  param_1[5] = iVar3;
  param_1[6] = iVar3 + iVar2 * 0xc;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar4 = FUN_004a2e60(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),iVar3,piVar1)
  ;
  param_1[5] = uVar4;
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  if ((*(uint *)(param_2 + 0x28) & 0x10000) == 0) {
    param_1[9] = 0;
    iVar2 = *(int *)(param_2 + 0x20);
    if (iVar2 == 0) {
      param_1[8] = 0;
      param_1[10] = 0;
    }
    else {
      param_1[8] = iVar2;
      param_1[10] = *(undefined4 *)(param_2 + 0x28);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  else {
    param_1[10] = *(uint *)(param_2 + 0x28);
    param_1[8] = *(undefined4 *)(param_2 + 0x20);
    param_1[9] = *(undefined4 *)(param_2 + 0x24);
  }
  *param_1 = &PTR_FUN_0064af58;
  ExceptionList = local_c;
  return param_1;
}

