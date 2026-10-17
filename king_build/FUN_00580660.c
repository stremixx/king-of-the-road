
void __thiscall FUN_00580660(int *param_1,undefined4 param_2,int param_3)

{
  FUN_0058def0(param_2,s_set_place_1_0067c3f4,0);
  if ((char)param_1[0x11b] != '\0') {
    (**(code **)(*(int *)param_1[8] + 0x24))();
    (**(code **)(*param_1 + 0x28))(0,param_1 + 0x11b);
    return;
  }
  FUN_005f1800(param_2,0);
  (**(code **)(*(int *)param_1[8] + 0x24))();
  param_1[0xe] = param_3;
  (**(code **)(*param_1 + 0x28))(param_3,0);
  return;
}

