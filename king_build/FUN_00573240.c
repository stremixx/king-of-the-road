
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00573240(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00695c00;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(DAT_00695c00 + 0xb98);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar1 + 0xb9c);
  }
  if (*(double *)(param_1 + 0x170) + _DAT_0064a660 <= *(double *)(DAT_00695c00 + 0xb98)) {
    *(undefined4 *)(param_1 + 0x198) = 3;
  }
  else {
    FUN_005d29a0(1);
  }
  FUN_00568a90(*(undefined4 *)(param_1 + 0x158),2);
  FUN_00568a90(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x198));
  return;
}

