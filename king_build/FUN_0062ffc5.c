
int __thiscall FUN_0062ffc5(int *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  if ((uint)param_1[9] < (uint)param_1[10]) {
    pcVar1 = (char *)(param_1[10] - 1);
    param_1[10] = (int)pcVar1;
    *pcVar1 = param_2;
    iVar2 = (int)param_2;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x24))((int)param_2);
  }
  return iVar2;
}

