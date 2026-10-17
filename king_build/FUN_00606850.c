
void __fastcall FUN_00606850(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xd];
  *param_1 = &PTR_FUN_00651e90;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    (**(code **)(*piVar1 + 0x2c))();
    (**(code **)(*piVar1 + 0x30))();
  }
  return;
}

