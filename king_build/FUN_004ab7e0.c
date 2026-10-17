
int FUN_004ab7e0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int local_8;
  
  local_8 = (param_2 - param_1) / 0x2c;
  if (local_8 < 1) {
    return param_3;
  }
  iVar2 = param_3 + local_8 * -0x2c;
  puVar9 = (uint *)(param_3 + 0xc);
  puVar11 = (uint *)(param_2 + 0xc);
  do {
    uVar3 = puVar9[-0xd];
    puVar10 = puVar9 + -0xb;
    puVar12 = puVar11 + -0xb;
    if ((uVar3 != 0) && ((*puVar10 & 0x10000) == 0)) {
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + -1;
      piVar4 = (int *)puVar9[-0xd];
      if (((piVar4[1] == 0) &&
          (((piVar4 != (int *)puVar11[-0xd] || (*puVar10 != *puVar12)) ||
           (puVar9[-0xc] != puVar11[-0xc])))) && (piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0xc))(1);
      }
    }
    if ((*puVar12 & 0x10000) == 0) {
      puVar9[-0xc] = 0;
      uVar3 = puVar11[-0xd];
      if (uVar3 == 0) {
        puVar9[-0xd] = 0;
        *puVar10 = 0;
      }
      else {
        puVar9[-0xd] = uVar3;
        *puVar10 = *puVar12;
        *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
      }
    }
    else {
      *puVar10 = *puVar12;
      puVar9[-0xd] = puVar11[-0xd];
      puVar9[-0xc] = puVar11[-0xc];
    }
    puVar1 = puVar9 + -10;
    if (puVar11 + -10 != puVar1) {
      uVar3 = puVar11[-9];
      uVar13 = puVar11[-10];
      uVar8 = *puVar1;
      uVar5 = (int)(uVar3 - uVar13) / 0xc;
      if ((uint)((int)(puVar9[-8] - uVar8) / 0xc) < uVar5) {
        uVar8 = FUN_004a46c0(uVar5,uVar13,uVar3);
        uVar3 = puVar9[-9];
        for (uVar13 = *puVar1; uVar13 != uVar3; uVar13 = uVar13 + 0xc) {
          FUN_0046c790(0);
        }
        iVar6 = (int)(puVar9[-8] - *puVar1) / 0xc;
        if (iVar6 != 0) {
          FUN_0044b440(*puVar1,iVar6 * 0xc);
        }
        *puVar1 = uVar8;
        puVar9[-8] = uVar8 + uVar5 * 0xc;
      }
      else {
        uVar7 = (int)(puVar9[-9] - uVar8) / 0xc;
        if (uVar7 < uVar5) {
          FUN_004a2d60(uVar13,uVar13 + uVar7 * 0xc,uVar8,iVar2,0);
          FUN_004a2e60(puVar11[-10] + ((int)(puVar9[-9] - *puVar1) / 0xc) * 0xc,puVar11[-9],
                       puVar9[-9],iVar2);
        }
        else {
          uVar13 = FUN_004a2d60(uVar13,uVar3,uVar8,iVar2,0);
          uVar3 = puVar9[-9];
          for (; uVar13 != uVar3; uVar13 = uVar13 + 0xc) {
            FUN_0046c790(0);
          }
        }
      }
      puVar9[-9] = *puVar1 + uVar5 * 0xc;
    }
    puVar9[-7] = puVar11[-7];
    FUN_0040c060(puVar11 + -6);
    local_8 = local_8 + -1;
    puVar9 = puVar10;
    puVar11 = puVar12;
  } while (local_8 != 0);
  return iVar2;
}

