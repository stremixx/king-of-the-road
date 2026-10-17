
void FUN_00409060(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *local_3c;
  uint local_34;
  int *local_30;
  uint local_28;
  int *piStack_24;
  uint uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_0063b600;
  ExceptionList = &pvStack_c;
  local_4 = 1;
  if ((param_4 & 0x10000) == 0) {
    if (param_2 == (int *)0x0) {
      local_3c = (int *)0x0;
      local_34 = 0;
      ExceptionList = &pvStack_c;
    }
    else {
      local_3c = param_2;
      local_34 = param_4;
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    local_34 = param_4;
    local_3c = param_2;
    ExceptionList = &pvStack_c;
  }
  while ((char)local_34 == '\x02') {
    iVar2 = FUN_00407e60();
    cVar1 = *(char *)(iVar2 + 8);
    if (((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
        (local_30[1] = local_30[1] + -1, local_30[1] == 0)) && (local_30 != (int *)0x0)) {
      (**(code **)(*local_30 + 0xc))();
    }
    if (cVar1 == '\x02') {
      uVar3 = FUN_00407e60();
      local_4._0_1_ = 3;
      FUN_0044ca50(uVar3);
      FUN_00407fe0(param_1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00492340();
    }
    puVar4 = (undefined4 *)FUN_00409000();
    local_4._0_1_ = 2;
    if (((local_3c != (int *)0x0) && ((local_34 & 0x10000) == 0)) &&
       ((local_3c[1] = local_3c[1] + -1, local_3c[1] == 0 &&
        ((cVar1 = FUN_00408fd0(), cVar1 == '\0' && (local_3c != (int *)0x0)))))) {
      (**(code **)(*local_3c + 0xc))();
    }
    local_34 = puVar4[2];
    if ((local_34 & 0x10000) == 0) {
      local_3c = (int *)*puVar4;
      if (local_3c == (int *)0x0) {
        local_3c = (int *)0x0;
        local_34 = 0;
      }
      else {
        local_34 = puVar4[2];
        local_3c[1] = local_3c[1] + 1;
      }
    }
    else {
      local_3c = (int *)*puVar4;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (((((uStack_1c & 0x10000) == 0) && (piStack_24 != (int *)0x0)) &&
        (piStack_24[1] = piStack_24[1] + -1, piStack_24[1] == 0)) && (piStack_24 != (int *)0x0)) {
      (**(code **)(*piStack_24 + 0xc))();
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00492340();
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

