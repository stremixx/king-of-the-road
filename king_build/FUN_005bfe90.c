
void __thiscall FUN_005bfe90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_005bcc50(param_1 + 0x44);
  FUN_005bcc50(param_1 + 0x68);
  FUN_005bcc50(param_1 + 0x8c);
  FUN_005bcc50(param_1 + 0xb0);
  FUN_005bdf70(0,param_1 + 0x14c,FUN_005bfdd0,param_1,
               *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x134) + param_2 * 2,param_2,0,0);
  if (((*(int *)(param_1 + 0x10) == 0) || (*(char **)(param_1 + 0xc) == (char *)0x0)) ||
     (**(char **)(param_1 + 0xc) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x154);
    iVar2 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c)) - param_2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + iVar2;
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + iVar2;
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 2;
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x154);
    iVar2 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c)) - param_2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x14) + 2;
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + iVar2;
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + iVar2;
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + iVar3;
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + iVar3;
  }
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x15c);
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + (*(int *)(param_1 + 0x15c) - param_2);
  return;
}

