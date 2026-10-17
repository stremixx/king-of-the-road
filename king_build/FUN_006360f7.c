
void __fastcall FUN_006360f7(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_10 [4];
  int local_c;
  int *local_8;
  
  if (param_1 != 0) {
    local_c = -(uint)(*(int *)(param_1 + 0x2c) != 0);
    while (local_c != 0) {
      FUN_00631ca7(&local_c,local_10,&local_8);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x40) + (int)local_8);
      *puVar1 = 0;
      if (*(int *)(param_1 + 0x44) == 2) {
        puVar1[1] = 0;
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))(1);
      }
    }
    RemoveAll();
  }
  return;
}

