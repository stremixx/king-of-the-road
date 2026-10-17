
void FUN_004c7de0(undefined4 *param_1,int *param_2,undefined2 *param_3,int *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,int param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int local_e4;
  int local_e0;
  ushort local_dc;
  ushort uStack_da;
  ushort local_d8;
  ushort uStack_d6;
  ushort uStack_d4;
  ushort local_d2;
  ushort uStack_d0;
  ushort uStack_ce;
  ushort local_cc;
  ushort uStack_ca;
  ushort uStack_c8;
  ushort local_c6;
  undefined1 local_c0 [192];
  
  if (param_8 == 0) {
    puVar2 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_5;
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = param_1 + 8;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_6;
      param_6 = param_6 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = param_1 + 0x10;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_7;
      param_7 = param_7 + 1;
      puVar2 = puVar2 + 1;
    }
    *param_3 = 0;
    param_3[1] = 1;
    param_3[2] = 2;
    *param_4 = 3;
    *param_2 = 3;
    return;
  }
  if (param_8 != 1) {
    local_e0 = 0;
    local_e4 = 0;
    FUN_004c78a0(local_c0,&local_e4,&local_dc,&local_e0,param_5,param_6,param_7,0);
    FUN_004c78a0(param_1,&local_e4,param_3,&local_e0,local_c0 + (uint)local_dc * 0x20,
                 local_c0 + (uint)uStack_da * 0x20,local_c0 + (uint)local_d8 * 0x20,0);
    FUN_004c78a0(param_1,&local_e4,param_3,&local_e0,local_c0 + (uint)uStack_d6 * 0x20,
                 local_c0 + (uint)uStack_d4 * 0x20,local_c0 + (uint)local_d2 * 0x20,6);
    FUN_004c78a0(param_1,&local_e4,param_3,&local_e0,local_c0 + (uint)uStack_d0 * 0x20,
                 local_c0 + (uint)uStack_ce * 0x20,local_c0 + (uint)local_cc * 0x20,0xc);
    FUN_004c78a0(param_1,&local_e4,param_3,&local_e0,local_c0 + (uint)uStack_ca * 0x20,
                 local_c0 + (uint)uStack_c8 * 0x20,local_c0 + (uint)local_c6 * 0x20,0x12);
    *param_4 = local_e0 * 4;
    *param_2 = local_e4 * 4;
    return;
  }
  FUN_004c78a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}

