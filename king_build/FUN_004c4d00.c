
void FUN_004c4d00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644b7e;
  local_c = ExceptionList;
  if (DAT_006951a4 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005ee8e0(*(undefined4 *)(DAT_006951a4 + 0x20c),s___ThatSortNode_00671678);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_00631d33(0x2c);
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_005d2890(1,s_TwinsCollector0_00671778);
        local_4._0_1_ = 1;
        *puVar2 = &PTR_FUN_0064b760;
        puVar2[9] = iVar1;
        puVar3 = (undefined4 *)FUN_00631d33(0x36b4);
        local_4._0_1_ = 2;
        if (puVar3 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = puVar3 + 1;
          *puVar3 = 100;
          FUN_0061d173(puVar4,0x8c,100,FUN_004c4ad0,FUN_005efea0);
        }
        puVar2[8] = puVar4;
        puVar2[10] = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        DAT_006951ac = 0;
        FUN_005d2c20(puVar2);
        FUN_005d2a80(1);
        DAT_006951a0 = puVar2;
        ExceptionList = local_c;
        return;
      }
      DAT_006951a0 = (undefined4 *)0x0;
      ExceptionList = local_c;
      return;
    }
  }
  DAT_006951a0 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}

