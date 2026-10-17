
undefined4 FUN_005c1df0(void)

{
  if (DAT_00701f04 != (int *)0x0) {
    (**(code **)(*DAT_00701f04 + 8))(DAT_00701f04);
    DAT_00701f04 = (int *)0x0;
  }
  if (DAT_00701f00 != (int *)0x0) {
    (**(code **)(*DAT_00701f00 + 8))(DAT_00701f00);
    DAT_00701f00 = (int *)0x0;
  }
  if ((DAT_00701efc != 0) && (DAT_00701ef8 != (int *)0x0)) {
    (**(code **)(*DAT_00701ef8 + 8))(DAT_00701ef8);
    DAT_00701ef8 = (int *)0x0;
  }
  return 0;
}

