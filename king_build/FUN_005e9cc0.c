
undefined4 * __thiscall
FUN_005e9cc0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00648c53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0065173c;
  local_4 = 0;
  param_1[0xe] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  if (param_2 == 0) {
    FUN_005d2520(s_Palettes_may_be_1_or_more__0068253c,0);
  }
  param_1[0x1a] = param_6;
  param_1[0x16] = param_5;
  param_1[0x1c] = param_8;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0xf] = 0;
  param_1[0x21] = 0;
  param_1[0x12] = param_3;
  param_1[0x14] = param_4;
  param_1[0x18] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  piVar1 = (int *)FUN_00631d33(param_3 * 0x7c + 4);
  local_4._0_1_ = 1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = param_3;
    piVar1 = piVar1 + 1;
    FUN_0061d173(piVar1,0x7c,param_3,&LAB_005e9e60,FUN_004030a0);
  }
  param_1[0x13] = piVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar2 = FUN_00631d33(param_4 * 4);
  param_1[0x15] = uVar2;
  uVar2 = FUN_00631d33(param_5 * 4);
  param_1[0x17] = uVar2;
  uVar2 = FUN_00631d33(param_2 * 4);
  param_1[0x19] = uVar2;
  uVar2 = FUN_00631d33(param_6 * 4);
  param_1[0x1b] = uVar2;
  uVar2 = FUN_00631d33(param_8 * 4);
  param_1[0x1d] = uVar2;
  FUN_005fc510(param_7);
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  puVar4 = param_1 + 0x27;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

