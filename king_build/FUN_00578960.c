
undefined4 FUN_00578960(void)

{
  DAT_006f3af4 = 0;
  DAT_006f3af0 = 0;
  FUN_00578930();
  if (DAT_006f3ae8 != (int *)0x0) {
    (**(code **)(*DAT_006f3ae8 + 0x20))(DAT_006f3ae8);
    if (DAT_006f3ae0 == 1) {
      FUN_005777d0(DAT_0067b3fc == 1);
    }
    (**(code **)(*DAT_006f3ae8 + 8))(DAT_006f3ae8);
    DAT_006f3ae8 = (int *)0x0;
  }
  if (DAT_006f3ae4 != (int *)0x0) {
    (**(code **)(*DAT_006f3ae4 + 8))(DAT_006f3ae4);
    DAT_006f3ae4 = (int *)0x0;
  }
  DAT_006f3ae0 = 0;
  DAT_006f3aec = 0;
  return 0;
}

