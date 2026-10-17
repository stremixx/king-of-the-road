
undefined4 *
FUN_0047eb60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar3 = (int)param_3 - (int)param_2 >> 3;
    puVar5 = param_6;
    if (0 < iVar3) {
      do {
        *puVar5 = *(undefined4 *)(((int)param_2 - (int)param_6) + (int)puVar5);
        puVar5[1] = *(undefined4 *)(((int)param_2 - (int)param_6) + 4 + (int)puVar5);
        puVar5 = puVar5 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_2 - (int)param_1 >> 3;
    puVar4 = param_3;
    if (0 < iVar3) {
      do {
        puVar6 = puVar4 + -2;
        iVar3 = iVar3 + -1;
        *puVar6 = *(undefined4 *)((int)param_2 + (-8 - (int)param_3) + (int)puVar4);
        puVar4[-1] = *(undefined4 *)((int)param_2 + (4 - (int)param_3) + (int)puVar6);
        puVar4 = puVar6;
      } while (iVar3 != 0);
    }
    iVar3 = (int)puVar5 - (int)param_6 >> 3;
    if (0 < iVar3) {
      iVar7 = (int)param_6 - (int)param_1;
      do {
        *param_1 = *(undefined4 *)(iVar7 + (int)param_1);
        param_1[1] = *(undefined4 *)(iVar7 + 4 + (int)param_1);
        param_1 = param_1 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return param_1;
    }
  }
  else if (param_7 < param_4) {
    if (param_1 == param_2) {
      return param_3;
    }
    puVar5 = param_2;
    puVar4 = param_1;
    if (param_3 != param_2) {
      for (; (puVar4 != puVar5 && (puVar5 = puVar5 + -2, puVar4 != puVar5)); puVar4 = puVar4 + 2) {
        FUN_0047fa30(puVar4,puVar5);
      }
      FUN_0047f9f0(param_2,param_3,param_3);
      puVar5 = param_3;
      do {
        if (param_2 == puVar5) {
          puVar4 = puVar5;
          if (param_1 != param_2) {
            FUN_0047f9f0(param_1,param_2,param_3);
            return param_1;
          }
          break;
        }
        puVar4 = puVar5 + -2;
        puVar6 = param_1 + 2;
        uVar1 = *param_1;
        uVar2 = param_1[1];
        *param_1 = puVar5[-2];
        param_1[1] = puVar5[-1];
        *puVar4 = uVar1;
        puVar5[-1] = uVar2;
        puVar5 = puVar4;
        param_1 = puVar6;
      } while (puVar6 != param_2);
      FUN_0047f9f0(param_2,puVar4,param_3);
      return puVar4;
    }
  }
  else {
    iVar7 = (int)param_2 - (int)param_1;
    iVar3 = iVar7 >> 3;
    puVar5 = param_6;
    if (0 < iVar3) {
      do {
        *puVar5 = *(undefined4 *)(((int)param_1 - (int)param_6) + (int)puVar5);
        puVar5[1] = *(undefined4 *)(((int)param_1 - (int)param_6) + 4 + (int)puVar5);
        puVar5 = puVar5 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_3 - (int)param_2 >> 3;
    if (0 < iVar3) {
      do {
        *param_1 = *(undefined4 *)(iVar7 + (int)param_1);
        param_1[1] = *(undefined4 *)(iVar7 + 4 + (int)param_1);
        param_1 = param_1 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)puVar5 - (int)param_6 >> 3;
    puVar4 = param_3;
    param_1 = param_3;
    if (0 < iVar3) {
      do {
        puVar6 = puVar4 + -2;
        iVar3 = iVar3 + -1;
        *puVar6 = *(undefined4 *)((int)puVar5 + (-8 - (int)param_3) + (int)puVar4);
        puVar4[-1] = *(undefined4 *)((int)puVar5 + (4 - (int)param_3) + (int)puVar6);
        puVar4 = puVar6;
      } while (iVar3 != 0);
      return puVar6;
    }
  }
  return param_1;
}

