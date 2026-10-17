
void __thiscall FUN_00579100(int param_1,undefined4 param_2,int *param_3)

{
  if (((*(int *)(param_1 + 0x1b04) != 0) && (*(int *)(param_1 + 0x1b00) != 0)) &&
     (*(int *)(param_1 + 0x1b08) != 0)) {
    FUN_005b06d0(*(int *)(param_1 + 0x1b08),1,0,0);
    (**(code **)(*param_3 + 0x50))(param_3,0x88,1);
    (**(code **)(*param_3 + 0x68))
              (param_3,4,0x112,param_1,*(undefined4 *)(param_1 + 0x1b04),&DAT_006f3b40,
               *(undefined4 *)(param_1 + 0x1b00),0);
  }
  return;
}

