
void FUN_0050b970(void)

{
  if (DAT_006cd454 != (undefined4 *)0x0) {
    (**(code **)*DAT_006cd454)(1);
    DAT_006cd454 = (undefined4 *)0x0;
    *(uint *)(DAT_00695c00 + 0x10) = *(uint *)(DAT_00695c00 + 0x10) | 3;
    FUN_00568e20();
    return;
  }
  return;
}

