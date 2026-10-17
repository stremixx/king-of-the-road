
void __fastcall FUN_005434c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_00631d5c(*(int *)(iVar1 + 0xc));
    }
    FUN_00631d5c(iVar1);
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_00631d5c(*(int *)(iVar1 + 0xc));
    }
    FUN_00631d5c(iVar1);
  }
  return;
}

