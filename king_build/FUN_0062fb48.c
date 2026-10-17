
uint __thiscall FUN_0062fb48(int *param_1,uint param_2)

{
  if ((undefined1 *)param_1[7] < (undefined1 *)param_1[8]) {
    *(undefined1 *)param_1[7] = (undefined1)param_2;
    param_1[7] = param_1[7] + 1;
    param_2 = param_2 & 0xff;
  }
  else {
    param_2 = (**(code **)(*param_1 + 0x1c))(param_2);
  }
  return param_2;
}

