
/* WARNING: Removing unreachable block (ram,0x005c241e) */
/* WARNING: Removing unreachable block (ram,0x005c2424) */
/* WARNING: Removing unreachable block (ram,0x005c2436) */
/* WARNING: Removing unreachable block (ram,0x005c243a) */
/* WARNING: Removing unreachable block (ram,0x005c2449) */
/* WARNING: Removing unreachable block (ram,0x005c2454) */

int FUN_005c23e0(void)

{
  int iVar1;
  
  if (DAT_00701f00 == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = (**(code **)(*DAT_00701f00 + 0x24))(DAT_00701f00);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_005d2250(s_msavi__GetStatus___failed_0067e73c,iVar1);
  return iVar1;
}

