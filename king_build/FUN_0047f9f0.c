
void FUN_0047f9f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  for (; (param_1 != param_2 && (puVar3 = param_2 + -2, param_1 != puVar3)); param_1 = param_1 + 2)
  {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = *puVar3;
    param_1[1] = param_2[-1];
    *puVar3 = uVar1;
    param_2[-1] = uVar2;
    param_2 = puVar3;
  }
  return;
}

