
undefined4 *
FUN_0047f5a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_28 [10];
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar3 = ((int)param_3 - (int)param_2) / 0x28;
    puVar5 = param_6;
    if (0 < iVar3) {
      puVar4 = param_6;
      do {
        puVar5 = puVar4 + 10;
        iVar3 = iVar3 + -1;
        puVar6 = (undefined4 *)(((int)param_2 - (int)param_6) + (int)puVar4);
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = puVar5;
      } while (iVar3 != 0);
    }
    iVar3 = ((int)param_2 - (int)param_1) / 0x28;
    if (0 < iVar3) {
      iVar1 = (int)param_2 - (int)param_3;
      do {
        param_3 = param_3 + -10;
        iVar3 = iVar3 + -1;
        puVar4 = (undefined4 *)(iVar1 + (int)param_3);
        puVar6 = param_3;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      } while (iVar3 != 0);
    }
    iVar3 = ((int)puVar5 - (int)param_6) / 0x28;
    if (0 < iVar3) {
      iVar1 = (int)param_6 - (int)param_1;
      puVar5 = param_1;
      do {
        param_1 = puVar5 + 10;
        iVar3 = iVar3 + -1;
        puVar4 = (undefined4 *)(iVar1 + (int)puVar5);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar5 = param_1;
      } while (iVar3 != 0);
    }
    return param_1;
  }
  if (param_4 <= param_7) {
    iVar3 = ((int)param_2 - (int)param_1) / 0x28;
    puVar5 = param_6;
    if (0 < iVar3) {
      puVar4 = param_6;
      do {
        puVar5 = puVar4 + 10;
        iVar3 = iVar3 + -1;
        puVar6 = (undefined4 *)(((int)param_1 - (int)param_6) + (int)puVar4);
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = puVar5;
      } while (iVar3 != 0);
    }
    iVar3 = ((int)param_3 - (int)param_2) / 0x28;
    puVar4 = param_1;
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        puVar6 = (undefined4 *)(((int)param_2 - (int)param_1) + (int)puVar4);
        puVar7 = puVar4;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar4 = puVar4 + 10;
      } while (iVar3 != 0);
    }
    iVar3 = ((int)puVar5 - (int)param_6) / 0x28;
    if (0 < iVar3) {
      iVar1 = (int)puVar5 - (int)param_3;
      do {
        param_3 = param_3 + -10;
        iVar3 = iVar3 + -1;
        puVar5 = (undefined4 *)(iVar1 + (int)param_3);
        puVar4 = param_3;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
      } while (iVar3 != 0);
    }
    return param_3;
  }
  if (param_1 != param_2) {
    puVar5 = param_1;
    puVar4 = param_2;
    if (param_3 == param_2) {
      return param_1;
    }
    for (; (puVar5 != puVar4 && (puVar4 = puVar4 + -10, puVar5 != puVar4)); puVar5 = puVar5 + 10) {
      FUN_0047fab0(puVar5,puVar4);
    }
    FUN_0047fa60(param_2,param_3,param_2);
    do {
      if (param_2 == param_3) {
        if (param_1 != param_2) {
          FUN_0047fa60(param_1,param_2,param_2);
          return param_1;
        }
        FUN_0047fa60(param_2,param_3,param_2);
        return param_3;
      }
      param_3 = param_3 + -10;
      puVar6 = param_1 + 10;
      puVar5 = param_1;
      puVar4 = local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = param_3;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_1 = *puVar5;
        puVar5 = puVar5 + 1;
        param_1 = param_1 + 1;
      }
      puVar5 = local_28;
      puVar4 = param_3;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      param_1 = puVar6;
    } while (puVar6 != param_2);
    FUN_0047fa60(param_2,param_3,param_2);
    return param_3;
  }
  return param_3;
}

