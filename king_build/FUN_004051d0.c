
int * FUN_004051d0(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b058;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00455dc0(&param_2);
  uVar1 = FUN_00405380();
  local_4._0_1_ = 1;
  FUN_00455dc0(uVar1);
  local_4._0_1_ = 1;
  uVar1 = FUN_00447d30();
  uVar1 = FUN_004558b0(uVar1);
  iVar2 = FUN_004544a0(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  if (iVar2 == DAT_0068bc1c) {
    if (param_2 == (int *)0x0) {
      FUN_004a5470();
    }
    if ((param_4 & 0x10000) != 0) {
      FUN_004a5470();
    }
    FUN_00401010(0x59,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x498);
    local_4 = 0xffffffff;
    *param_1 = -1;
    if (((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) {
      param_2[1] = param_2[1] + -1;
      if ((param_2[1] == 0) && (param_2 != (int *)0x0)) {
        (**(code **)(*param_2 + 0xc))();
      }
    }
    ExceptionList = local_c;
    return param_1;
  }
  local_4 = 0xffffffff;
  *param_1 = (iVar2 - DAT_0068bc18) / 0x68;
  if (((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) {
    param_2[1] = param_2[1] + -1;
    if ((param_2[1] == 0) && (param_2 != (int *)0x0)) {
      (**(code **)(*param_2 + 0xc))();
    }
  }
  ExceptionList = local_c;
  return param_1;
}

