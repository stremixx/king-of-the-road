
void FUN_00603a50(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_0072308c;
  if (DAT_0072308c == (int *)0x0) {
    return;
  }
  do {
    do {
    } while (piVar1[3] != param_1);
    FUN_00604120();
    (**(code **)(*piVar1 + 8))();
    (**(code **)*piVar1)(1);
    FUN_00604130();
  } while( true );
}

