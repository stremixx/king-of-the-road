
undefined4 __fastcall FUN_00639334(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xac) == 0) || (*(int *)(*(int *)(param_1 + 0xac) + 0x10) != 5)) {
    iVar1 = FUN_00639a37();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      FUN_00639304();
    }
  }
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    (**(code **)(param_1 + 0xbc))();
  }
  return *(undefined4 *)(param_1 + 0x38);
}

