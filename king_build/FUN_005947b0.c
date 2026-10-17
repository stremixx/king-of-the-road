
undefined4 * __thiscall
FUN_005947b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647388;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005d9610(param_2,param_3,param_4,*(undefined4 *)(DAT_00695c00 + 0x1d8));
  local_c = 0;
  FUN_005ea810();
  iVar1 = param_1[0x76];
  *param_1 = &PTR_FUN_0064f9e8;
  param_1[0x89] = *(undefined4 *)(iVar1 + 4);
  param_1[0x8a] = *(undefined4 *)(iVar1 + 8);
  param_1[0x8c] = *(undefined4 *)(iVar1 + 0x10);
  param_1[0x8d] = *(undefined4 *)(iVar1 + 0x14);
  param_1[0x8e] = *(undefined4 *)(iVar1 + 0x18);
  param_1[0x8f] = *(undefined4 *)(iVar1 + 0x1c);
  param_1[0x90] = *(undefined4 *)(iVar1 + 0x20);
  param_1[0x91] = *(undefined4 *)(iVar1 + 0x24);
  param_1[0x92] = *(undefined4 *)(iVar1 + 0x28);
  param_1[0x93] = *(undefined4 *)(iVar1 + 0x2c);
  param_1[0x94] = *(undefined4 *)(iVar1 + 0x30);
  param_1[0x95] = *(undefined4 *)(iVar1 + 0x34);
  param_1[0x96] = *(undefined4 *)(iVar1 + 0x38);
  param_1[0x97] = *(undefined4 *)(iVar1 + 0x3c);
  param_1[0x98] = *(undefined4 *)(iVar1 + 0x40);
  param_1[0x99] = *(undefined4 *)(iVar1 + 0x44);
  param_1[0x9a] = *(undefined4 *)(iVar1 + 0x48);
  param_1[0x9b] = *(undefined4 *)(iVar1 + 0x4c);
  param_1[0x9c] = *(undefined4 *)(iVar1 + 0x50);
  param_1[0x9d] = *(undefined4 *)(iVar1 + 0x54);
  param_1[0x9e] = *(undefined4 *)(iVar1 + 0x58);
  param_1[0xa0] = *(undefined4 *)(iVar1 + 0x60);
  param_1[0xa1] = *(undefined4 *)(iVar1 + 100);
  param_1[0xa2] = *(undefined4 *)(iVar1 + 0x68);
  param_1[0xa3] = *(undefined4 *)(iVar1 + 0x6c);
  param_1[0xa4] = *(undefined4 *)(iVar1 + 0x70);
  param_1[0xa5] = *(undefined4 *)(iVar1 + 0x74);
  param_1[0xa6] = *(undefined4 *)(iVar1 + 0x78);
  param_1[0xa7] = *(undefined4 *)(iVar1 + 0x7c);
  param_1[0xa8] = *(undefined4 *)(iVar1 + 0x80);
  param_1[0xa9] = *(undefined4 *)(iVar1 + 0x84);
  param_1[0x9b] = 1;
  param_1[0x76] = param_1 + 0x88;
  ExceptionList = local_14;
  return param_1;
}

