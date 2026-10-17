
void __thiscall FUN_0060d460(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x38) = *param_2;
  *(undefined4 *)(iVar1 + 0x3c) = param_2[1];
  *(undefined4 *)(iVar1 + 0x40) = param_2[2];
  *(undefined4 *)(iVar1 + 0x44) = *param_3;
  *(undefined4 *)(iVar1 + 0x48) = param_3[1];
  *(undefined4 *)(iVar1 + 0x4c) = param_3[2];
  (**(code **)(**(int **)(iVar1 + 4) + 4))
            ((undefined4 *)(iVar1 + 0x38),(undefined4 *)(iVar1 + 0x44));
  *(undefined4 *)(iVar1 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *(undefined4 *)(*param_1 + 0x14) = 1;
  *(undefined4 *)(*param_1 + 0x18) = 1;
  return;
}

