
uint FUN_00418300(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int local_8c;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_6c;
  char local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c8e7;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  do {
    DAT_006898ac = (DAT_006898ac + 1) % 0x37;
    DAT_006898b0 = (DAT_006898b0 + 1) % 0x37;
    (&DAT_006897d0)[DAT_006898ac] = (&DAT_006897d0)[DAT_006898ac] - (&DAT_006897d0)[DAT_006898b0];
    uVar1 = (&DAT_006897d0)[DAT_006898ac];
    FUN_004184d0();
    local_4 = 0;
    FUN_0041d3f0(&param_1);
    FUN_00441920();
    if (local_14 != '\0') {
      local_4 = 3;
      if (local_6c != local_74) {
        FUN_0044b440();
      }
      local_4._0_1_ = 2;
      if (local_78 != local_80) {
        FUN_0044b440();
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0044a450();
      local_4 = 0xffffffff;
      FUN_0044a450();
      ExceptionList = local_c;
      return uVar1 % 9;
    }
    local_4 = 6;
    if (local_6c != local_74) {
      FUN_0044b440();
    }
    local_4._0_1_ = 5;
    if (local_78 != local_80) {
      FUN_0044b440();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_84 != local_8c) {
      FUN_0044b440();
    }
    local_4 = 0xffffffff;
    FUN_0044a450();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 100);
  ExceptionList = local_c;
  return 0xffffffff;
}

