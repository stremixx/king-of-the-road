
void FUN_00603a90(void)

{
  FUN_00604120();
  while ((DAT_0072308c != (int *)0x0 &&
         ((**(code **)(*DAT_0072308c + 0xc))(), DAT_0072308c != (int *)0x0))) {
    (**(code **)*DAT_0072308c)(1);
  }
  FUN_00604130();
  return;
}

