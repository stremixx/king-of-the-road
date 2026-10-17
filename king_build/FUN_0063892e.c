
void __thiscall FUN_0063892e(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0061bb81();
  if (iVar1 == param_1) {
    (**(code **)(*param_2 + 4))(*(int *)(param_1 + 0x50) != 0);
  }
  else {
    param_2[7] = 1;
  }
  return;
}

