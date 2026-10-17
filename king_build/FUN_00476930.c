
void __thiscall FUN_00476930(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_4;
  
  iVar2 = param_2;
  iVar1 = *param_1;
  if (iVar1 == DAT_0068a8f0) {
    local_4 = 0;
    FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_4,&stack0x00000000);
    return;
  }
  local_4 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_4,&stack0x00000000);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = 0;
  if (*(int *)(iVar1 + 0xc) != iVar3) {
    do {
      param_2 = CONCAT31(param_2._1_3_,*(undefined1 *)(iVar3 + uVar4));
      FUN_0046e460(*(undefined4 *)(iVar2 + 4),&param_2,(int)&param_2 + 1);
      iVar3 = *(int *)(iVar1 + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(iVar1 + 0xc) - iVar3));
  }
  return;
}

