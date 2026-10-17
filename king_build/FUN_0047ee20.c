
undefined4 * FUN_0047ee20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_28 [10];
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar3 = param_1;
  puVar4 = param_2;
  if (param_3 == param_2) {
    return param_1;
  }
  while ((puVar2 = param_3, puVar5 = param_2, puVar3 != puVar4 &&
         (puVar4 = puVar4 + -10, puVar3 != puVar4))) {
    puVar2 = puVar3;
    puVar5 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar4;
    puVar5 = puVar3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = puVar3 + 10;
    puVar2 = local_28;
    puVar5 = puVar4;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  while ((puVar5 != puVar2 && (puVar2 = puVar2 + -10, puVar5 != puVar2))) {
    puVar3 = puVar5;
    puVar4 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = puVar2;
    puVar4 = puVar5;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = puVar5 + 10;
    puVar3 = local_28;
    puVar4 = puVar2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  do {
    if (param_2 == param_3) {
      puVar3 = param_1;
      puVar4 = param_3;
      if (param_1 != param_2) {
        while ((puVar3 != param_2 && (param_2 = param_2 + -10, puVar3 != param_2))) {
          puVar4 = puVar3;
          puVar2 = local_28;
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar2 = puVar3 + 10;
          puVar4 = param_2;
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar4 = local_28;
          puVar5 = param_2;
          for (iVar1 = 10; puVar3 = puVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        return param_1;
      }
      break;
    }
    puVar2 = param_1 + 10;
    param_3 = param_3 + -10;
    puVar3 = param_1;
    puVar4 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    puVar3 = local_28;
    puVar4 = param_3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1 = puVar2;
    puVar4 = param_3;
  } while (puVar2 != param_2);
  while ((param_2 != param_3 && (param_3 = param_3 + -10, param_2 != param_3))) {
    puVar3 = param_2;
    puVar2 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = param_2 + 10;
    puVar3 = param_3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    puVar3 = local_28;
    puVar5 = param_3;
    for (iVar1 = 10; param_2 = puVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return puVar4;
}

