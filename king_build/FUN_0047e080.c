
void FUN_0047e080(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,undefined4 *param_6,int param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  while( true ) {
    if ((param_4 <= param_5) && (param_4 <= param_7)) {
      iVar5 = ((int)param_2 - (int)param_1) / 0x28;
      puVar2 = param_6;
      puVar1 = param_6;
      if (0 < iVar5) {
        puVar3 = param_6;
        do {
          puVar1 = puVar3 + 10;
          iVar5 = iVar5 + -1;
          puVar6 = (undefined4 *)(((int)param_1 - (int)param_6) + (int)puVar3);
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar3 = puVar1;
        } while (iVar5 != 0);
      }
      while ((puVar2 != puVar1 && (param_2 != param_3))) {
        iVar5 = 10;
        puVar3 = puVar2;
        puVar6 = param_2;
        puVar8 = param_1;
        if ((int)param_2[8] < (int)puVar2[8]) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          param_2 = param_2 + 10;
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar2 = puVar2 + 10;
        }
        param_1 = param_1 + 10;
      }
      uVar4 = FUN_0047c880(puVar2,puVar1,param_1,param_6,0);
      FUN_0047e320(param_2,param_3,uVar4);
      return;
    }
    if (param_5 <= param_7) break;
    if (param_5 < param_4) {
      iVar7 = param_4 / 2;
      puVar2 = param_1 + iVar7 * 10;
      puVar1 = (undefined4 *)FUN_0047f930(param_2,param_3,puVar2,param_8,0);
      iVar5 = ((int)puVar1 - (int)param_2) / 0x28;
    }
    else {
      iVar5 = param_5 / 2;
      puVar1 = param_2 + iVar5 * 10;
      puVar2 = (undefined4 *)FUN_0047f990(param_1,param_2,puVar1,param_8,0);
      iVar7 = ((int)puVar2 - (int)param_1) / 0x28;
    }
    param_4 = param_4 - iVar7;
    puVar3 = (undefined4 *)FUN_0047f5a0(puVar2,param_2,puVar1,param_4,iVar5,param_6,param_7);
    FUN_0047e080(param_1,puVar2,puVar3,iVar7,iVar5,param_6,param_7,param_8);
    param_5 = param_5 - iVar5;
    param_2 = puVar1;
    param_1 = puVar3;
  }
  iVar5 = ((int)param_3 - (int)param_2) / 0x28;
  puVar2 = param_6;
  if (0 < iVar5) {
    puVar1 = param_6;
    do {
      puVar2 = puVar1 + 10;
      iVar5 = iVar5 + -1;
      puVar3 = (undefined4 *)(((int)param_2 - (int)param_6) + (int)puVar1);
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar1 = puVar2;
    } while (iVar5 != 0);
  }
  if (param_1 == param_2) {
    FUN_0047e370(param_6,puVar2,param_3);
    return;
  }
  if (param_6 == puVar2) {
    FUN_0047e370(param_1,param_2,param_3);
    return;
  }
  param_2 = param_2 + -10;
  puVar2 = puVar2 + -10;
  while( true ) {
    for (; (int)param_2[8] <= (int)puVar2[8]; puVar2 = puVar2 + -10) {
      param_3 = param_3 + -10;
      puVar1 = puVar2;
      puVar3 = param_3;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if (param_6 == puVar2) {
        FUN_0047e370(param_1,param_2 + 10,param_3);
        return;
      }
    }
    param_3 = param_3 + -10;
    puVar1 = param_2;
    puVar3 = param_3;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    if (param_1 == param_2) break;
    param_2 = param_2 + -10;
  }
  FUN_0047e370(param_6,puVar2 + 10,param_3);
  return;
}

