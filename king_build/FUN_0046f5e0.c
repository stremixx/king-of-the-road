
void FUN_0046f5e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5
                 ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar9 = param_2;
  if (param_4 != 0) {
    while (param_5 != 0) {
      if (param_4 + param_5 == 2) {
        if ((uint)param_1[2] <= (uint)puVar9[2]) {
          return;
        }
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar9;
        param_1[1] = puVar9[1];
        param_1[2] = puVar9[2];
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        return;
      }
      if (param_5 < param_4) {
        puVar6 = (undefined4 *)(param_4 / 2);
        param_2 = (undefined4 *)0x0;
        local_14 = param_1 + (int)puVar6 * 3;
        local_10 = puVar6;
        FUN_0046f870(puVar9,param_3,&param_2);
        puVar10 = puVar9;
        iVar5 = (int)param_2;
        while (param_2 = (undefined4 *)iVar5, 0 < (int)param_2) {
          iVar5 = (int)param_2 >> 1;
          local_8 = puVar10;
          FUN_0046fcb0(&local_8,iVar5);
          if ((uint)local_8[2] < (uint)local_14[2]) {
            puVar10 = local_8 + 3;
            iVar5 = (int)param_2 + (-1 - iVar5);
          }
        }
        local_c = ((int)puVar10 - (int)puVar9) / 0xc;
        param_2 = puVar10;
      }
      else {
        local_c = param_5 / 2;
        param_2 = puVar9 + local_c * 3;
        iVar5 = ((int)puVar9 - (int)param_1) / 0xc;
        local_14 = param_1;
        while (iVar4 = iVar5, 0 < iVar4) {
          iVar5 = iVar4 >> 1;
          local_10 = local_14;
          FUN_0046fcb0(&local_10,iVar5);
          if ((uint)local_10[2] <= (uint)param_2[2]) {
            local_14 = local_10 + 3;
            iVar5 = iVar4 + (-1 - iVar5);
          }
        }
        puVar6 = (undefined4 *)(((int)local_14 - (int)param_1) / 0xc);
        local_10 = puVar6;
      }
      puVar10 = param_2;
      local_4 = param_2;
      if ((local_14 != puVar9) &&
         (puVar7 = puVar9, puVar8 = local_14, puVar10 = local_14, param_2 != puVar9)) {
        for (; (puVar8 != puVar7 && (puVar7 = puVar7 + -3, puVar8 != puVar7)); puVar8 = puVar8 + 3)
        {
          FUN_00470920(puVar8,puVar7);
        }
        FUN_004708c0(puVar9,param_2,param_1);
        do {
          if (puVar9 == local_4) {
            puVar7 = local_4;
            if (puVar10 != puVar9) {
              FUN_004708c0(puVar10,puVar9,param_1);
              puVar6 = local_10;
              goto LAB_0046f7e7;
            }
            break;
          }
          puVar7 = local_4 + -3;
          puVar6 = puVar10 + 3;
          local_4 = puVar7;
          FUN_00470920(puVar10,puVar7);
          puVar10 = puVar6;
        } while (puVar6 != puVar9);
        FUN_004708c0(puVar9,puVar7,param_1);
        puVar6 = local_10;
        puVar10 = puVar7;
      }
LAB_0046f7e7:
      FUN_0046f5e0(param_1,local_14,puVar10,puVar6,local_c,param_6);
      param_5 = param_5 - local_c;
      param_4 = param_4 - (int)puVar6;
      puVar9 = param_2;
      param_1 = puVar10;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}

