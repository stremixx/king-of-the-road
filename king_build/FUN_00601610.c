
undefined4 FUN_00601610(void)

{
  if (DAT_00722d3c != (int *)0x0) {
    if (DAT_00722d40 != 0) {
      (**(code **)(*DAT_00722d3c + 0x24))(DAT_00722d3c,DAT_00722d40);
    }
    DAT_00722d40 = 0;
    (**(code **)(*DAT_00722d3c + 0x10))(DAT_00722d3c);
    (**(code **)(*DAT_00722d3c + 8))(DAT_00722d3c);
    DAT_00722d3c = (int *)0x0;
  }
  return 0;
}

