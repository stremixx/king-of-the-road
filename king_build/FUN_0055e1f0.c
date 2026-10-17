
undefined4 * __thiscall
FUN_0055e1f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 **param_5)

{
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646a48;
  local_c = ExceptionList;
  uStack_18 = param_5;
  param_5 = &puStack_1c;
  ExceptionList = &local_c;
  puStack_1c = param_1;
  FUN_0041d3f0(&param_4);
  FUN_00543530(param_2,param_3);
  param_1[0x1560] = 0;
  param_1[0x1561] = 0;
  param_1[0x1562] = 0;
  param_1[0x1563] = 0;
  param_1[0x1564] = 0;
  param_1[0x1565] = 0;
  param_1[0x1566] = 0;
  param_1[0x1567] = 0;
  param_1[0x1568] = 0;
  param_1[0x1569] = 0;
  param_1[0x156a] = 0;
  param_1[0x156b] = 0;
  param_1[0x156c] = 0;
  param_1[0x156d] = 0;
  param_1[0x156e] = 0;
  uStack_18 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_0064eb7c;
  param_1[4] = &PTR_LAB_0064ea90;
  param_1[0x44] = &PTR_LAB_0064ea44;
  param_1[0x62] = &PTR_LAB_0064ea40;
  param_1[0x155e] = 0;
  param_1[0x1472] = 1;
  puStack_1c = (undefined4 *)0x55e2d1;
  FUN_004feff0();
  uStack_18 = 0x55e2dc;
  FUN_004ff010();
  *(undefined2 *)(param_1[0x1518] + 0x2716) = 1;
  *(undefined4 *)(param_1[0x1518] + 10000) = 0x3f800000;
  uStack_18 = 0x55e302;
  FUN_00555820();
  ExceptionList = local_c;
  return param_1;
}

