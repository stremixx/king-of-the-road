
void __fastcall FUN_00592540(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

