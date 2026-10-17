
void __fastcall FUN_0048e240(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_b04 [12];
  undefined1 local_ad4 [576];
  int local_894;
  undefined4 local_890 [144];
  int local_650;
  undefined1 local_648 [24];
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628 [145];
  undefined4 local_3e4 [49];
  undefined4 local_320 [50];
  undefined1 local_258 [580];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006409f2;
  local_14 = ExceptionList;
  local_b04[0] = 0;
  local_b04[1] = 0x3ff00000;
  local_b04[2] = 0;
  local_b04[3] = 0x3ff00000;
  local_b04[4] = 0;
  local_b04[5] = 0x3ff00000;
  puVar3 = local_b04;
  puVar4 = local_b04;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b04[6] = 0;
  local_b04[7] = 0xbff00000;
  local_b04[8] = 0;
  local_b04[9] = 0xbff00000;
  local_b04[10] = 0;
  local_b04[0xb] = 0xbff00000;
  local_894 = 0;
  puVar3 = local_b04 + 6;
  puVar4 = local_b04 + 6;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_c = 0;
  ExceptionList = &local_14;
  FUN_00461690(local_ad4,local_b04 + 6);
  local_894 = local_894 + 1;
  FUN_00461690(local_ad4 + local_894 * 0x18,local_b04);
  local_894 = local_894 + 1;
  local_c = 1;
  uVar1 = FUN_0048ee50(local_258,local_ad4);
  local_c._0_1_ = 2;
  FUN_0048dc60(uVar1);
  puVar3 = local_890;
  puVar4 = param_1;
  for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00405ed0(local_648);
  param_1[0x98] = local_630;
  param_1[0x99] = local_62c;
  puVar3 = local_628;
  puVar4 = param_1 + 0x9a;
  for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_3e4;
  puVar4 = param_1 + 299;
  for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_320;
  puVar4 = param_1 + 0x15c;
  for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_c._0_1_ = 5;
  FUN_004030a0();
  local_c._0_1_ = 4;
  FUN_004030a0();
  local_c._0_1_ = 3;
  FUN_004030a0();
  local_c = CONCAT31(local_c._1_3_,2);
  for (puVar3 = local_890; puVar3 != local_890 + local_650 * 6; puVar3 = puVar3 + 6) {
    FUN_004030a0(puVar3);
  }
  ExceptionList = local_14;
  return;
}

