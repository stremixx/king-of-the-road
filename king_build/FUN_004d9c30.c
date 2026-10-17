
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d9c30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006450d3;
  local_c = ExceptionList;
  if ((DAT_00695694 == (undefined4 *)0x0) && (_DAT_0064b248 < _DAT_00694fd8)) {
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)FUN_00631d33(0x90);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_005f1020(s_ThrowLamp_00671c60,0x15,1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_005acbd0();
      *puVar2 = &PTR_FUN_0064c434;
      puVar2[0x22] = 1;
      puVar2[0x23] = 0;
    }
    DAT_00695694 = puVar2;
    puVar2[0x22] = 1;
    local_4 = 0xffffffff;
    DAT_00695694[0x23] = 1;
    DAT_00695694[0xe] = 2;
    puVar2 = DAT_00695694;
    DAT_00695694[0xf] = *(undefined4 *)(param_1 + 0x24);
    puVar2[0x10] = *(undefined4 *)(param_1 + 0x28);
    puVar2[0x11] = *(undefined4 *)(param_1 + 0x2c);
    DAT_00695694[0x18] = 0x3f800000;
    DAT_00695694[0x1b] = DAT_00694f10;
    DAT_00695694[0x1c] = DAT_00694288;
    DAT_00695694[0x1d] = DAT_00694d90;
    DAT_00695694[0x15] = 0x3f800000;
    DAT_00695694[0x16] = 0;
    DAT_00695694[0x17] = 0x3c23d70a;
    DAT_00695694[0x20] = 0x46;
    piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0x210);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(0,DAT_00695694);
    }
  }
  ExceptionList = local_c;
  return;
}

