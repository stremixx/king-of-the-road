
void __thiscall FUN_0059dfe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4) + 0x58) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4) + 0x28) = 0xf9;
  iVar2 = thunk_FUN_005b5b70();
  FUN_004ccac0();
  uVar1 = __ftol();
  *(undefined1 *)(iVar2 + 0x303) = uVar1;
  FUN_004ccac0();
  uVar1 = __ftol();
  *(undefined1 *)(iVar2 + 0x304) = uVar1;
  FUN_004ccac0();
  uVar1 = __ftol();
  *(undefined1 *)(iVar2 + 0x305) = uVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4);
  *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) | 0x1000;
  FUN_0059a090(param_2,param_3);
  iVar2 = *(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4);
  *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & 0xffffefff;
  return;
}

