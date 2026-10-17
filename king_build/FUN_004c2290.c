
void __thiscall FUN_004c2290(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x32;
  *param_1 = &PTR_LAB_0064b62c;
  param_1[1] = 0;
  puVar1 = param_1;
  do {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *param_1 = &PTR_LAB_0064b66c;
  param_1[2] = param_2;
  return;
}

