
undefined4 * FUN_0046a470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar3 = param_2;
  puVar5 = param_1;
  if (param_3 == param_2) {
    return param_1;
  }
  for (; (puVar2 = param_3, puVar4 = param_2, puVar5 != puVar3 &&
         (puVar3 = puVar3 + -1, puVar5 != puVar3)); puVar5 = puVar5 + 1) {
    uVar1 = *puVar5;
    *puVar5 = *puVar3;
    *puVar3 = uVar1;
  }
  for (; (puVar4 != puVar2 && (puVar2 = puVar2 + -1, puVar4 != puVar2)); puVar4 = puVar4 + 1) {
    uVar1 = *puVar4;
    *puVar4 = *puVar2;
    *puVar2 = uVar1;
  }
  do {
    if (param_2 == param_3) {
      puVar3 = param_1;
      puVar5 = param_3;
      if (param_1 != param_2) {
        while( true ) {
          if (puVar3 == param_2) {
            return param_1;
          }
          param_2 = param_2 + -1;
          if (puVar3 == param_2) break;
          uVar1 = *puVar3;
          *puVar3 = *param_2;
          *param_2 = uVar1;
          puVar3 = puVar3 + 1;
        }
        return param_1;
      }
      break;
    }
    puVar3 = param_3 + -1;
    param_3 = param_3 + -1;
    puVar2 = param_1 + 1;
    uVar1 = *param_1;
    *param_1 = *puVar3;
    *param_3 = uVar1;
    param_1 = puVar2;
    puVar5 = param_3;
  } while (puVar2 != param_2);
  for (; (param_2 != param_3 && (param_3 = param_3 + -1, param_2 != param_3)); param_2 = param_2 + 1
      ) {
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
  }
  return puVar5;
}

