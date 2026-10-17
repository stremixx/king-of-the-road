
uint * FUN_0044f2e0(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e660;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  if (param_1 == (uint *)0x0) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd0;
    puVar2 = (uint *)FUN_004591c0(param_2,param_3);
    ExceptionList = local_10;
    return puVar2;
  }
  if (1 < param_1[1]) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd0;
    puVar2 = (uint *)FUN_0045a320(param_1,param_2,param_3);
    ExceptionList = local_10;
    return puVar2;
  }
  if (param_3 == 0) {
LAB_0044f3e3:
    param_1[1] = 2;
    ExceptionList = local_10;
    return param_1;
  }
  local_18 = *param_1 + param_3;
  if ((local_18 < 0x18) && ((char)param_1[2] == '\0')) {
    if (1 < (int)param_1[1]) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd0;
      puVar2 = (uint *)FUN_00462700(param_1,param_2,param_3);
      ExceptionList = local_10;
      return puVar2;
    }
    uVar1 = *param_1;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd0;
    iVar3 = FUN_0045a150(uVar1);
    if (iVar3 - 1U < uVar1 + param_3) {
      puVar2 = (uint *)FUN_00462700(param_1,param_2,param_3);
      ExceptionList = local_10;
      return puVar2;
    }
    FUN_00461a60(local_1c,param_2,param_3,param_1[5] + uVar1,param_2);
    *(undefined1 *)(param_1[5] + uVar1 + param_3) = 0;
    *param_1 = uVar1 + param_3;
    goto LAB_0044f3e3;
  }
  if (((char)param_1[2] != '\x01') ||
     ((puVar2 = (uint *)param_1[6], (char)puVar2[2] != '\0' ||
      (uVar1 = *puVar2, 0x17 < uVar1 + param_3)))) {
    ExceptionList = &local_10;
    uVar6 = FUN_004591c0(param_2,param_3);
    InterlockedIncrement((LONG *)(param_1 + 1));
    local_8 = 0;
    puVar2 = (uint *)FUN_0045a650(param_1,uVar6);
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = &local_10;
  local_14 = &stack0xffffffd0;
  if ((int)puVar2[1] < 2) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd0;
    iVar3 = FUN_0045a150(uVar1);
    if (uVar1 + param_3 <= iVar3 - 1U) {
      FUN_00461a60(local_24,param_2,param_3,puVar2[5] + uVar1);
      *(undefined1 *)(puVar2[5] + uVar1 + param_3) = 0;
      *puVar2 = uVar1 + param_3;
      puVar2[1] = 2;
      puVar2[1] = 1;
      goto LAB_0044f4da;
    }
  }
  puVar4 = (uint *)FUN_00462700(puVar2,param_2,param_3);
  if (puVar2 == puVar4) {
    puVar4[1] = 1;
    puVar2 = puVar4;
  }
  else {
    LVar5 = InterlockedDecrement((LONG *)(puVar2 + 1));
    puVar2 = puVar4;
    if (LVar5 == 0) {
      FUN_0044f150();
    }
  }
LAB_0044f4da:
  param_1[1] = 2;
  param_1[6] = (uint)puVar2;
  *param_1 = local_18;
  if (param_1[4] == 0) {
    ExceptionList = local_10;
    return param_1;
  }
  if (local_18 + 1 != 0) {
    FUN_0044b440(param_1[4],local_18 + 1);
  }
  param_1[4] = 0;
  ExceptionList = local_10;
  return param_1;
}

