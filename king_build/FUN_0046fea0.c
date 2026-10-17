
void FUN_0046fea0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_34;
  int local_2c;
  
  local_2c = (int)param_2 - (int)param_1;
  puVar8 = param_1;
  if (param_3 <= local_2c / 0xc) {
    puVar9 = param_1;
    do {
      puVar9 = puVar9 + param_3 * 3;
      if ((param_1 != puVar9) && (puVar8 = puVar9 + param_3 * -3 + 3, puVar8 != puVar9)) {
        puVar7 = puVar9 + param_3 * -3 + 2;
        do {
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          uVar6 = puVar8[2];
          if (uVar6 < puVar9[param_3 * -3 + 2]) {
            local_34 = ((int)puVar8 - (int)param_1) / 0xc;
            if (0 < local_34) {
              puVar5 = puVar7 + 1;
              puVar10 = puVar7 + 4;
              do {
                puVar10[-3] = puVar5[-3];
                puVar10[-2] = puVar5[-2];
                puVar10[-1] = puVar5[-1];
                local_34 = local_34 + -1;
                puVar5 = puVar5 + -3;
                puVar10 = puVar10 + -3;
              } while (local_34 != 0);
            }
            *param_1 = uVar1;
            param_1[1] = uVar2;
            param_1[2] = uVar6;
          }
          else {
            uVar2 = *puVar8;
            uVar6 = puVar8[1];
            uVar3 = puVar8[2];
            uVar1 = *puVar7;
            puVar10 = puVar7 + -2;
            puVar5 = puVar8;
            while (puVar4 = puVar10, uVar3 < uVar1) {
              *puVar5 = *puVar4;
              puVar5[1] = puVar4[1];
              puVar5[2] = puVar4[2];
              puVar10 = puVar4 + -3;
              puVar5 = puVar4;
              uVar1 = puVar4[-1];
            }
            *puVar5 = uVar2;
            puVar5[1] = uVar6;
            puVar5[2] = uVar3;
          }
          puVar8 = puVar8 + 3;
          puVar7 = puVar7 + 3;
        } while (puVar8 != puVar9);
      }
      local_2c = local_2c + param_3 * -0xc;
      puVar8 = param_1 + param_3 * 3;
      param_1 = puVar8;
    } while (param_3 <= local_2c / 0xc);
  }
  if ((puVar8 != param_2) && (puVar9 = puVar8 + 3, puVar9 != param_2)) {
    puVar7 = puVar8 + 2;
    do {
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar6 = puVar9[2];
      if (uVar6 < puVar8[2]) {
        param_1 = (uint *)(((int)puVar9 - (int)puVar8) / 0xc);
        if (0 < (int)param_1) {
          puVar5 = puVar7 + 1;
          puVar10 = puVar7 + 4;
          do {
            puVar10[-3] = puVar5[-3];
            puVar10[-2] = puVar5[-2];
            puVar10[-1] = puVar5[-1];
            param_1 = (uint *)((int)param_1 + -1);
            puVar5 = puVar5 + -3;
            puVar10 = puVar10 + -3;
          } while (param_1 != (uint *)0x0);
        }
        *puVar8 = uVar1;
        puVar8[1] = uVar2;
        puVar5 = puVar8;
      }
      else {
        uVar1 = *puVar9;
        uVar2 = puVar9[1];
        uVar6 = puVar9[2];
        uVar3 = *puVar7;
        puVar10 = puVar7 + -2;
        puVar5 = puVar9;
        while (puVar4 = puVar10, uVar6 < uVar3) {
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
          puVar5[2] = puVar4[2];
          puVar10 = puVar4 + -3;
          puVar5 = puVar4;
          uVar3 = puVar4[-1];
        }
        *puVar5 = uVar1;
        puVar5[1] = uVar2;
      }
      puVar9 = puVar9 + 3;
      puVar7 = puVar7 + 3;
      puVar5[2] = uVar6;
    } while (puVar9 != param_2);
  }
  return;
}

