
void __thiscall FUN_0061b5e0(int param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x50))(param_2,0x88,1);
  FUN_005b06d0(*(undefined4 *)(param_1 + 0x9ca8),1,0,0);
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x68))
                      (param_2,4,0x212,*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x60),param_1 + 0x6c,*(int *)(param_1 + 100),0);
    if (iVar1 < 0) {
      FUN_005d42c0(iVar1,0);
    }
  }
  FUN_005b06d0(*(undefined4 *)(param_1 + 0x9cb0),1,0,0);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x68))
                      (param_2,4,0x212,*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x60),param_1 + 0x4e8a,*(int *)(param_1 + 0x68),0);
    if (iVar1 < 0) {
      FUN_005d42c0(iVar1,0);
    }
  }
  return;
}

