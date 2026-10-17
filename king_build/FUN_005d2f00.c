
void __fastcall FUN_005d2f00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  while ((iVar1 != 0 && (*(int *)(iVar1 + 0x10) <= *param_1))) {
    FUN_005d2f70(iVar1);
    iVar1 = param_1[3];
  }
  iVar1 = param_1[2];
  while ((iVar1 != 0 && (iVar2 = FUN_005d2f50(), *(int *)(iVar1 + 0x10) <= iVar2))) {
    FUN_005d2f70(iVar1);
    iVar1 = param_1[2];
  }
  *param_1 = *param_1 + 1;
  return;
}

