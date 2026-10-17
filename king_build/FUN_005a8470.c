
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8470(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,int param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar3 = 1;
  dVar1 = _DAT_0064a830;
  dVar2 = _DAT_0064e388;
  if (param_6 == 1) {
    dVar1 = _DAT_0064c328;
    dVar2 = _DAT_0064a668;
  }
  if ((float)_DAT_0064a6d0 < param_2) {
    iVar3 = 3;
  }
  FUN_005a82f0(param_5,param_5 + iVar3 * 0xc,param_5 + 0x18,(float)dVar2,param_1,(float)dVar1,
               local_c);
  FUN_005a82f0(param_5 + 0x30,param_5 + (iVar3 * 3 + 0xc) * 4,param_5 + 0x48,(float)dVar2,param_1,
               (float)dVar1,local_18);
  FUN_005a8400(local_c,local_18,param_3,param_4);
  return;
}

