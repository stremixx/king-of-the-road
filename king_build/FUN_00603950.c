
void FUN_00603950(void)

{
  int *piVar1;
  
  FUN_00604120();
  while (piVar1 = DAT_00723084, DAT_00723084 = piVar1, piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))();
    DAT_00723084 = (int *)DAT_00723084[4];
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(1);
    }
  }
  FUN_00604130();
  DAT_00723088 = 0;
  return;
}

