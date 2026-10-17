
/* WARNING: Removing unreachable block (ram,0x00600d99) */
/* WARNING: Removing unreachable block (ram,0x00600da1) */

void __fastcall FUN_00600d60(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_00722d48 != 0) {
    FUN_00631d5c(DAT_00722d48,param_1);
  }
  iVar2 = DAT_00722cc4;
  iVar3 = DAT_00722cc0;
  DAT_00722d48 = 0;
  for (iVar4 = DAT_00722cc0; iVar4 != iVar2; iVar4 = iVar4 + 0x20) {
    FUN_00600ae0();
  }
  DAT_00722cc4 = DAT_00722cc4 + (iVar2 - iVar3 >> 5) * -0x20;
  FUN_00600c40();
  (**(code **)(*DAT_00722d3c + 0x8c))(DAT_00722d3c,&DAT_00682bf8,&LAB_00600ca0,0,0);
  DAT_00722d48 = FUN_00631d33((DAT_00722cc4 - DAT_00722cc0 >> 5) * 4 + 4);
  iVar3 = 0;
  iVar4 = DAT_00722cc0;
  if (DAT_00722cc0 != DAT_00722cc4) {
    do {
      puVar1 = (undefined4 *)(iVar4 + 0x18);
      iVar4 = iVar4 + 0x20;
      *(undefined4 *)(DAT_00722d48 + iVar3 * 4) = *puVar1;
      iVar3 = iVar3 + 1;
    } while (iVar4 != DAT_00722cc4);
  }
  *(undefined4 *)(DAT_00722d48 + iVar3 * 4) = 0;
  return;
}

