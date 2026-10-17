
undefined4 *
FUN_00469ff0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 *param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar3 = (int)param_3 - (int)param_2 >> 2;
    puVar5 = param_6;
    if (0 < iVar3) {
      do {
        *puVar5 = *(undefined4 *)(((int)param_2 - (int)param_6) + (int)puVar5);
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_2 - (int)param_1 >> 2;
    if (0 < iVar3) {
      puVar4 = param_3;
      do {
        puVar1 = (undefined4 *)((int)param_2 + (-4 - (int)param_3) + (int)puVar4);
        puVar4 = puVar4 + -1;
        iVar3 = iVar3 + -1;
        *puVar4 = *puVar1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)puVar5 - (int)param_6 >> 2;
    if (0 < iVar3) {
      iVar6 = (int)param_6 - (int)param_1;
      do {
        *param_1 = *(undefined4 *)(iVar6 + (int)param_1);
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return param_1;
    }
  }
  else if (param_7 < param_4) {
    if (param_1 == param_2) {
      return param_3;
    }
    puVar5 = param_1;
    puVar4 = param_2;
    if (param_3 != param_2) {
      for (; (puVar5 != puVar4 && (puVar4 = puVar4 + -1, puVar5 != puVar4)); puVar5 = puVar5 + 1) {
        FUN_0046ce20(puVar5,puVar4);
      }
      FUN_0046ce40(param_2,param_3,param_2);
      do {
        if (param_2 == param_3) {
          if (param_1 != param_2) {
            FUN_0046ce40(param_1,param_2,param_2);
            return param_1;
          }
          break;
        }
        puVar5 = param_3 + -1;
        param_3 = param_3 + -1;
        puVar4 = param_1 + 1;
        uVar2 = *param_1;
        *param_1 = *puVar5;
        *param_3 = uVar2;
        param_1 = puVar4;
      } while (puVar4 != param_2);
      FUN_0046ce40(param_2,param_3,param_2);
      return param_3;
    }
  }
  else {
    iVar6 = (int)param_2 - (int)param_1;
    iVar3 = iVar6 >> 2;
    puVar5 = param_6;
    if (0 < iVar3) {
      do {
        *puVar5 = *(undefined4 *)(((int)param_1 - (int)param_6) + (int)puVar5);
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_3 - (int)param_2 >> 2;
    if (0 < iVar3) {
      do {
        *param_1 = *(undefined4 *)(iVar6 + (int)param_1);
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)puVar5 - (int)param_6 >> 2;
    param_1 = param_3;
    if (0 < iVar3) {
      puVar4 = param_3;
      do {
        puVar1 = (undefined4 *)((int)puVar5 + (-4 - (int)param_3) + (int)puVar4);
        puVar4 = puVar4 + -1;
        iVar3 = iVar3 + -1;
        *puVar4 = *puVar1;
      } while (iVar3 != 0);
      return puVar4;
    }
  }
  return param_1;
}

