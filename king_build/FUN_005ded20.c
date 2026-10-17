
void __fastcall FUN_005ded20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005db520();
  while (iVar1 != 0) {
    (**(code **)(*param_1 + 0x48))(iVar1);
    iVar1 = FUN_005db520();
  }
  return;
}

