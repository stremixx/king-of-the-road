
undefined4 * FUN_00467530(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f782;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      puVar2 = param_1 + 4;
      puVar3 = param_3 + 4;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_3[0xc] = param_1[0xc];
      FUN_0044dd30(param_1 + 0xd);
      local_8 = 2;
      FUN_0044dd30(param_1 + 0x10);
      local_8 = 3;
      FUN_0044dd30(param_1 + 0x13);
      local_8 = 4;
      FUN_0044dd30(param_1 + 0x16);
      param_3[0x19] = param_1[0x19];
      param_3[0x1a] = param_1[0x1a];
      param_3[0x1b] = param_1[0x1b];
      param_3[0x1c] = param_1[0x1c];
      param_3[0x1e] = param_1[0x1e];
      param_3[0x1f] = param_1[0x1f];
      param_3[0x20] = param_1[0x20];
      param_3[0x21] = param_1[0x21];
      param_3[0x22] = param_1[0x22];
      param_3[0x23] = param_1[0x23];
      param_3[0x24] = param_1[0x24];
      param_3[0x25] = param_1[0x25];
      param_3[0x26] = param_1[0x26];
      param_3[0x27] = param_1[0x27];
      param_3[0x28] = param_1[0x28];
      param_3[0x29] = param_1[0x29];
      param_3[0x2a] = param_1[0x2a];
      param_3[0x2b] = param_1[0x2b];
      param_3[0x2c] = param_1[0x2c];
      param_3[0x2d] = param_1[0x2d];
      *(undefined1 *)(param_3 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
      FUN_004427d0();
    }
    param_3 = param_3 + 0x30;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

