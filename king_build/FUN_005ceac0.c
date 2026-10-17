
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ceac0(int *param_1)

{
  undefined4 *puVar1;
  
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 0x14))
              (*(undefined4 *)(param_1[0x19] + 0xb90),*(undefined4 *)(param_1[0x19] + 0xb94));
    puVar1 = (undefined4 *)param_1[0x18];
    if (*(double *)(puVar1 + 4) <= _DAT_0064a668) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      param_1[0x18] = 0;
      (**(code **)(*param_1 + 0x1c))(1);
      return;
    }
    FUN_005d29a0(1);
  }
  return;
}

