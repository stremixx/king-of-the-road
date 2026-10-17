
int FUN_00414a30(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  double dVar6;
  int iStack_c8;
  uint uStack_c0;
  int *piStack_9c;
  uint uStack_94;
  int *local_90;
  uint local_88;
  int *piStack_84;
  uint uStack_7c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063c694;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00401870();
  FUN_004018b0();
  local_4._0_1_ = 1;
  FUN_004030b0();
  iVar1 = FUN_00473470();
  uVar4 = DAT_0068bf4c;
  *(undefined4 *)(iVar1 + 0x80) = DAT_0068bf48;
  *(undefined4 *)(iVar1 + 0x84) = uVar4;
  if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  piVar2 = (int *)FUN_004af560();
  FUN_004042a0();
  local_4._0_1_ = 3;
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    iVar3 = (*(code *)**(undefined4 **)*piVar2)();
    if (iVar3 == 3) {
      *(int *)(*piVar2 + 4) = *(int *)(*piVar2 + 4) + 1;
    }
    else {
      (**(code **)(*(int *)*piVar2 + 4))();
      FUN_004a5670();
    }
  }
  local_4._0_1_ = 5;
  if (((((local_88 & 0x10000) == 0) && (local_90 != (int *)0x0)) &&
      (local_90[1] = local_90[1] + -1, local_90[1] == 0)) && (local_90 != (int *)0x0)) {
    (**(code **)(*local_90 + 0xc))();
  }
  if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  piVar2 = (int *)FUN_004af560();
  FUN_004042a0();
  local_4._0_1_ = 7;
  if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
    iStack_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    iVar3 = (*(code *)**(undefined4 **)*piVar2)();
    if (iVar3 == 6) {
      iStack_c8 = *piVar2;
      uStack_c0 = piVar2[2];
      *(int *)(iStack_c8 + 4) = *(int *)(iStack_c8 + 4) + 1;
    }
    else {
      (**(code **)(*(int *)*piVar2 + 4))();
      FUN_004a5670();
    }
  }
  local_4._0_1_ = 9;
  if ((((uStack_94 & 0x10000) == 0) && (piStack_9c != (int *)0x0)) &&
     ((piStack_9c[1] = piStack_9c[1] + -1, piStack_9c[1] == 0 && (piStack_9c != (int *)0x0)))) {
    (**(code **)(*piStack_9c + 0xc))();
  }
  if (((param_4 & 0x10000) == 0) && (param_2 != 0)) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  piVar2 = (int *)FUN_004af560();
  FUN_004042a0();
  local_4._0_1_ = 0xb;
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    iVar3 = (*(code *)**(undefined4 **)*piVar2)();
    if (iVar3 == 6) {
      *(int *)(*piVar2 + 4) = *(int *)(*piVar2 + 4) + 1;
    }
    else {
      (**(code **)(*(int *)*piVar2 + 4))();
      FUN_004a5670(2);
    }
  }
  local_4._0_1_ = 0xd;
  if (((((uStack_7c & 0x10000) == 0) && (piStack_84 != (int *)0x0)) &&
      (piStack_84[1] = piStack_84[1] + -1, piStack_84[1] == 0)) && (piStack_84 != (int *)0x0)) {
    (**(code **)(*piStack_84 + 0xc))();
  }
  FUN_00455dc0(&param_2);
  FUN_004af560();
  local_4._0_1_ = 0xe;
  FUN_00455640();
  local_4._0_1_ = 0x10;
  FUN_00492340();
  FUN_00455dc0(&param_2);
  FUN_004af560();
  local_4._0_1_ = 0x11;
  FUN_00455640();
  local_4._0_1_ = 0x13;
  FUN_00492340();
  iVar3 = FUN_00631d33();
  local_4._0_1_ = 0x14;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (iStack_c8 == 0) {
      FUN_004a5470();
    }
    if ((uStack_c0 & 0x10000) != 0) {
      FUN_004a5470();
    }
    FUN_004b8250();
    FUN_004b0f30();
    FUN_004146e0();
    uVar4 = FUN_00415000();
  }
  local_4 = CONCAT31(local_4._1_3_,0x13);
  *(undefined4 *)(iVar1 + 0x1fc) = uVar4;
  FUN_004b8250();
  FUN_004b0f20();
  FUN_004b8250();
  fVar5 = (float10)FUN_004b0f20();
  dVar6 = (double)fVar5;
  FUN_004b8250(dVar6);
  fVar5 = (float10)FUN_004b0f20();
  FUN_00405ea0((double)fVar5,dVar6);
  FUN_004369e0();
  FUN_004742e0();
  *(int *)(iVar1 + 0x54) = param_1;
  if (param_1 == 1) {
    FUN_004150d0();
  }
  else {
    FUN_004147a0();
    FUN_004741b0();
    FUN_0044c100();
  }
  local_4._0_1_ = 0x10;
  FUN_00492340();
  local_4._0_1_ = 0xd;
  FUN_00492340();
  local_4._0_1_ = 9;
  FUN_00492340();
  local_4._0_1_ = 5;
  FUN_00492340();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00492340();
  FUN_004018f0();
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return iVar1;
}

