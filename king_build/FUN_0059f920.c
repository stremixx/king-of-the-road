
void __thiscall
FUN_0059f920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1920) != 0x32) {
    iVar1 = FUN_0059f8d0(param_2,param_5);
    if (iVar1 == 0) {
      FUN_0059ef60(param_2,param_3,*param_4,param_4[1],param_4[2],param_5,param_6);
      *(undefined4 *)(param_1 + 0x88 + *(int *)(param_1 + 0x1920) * 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x1920) * 0x7c) = 1;
      *(int *)(param_1 + 0x1920) = *(int *)(param_1 + 0x1920) + 1;
      return;
    }
    FUN_0059ef60(param_2,param_3,*param_4,param_4[1],param_4[2],param_5,param_6);
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 1;
  }
  return;
}

