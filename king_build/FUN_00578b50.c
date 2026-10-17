
int __fastcall FUN_00578b50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  iVar4 = *(int *)(iVar1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = iVar2;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  *(int *)(param_1 + 4) = iVar4;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0xc) = uVar3;
  }
  return iVar1;
}

