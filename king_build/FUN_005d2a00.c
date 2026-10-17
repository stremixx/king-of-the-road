
void __thiscall FUN_005d2a00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  iVar1 = FUN_005d2710(0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005d2790(param_1,param_2,1);
    if (iVar1 != 0) goto LAB_005d2a45;
  }
  FUN_005d2ce0();
  FUN_005d2520(s_Not_enough_blocks_in_user_define_0067eb3c,0);
LAB_005d2a45:
  FUN_005d2d10(iVar1);
  return;
}

