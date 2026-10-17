
uint __thiscall FUN_005f2470(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_005f1850(0,param_2,param_3);
    return uVar1;
  }
  if ((*(int **)(param_1 + 0x68) != (int *)0x0) && ((param_2 & 4) != 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x34))(param_2 | 1,param_3);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    }
    return uVar1;
  }
  uVar1 = FUN_005f1850(0,param_2,param_3);
  return uVar1;
}

