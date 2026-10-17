
undefined4 FUN_00604800(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  
  puVar2 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_24[2] = param_4;
  local_14 = param_2;
  local_24[0] = 0x24;
  local_24[1] = 0xe0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_24,param_3,0);
  if (iVar1 == 0) {
    return 1;
  }
  *param_3 = 0;
  return 0;
}

