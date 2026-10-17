
undefined4 * FUN_0047e5f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  if ((param_1 == param_2) || (puVar3 = param_1, puVar5 = param_2, param_3 == param_2)) {
    return puVar3;
  }
  for (; (puVar4 = param_3, puVar7 = param_2, puVar3 != puVar5 &&
         (puVar6 = puVar5 + -2, puVar3 != puVar6)); puVar3 = puVar3 + 2) {
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    *puVar3 = *puVar6;
    puVar3[1] = puVar5[-1];
    *puVar6 = uVar2;
    puVar5[-1] = uVar1;
    puVar5 = puVar6;
  }
  for (; (puVar7 != puVar4 && (puVar3 = puVar4 + -2, puVar7 != puVar3)); puVar7 = puVar7 + 2) {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    *puVar7 = *puVar3;
    puVar7[1] = puVar4[-1];
    *puVar3 = uVar1;
    puVar4[-1] = uVar2;
    puVar4 = puVar3;
  }
  do {
    if (param_2 == param_3) {
      puVar3 = param_3;
      puVar5 = param_1;
      if (param_1 != param_2) {
        while( true ) {
          if (puVar5 == param_2) {
            return param_1;
          }
          puVar3 = param_2 + -2;
          if (puVar5 == puVar3) break;
          uVar1 = *puVar5;
          uVar2 = puVar5[1];
          *puVar5 = *puVar3;
          puVar5[1] = param_2[-1];
          *puVar3 = uVar1;
          param_2[-1] = uVar2;
          param_2 = puVar3;
          puVar5 = puVar5 + 2;
        }
        return param_1;
      }
      break;
    }
    puVar3 = param_3 + -2;
    puVar5 = param_1 + 2;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = param_3[-2];
    param_1[1] = param_3[-1];
    *puVar3 = uVar1;
    param_3[-1] = uVar2;
    param_1 = puVar5;
    param_3 = puVar3;
  } while (puVar5 != param_2);
  for (; (param_2 != puVar3 && (puVar5 = puVar3 + -2, param_2 != puVar5)); param_2 = param_2 + 2) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *puVar5;
    param_2[1] = puVar3[-1];
    *puVar5 = uVar1;
    puVar3[-1] = uVar2;
    puVar3 = puVar5;
  }
  return param_3;
}

