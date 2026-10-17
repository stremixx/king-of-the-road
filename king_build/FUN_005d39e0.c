
void FUN_005d39e0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  int *piStack_f8;
  undefined4 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  if (DAT_0071f808 != 0) {
    puStack_f4 = (undefined4 *)0x0;
    piStack_f8 = DAT_0071f85c;
    iVar1 = (**(code **)(*DAT_0071f85c + 0x80))();
    if (iVar1 == 0) {
      DAT_0071f808 = 0;
    }
    else if (DAT_0071f808 != 0) {
      return;
    }
  }
  local_64[0] = 100;
  local_14 = param_5;
  if (DAT_0071f7fc < param_3) {
    param_3 = DAT_0071f7fc;
  }
  if (DAT_0071f800 < param_4) {
    param_4 = DAT_0071f800;
  }
  uStack_ec = param_2;
  puStack_f4 = local_64;
  uStack_f0 = param_1;
  piStack_f8 = (int *)0x1000400;
  local_e8 = param_3;
  local_e4 = param_4;
  iVar1 = (**(code **)(*DAT_0071f85c + 0x14))(DAT_0071f85c,&uStack_f0,0,0);
  if (iVar1 != 0) {
    uVar2 = FUN_005d42c0(iVar1,s_vbrect_0067ed30,0);
    FUN_005d2250(uVar2);
  }
  piStack_f8 = (int *)0x7c;
  puStack_f4 = (undefined4 *)0x7ff9ee;
  if (((DAT_0071f850 == 0) && (DAT_0071f818 == 0)) &&
     (iVar1 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,&piStack_f8,1,0), iVar1 == 0)) {
    DAT_0071f808 = local_e8;
  }
  return;
}

