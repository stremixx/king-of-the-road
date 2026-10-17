
void __thiscall FUN_005d18e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = FUN_005aa7c0(param_2);
  if (iVar1 != 0xfffe) {
    FUN_0061dd12(s_Illegal_format_0067ea10);
    FUN_0061df73(0);
  }
  FUN_0061d8bf(&stack0x00000000,4,1,param_2);
  if (unaff_retaddr == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  FUN_0061d8bf(&stack0x00000000,4,1,param_2);
  if (unaff_retaddr != 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

