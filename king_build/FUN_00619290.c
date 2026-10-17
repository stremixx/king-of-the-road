
void __fastcall FUN_00619290(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 10;
  *param_1 = 0;
  param_1[1] = 0;
  piVar2 = param_1 + 2;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x24))();
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0xc] = 0;
  return;
}

