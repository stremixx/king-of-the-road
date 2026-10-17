
undefined4 * FUN_0046fcd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar4 = param_3;
  if ((param_1 == param_2) || (puVar4 = param_1, puVar6 = param_2, param_3 == param_2)) {
    return puVar4;
  }
  for (; (puVar5 = param_3, puVar8 = param_2, puVar4 != puVar6 &&
         (puVar7 = puVar6 + -3, puVar4 != puVar7)); puVar4 = puVar4 + 3) {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar3 = puVar4[2];
    *puVar4 = *puVar7;
    puVar4[1] = puVar6[-2];
    puVar4[2] = puVar6[-1];
    *puVar7 = uVar1;
    puVar6[-2] = uVar2;
    puVar6[-1] = uVar3;
    puVar6 = puVar7;
  }
  for (; (puVar8 != puVar5 && (puVar4 = puVar5 + -3, puVar8 != puVar4)); puVar8 = puVar8 + 3) {
    uVar1 = *puVar8;
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    *puVar8 = *puVar4;
    puVar8[1] = puVar5[-2];
    puVar8[2] = puVar5[-1];
    *puVar4 = uVar1;
    puVar5[-2] = uVar2;
    puVar5[-1] = uVar3;
    puVar5 = puVar4;
  }
  do {
    if (param_2 == param_3) {
      puVar4 = param_1;
      puVar6 = param_3;
      if (param_1 != param_2) {
        while( true ) {
          if (puVar4 == param_2) {
            return param_1;
          }
          puVar6 = param_2 + -3;
          if (puVar4 == puVar6) break;
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          uVar3 = puVar4[2];
          *puVar4 = *puVar6;
          puVar4[1] = param_2[-2];
          puVar4[2] = param_2[-1];
          *puVar6 = uVar1;
          param_2[-2] = uVar2;
          param_2[-1] = uVar3;
          param_2 = puVar6;
          puVar4 = puVar4 + 3;
        }
        return param_1;
      }
      break;
    }
    puVar4 = param_1 + 3;
    puVar6 = param_3 + -3;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    *param_1 = *puVar6;
    param_1[1] = param_3[-2];
    param_1[2] = param_3[-1];
    *puVar6 = uVar1;
    param_3[-2] = uVar2;
    param_3[-1] = uVar3;
    param_3 = puVar6;
    param_1 = puVar4;
  } while (puVar4 != param_2);
  for (; (param_2 != puVar6 && (puVar4 = puVar6 + -3, param_2 != puVar4)); param_2 = param_2 + 3) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *puVar4;
    param_2[1] = puVar6[-2];
    param_2[2] = puVar6[-1];
    *puVar4 = uVar1;
    puVar6[-2] = uVar2;
    puVar6[-1] = uVar3;
    puVar6 = puVar4;
  }
  return param_3;
}

