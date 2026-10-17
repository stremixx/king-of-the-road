
int FUN_005c2370(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_4 [4];
  
  puVar2 = local_4;
  if (DAT_00701f00 == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = (**(code **)(*DAT_00701f00 + 0x10))(DAT_00701f00,local_4,0);
  if (iVar1 < 0) {
    FUN_005d2250(s_msavi__GetCurrentPosition___fail_0067e6fc,iVar1);
    return iVar1;
  }
  if (puVar2 < DAT_00701ec8) {
    iVar1 = DAT_00701ec4 - (int)DAT_00701ec8;
  }
  else {
    iVar1 = -(int)DAT_00701ec8;
  }
  DAT_00701ec8 = puVar2;
  DAT_00701ecc = puVar2 + (int)DAT_00701ecc + iVar1;
  return 0;
}

