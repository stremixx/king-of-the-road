
undefined4 __thiscall
FUN_004c0af0(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(int *)(param_1 + 0x40) = param_4 * 3;
  (**(code **)(*param_2 + 0x14))(param_5,param_1);
  return 0;
}

