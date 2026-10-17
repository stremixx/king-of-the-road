
void __fastcall FUN_00578af0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_0064f32c;
  puVar1 = (undefined4 *)param_1[2];
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}

