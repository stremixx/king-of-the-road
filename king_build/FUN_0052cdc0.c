
undefined4 * __thiscall
FUN_0052cdc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000028;
  
  FUN_0052af00(param_2,param_3,param_4,param_5,param_6,param_7,in_stack_00000028);
  iVar2 = 4;
  puVar1 = param_1 + 0x956;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 0x954;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = &PTR_FUN_0064df1c;
  param_1[0x40] = &PTR_LAB_0064ded0;
  param_1[0x5e] = &PTR_LAB_0064decc;
  puVar1 = param_1 + 0x954;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_5;
    param_5 = param_5 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[0x37c] = 3;
  return param_1;
}

