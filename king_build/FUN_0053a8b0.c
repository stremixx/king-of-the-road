
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053a8b0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float local_60;
  float local_5c;
  undefined1 local_3c [4];
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  fVar3 = DAT_00701598;
  local_60 = DAT_00701590;
  local_5c = DAT_00701594;
  if ((*(int *)(param_1 + 0x268) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x3344) == 0) {
      FUN_004e1fd9();
      local_38 = DAT_00701594 * _DAT_0064c988;
      local_34 = DAT_00701598 * _DAT_0064c988;
      FUN_0057d5a0(local_30);
      FUN_005aab70();
    }
    else {
      pfVar2 = (float *)FUN_005aaad0(local_3c,iVar1 + 0x33ac);
      local_60 = -*pfVar2;
      local_5c = -pfVar2[1];
      fVar3 = -pfVar2[2];
    }
    _DAT_00677718 = fVar3;
    _DAT_00677710 = -local_60;
    _DAT_00677714 = -local_5c;
    return;
  }
  _DAT_00677718 = DAT_00701598;
  _DAT_00677714 = DAT_00701594;
  _DAT_00677710 = DAT_00701590;
  return;
}

