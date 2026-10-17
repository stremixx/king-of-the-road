
void __thiscall FUN_004c8630(int param_1,int *param_2)

{
  if ((*(int *)(param_1 + 0x8a8) != 0) && (*(int *)(param_1 + 0x8a4) != 0)) {
    (**(code **)(*param_2 + 0x50))(param_2,0x88,1);
    (**(code **)(*param_2 + 0x68))
              (param_2,4,0x242,param_1 + 4,*(undefined4 *)(param_1 + 0x8a8),param_1 + 0x824,
               *(undefined4 *)(param_1 + 0x8a4),0);
  }
  return;
}

