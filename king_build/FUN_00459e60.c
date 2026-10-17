
void __fastcall FUN_00459e60(int *param_1)

{
  if ((param_1[4] != 0) && (*param_1 + 1 != 0)) {
    FUN_0044b440(param_1[4],*param_1 + 1);
  }
  if (((char)param_1[6] != '\0') && ((undefined4 *)param_1[5] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  return;
}

