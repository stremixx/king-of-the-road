
undefined4 __thiscall FUN_00561260(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004e3fe0(param_2,s_SearchLightKey_0067a2e8,0);
  *(undefined4 *)(param_1 + 0xc58) = uVar1;
  uVar1 = FUN_004e3fe0(param_2,s_BlinkLightKey_0067a2d8,0);
  *(undefined4 *)(param_1 + 0xc5c) = uVar1;
  uVar1 = FUN_004e3fe0(param_2,s_StaticLightKey_0067a2c8,0);
  *(undefined4 *)(param_1 + 0xc60) = uVar1;
  uVar1 = FUN_004e3fe0(param_2,s_GunLeftKey_0067a2bc,0);
  *(undefined4 *)(param_1 + 0xce4) = uVar1;
  uVar1 = FUN_004e3fe0(param_2,s_GunRightKey_0067a2b0,0);
  *(undefined4 *)(param_1 + 0xce8) = uVar1;
  *(undefined4 *)(param_1 + 0xdd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdb0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0xdb4) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0xdb8) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0xdbc) = DAT_00701590;
  *(undefined4 *)(param_1 + 0xdc0) = DAT_00701594;
  *(undefined4 *)(param_1 + 0xdc4) = DAT_00701598;
  *(undefined4 *)(param_1 + 0xdc8) = DAT_00701580;
  *(undefined4 *)(param_1 + 0xdcc) = DAT_00701584;
  *(undefined4 *)(param_1 + 0xdd0) = DAT_00701588;
  return 0;
}

