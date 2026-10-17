
void FUN_004708c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  for (; (param_1 != param_2 && (puVar4 = param_2 + -3, param_1 != puVar4)); param_1 = param_1 + 3)
  {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    *param_1 = *puVar4;
    param_1[1] = param_2[-2];
    param_1[2] = param_2[-1];
    *puVar4 = uVar1;
    param_2[-2] = uVar2;
    param_2[-1] = uVar3;
    param_2 = puVar4;
  }
  return;
}

