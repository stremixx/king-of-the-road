
undefined4 * FUN_0044b2b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e461;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  FUN_00401aa0();
  local_8 = 0;
  if (DAT_0068c140 == (undefined4 *)0x0) {
    local_1c = 0x14;
    puVar2 = (undefined4 *)FUN_0045a160(0x40,&local_1c);
    if (local_1c != 1) {
      puVar5 = puVar2 + 0x10;
      iVar6 = 1;
      puVar7 = puVar5;
      DAT_0068c140 = puVar5;
      if (local_1c != 2) {
        do {
          puVar5 = puVar7 + 0x10;
          *puVar7 = puVar5;
          iVar6 = iVar6 + 1;
          puVar7 = puVar5;
        } while (local_1c + -1 != iVar6);
      }
      *puVar5 = 0;
    }
  }
  else {
    puVar2 = DAT_0068c140;
    DAT_0068c140 = (undefined4 *)*DAT_0068c140;
  }
  DAT_0068c164 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_18 = puVar2;
  if (puVar2 + 2 != (undefined4 *)0x0) {
    puVar2[2] = *param_1;
    puVar5 = param_1 + 2;
    puVar7 = puVar2 + 4;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    piVar1 = puVar2 + 0xb;
    puVar2[10] = param_1[8];
    iVar6 = (int)(param_1[10] - param_1[9]) / 0xc;
    iVar3 = 0;
    *piVar1 = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    if (iVar6 != 0) {
      iVar3 = FUN_0044b6e0(iVar6 * 0xc);
    }
    *piVar1 = iVar3;
    puVar2[0xc] = iVar3;
    puVar2[0xd] = iVar3 + iVar6 * 0xc;
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar4 = FUN_0046f490(param_1[9],param_1[10],iVar3,piVar1);
    puVar2[0xc] = uVar4;
    puVar2[0xe] = param_1[0xc];
    puVar2[0xf] = param_1[0xd];
  }
  ExceptionList = local_10;
  return local_18;
}

