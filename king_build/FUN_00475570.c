
void __thiscall FUN_00475570(undefined4 *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar2 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fcb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046e460(*(undefined4 *)((int)param_2 + 4),*param_1,param_1[1]);
  local_14 = iVar2;
  FUN_00490d40(iVar2,&DAT_0066ea98,local_10);
  local_4 = 0;
  local_24 = iVar2;
  FUN_00490d40(iVar2,&DAT_0066ea80,&local_20);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_2 = (float)((int)(param_1[0x11] - param_1[0x10]) / 0x28);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  uVar3 = 0;
  iVar1 = (int)(param_1[0x11] - param_1[0x10]) >> 0x1f;
  if ((int)(param_1[0x11] - param_1[0x10]) / 0x28 + iVar1 != iVar1) {
    do {
      FUN_00471c40(iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[0x11] - param_1[0x10]) / 0x28));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00490d90(local_24,&local_20);
  local_1c = iVar2;
  FUN_00490d40(iVar2,&DAT_0066ea78,local_18);
  param_2 = (float)param_1[0x15];
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[0x16];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[0x17];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[0xe];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[9];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[8];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  local_24 = param_1[10];
  local_20 = param_1[0xb];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&local_24,&local_1c);
  param_2 = (float)param_1[0xc];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[0xd];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)param_1[0xf];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)*(double *)(param_1 + 0x52);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)*(double *)(param_1 + 0x7c);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)CONCAT31(param_2._1_3_,*(undefined1 *)(param_1 + 0x7e));
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,(int)&param_2 + 1);
  FUN_0047a100(0,iVar2,param_1[0xb2]);
  param_2 = (float)param_1[0xb4];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)((int)(param_1[5] - param_1[4]) / 0xc);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  uVar3 = 0;
  iVar1 = (int)(param_1[5] - param_1[4]) >> 0x1f;
  if ((int)(param_1[5] - param_1[4]) / 0xc + iVar1 != iVar1) {
    do {
      FUN_00471900(iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[5] - param_1[4]) / 0xc));
  }
  param_2 = (float)param_1[0xb3];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)*(double *)(param_1 + 0xc4);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (float)*(double *)(param_1 + 200);
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  local_4 = local_4 & 0xffffff00;
  FUN_00490d90(local_1c,local_18);
  local_4 = 0xffffffff;
  FUN_00490d90(local_14,local_10);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xd9] = param_1[0x16];
  param_1[0xda] = param_1[0x17];
  ExceptionList = local_c;
  return;
}

