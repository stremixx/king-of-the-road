
undefined4 * __thiscall
FUN_005a5830(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647cc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a4e80(param_2,9,param_6,param_7,param_8,param_9,param_10,param_11);
  local_4 = 0;
  *param_1 = &PTR_FUN_00650538;
  if (param_4 == 0) {
    FUN_005d2250(s_Key_for_the_frontal_glass_is_abs_0067d930,0);
  }
  param_1[0x31] = param_4;
  FUN_0061c369(local_2c,&DAT_0066c9c4,param_5);
  iVar1 = FUN_005eea00(local_2c);
  if (iVar1 == 0) {
    FUN_005d2250(s_Material_for_drops_not_found_0067d910,0);
    param_1[0x25] = 0;
  }
  else {
    param_1[0x25] = *(undefined4 *)(iVar1 + 0x4c);
  }
  if (param_1[0x25] == 0) {
    FUN_005d2250(s_Material_for_drops_is_not_textur_0067d8ec,0);
  }
  param_1[0x32] = 0;
  if (((*(int *)(iVar1 + 0x2c) < 0) || (param_4 == 0)) || (DAT_00701510 == 0)) {
    *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  }
  else {
    param_1[0x32] =
         *(undefined4 *)
          (*(int *)(*(int *)(param_4 + 0x24) + 0x4c) + 0x4c + *(int *)(iVar1 + 0x2c) * 0x7c);
  }
  FUN_0061c369(local_2c,s_txr__s_1_msk_0067d8dc,param_5);
  iVar1 = FUN_005eea00(local_2c);
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    FUN_005d2250(s_Mask_for_drops_not_found_0067d8c0,0);
  }
  FUN_0061c369(local_2c,s_txr__s_2_msk_0067d8b0,param_5);
  iVar1 = FUN_005eea00(local_2c);
  param_1[0x11] = iVar1;
  if (iVar1 == 0) {
    FUN_005d2250(s_Mask_for_drops1_not_found_0067d894,0);
  }
  param_1[10] = 0;
  param_1[0x30] = param_3;
  param_1[0x2c] = 0x931d23eb;
  param_1[0xb] = 0x40340000;
  param_1[0x2d] = 0xbfbf46bb;
  param_1[0x1a] = 0x3d;
  param_1[0x1b] = 0xbe;
  param_1[0x18] = 0x40;
  param_1[0x19] = 0xea;
  if (param_1[0x25] == 0) {
    param_1[0x26] = 0;
  }
  else {
    iVar1 = FUN_00631d33(0x7c);
    local_4._0_1_ = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_005b5a90(param_1[0x25]);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    param_1[0x26] = uVar2;
    FUN_005b64b0(0,1);
  }
  ExceptionList = local_c;
  return param_1;
}

