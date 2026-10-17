
void __fastcall FUN_004ddd30(int *param_1)

{
  FUN_004ddd70();
  if ((int *)param_1[0x4bf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4bf] + 0x24))();
    if ((undefined4 *)param_1[0x4bf] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x4bf])(1);
    }
    param_1[0x4bf] = 0;
  }
  (**(code **)(*param_1 + 0x20))();
  return;
}

