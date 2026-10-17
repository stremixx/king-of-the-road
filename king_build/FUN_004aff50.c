
void FUN_004aff50(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401aa0();
  local_4 = 0;
  if (DAT_0068c12c == (undefined4 *)0x0) {
    local_14[0] = 0x14;
    puVar3 = (undefined4 *)FUN_0045a160(0x18,local_14);
    if (local_14[0] != 1) {
      puVar4 = puVar3 + 6;
      iVar5 = 1;
      puVar2 = puVar4;
      DAT_0068c12c = puVar4;
      if (local_14[0] != 2) {
        do {
          puVar4 = puVar2 + 6;
          *puVar2 = puVar4;
          iVar5 = iVar5 + 1;
          puVar2 = puVar4;
        } while (local_14[0] + -1 != iVar5);
      }
      *puVar4 = 0;
    }
  }
  else {
    puVar3 = DAT_0068c12c;
    DAT_0068c12c = (undefined4 *)*DAT_0068c12c;
  }
  DAT_0068c164 = 0;
  piVar1 = puVar3 + 2;
  if (piVar1 != (int *)0x0) {
    if ((param_1[2] & 0x10000U) != 0) {
      puVar3[4] = param_1[2];
      *piVar1 = *param_1;
      puVar3[3] = param_1[1];
      ExceptionList = local_c;
      return;
    }
    puVar3[3] = 0;
    iVar5 = *param_1;
    if (iVar5 != 0) {
      *piVar1 = iVar5;
      puVar3[4] = param_1[2];
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      ExceptionList = local_c;
      return;
    }
    *piVar1 = 0;
    puVar3[4] = 0;
  }
  ExceptionList = local_c;
  return;
}

