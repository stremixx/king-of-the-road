
void __thiscall FUN_00461a90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0x92) = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x96) = *(undefined8 *)(param_2 + 0x96);
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  puVar2 = param_2 + 0x9a;
  puVar3 = param_1 + 0x9a;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 299;
  puVar3 = param_1 + 299;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 0x15c;
  puVar3 = param_1 + 0x15c;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

