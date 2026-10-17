
void __thiscall FUN_00561420(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_30 [48];
  
  puVar1 = param_1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)FUN_005aba00(local_30,param_1);
  puVar3 = param_1 + 0xc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x18] = param_2;
  return;
}

