
undefined4 * __thiscall
FUN_00557e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 **param_5)

{
  undefined4 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = param_5;
  param_5 = &puStack_c;
  puStack_c = param_1;
  FUN_0041d3f0(&param_4);
  FUN_00543530(param_2,param_3);
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
  param_1[0x156f] = 0;
  param_1[0x1570] = 0;
  param_1[0x155e] = 0;
  *param_1 = &PTR_FUN_0064e95c;
  param_1[4] = &PTR_LAB_0064e870;
  param_1[0x44] = &PTR_LAB_0064e824;
  param_1[0x62] = &PTR_LAB_0064e820;
  param_1[0x1472] = 1;
  return param_1;
}

