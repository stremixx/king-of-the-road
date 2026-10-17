
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401010(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_00689788 = param_2;
  iVar1 = FUN_004010c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar2 = FUN_0061c356(s_aimsg_log_0066b4e8,&DAT_0066b4f4);
  FUN_0061c2d7(iVar1,uVar2);
  FUN_0061c2d7(&DAT_0066b4e4,uVar2);
  FUN_0061c25a(uVar2);
  if (param_2 < 200) {
    if (param_2 < 2) {
      FUN_005d2520(iVar1,0);
    }
    else {
      FUN_005d25a0(iVar1);
    }
  }
  else {
    FUN_005d2250(iVar1,0);
  }
  if (iVar1 != 0) {
    FUN_00631d5c(iVar1);
  }
  return;
}

