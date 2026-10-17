
void __thiscall FUN_005c5750(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x170) = param_3 + 1;
  *(int *)(param_1 + 0x16c) = param_3;
  uVar2 = FUN_005c2700(param_3,2,param_1);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  iVar1 = *(int *)(param_1 + 0x170);
  *(int *)(param_1 + 0x170) = iVar1 + 1;
  uVar2 = FUN_005c2700(iVar1,1,*(undefined4 *)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  iVar1 = *(int *)(param_1 + 0x170);
  *(int *)(param_1 + 0x170) = iVar1 + 1;
  uVar2 = FUN_005c27b0(iVar1,param_1,&LAB_005c57f0,0x40);
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x174) = 1;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 5;
  return;
}

