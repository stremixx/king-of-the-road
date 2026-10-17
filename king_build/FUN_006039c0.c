
void FUN_006039c0(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_00723084;
  FUN_00604120();
  if (piVar1 != (int *)0x0) {
    do {
      if (piVar1[1] == *(int *)(param_1 * 0x18 + DAT_007230c4)) {
        (**(code **)(*piVar1 + 0x18))();
        if (piVar1 == DAT_00723088) {
          DAT_00723088 = (int *)piVar1[5];
        }
        else {
          *(int *)(piVar1[4] + 0x14) = piVar1[5];
        }
        if (piVar1 == DAT_00723084) {
          DAT_00723084 = (int *)piVar1[4];
        }
        else {
          *(int *)(piVar1[5] + 0x10) = piVar1[4];
        }
        if (piVar1 != (int *)0x0) {
          (**(code **)*piVar1)(1);
        }
      }
      piVar1 = (int *)piVar1[4];
    } while (piVar1 != (int *)0x0);
  }
  FUN_00604130();
  return;
}

