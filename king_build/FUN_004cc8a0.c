
void FUN_004cc8a0(int *param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644d2b;
  pvStack_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    DAT_0069515c = (undefined4 *)0x0;
  }
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x33f4);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(s_PeopleNode_0067190c,5,1);
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &PTR_FUN_0064b96c;
    puVar1[0xcfc] = 0;
  }
  local_4 = 0xffffffff;
  DAT_0069515c = puVar1;
  (**(code **)(*param_1 + 0x14))(0,puVar1);
  ExceptionList = unaff_ESI;
  return;
}

