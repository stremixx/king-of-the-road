
undefined4 FUN_00604340(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  undefined4 uStack_44;
  undefined1 auStack_30 [12];
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  puVar2 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_24[2] = 0;
  local_14 = 0;
  uStack_44 = 2;
  local_24[0] = 0x24;
  local_24[1] = 0x81;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_30,puStack_4,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)*puStack_4 + 0x38))((int *)*puStack_4,&DAT_00723090);
      if (iVar1 == 0) {
        uStack_44 = 0x14;
        (**(code **)(*(int *)*puStack_4 + 0xc))((int *)*puStack_4,&uStack_44);
        *puStack_8 = uStack_44;
        return 1;
      }
    }
  }
  *puStack_4 = 0;
  *unaff_retaddr = 0;
  return 0;
}

