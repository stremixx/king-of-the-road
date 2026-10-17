
void FUN_0050c230(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_006957ac;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006456d5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cdc04 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_005db0f0(DAT_006cdc04);
  }
  iVar2 = FUN_00631d33(0x200);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_006cdc04 = (int *)0x0;
  }
  else {
    DAT_006cdc04 = (int *)FUN_0051db20(uVar1,0);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc04);
  (**(code **)(*DAT_006cdc04 + 0x20))();
  if (DAT_006cdc00 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc00);
  }
  iVar2 = FUN_00631d33(0x208);
  local_4 = 1;
  if (iVar2 == 0) {
    DAT_006cdc00 = (int *)0x0;
  }
  else {
    DAT_006cdc00 = (int *)FUN_0051d290(uVar1,0);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc00);
  (**(code **)(*DAT_006cdc00 + 0x20))();
  if (DAT_006cdc08 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc08);
  }
  iVar2 = FUN_00631d33(0x1c0);
  local_4 = 2;
  if (iVar2 == 0) {
    DAT_006cdc08 = (int *)0x0;
  }
  else {
    DAT_006cdc08 = (int *)FUN_0051e680(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc08);
  (**(code **)(*DAT_006cdc08 + 0x20))();
  if (DAT_006cdc0c != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc0c);
  }
  iVar2 = FUN_00631d33(0x198);
  local_4 = 3;
  if (iVar2 == 0) {
    DAT_006cdc0c = (int *)0x0;
  }
  else {
    DAT_006cdc0c = (int *)FUN_0051fa20(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc0c);
  (**(code **)(*DAT_006cdc0c + 0x20))();
  if (DAT_006cdc10 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc10);
  }
  iVar2 = FUN_00631d33(0x1f8);
  local_4 = 4;
  if (iVar2 == 0) {
    DAT_006cdc10 = (int *)0x0;
  }
  else {
    DAT_006cdc10 = (int *)FUN_00520610(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc10);
  (**(code **)(*DAT_006cdc10 + 0x20))();
  if (DAT_006cdc14 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc14);
  }
  iVar2 = FUN_00631d33(0x170);
  local_4 = 5;
  if (iVar2 == 0) {
    DAT_006cdc14 = (int *)0x0;
  }
  else {
    DAT_006cdc14 = (int *)FUN_005220c0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc14);
  (**(code **)(*DAT_006cdc14 + 0x20))();
  if (DAT_006cdc1c != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc1c);
  }
  iVar2 = FUN_00631d33(0x410);
  local_4 = 6;
  if (iVar2 == 0) {
    DAT_006cdc1c = (int *)0x0;
  }
  else {
    DAT_006cdc1c = (int *)FUN_00525c50(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc1c);
  (**(code **)(*DAT_006cdc1c + 0x20))();
  if (DAT_006cdc4c != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc4c);
  }
  iVar2 = FUN_00631d33(0x178);
  local_4 = 7;
  if (iVar2 == 0) {
    DAT_006cdc4c = (int *)0x0;
  }
  else {
    DAT_006cdc4c = (int *)FUN_0051e140(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc4c);
  (**(code **)(*DAT_006cdc4c + 0x20))();
  if (DAT_006cdc50 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc50);
  }
  iVar2 = FUN_00631d33(0x1b8);
  local_4 = 8;
  if (iVar2 == 0) {
    DAT_006cdc50 = (int *)0x0;
  }
  else {
    DAT_006cdc50 = (int *)FUN_00525330(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc50);
  (**(code **)(*DAT_006cdc50 + 0x20))();
  if (DAT_006cdc3c != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc3c);
  }
  iVar2 = FUN_00631d33(0x3d0);
  local_4 = 9;
  if (iVar2 == 0) {
    DAT_006cdc3c = (int *)0x0;
  }
  else {
    DAT_006cdc3c = (int *)FUN_00522a50(uVar1,0);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc3c);
  (**(code **)(*DAT_006cdc3c + 0x20))();
  if (DAT_006cdc40 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc40);
  }
  iVar2 = FUN_00631d33(0x3d0);
  local_4 = 10;
  if (iVar2 == 0) {
    DAT_006cdc40 = (int *)0x0;
  }
  else {
    DAT_006cdc40 = (int *)FUN_00522a50(uVar1,1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc40);
  (**(code **)(*DAT_006cdc40 + 0x20))();
  if (DAT_006cdc44 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc44);
  }
  iVar2 = FUN_00631d33(0x3d0);
  local_4 = 0xb;
  if (iVar2 == 0) {
    DAT_006cdc44 = (int *)0x0;
  }
  else {
    DAT_006cdc44 = (int *)FUN_00522a50(uVar1,2);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc44);
  (**(code **)(*DAT_006cdc44 + 0x20))();
  if (DAT_006cdc48 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdc48);
  }
  iVar2 = FUN_00631d33(0x3d0);
  local_4 = 0xc;
  if (iVar2 == 0) {
    DAT_006cdc48 = (int *)0x0;
  }
  else {
    DAT_006cdc48 = (int *)FUN_00522a50(uVar1,3);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdc48);
  (**(code **)(*DAT_006cdc48 + 0x20))();
  if (DAT_006cdbd8 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdbd8);
  }
  iVar2 = FUN_00631d33(400);
  local_4 = 0xd;
  if (iVar2 == 0) {
    DAT_006cdbd8 = (int *)0x0;
  }
  else {
    DAT_006cdbd8 = (int *)FUN_005165d0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdbd8);
  (**(code **)(*DAT_006cdbd8 + 0x20))();
  if (DAT_006cdbd4 != (int *)0x0) {
    FUN_005db0f0(DAT_006cdbd4);
  }
  iVar2 = FUN_00631d33(400);
  local_4 = 0xe;
  if (iVar2 == 0) {
    DAT_006cdbd4 = (int *)0x0;
  }
  else {
    DAT_006cdbd4 = (int *)FUN_00516c60(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_005e3810(DAT_006cdbd4);
  (**(code **)(*DAT_006cdbd4 + 0x20))();
  iVar3 = FUN_005686e0();
  pcVar4 = s_m15_pause_msk_00675200;
  if (iVar3 != 2) {
    pcVar4 = s_m16_pause_msk_006751f0;
  }
  DAT_006cdc98 = FUN_005eea00(pcVar4,iVar2);
  ExceptionList = pvStack_c;
  return;
}

