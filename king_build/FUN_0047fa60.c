
void FUN_0047fa60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_28 [10];
  
  while ((param_1 != param_2 && (param_2 = param_2 + -10, param_1 != param_2))) {
    puVar2 = param_1;
    puVar3 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = param_1 + 10;
    puVar2 = param_2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    puVar2 = local_28;
    puVar4 = param_2;
    for (iVar1 = 10; param_1 = puVar3, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

