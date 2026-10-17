
void __fastcall FUN_00604870(uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint local_4;
  
  local_4 = param_1;
  piVar1 = DAT_0072308c;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[6];
    if ((piVar1 == (int *)0x0) ||
       ((**(code **)(*piVar1 + 0x24))(piVar1,&local_4), (local_4 & 1) != 0)) {
      piVar1 = (int *)piVar2[2];
    }
    else {
      (**(code **)(*piVar2 + 0xc))();
      piVar1 = (int *)piVar2[2];
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(1);
      }
    }
  }
  FUN_00604ca0();
  return;
}

