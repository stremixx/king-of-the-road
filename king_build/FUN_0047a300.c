
int * __thiscall FUN_0047a300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_25;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063ff0e;
  local_14 = ExceptionList;
  iVar1 = param_2[1] - *param_2;
  iVar2 = 0;
  ExceptionList = &local_14;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_1c = param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_0044b6e0(iVar1);
  }
  *param_1 = iVar2;
  param_1[1] = iVar2;
  param_1[2] = *param_1 + iVar1;
  iVar1 = FUN_00407250(*param_2,param_2[1],*param_1);
  param_1[1] = iVar1;
  piVar3 = (int *)0x0;
  local_c = 0;
  if (param_2 != (int *)0x0) {
    piVar3 = param_2 + 4;
  }
  local_20 = param_1 + 4;
  FUN_004abe00((piVar3[1] - *piVar3) / 0xc,&local_25);
  local_c._0_1_ = 1;
  iVar1 = FUN_0046f490(*piVar3,piVar3[1],param_1[4],local_1c);
  param_1[5] = iVar1;
  piVar3 = piVar3 + 4;
  piVar4 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  local_c._0_1_ = 2;
  if (param_2 == (int *)0x0) {
    local_24 = (int *)0x0;
  }
  else {
    local_24 = param_2 + 0x10;
  }
  piVar3 = param_1 + 0x10;
  local_20 = (int *)((local_24[1] - *local_24) / 0x28);
  iVar1 = 0;
  *piVar3 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_18 = piVar3;
  if (local_20 != (int *)0x0) {
    iVar1 = FUN_0044b6e0((int)local_20 * 0x28);
  }
  *piVar3 = iVar1;
  param_1[0x11] = iVar1;
  param_1[0x12] = iVar1 + (int)local_20 * 0x28;
  local_20 = (int *)*local_24;
  local_c._0_1_ = 3;
  iVar1 = FUN_0047d560(local_20,local_24[1],iVar1,local_18);
  param_1[0x11] = iVar1;
  local_c._0_1_ = 4;
  if (param_2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = param_2 + 0x13;
  }
  piVar4 = param_1 + 0x22;
  param_1[0x13] = *piVar3;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  local_20 = (int *)(param_2[0x23] - param_2[0x22] >> 3);
  iVar1 = 0;
  *piVar4 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  local_18 = piVar4;
  if (local_20 != (int *)0x0) {
    iVar1 = FUN_0044b6e0((int)local_20 << 3);
  }
  *piVar4 = iVar1;
  param_1[0x23] = iVar1;
  param_1[0x24] = iVar1 + (int)local_20 * 8;
  local_c._0_1_ = 5;
  iVar1 = FUN_0047d690(param_2[0x22],param_2[0x23],iVar1,local_18);
  param_1[0x23] = iVar1;
  piVar3 = param_1 + 0x26;
  param_1[0x25] = param_2[0x25];
  local_c._0_1_ = 6;
  local_20 = (int *)(param_2[0x27] - param_2[0x26] >> 4);
  iVar1 = 0;
  *piVar3 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  local_18 = piVar3;
  if (local_20 != (int *)0x0) {
    iVar1 = FUN_0044b6e0((int)local_20 << 4);
  }
  *piVar3 = iVar1;
  param_1[0x27] = iVar1;
  param_1[0x28] = (int)local_20 * 0x10 + iVar1;
  local_c._0_1_ = 7;
  iVar1 = FUN_004662a0(param_2[0x26],param_2[0x27],iVar1,local_18);
  param_1[0x27] = iVar1;
  local_c._0_1_ = 8;
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  iVar1 = param_2[0x2c] - param_2[0x2b];
  iVar2 = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0044b6e0(iVar1);
  }
  param_1[0x2b] = iVar2;
  param_1[0x2c] = iVar2;
  param_1[0x2d] = iVar2 + iVar1;
  iVar1 = FUN_00407250(param_2[0x2b],param_2[0x2c],iVar2);
  param_1[0x2c] = iVar1;
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  local_c._0_1_ = 9;
  piVar3 = param_2 + 0x30;
  piVar4 = param_1 + 0x30;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar1 = 0;
  local_20 = (int *)(param_2[0x43] - param_2[0x42]);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  if (local_20 != (int *)0x0) {
    iVar1 = FUN_0044b6e0(local_20);
  }
  param_1[0x42] = iVar1;
  param_1[0x43] = iVar1;
  param_1[0x44] = iVar1 + (int)local_20;
  local_20 = (int *)param_2[0x43];
  iVar2 = param_2[0x42];
  FUN_0061c980(iVar1,iVar2,(int)local_20 - iVar2);
  param_1[0x43] = (iVar1 - iVar2) + (int)local_20;
  local_c._0_1_ = 10;
  piVar3 = param_2 + 0x46;
  piVar4 = param_1 + 0x46;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_2 + 0x4c;
  piVar4 = param_1 + 0x4c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  piVar3 = param_2 + 0x56;
  piVar4 = param_1 + 0x56;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_2 + 0x5c;
  piVar4 = param_1 + 0x5c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_2 + 0x66;
  piVar4 = param_1 + 0x66;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_2 + 0x70;
  piVar4 = param_1 + 0x70;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  *(char *)(param_1 + 0x7a) = (char)param_2[0x7a];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = param_2[0x7d];
  *(char *)(param_1 + 0x7e) = (char)param_2[0x7e];
  *(undefined1 *)((int)param_1 + 0x1f9) = *(undefined1 *)((int)param_2 + 0x1f9);
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = param_2[0x83];
  param_1[0x84] = param_2[0x84];
  param_1[0x86] = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  piVar3 = param_2 + 0x88;
  piVar4 = param_1 + 0x88;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar1 = (param_2[0xa1] - param_2[0xa0]) / 0xc;
  piVar3 = param_1 + 0xa0;
  iVar2 = 0;
  *piVar3 = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  local_18 = piVar3;
  if (iVar1 != 0) {
    iVar2 = FUN_0044b6e0(iVar1 * 0xc);
  }
  *piVar3 = iVar2;
  param_1[0xa1] = iVar2;
  param_1[0xa2] = iVar2 + iVar1 * 0xc;
  local_c = CONCAT31(local_c._1_3_,0xb);
  iVar1 = FUN_0046f490(param_2[0xa0],param_2[0xa1],iVar2,local_18);
  param_1[0xa1] = iVar1;
  param_1[0xa3] = param_2[0xa3];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa5] = param_2[0xa5];
  piVar3 = param_2 + 0xa6;
  piVar4 = param_1 + 0xa6;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  piVar3 = param_2 + 0xb6;
  piVar4 = param_1 + 0xb6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0xbc] = param_2[0xbc];
  param_1[0xbd] = param_2[0xbd];
  param_1[0xbe] = param_2[0xbe];
  param_1[0xbf] = param_2[0xbf];
  param_1[0xc0] = param_2[0xc0];
  param_1[0xc1] = param_2[0xc1];
  *(char *)(param_1 + 0xc2) = (char)param_2[0xc2];
  *(undefined1 *)((int)param_1 + 0x309) = *(undefined1 *)((int)param_2 + 0x309);
  param_1[0xc4] = param_2[0xc4];
  param_1[0xc5] = param_2[0xc5];
  *(char *)(param_1 + 0xc6) = (char)param_2[0xc6];
  param_1[200] = param_2[200];
  param_1[0xc9] = param_2[0xc9];
  piVar3 = param_2 + 0xca;
  piVar4 = param_1 + 0xca;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  *(char *)(param_1 + 0xd2) = (char)param_2[0xd2];
  param_1[0xd3] = param_2[0xd3];
  param_1[0xd4] = param_2[0xd4];
  param_1[0xd6] = param_2[0xd6];
  param_1[0xd7] = param_2[0xd7];
  *(char *)(param_1 + 0xd8) = (char)param_2[0xd8];
  param_1[0xd9] = param_2[0xd9];
  param_1[0xda] = param_2[0xda];
  param_1[0xdb] = param_2[0xdb];
  param_1[0xdc] = param_2[0xdc];
  *(undefined8 *)(param_1 + 0xde) = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(param_2 + 0xe6);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  param_1[0xea] = param_2[0xea];
  param_1[0xec] = param_2[0xec];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = param_2[0xee];
  param_1[0xef] = param_2[0xef];
  param_1[0xf0] = param_2[0xf0];
  param_1[0xf1] = param_2[0xf1];
  *(char *)(param_1 + 0xf2) = (char)param_2[0xf2];
  param_1[0xf4] = param_2[0xf4];
  param_1[0xf5] = param_2[0xf5];
  param_1[0xf6] = param_2[0xf6];
  ExceptionList = local_14;
  return param_1;
}

