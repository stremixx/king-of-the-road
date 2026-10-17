
/* WARNING: Removing unreachable block (ram,0x004b6f8a) */
/* WARNING: Removing unreachable block (ram,0x004b6f9c) */
/* WARNING: Removing unreachable block (ram,0x004b6f91) */

void FUN_004b6eb0(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644248;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
    ExceptionList = &local_c;
    FUN_004a5470();
  }
  if ((param_3 & 0x10000) != 0) {
    FUN_004a5470();
  }
  FUN_004b0d00();
  if (((param_4[2] & 0x10000U) == 0) && (*param_4 != 0)) {
    piVar1 = (int *)(*param_4 + 4);
    *piVar1 = *piVar1 + 1;
  }
  local_4._0_1_ = 1;
  uVar3 = FUN_004b8240(0);
  FUN_004b14e0(uVar3);
  local_4 = 0xffffffff;
  if ((((param_3 & 0x10000) == 0) && (param_1 != (int *)0x0)) &&
     (iVar2 = param_1[1], param_1[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*param_1 + 0xc))();
  }
  ExceptionList = local_c;
  return;
}

