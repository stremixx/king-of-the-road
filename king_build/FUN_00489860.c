
undefined4 * FUN_00489860(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006407d4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  FUN_00401aa0();
  local_8 = 0;
  if (DAT_0068c138 == (undefined4 *)0x0) {
    local_1c = 0x14;
    puVar2 = (undefined4 *)FUN_0045a160(0x30,&local_1c);
    if (local_1c != 1) {
      puVar4 = puVar2 + 0xc;
      iVar5 = 1;
      puVar1 = puVar4;
      DAT_0068c138 = puVar4;
      if (local_1c != 2) {
        do {
          puVar4 = puVar1 + 0xc;
          *puVar1 = puVar4;
          iVar5 = iVar5 + 1;
          puVar1 = puVar4;
        } while (local_1c + -1 != iVar5);
      }
      *puVar4 = 0;
    }
  }
  else {
    puVar2 = DAT_0068c138;
    DAT_0068c138 = (undefined4 *)*DAT_0068c138;
  }
  iVar5 = param_1;
  DAT_0068c164 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_18 = puVar2;
  if (puVar2 != (undefined4 *)0xfffffff8) {
    FUN_0044dd30(param_1);
    local_8._0_1_ = 3;
    FUN_0048a730(*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2,(int)&param_1 + 3);
    local_8._0_1_ = 4;
    uVar3 = FUN_0046b5a0(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),puVar2[5],
                         param_1);
    puVar2[6] = uVar3;
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_0048a630(iVar5 + 0x18);
  }
  ExceptionList = local_10;
  return local_18;
}

