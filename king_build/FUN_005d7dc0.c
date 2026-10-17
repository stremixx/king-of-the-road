
undefined4 * __thiscall FUN_005d7dc0(undefined4 *param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064859e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00651158;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[4] = 3;
  local_1c = *param_3;
  local_4 = 0;
  local_18 = param_3[1];
  local_14 = param_3[2];
  local_10 = param_3[3];
  if (((*param_3 == 0) && (param_3[2] == 0)) && (param_3[1] == 0)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = (uint)**(ushort **)(param_2 + 0xc);
    local_10 = (uint)(*(ushort **)(param_2 + 0xc))[1];
    iVar1 = FUN_00631d33(0x7c);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iVar1 == 0) {
      param_1[3] = 0;
      param_1[4] = param_1[4] | 0xf0;
    }
    else {
      uVar2 = FUN_005b5be0(*(undefined4 *)(param_2 + 0xc),&local_1c,param_4 & 0x4000);
      param_1[3] = uVar2;
      param_1[4] = param_1[4] | 0xf0;
    }
  }
  else {
    iVar1 = FUN_00631d33(0x7c);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_005b5be0(*(undefined4 *)(param_2 + 0xc),&local_1c,param_4 & 0x4000);
    }
    param_1[3] = uVar2;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}

