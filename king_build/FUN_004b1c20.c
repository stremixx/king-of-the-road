
undefined4 * FUN_004b1c20(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0048ae90(0,0);
  local_4 = 0;
  piVar1 = (int *)(param_3 + 8);
  do {
    FUN_004abfc0(piVar1);
    uVar4 = FUN_004b2840(0);
    FUN_004abfc0(uVar4);
    cVar2 = FUN_0061e299(*local_1c);
    if ((cVar2 < 'A') || ('F' < cVar2)) {
      if ((cVar2 < '0') || ('9' < cVar2)) {
        uVar4 = FUN_0048ad80(0,iVar3);
        *param_1 = uVar4;
        if ((iVar3 != 0) && (*(short *)(iVar3 + 2) != 0)) {
          FUN_00631d5c(iVar3);
        }
        ExceptionList = local_c;
        return param_1;
      }
      iVar7 = cVar2 + -0x30;
    }
    else {
      iVar7 = cVar2 + -0x41;
    }
    if (param_2 <= iVar7) {
      FUN_004a55b0(0x14,0x300,s_Illegal_digit_for_given_radix_00670400);
    }
    iVar5 = FUN_0048ae90(0,param_2);
    local_4._0_1_ = 1;
    uVar4 = FUN_0048b400(iVar3,iVar5,iVar3);
    local_4._0_1_ = 0;
    if ((iVar5 != 0) && (*(short *)(iVar5 + 2) != 0)) {
      FUN_00631d5c(iVar5);
    }
    iVar7 = FUN_0048ae90(0,iVar7);
    local_4._0_1_ = 2;
    iVar3 = FUN_0048b050(uVar4,0,iVar7,0,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if ((iVar7 != 0) && (*(short *)(iVar7 + 2) != 0)) {
      FUN_00631d5c(iVar7);
    }
    if (*piVar1 == *(int *)(param_3 + 0x10) + -4) {
      FUN_0044b440(*(undefined4 *)(param_3 + 0xc),0x200);
      piVar6 = (int *)(*(int *)(param_3 + 0x14) + 4);
      *(int **)(param_3 + 0x14) = piVar6;
      iVar7 = *piVar6;
      *(int *)(param_3 + 0xc) = iVar7;
      *(int *)(param_3 + 0x10) = iVar7 + 0x200;
      *piVar1 = *(int *)(param_3 + 0xc);
    }
    else {
      *piVar1 = *piVar1 + 4;
    }
  } while( true );
}

