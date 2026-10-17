
void __fastcall FUN_00531a60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x574);
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x104);
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x100);
  if (iVar4 == 0) {
    iVar5 = *(int *)(param_1 + 0x560);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x558);
  }
  iVar5 = *(int *)(&DAT_00695b58 + iVar4 * 4) + iVar5;
  iVar2 = __ftol();
  iVar4 = *(int *)(&DAT_00695b80 + iVar4 * 4) + iVar2;
  if ((0x30b < iVar1) && (0x243 < iVar3)) {
    iVar2 = iVar2 + 0x32;
    iVar4 = iVar4 + 0x32;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar2 < DAT_00671d7c) {
    iVar2 = DAT_00671d7c;
  }
  if (iVar4 <= iVar2) {
    iVar4 = iVar2 + 1;
  }
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if ((iVar5 < iVar1) || (iVar3 = iVar5 + 1, iVar5 + 1 < iVar1)) {
    iVar3 = iVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))(iVar5,iVar2,iVar3,iVar4);
  return;
}

