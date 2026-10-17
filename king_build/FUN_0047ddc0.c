
void FUN_0047ddc0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5
                 ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 local_28 [10];
  
  puVar3 = param_2;
  if (param_4 != 0) {
    while (param_5 != 0) {
      if (param_4 + param_5 == 2) {
        if ((int)param_1[8] <= (int)puVar3[8]) {
          return;
        }
        puVar6 = param_1;
        puVar5 = local_28;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar6 = puVar3;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_1 = *puVar6;
          puVar6 = puVar6 + 1;
          param_1 = param_1 + 1;
        }
        puVar6 = local_28;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
        return;
      }
      if (param_5 < param_4) {
        puVar6 = (undefined4 *)(param_4 / 2);
        param_2 = (undefined4 *)0x0;
        local_3c = param_1 + (int)puVar6 * 10;
        local_38 = puVar6;
        FUN_0047e050(puVar3,param_3,&param_2);
        puVar5 = puVar3;
        iVar2 = (int)param_2;
        while (param_2 = (undefined4 *)iVar2, 0 < (int)param_2) {
          iVar2 = (int)param_2 >> 1;
          local_30 = puVar5;
          FUN_0047ee00(&local_30,iVar2);
          if ((int)local_30[8] < (int)local_3c[8]) {
            puVar5 = local_30 + 10;
            iVar2 = (int)param_2 + (-1 - iVar2);
          }
        }
        local_34 = ((int)puVar5 - (int)puVar3) / 0x28;
        param_2 = puVar5;
      }
      else {
        local_34 = param_5 / 2;
        param_2 = puVar3 + local_34 * 10;
        iVar2 = ((int)puVar3 - (int)param_1) / 0x28;
        local_3c = param_1;
        while (iVar1 = iVar2, 0 < iVar1) {
          iVar2 = iVar1 >> 1;
          local_38 = local_3c;
          FUN_0047ee00(&local_38,iVar2);
          if ((int)local_38[8] <= (int)param_2[8]) {
            local_3c = local_38 + 10;
            iVar2 = iVar1 + (-1 - iVar2);
          }
        }
        puVar6 = (undefined4 *)(((int)local_3c - (int)param_1) / 0x28);
        local_38 = puVar6;
      }
      puVar5 = param_2;
      local_2c = param_2;
      if ((local_3c != puVar3) &&
         (puVar4 = local_3c, puVar5 = local_3c, puVar7 = puVar3, param_2 != puVar3)) {
        for (; (puVar4 != puVar7 && (puVar7 = puVar7 + -10, puVar4 != puVar7)); puVar4 = puVar4 + 10
            ) {
          FUN_0047fab0(puVar4,puVar7);
        }
        FUN_0047fa60(puVar3,param_2,param_1);
        do {
          if (puVar3 == local_2c) {
            puVar6 = local_2c;
            if (puVar5 != puVar3) {
              FUN_0047fa60(puVar5,puVar3,param_1);
              puVar6 = local_38;
              goto LAB_0047dfca;
            }
            break;
          }
          puVar6 = local_2c + -10;
          puVar4 = puVar5 + 10;
          local_2c = puVar6;
          FUN_0047fab0(puVar5,puVar6);
          puVar5 = puVar4;
        } while (puVar4 != puVar3);
        puVar5 = puVar6;
        FUN_0047fa60(puVar3,puVar5,param_1);
        puVar6 = local_38;
      }
LAB_0047dfca:
      FUN_0047ddc0(param_1,local_3c,puVar5,puVar6,local_34,param_6);
      param_5 = param_5 - local_34;
      param_4 = param_4 - (int)puVar6;
      puVar3 = param_2;
      param_1 = puVar5;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}

