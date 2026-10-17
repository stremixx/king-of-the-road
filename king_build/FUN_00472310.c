
void __thiscall FUN_00472310(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = param_1[1];
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_4,&stack0x00000000);
  param_2 = param_1[1];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = *param_1;
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  param_2 = (int)(param_1[5] - param_1[4]) >> 4;
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  uVar3 = 0;
  if ((int)(param_1[5] - param_1[4]) >> 4 != 0) {
    do {
      FUN_00471b60(iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[5] - param_1[4]) >> 4));
  }
  param_2 = (int)(param_1[8] - param_1[7]) / 0x90;
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  iVar1 = (int)(param_1[8] - param_1[7]) >> 0x1f;
  uVar3 = 0;
  if ((int)(param_1[8] - param_1[7]) / 0x90 + iVar1 != iVar1) {
    do {
      FUN_00470e60(iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[8] - param_1[7]) / 0x90));
  }
  param_2 = param_1[10];
  FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,&stack0x00000008);
  return;
}

