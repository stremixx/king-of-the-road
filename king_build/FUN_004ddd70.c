
void __fastcall FUN_004ddd70(int *param_1)

{
  undefined4 *puVar1;
  
  if (DAT_006cdbc8 != 0) {
    if (param_1[0x89] != 0) {
      puVar1 = *(undefined4 **)(param_1[0x89] + 0x44);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1[0x89] + 0x44) = 0;
      if ((undefined4 *)param_1[0x89] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x89])(1);
      }
    }
    param_1[0x89] = 0;
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}

