
void FUN_00454890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_3;
  puVar2 = param_2;
  while (puVar2 != puVar3) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00459b00(&param_2,puVar2);
    puVar2 = puVar1;
  }
  *param_1 = puVar3;
  return;
}

