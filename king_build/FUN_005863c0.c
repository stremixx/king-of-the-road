
undefined4 __thiscall FUN_005863c0(int *param_1,int *param_2)

{
  if (*param_2 != param_1[0x129]) {
    FUN_004e1e9c(s__MovingItem__receiveNetMessage___006774d0);
  }
  switch(param_2[1]) {
  case 1:
    (**(code **)(*param_1 + 0xb0))(param_2 + 2);
    return 1;
  default:
    return 0;
  case 3:
    (**(code **)(*param_1 + 0xd8))();
    return 1;
  case 4:
    (**(code **)(*param_1 + 0xd4))();
    return 1;
  case 0xc:
    FUN_00586320(param_2 + 2);
    return 1;
  }
}

