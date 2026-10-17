
void FUN_0046f4d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int local_1c;
  
  if ((param_1 != param_2) && (puVar8 = param_1 + 3, puVar8 != param_2)) {
    puVar7 = param_1 + 2;
    do {
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      if (uVar3 < param_1[2]) {
        local_1c = ((int)puVar8 - (int)param_1) / 0xc;
        if (0 < local_1c) {
          puVar6 = puVar7 + 1;
          puVar9 = puVar7 + 4;
          do {
            puVar9[-3] = puVar6[-3];
            puVar9[-2] = puVar6[-2];
            puVar9[-1] = puVar6[-1];
            local_1c = local_1c + -1;
            puVar6 = puVar6 + -3;
            puVar9 = puVar9 + -3;
          } while (local_1c != 0);
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
      }
      else {
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = *puVar7;
        puVar9 = puVar7 + -2;
        puVar6 = puVar8;
        while (puVar5 = puVar9, uVar3 < uVar4) {
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar9 = puVar5 + -3;
          puVar6 = puVar5;
          uVar4 = puVar5[-1];
        }
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
      }
      puVar8 = puVar8 + 3;
      puVar7 = puVar7 + 3;
    } while (puVar8 != param_2);
  }
  return;
}

