
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005432e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x5364) != 0) {
    return DAT_006ee1d0;
  }
  uVar1 = DAT_006ee1c4;
  if (_DAT_0064ca9c <= (float)(&DAT_00696828)[*(int *)(param_1 + 0x28b4) * 0x25c]) {
    uVar1 = DAT_006ee1c8;
  }
  return uVar1;
}

