
undefined4 * __thiscall FUN_00592340(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  FUN_00592470();
  *param_1 = &PTR_FUN_0064f88c;
  if (param_2 == (uint *)0x0) {
    FUN_005923c0(s_SelfListItem_____begin__NULL_0067cfa8);
  }
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if (param_3 == 0) {
      uVar1 = FUN_00592480(uVar1);
      *param_2 = uVar1;
      param_1[3] = param_2;
      return param_1;
    }
    FUN_005924d0(uVar1);
    param_1[3] = param_2;
    return param_1;
  }
  *param_2 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 1);
  param_1[3] = param_2;
  return param_1;
}

