
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004024b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ad92;
  local_c = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  DAT_0068bb58 = 0;
  _DAT_0068bb5c = 0;
  _DAT_0068bb60 = 0;
  ExceptionList = &local_c;
  DAT_0068bb58 = FUN_0044bc90(0x90);
  _DAT_0068bb60 = DAT_0068bb58 + 0x90;
  local_4 = CONCAT31(local_4._1_3_,2);
  _DAT_0068bb5c = DAT_0068bb58;
  _DAT_0068bb5c = FUN_004663e0(DAT_0068bb58,0xc,&local_18,local_1c);
  puVar1 = local_18;
  iVar2 = local_10 - (int)local_18 >> 2;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 4;
    if (0x80 < uVar3) {
      FUN_0061c888(local_18);
      ExceptionList = local_c;
      return;
    }
    FUN_00401aa0();
    *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

