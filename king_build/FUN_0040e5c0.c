
int * FUN_0040e5c0(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *local_18;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063bcf0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00455dc0(&param_1);
  uVar1 = FUN_00405380();
  FUN_00455dc0(uVar1);
  local_4._0_1_ = 1;
  uVar1 = FUN_00447d30();
  uVar1 = FUN_004558b0(uVar1);
  iVar2 = FUN_00455d20(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  if (iVar2 == DAT_0068a91c) {
    if (param_1 == (int *)0x0) {
      FUN_004a5470();
    }
    if ((param_3 & 0x10000) != 0) {
      FUN_004a5470();
    }
    FUN_00401010(0x23,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xb62);
  }
  piVar3 = (int *)FUN_00409000();
  piVar5 = (int *)0x0;
  uVar4 = 0;
  local_4._0_1_ = 4;
  if ((undefined4 *)*piVar3 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
    uVar4 = 0;
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)*piVar3)();
    if (iVar2 == 3) {
      piVar5 = (int *)*piVar3;
      uVar4 = piVar3[2];
      piVar5[1] = piVar5[1] + 1;
    }
    else {
      (**(code **)(*(int *)*piVar3 + 4))();
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  if (((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) {
    local_18[1] = local_18[1] + -1;
    if ((local_18[1] == 0) && (local_18 != (int *)0x0)) {
      (**(code **)(*local_18 + 0xc))();
    }
  }
  if (piVar5 == (int *)0x0) {
    FUN_004a5470();
  }
  if ((uVar4 & 0x10000) != 0) {
    FUN_004a5470();
  }
  local_4 = local_4 & 0xffffff00;
  if ((((uVar4 & 0x10000) == 0) && (piVar5 != (int *)0x0)) &&
     (iVar2 = piVar5[1], piVar5[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar5 + 0xc))();
  }
  local_4 = 0xffffffff;
  if (((param_3 & 0x10000) == 0) && (param_1 != (int *)0x0)) {
    param_1[1] = param_1[1] + -1;
    if ((param_1[1] == 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0xc))();
    }
  }
  ExceptionList = pvStack_c;
  return piVar5 + 3;
}

