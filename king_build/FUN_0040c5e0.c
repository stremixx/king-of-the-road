
undefined4 FUN_0040c5e0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  int iStack_d0;
  undefined8 uStack_cc;
  int *piStack_b4;
  int iStack_b0;
  uint uStack_ac;
  double local_a8;
  uint uStack_a0;
  undefined1 local_91;
  int *local_90;
  int local_8c;
  uint local_88;
  undefined4 local_78;
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [36];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_0063b98e;
  pvStack_14 = ExceptionList;
  local_78 = 0;
  local_c = 1;
  uStack_cc._4_4_ = (int **)0x40c61e;
  ExceptionList = &pvStack_14;
  FUN_004042a0();
  uStack_cc._4_4_ = (int **)&local_91;
  local_c._0_1_ = 2;
  uStack_cc._0_4_ = (int **)0x40c634;
  FUN_00478a20();
  uStack_cc._4_4_ = (int **)&stack0x0000000c;
  uStack_cc._0_4_ = (int **)&local_a8;
  iStack_d0 = 0x40c642;
  piVar2 = (int *)FUN_00407e60();
  local_c._0_1_ = 4;
  if (((local_90 != (int *)0x0) && ((local_88 & 0x10000) == 0)) &&
     (local_90[1] = local_90[1] + -1, local_90[1] == 0)) {
    uStack_cc._0_4_ = &local_90;
    iStack_d0 = 0x40c67d;
    uStack_cc._4_4_ = (int **)piVar2;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (local_90 != (int *)0x0)) {
      uStack_cc._4_4_ = (int **)0x1;
      uStack_cc._0_4_ = (int **)0x40c693;
      (**(code **)(*local_90 + 0xc))();
    }
  }
  local_88 = piVar2[2];
  if ((local_88 & 0x10000) == 0) {
    local_8c = 0;
    local_90 = (int *)*piVar2;
    if (local_90 == (int *)0x0) {
      local_90 = (int *)0x0;
      local_88 = 0;
    }
    else {
      local_88 = piVar2[2];
      local_90[1] = local_90[1] + 1;
    }
  }
  else {
    local_90 = (int *)*piVar2;
    local_8c = piVar2[1];
  }
  local_c._0_1_ = 3;
  if ((((uStack_a0 & 0x10000) == 0) && (local_a8._0_4_ != (int *)0x0)) &&
     ((local_a8._0_4_[1] = local_a8._0_4_[1] + -1, local_a8._0_4_[1] == 0 &&
      (local_a8._0_4_ != (int *)0x0)))) {
    uStack_cc._4_4_ = (int **)0x1;
    uStack_cc._0_4_ = (int **)0x40c706;
    (**(code **)(*local_a8._0_4_ + 0xc))();
  }
  piStack_b4 = (int *)0x0;
  iStack_b0 = 0;
  uStack_ac = 0;
  uStack_cc._4_4_ = (int **)&stack0x0000000c;
  uStack_cc._0_4_ = (int **)&local_a8;
  iStack_d0 = 0x40c720;
  piVar2 = (int *)FUN_00409000();
  local_c._0_1_ = 6;
  if (((piStack_b4 != (int *)0x0) && ((uStack_ac & 0x10000) == 0)) &&
     (piStack_b4[1] = piStack_b4[1] + -1, piStack_b4[1] == 0)) {
    uStack_cc._0_4_ = &piStack_b4;
    iStack_d0 = 0x40c756;
    uStack_cc._4_4_ = (int **)piVar2;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (piStack_b4 != (int *)0x0)) {
      uStack_cc._4_4_ = (int **)0x1;
      uStack_cc._0_4_ = (int **)0x40c76c;
      (**(code **)(*piStack_b4 + 0xc))();
    }
  }
  uStack_ac = piVar2[2];
  if ((uStack_ac & 0x10000) == 0) {
    iStack_b0 = 0;
    piStack_b4 = (int *)*piVar2;
    if (piStack_b4 == (int *)0x0) {
      piStack_b4 = (int *)0x0;
      uStack_ac = 0;
    }
    else {
      uStack_ac = piVar2[2];
      piStack_b4[1] = piStack_b4[1] + 1;
    }
  }
  else {
    piStack_b4 = (int *)*piVar2;
    iStack_b0 = piVar2[1];
  }
  local_c = CONCAT31(local_c._1_3_,5);
  if ((((uStack_a0 & 0x10000) == 0) && (local_a8._0_4_ != (int *)0x0)) &&
     ((local_a8._0_4_[1] = local_a8._0_4_[1] + -1, local_a8._0_4_[1] == 0 &&
      (local_a8._0_4_ != (int *)0x0)))) {
    uStack_cc._4_4_ = (int **)0x1;
    uStack_cc._0_4_ = (int **)0x40c7df;
    (**(code **)(*local_a8._0_4_ + 0xc))();
  }
  while ((char)uStack_ac == '\x02') {
    uStack_cc._4_4_ = &piStack_b4;
    uStack_cc._0_4_ = (int **)auStack_74;
    iStack_d0 = 0x40c7fb;
    FUN_00407e60();
    local_c._0_1_ = 8;
    local_a8._0_4_ = &iStack_d0;
    FUN_00455dc0(auStack_74);
    uStack_cc._4_4_ = (int **)FUN_004af560(auStack_38,0);
    local_c._0_1_ = 9;
    uStack_cc._0_4_ = (int **)0x40c837;
    FUN_004556d0();
    local_c._0_1_ = 0xb;
    uStack_cc._4_4_ = (int **)0x40c84b;
    FUN_00492340();
    local_a8 = (double)CONCAT44(local_a8._4_4_,&iStack_d0);
    FUN_00455dc0(auStack_74);
    uStack_cc._4_4_ = (int **)FUN_004af560(auStack_44,1);
    local_c._0_1_ = 0xc;
    uStack_cc._0_4_ = (int **)0x40c882;
    FUN_00455640();
    local_c._0_1_ = 0xe;
    uStack_cc._4_4_ = (int **)0x40c895;
    FUN_00492340();
    uStack_cc._4_4_ = (int **)0x40c89e;
    FUN_004b8250();
    uStack_cc._4_4_ = (int **)0x40c8a5;
    fVar4 = (float10)FUN_004b0f20();
    local_a8 = (double)fVar4;
    iStack_d0 = 0x40c8bc;
    uStack_cc = local_a8;
    iStack_d0 = FUN_004b8250();
    iStack_d0 = iStack_d0 + 0xc;
    uVar3 = FUN_0040c9d0();
    local_c._0_1_ = 0xf;
    uStack_cc._0_4_ = (int **)0x40c8de;
    uStack_cc._4_4_ = (int **)uVar3;
    FUN_00447dd0();
    local_c._0_1_ = 0xe;
    uStack_cc._4_4_ = (int **)0x40c8f1;
    FUN_004497b0();
    local_c._0_1_ = 0xb;
    uStack_cc._4_4_ = (int **)0x40c902;
    FUN_00492340();
    local_c._0_1_ = 8;
    uStack_cc._4_4_ = (int **)0x40c913;
    FUN_00492340();
    local_c._0_1_ = 5;
    uStack_cc._4_4_ = (int **)0x40c924;
    FUN_00492340();
    uStack_cc._4_4_ = &piStack_b4;
    uStack_cc._0_4_ = (int **)auStack_50;
    iStack_d0 = 0x40c933;
    uStack_cc._4_4_ = (int **)FUN_00409000();
    local_c._0_1_ = 7;
    uStack_cc._0_4_ = (int **)0x40c948;
    FUN_0040c060();
    local_c = CONCAT31(local_c._1_3_,5);
    uStack_cc._4_4_ = (int **)0x40c959;
    FUN_00492340();
  }
  uStack_cc._4_4_ = &local_90;
  uStack_cc._0_4_ = (int **)0x40c973;
  FUN_0040cd00();
  local_78 = 1;
  local_c._0_1_ = 3;
  uStack_cc._4_4_ = (int **)0x40c98c;
  FUN_00492340();
  local_c._0_1_ = 1;
  uStack_cc._4_4_ = (int **)0x40c99d;
  FUN_0040cac0();
  local_c = (uint)local_c._1_3_ << 8;
  uStack_cc._4_4_ = (int **)0x40c9ad;
  FUN_00492340();
  ExceptionList = pvStack_14;
  return param_1;
}

