
undefined4 __thiscall FUN_00500d00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x3cac);
  iVar3 = 0x1b;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 5;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0x1b;
}

