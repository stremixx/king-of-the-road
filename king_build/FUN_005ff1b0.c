
/* WARNING: Removing unreachable block (ram,0x005ff1f5) */
/* WARNING: Removing unreachable block (ram,0x005ff202) */
/* WARNING: Removing unreachable block (ram,0x005ff21c) */
/* WARNING: Removing unreachable block (ram,0x005ff21e) */
/* WARNING: Removing unreachable block (ram,0x005ff247) */

undefined4 FUN_005ff1b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_005ff190();
  iVar3 = DAT_00722c8c;
  iVar1 = DAT_00722c88;
  for (iVar2 = DAT_00722c88; iVar2 != iVar3; iVar2 = iVar2 + 0x38) {
    FUN_005ffbb0(0);
  }
  iVar3 = iVar3 - iVar1;
  iVar3 = (int)((ulonglong)((longlong)iVar3 * 0x6db6db6d) >> 0x20) - iVar3;
  DAT_00722c8c = DAT_00722c8c + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * 0x38;
  return 0;
}

