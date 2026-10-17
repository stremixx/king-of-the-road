
void __fastcall FUN_004c3ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x32;
  *param_1 = &PTR_LAB_0064b62c;
  param_1[1] = 0;
  puVar2 = param_1 + 2;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = &PTR_LAB_0064b748;
  return;
}

