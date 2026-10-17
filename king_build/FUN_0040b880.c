
undefined4 FUN_0040b880(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,uint param_5)

{
  char cVar1;
  int *piVar2;
  float10 fVar3;
  undefined1 *puStack_b0;
  int **ppiStack_ac;
  int **ppiStack_a8;
  int *local_98 [2];
  uint uStack_90;
  undefined1 auStack_8c [8];
  char cStack_84;
  undefined1 local_7d;
  undefined4 local_7c;
  int *local_78;
  int local_74;
  uint local_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  undefined4 local_48;
  double dStack_38;
  undefined4 uStack_30;
  double local_28;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b876;
  pvStack_c = ExceptionList;
  local_7c = 0;
  local_4 = 1;
  ppiStack_a8 = (int **)0x40b8b8;
  ExceptionList = &pvStack_c;
  FUN_004042a0();
  ppiStack_a8 = (int **)&local_7d;
  local_4._0_1_ = 2;
  local_48 = 0;
  local_28 = 1.0;
  ppiStack_ac = (int **)0x40b8e7;
  FUN_00478a20();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40b8f9;
  piVar2 = (int *)FUN_00407e60();
  local_4._0_1_ = 4;
  if (((local_78 != (int *)0x0) && ((local_70 & 0x10000) == 0)) &&
     (local_78[1] = local_78[1] + -1, local_78[1] == 0)) {
    ppiStack_ac = &local_78;
    puStack_b0 = (undefined1 *)0x40b934;
    ppiStack_a8 = (int **)piVar2;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (local_78 != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40b94a;
      (**(code **)(*local_78 + 0xc))();
    }
  }
  local_70 = piVar2[2];
  if ((local_70 & 0x10000) == 0) {
    local_74 = 0;
    local_78 = (int *)*piVar2;
    if (local_78 == (int *)0x0) {
      local_78 = (int *)0x0;
      local_70 = 0;
    }
    else {
      local_70 = piVar2[2];
      local_78[1] = local_78[1] + 1;
    }
  }
  else {
    local_78 = (int *)*piVar2;
    local_74 = piVar2[1];
  }
  local_4._0_1_ = 3;
  if (((uStack_90 & 0x10000) == 0) && (local_98[0] != (int *)0x0)) {
    local_98[0][1] = local_98[0][1] + -1;
    if ((local_98[0][1] == 0) && (local_98[0] != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40b9bd;
      (**(code **)(*local_98[0] + 0xc))();
    }
  }
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40b9cf;
  piVar2 = (int *)FUN_00409000();
  local_4._0_1_ = 5;
  if (((param_3 != (int *)0x0) && ((param_5 & 0x10000) == 0)) &&
     (param_3[1] = param_3[1] + -1, param_3[1] == 0)) {
    ppiStack_ac = &param_3;
    puStack_b0 = (undefined1 *)0x40ba11;
    ppiStack_a8 = (int **)piVar2;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_3 != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40ba2a;
      (**(code **)(*param_3 + 0xc))();
    }
  }
  param_5 = piVar2[2];
  if ((param_5 & 0x10000) == 0) {
    param_4 = 0;
    param_3 = (int *)*piVar2;
    if (param_3 == (int *)0x0) {
      param_3 = (int *)0x0;
      param_5 = 0;
    }
    else {
      param_5 = piVar2[2];
      param_3[1] = param_3[1] + 1;
    }
  }
  else {
    param_3 = (int *)*piVar2;
    param_4 = piVar2[1];
  }
  local_4._0_1_ = 3;
  if (((uStack_90 & 0x10000) == 0) && (local_98[0] != (int *)0x0)) {
    local_98[0][1] = local_98[0][1] + -1;
    if ((local_98[0][1] == 0) && (local_98[0] != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40bab5;
      (**(code **)(*local_98[0] + 0xc))();
    }
  }
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bac7;
  piVar2 = (int *)FUN_00409000();
  local_4._0_1_ = 6;
  if (((param_3 != (int *)0x0) && ((param_5 & 0x10000) == 0)) &&
     (param_3[1] = param_3[1] + -1, param_3[1] == 0)) {
    ppiStack_ac = &param_3;
    puStack_b0 = (undefined1 *)0x40bb09;
    ppiStack_a8 = (int **)piVar2;
    cVar1 = FUN_00408fd0();
    if ((cVar1 == '\0') && (param_3 != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40bb22;
      (**(code **)(*param_3 + 0xc))();
    }
  }
  param_5 = piVar2[2];
  if ((param_5 & 0x10000) == 0) {
    param_4 = 0;
    param_3 = (int *)*piVar2;
    if (param_3 == (int *)0x0) {
      param_3 = (int *)0x0;
      param_5 = 0;
    }
    else {
      param_5 = piVar2[2];
      *(int *)((int)param_3 + 4) = *(int *)((int)param_3 + 4) + 1;
    }
  }
  else {
    param_3 = (int *)*piVar2;
    param_4 = piVar2[1];
  }
  local_4._0_1_ = 3;
  if (((uStack_90 & 0x10000) == 0) && (local_98[0] != (int *)0x0)) {
    local_98[0][1] = local_98[0][1] + -1;
    if ((local_98[0][1] == 0) && (local_98[0] != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40bbad;
      (**(code **)(*local_98[0] + 0xc))();
    }
  }
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bbbf;
  FUN_00407e60();
  local_4._0_1_ = 7;
  ppiStack_a8 = (int **)0x40bbd1;
  fVar3 = (float10)FUN_004b0f20();
  local_4._0_1_ = 3;
  dStack_68 = (double)fVar3;
  if (((uStack_90 & 0x10000) == 0) && (local_98[0] != (int *)0x0)) {
    local_98[0][1] = local_98[0][1] + -1;
    if ((local_98[0][1] == 0) && (local_98[0] != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40bc08;
      (**(code **)(*local_98[0] + 0xc))();
    }
  }
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bc1a;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 8;
  ppiStack_ac = (int **)0x40bc32;
  FUN_0040c060();
  local_4._0_1_ = 3;
  if (((uStack_90 & 0x10000) == 0) && (local_98[0] != (int *)0x0)) {
    local_98[0][1] = local_98[0][1] + -1;
    if ((local_98[0][1] == 0) && (local_98[0] != (int *)0x0)) {
      ppiStack_a8 = (int **)0x1;
      ppiStack_ac = (int **)0x40bc65;
      (**(code **)(*local_98[0] + 0xc))();
    }
  }
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bc77;
  FUN_00407e60();
  local_4._0_1_ = 9;
  ppiStack_a8 = (int **)0x40bc89;
  fVar3 = (float10)FUN_004b0f20();
  dStack_60 = (double)fVar3;
  local_4._0_1_ = 3;
  ppiStack_a8 = (int **)0x40bc9e;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bcb0;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 10;
  ppiStack_ac = (int **)0x40bcc8;
  FUN_0040c060();
  local_4._0_1_ = 3;
  ppiStack_a8 = (int **)0x40bcd9;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = (int **)auStack_8c;
  puStack_b0 = (undefined1 *)0x40bceb;
  FUN_00407e60();
  puStack_b0 = auStack_8c;
  ppiStack_a8 = (int **)FUN_00409000(local_98);
  local_4._0_1_ = 0xc;
  ppiStack_ac = (int **)0x40bd0f;
  FUN_0040c060();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bd21;
  FUN_00492340();
  ppiStack_a8 = (int **)auStack_8c;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bd30;
  FUN_00407e60();
  local_4._0_1_ = 0xd;
  ppiStack_a8 = (int **)0x40bd42;
  fVar3 = (float10)FUN_004b0f20();
  dStack_50 = (double)fVar3;
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bd56;
  FUN_00492340();
  ppiStack_a8 = (int **)auStack_8c;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bd65;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 0xe;
  ppiStack_ac = (int **)0x40bd7a;
  FUN_0040c060();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bd8a;
  FUN_00492340();
  ppiStack_a8 = (int **)auStack_8c;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bd99;
  FUN_00407e60();
  local_4._0_1_ = 0xf;
  ppiStack_a8 = (int **)0x40bdab;
  fVar3 = (float10)FUN_004b0f20();
  dStack_58 = (double)fVar3;
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bdbf;
  FUN_00492340();
  ppiStack_a8 = (int **)auStack_8c;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bdce;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 0x10;
  ppiStack_ac = (int **)0x40bde3;
  FUN_0040c060();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bdf3;
  FUN_00492340();
  if (cStack_84 == '\x02') {
    puStack_10 = (undefined1 *)&puStack_b0;
    FUN_00407e60(&puStack_b0,auStack_8c);
    local_48 = FUN_0040b400();
    ppiStack_a8 = (int **)FUN_00409000(local_98,auStack_8c);
    local_4._0_1_ = 0x11;
    ppiStack_ac = (int **)0x40be45;
    FUN_0040c060();
    local_4._0_1_ = 0xb;
    ppiStack_a8 = (int **)0x40be55;
    FUN_00492340();
    if (cStack_84 == '\x02') {
      ppiStack_a8 = (int **)auStack_8c;
      ppiStack_ac = local_98;
      puStack_b0 = (undefined1 *)0x40be6b;
      FUN_00407e60();
      local_4._0_1_ = 0x12;
      ppiStack_a8 = (int **)0x40be7d;
      fVar3 = (float10)FUN_004b0f20();
      local_28 = (double)fVar3;
      local_4._0_1_ = 0xb;
      ppiStack_a8 = (int **)0x40be91;
      FUN_00492340();
    }
  }
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bea3;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 0x13;
  ppiStack_ac = (int **)0x40bebb;
  FUN_0040c060();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40becb;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bedd;
  FUN_00407e60();
  local_4._0_1_ = 0x14;
  ppiStack_a8 = (int **)0x40beef;
  fVar3 = (float10)FUN_004b0f20();
  dStack_38 = (double)fVar3;
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bf03;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bf15;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 0x15;
  ppiStack_ac = (int **)0x40bf2d;
  FUN_0040c060();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bf3d;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bf4f;
  FUN_00407e60();
  local_4._0_1_ = 0x16;
  ppiStack_a8 = (int **)0x40bf61;
  uStack_30 = FUN_004b0f30();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bf75;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bf87;
  ppiStack_a8 = (int **)FUN_00409000();
  local_4._0_1_ = 0x17;
  ppiStack_ac = (int **)0x40bf9f;
  FUN_0040c060();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bfaf;
  FUN_00492340();
  ppiStack_a8 = &param_3;
  ppiStack_ac = local_98;
  puStack_b0 = (undefined1 *)0x40bfc1;
  piVar2 = (int *)FUN_00407e60();
  local_4._0_1_ = 0x18;
  ppiStack_a8 = (int **)(*piVar2 + 0xc);
  ppiStack_ac = (int **)0x40bfde;
  FUN_0044c100();
  local_4._0_1_ = 0xb;
  ppiStack_a8 = (int **)0x40bfee;
  FUN_00492340();
  ppiStack_a8 = &local_78;
  ppiStack_ac = (int **)0x40c001;
  FUN_0040c180();
  local_7c = 1;
  local_4._0_1_ = 3;
  ppiStack_a8 = (int **)0x40c01a;
  FUN_00492340();
  local_4._0_1_ = 1;
  ppiStack_a8 = (int **)0x40c02b;
  FUN_0040c100();
  local_4 = (uint)local_4._1_3_ << 8;
  ppiStack_a8 = (int **)0x40c03f;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}

