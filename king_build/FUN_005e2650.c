
void __fastcall FUN_005e2650(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    piVar2 = *(int **)(param_1 + 0xf0);
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      piVar2 = (int *)FUN_005d2730();
      if ((piVar1 != *(int **)(param_1 + 0xfc)) &&
         ((**(code **)(*piVar1 + 0x44))(), piVar1 != (int *)0x0)) {
        (**(code **)*piVar1)(1);
      }
    }
    if (*(undefined4 **)(param_1 + 0xfc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xfc))(1);
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}

