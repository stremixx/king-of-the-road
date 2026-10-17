
void __thiscall FUN_0059e130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4) + 0x58) =
       0x3f5c28f6;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4) + 0x28) =
       *(undefined4 *)(param_1 + 0xb8);
  iVar1 = *(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x1000;
  FUN_0059a090(param_2,param_3);
  iVar1 = *(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffefff;
  return;
}

