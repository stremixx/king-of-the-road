
int FUN_0040e460(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *local_18;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063bca8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00455dc0(&param_1);
  uVar1 = FUN_00405380();
  FUN_00455dc0(uVar1);
  local_4._0_1_ = 1;
  uVar1 = FUN_00447d30();
  uVar1 = FUN_004558b0(uVar1);
  iVar2 = FUN_00455c80(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) {
    local_18[1] = local_18[1] + -1;
    if ((local_18[1] == 0) && (local_18 != (int *)0x0)) {
      (**(code **)(*local_18 + 0xc))();
    }
  }
  if (iVar2 == DAT_0068bf3c) {
    if (param_1 == (int *)0x0) {
      FUN_004a5470();
    }
    if ((param_3 & 0x10000) != 0) {
      FUN_004a5470();
    }
    FUN_00401010(0x23,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xb5a);
  }
  iVar2 = iVar2 - DAT_0068bf38;
  local_4 = 0xffffffff;
  if (((param_3 & 0x10000) == 0) && (param_1 != (int *)0x0)) {
    param_1[1] = param_1[1] + -1;
    if ((param_1[1] == 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0xc))();
    }
  }
  ExceptionList = pvStack_c;
  return iVar2 >> 2;
}

