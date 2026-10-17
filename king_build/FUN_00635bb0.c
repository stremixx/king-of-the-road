
void __thiscall FUN_00635bb0(int *param_1,int param_2)

{
  FUN_00635a3a();
  if (param_2 == -1) {
    param_2 = lstrlenA((LPCSTR)*param_1);
  }
  *(int *)(*param_1 + -8) = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}

