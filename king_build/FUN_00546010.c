
int __thiscall FUN_00546010(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_2;
  do {
    FUN_00588b10(*puVar1);
    iVar2 = iVar2 + 0x14;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0xb4);
  FUN_004eaf20(param_2[9]);
  FUN_004eaf20(param_2[10]);
  FUN_004eaf20(param_2[0xb]);
  FUN_004eaf20(param_2[0xc]);
  (**(code **)(*param_1 + 0xbc))(param_2[0xd]);
  if (param_1[0x1518] == 0) {
    return 0xe;
  }
  iVar2 = FUN_00500eb0(param_2 + 0xe);
  if (iVar2 + 0xe != 0x31) {
    FUN_004e1e9c(s__Vehicle__set_state___i__MAX_VEH_00678f88);
  }
  return iVar2 + 0xe;
}

