
undefined4 FUN_0061c3bb(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0061e03a();
  uVar1 = FUN_0061fec5(DAT_0077da58);
  if (uVar1 < (uint)((int)DAT_0077da54 + (4 - DAT_0077da58))) {
    iVar2 = FUN_0061fec5(DAT_0077da58);
    iVar2 = FUN_00621670(DAT_0077da58,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_0061c430;
    }
    DAT_0077da54 = (undefined4 *)(iVar2 + ((int)DAT_0077da54 - DAT_0077da58 >> 2) * 4);
    DAT_0077da58 = iVar2;
  }
  *DAT_0077da54 = param_1;
  DAT_0077da54 = DAT_0077da54 + 1;
LAB_0061c430:
  FUN_0061e043();
  return param_1;
}

