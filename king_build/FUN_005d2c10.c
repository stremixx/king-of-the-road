
void __fastcall FUN_005d2c10(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[3];
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005d2730();
    while (puVar2 != (undefined4 *)0x0) {
      FUN_005d1860();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      puVar2 = (undefined4 *)FUN_005d2730();
    }
    (**(code **)*puVar1)(1);
    param_1[3] = 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005d2730();
    while (puVar2 != (undefined4 *)0x0) {
      FUN_005d1860();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      puVar2 = (undefined4 *)FUN_005d2730();
    }
    iVar3 = FUN_005d21d0(puVar1);
    if (iVar3 == 0) {
      FUN_005d2520(s_incorrect_release_task_0067eb7c,0);
    }
    (**(code **)*puVar1)(1);
    param_1[2] = 0;
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005d2730();
    while (puVar2 != (undefined4 *)0x0) {
      FUN_005d1860();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      puVar2 = (undefined4 *)FUN_005d2730();
    }
    (**(code **)*puVar1)(1);
    param_1[1] = 0;
  }
  return;
}

