
undefined4 * __thiscall
FUN_004d10a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_f4 [12];
  undefined4 local_c4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644f0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041d3f0(&param_4);
  FUN_00543530(param_2,param_3);
  param_1[0x1563] = 0;
  param_1[0x1564] = 0;
  param_1[0x1565] = 0;
  param_1[0x1566] = 0;
  param_1[0x1567] = 0;
  param_1[0x1568] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_0064bfe4;
  param_1[4] = &PTR_LAB_0064bef8;
  param_1[0x44] = &PTR_LAB_0064beac;
  param_1[0x62] = &PTR_LAB_0064bea8;
  FUN_00555820();
  param_1[0x156c] = 0;
  param_1[0x156a] = 0;
  param_1[0x156e] = 0;
  param_1[0x1569] = 0;
  param_1[0x156d] = 0;
  param_1[0x156b] = 0;
  param_1[0x156f] = 0;
  uVar1 = FUN_005ee8e0();
  param_1[0x155f] = uVar1;
  uVar1 = FUN_005ee8e0(param_1[0x54],s_CopSirenKey_00671a18);
  param_1[0x1560] = uVar1;
  uVar1 = FUN_005ee8e0(0,s_clRedSpace_00671a0c);
  param_1[0x1561] = uVar1;
  puVar2 = local_f4;
  iVar3 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0041d3f0(&param_4);
  FUN_0043fd20();
  param_1[0x155e] = local_c4;
  FUN_004cf280(param_1);
  ExceptionList = local_c;
  return param_1;
}

