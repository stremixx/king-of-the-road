
void __thiscall FUN_00475bc0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_55;
  int local_54;
  undefined1 local_50 [4];
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c [6];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063fd20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_4c = param_1;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),*param_1,param_1[1]);
  local_34 = param_2;
  FUN_00490d40(param_2,&DAT_0066ea98,local_30);
  uVar4 = 0;
  local_c = 0;
  if (param_1[0x7f] != 0) {
    local_54 = param_2;
    FUN_00490d40(param_2,&DAT_0066ea90,local_50);
    local_c._0_1_ = 1;
    FUN_00472310(param_2);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00490d90(local_54,local_50);
  }
  if (param_1[0x80] != 0) {
    local_54 = param_2;
    FUN_00490d40(param_2,&DAT_0066ea88,local_50);
    local_c._0_1_ = 2;
    FUN_00472310(param_2);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00490d90(local_54,local_50);
  }
  local_48 = param_2;
  FUN_00490d40(param_2,&DAT_0066ea80,&local_44);
  local_c = CONCAT31(local_c._1_3_,3);
  local_54 = (int)(param_1[0x11] - param_1[0x10]) / 0x28;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  iVar2 = (int)(param_1[0x11] - param_1[0x10]) >> 0x1f;
  if ((int)(param_1[0x11] - param_1[0x10]) / 0x28 + iVar2 != iVar2) {
    local_54 = 0;
    do {
      FUN_00471c40(param_2);
      local_54 = local_54 + 0x28;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[0x11] - param_1[0x10]) / 0x28));
  }
  local_c = local_c & 0xffffff00;
  FUN_00490d90(local_48,&local_44);
  local_3c = param_2;
  FUN_00490d40(param_2,&DAT_0066ea70,local_38);
  local_54 = param_1[0x15];
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x16];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x17];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_44 = param_1[0x1b];
  local_48 = param_1[0x1a];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_54 = param_1[0xe];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[9];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[8];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_44 = param_1[0xb];
  local_48 = param_1[10];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_54 = param_1[0xc];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0xd];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0xf];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x13];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x1c];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x1d];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x1e];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x1f];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_44 = param_1[0x21];
  local_48 = param_1[0x20];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  FUN_004727d0(param_2);
  local_54 = param_1[0x43] - param_1[0x42];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  iVar2 = param_1[0x42];
  uVar4 = 0;
  if (param_1[0x43] != iVar2) {
    do {
      local_55 = *(undefined1 *)(iVar2 + uVar4);
      FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
      iVar2 = param_1[0x42];
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[0x43] - iVar2));
  }
  local_48 = 0;
  local_44 = 0;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = 0;
  local_44 = 0;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = 0;
  local_44 = 0;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_44 = param_1[0x47];
  local_48 = param_1[0x46];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = param_1[0x48];
  local_44 = param_1[0x49];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_44 = param_1[0x4b];
  local_48 = param_1[0x4a];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = param_1[0x4c];
  local_44 = param_1[0x4d];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = param_1[0x4e];
  local_44 = param_1[0x4f];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = param_1[0x50];
  local_44 = param_1[0x51];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_44 = param_1[0x53];
  local_48 = param_1[0x52];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_55 = *(undefined1 *)(param_1 + 0x7a);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  local_44 = param_1[0x7d];
  local_48 = param_1[0x7c];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_55 = *(undefined1 *)(param_1 + 0x7e);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  FUN_0047a100(0,param_2,param_1[0xb2]);
  local_54 = param_1[0xb4];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = (int)(param_1[5] - param_1[4]) / 0xc;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  uVar4 = 0;
  iVar2 = (int)(param_1[5] - param_1[4]) >> 0x1f;
  if ((int)(param_1[5] - param_1[4]) / 0xc + iVar2 != iVar2) {
    local_54 = 0;
    do {
      FUN_00471900(param_2);
      local_54 = local_54 + 0xc;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[5] - param_1[4]) / 0xc));
  }
  local_54 = param_1[0xb3];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_48 = param_1[0xc4];
  local_44 = param_1[0xc5];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_44 = param_1[0xc9];
  local_48 = param_1[200];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_54 = (int)(param_1[0x23] - param_1[0x22]) >> 3;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  uVar4 = 0;
  if ((int)(param_1[0x23] - param_1[0x22]) >> 3 != 0) {
    do {
      FUN_00471bf0(param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[0x23] - param_1[0x22]) >> 3));
  }
  local_54 = param_1[0x25];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = (int)(param_1[0x27] - param_1[0x26]) >> 4;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  uVar4 = 0;
  if ((int)(param_1[0x27] - param_1[0x26]) >> 4 != 0) {
    local_54 = 0;
    do {
      FUN_00476930(param_2);
      local_54 = local_54 + 0x10;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[0x27] - param_1[0x26]) >> 4));
  }
  if (param_1[0x2a] == DAT_0068a8f0) {
    local_54 = 0;
    FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  }
  else {
    FUN_00479ae0(param_2,param_1[0x2a] + 8);
  }
  local_44 = param_1[0x2f];
  local_48 = param_1[0x2e];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  FUN_004744e0(param_2,param_1 + 0x5c);
  local_55 = *(undefined1 *)(param_1 + 0x7a);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  local_55 = *(undefined1 *)(param_1 + 0x7e);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  local_55 = *(undefined1 *)((int)param_1 + 0x1f9);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  local_54 = param_1[0x81];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x82];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0x84];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_48 = param_1[0x86];
  local_44 = param_1[0x87];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  FUN_004746f0(param_2,param_1 + 0x88);
  local_54 = (int)(param_1[0xa1] - param_1[0xa0]) / 0xc;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  uVar4 = 0;
  iVar2 = (int)(param_1[0xa1] - param_1[0xa0]) >> 0x1f;
  if ((int)(param_1[0xa1] - param_1[0xa0]) / 0xc + iVar2 != iVar2) {
    local_54 = 0;
    do {
      FUN_00471900(param_2);
      local_54 = local_54 + 0xc;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[0xa1] - param_1[0xa0]) / 0xc));
  }
  local_54 = param_1[0xa3];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  FUN_00474620(param_2,param_1 + 0xb6);
  local_44 = param_1[0xbd];
  local_48 = param_1[0xbc];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = param_1[0xbe];
  local_44 = param_1[0xbf];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_55 = *(undefined1 *)(param_1 + 0xc2);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  local_55 = *(undefined1 *)((int)param_1 + 0x309);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_55,&local_54);
  local_44 = param_1[0xc5];
  local_48 = param_1[0xc4];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_48 = param_1[200];
  local_44 = param_1[0xc9];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_54 = param_1[0xd0];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0xcb];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0xca];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_44 = param_1[0xcd];
  local_48 = param_1[0xcc];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_54 = param_1[0xce];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0xcf];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_54 = param_1[0xd1];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_48 = param_1[0xd6];
  local_44 = param_1[0xd7];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_48,local_40);
  local_54 = param_1[0xf6];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_c = local_c & 0xffffff00;
  FUN_00490d90(local_3c,local_38);
  local_3c = param_2;
  FUN_00490d40(param_2,&DAT_0066ea68,local_38);
  uVar1 = *(undefined4 *)(param_2 + 4);
  puVar3 = param_1 + 0xde;
  puVar5 = local_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_c = CONCAT31(local_c._1_3_,5);
  FUN_0046e460(uVar1,local_2c,&local_14);
  uVar1 = *(undefined4 *)(param_2 + 4);
  puVar3 = local_4c + 0xe4;
  puVar5 = local_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0046e460(uVar1,local_2c,&local_14);
  local_54 = local_4c[0xea];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_54,local_50);
  local_c = local_c & 0xffffff00;
  FUN_00490d90(local_3c,local_38);
  local_c = 0xffffffff;
  FUN_00490d90(local_34,local_30);
  ExceptionList = local_14;
  return;
}

