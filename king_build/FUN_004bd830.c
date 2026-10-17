
void __fastcall FUN_004bd830(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0064b394;
  puVar1 = param_1 + 0x13;
  iVar2 = 2;
  do {
    FUN_00631d5c(*puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_1[0x12] != 0) {
    FUN_00631d5c(param_1[0x12]);
  }
  FUN_005eec90();
  return;
}

