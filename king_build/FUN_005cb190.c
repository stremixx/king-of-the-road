
void __fastcall FUN_005cb190(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = &PTR_FUN_00650d04;
  if (iVar1 != 0) {
    FUN_005cb190();
    FUN_00631d5c(iVar1);
    param_1[2] = 0;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_005cb190();
    FUN_00631d5c(iVar1);
    param_1[1] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    FUN_005cb190();
    FUN_00631d5c(iVar1);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  return;
}

