
void FUN_00603870(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_006039a0(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_00604120();
    piVar1[10] = 0;
    (**(code **)(*piVar1 + 0x18))();
    if (piVar1 == DAT_00723088) {
      DAT_00723088 = (int *)piVar1[5];
    }
    else {
      *(int *)(piVar1[4] + 0x14) = piVar1[5];
    }
    if (piVar1 != DAT_00723084) {
      *(int *)(piVar1[5] + 0x10) = piVar1[4];
      FUN_00604130();
      (**(code **)*piVar1)(1);
      return;
    }
    DAT_00723084 = (int *)piVar1[4];
    FUN_00604130();
    (**(code **)*piVar1)(1);
  }
  return;
}

