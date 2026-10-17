
void __thiscall FUN_00471dc0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  uint local_4;
  
  iVar1 = param_2;
  local_8 = param_1[1] - *param_1 >> 4;
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_8,&local_4);
  iVar2 = *param_1;
  local_4 = 0;
  if (param_1[1] - iVar2 >> 4 != 0) {
    local_8 = 0;
    do {
      uVar4 = 0;
      iVar2 = *(int *)(local_8 + iVar2);
      if (iVar2 == DAT_0068a8f0) {
        param_2 = 0;
        FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
      }
      else {
        param_2 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8);
        FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
        iVar3 = *(int *)(iVar2 + 8);
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          do {
            param_2 = CONCAT31(param_2._1_3_,*(undefined1 *)(iVar3 + uVar4));
            FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 1);
            iVar3 = *(int *)(iVar2 + 8);
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)(*(int *)(iVar2 + 0xc) - iVar3));
        }
      }
      local_8 = local_8 + 0x10;
      iVar2 = *param_1;
      local_4 = local_4 + 1;
    } while (local_4 < (uint)(param_1[1] - iVar2 >> 4));
  }
  param_2 = param_1[3];
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
  return;
}

