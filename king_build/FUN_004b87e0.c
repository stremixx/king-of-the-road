
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b87e0(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064442e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(4,param_1);
  local_4 = 0;
  if (iVar1 == 0) {
    DAT_00695664 = 0;
  }
  else {
    DAT_00695664 = FUN_004dd860(s_blowgazstation0Sound_00671498);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 1;
  if (iVar1 == 0) {
    DAT_00695668 = 0;
  }
  else {
    DAT_00695668 = FUN_004dd860(s_blowgazstation1Sound_00671480);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 2;
  if (iVar1 == 0) {
    DAT_0069566c = 0;
  }
  else {
    DAT_0069566c = FUN_004dd860(s_blowgazstation2Sound_00671468);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 3;
  if (iVar1 == 0) {
    DAT_00695670 = 0;
  }
  else {
    DAT_00695670 = FUN_004dd860(s_blowgazstation3Sound_00671450);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 4;
  if (iVar1 == 0) {
    _DAT_00695674 = 0;
  }
  else {
    _DAT_00695674 = FUN_004dd860(s_blowkapot0Sound_00671440);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 5;
  if (iVar1 == 0) {
    _DAT_00695678 = 0;
  }
  else {
    _DAT_00695678 = FUN_004dd860(s_blowkapot1Sound_00671430);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 6;
  if (iVar1 == 0) {
    _DAT_0069567c = 0;
  }
  else {
    _DAT_0069567c = FUN_004dd860(s_blowkapot2Sound_00671420);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 7;
  if (iVar1 == 0) {
    DAT_00695680 = 0;
  }
  else {
    DAT_00695680 = FUN_004dd860(s_blowkapot3Sound_00671410);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 8;
  if (iVar1 == 0) {
    _DAT_00695684 = 0;
  }
  else {
    _DAT_00695684 = FUN_004dd860(s_burning0Sound_00671400);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00631d33(4);
  local_4 = 9;
  if (iVar1 != 0) {
    _DAT_00695688 = FUN_004dd860(s_burning1Sound_006713f0);
    ExceptionList = local_c;
    return;
  }
  _DAT_00695688 = 0;
  ExceptionList = local_c;
  return;
}

