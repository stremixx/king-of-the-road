
undefined4 * __thiscall FUN_005fbd50(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005f1020(param_2,0xf,1);
  *param_1 = &PTR_FUN_00651d58;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  puVar2 = param_1 + 0x12;
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return param_1;
}

