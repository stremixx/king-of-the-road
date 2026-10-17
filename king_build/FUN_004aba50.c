
int FUN_004aba50(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int local_8;
  
  local_8 = (param_2 - param_1) / 0x2c;
  if (local_8 < 1) {
    return param_3;
  }
  puVar8 = (uint *)(param_3 + 0xc);
  puVar9 = (uint *)(param_1 + 0xc);
  param_3 = param_3 + local_8 * 0x2c;
  do {
    uVar2 = puVar8[-2];
    if ((uVar2 != 0) && ((*puVar8 & 0x10000) == 0)) {
      *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + -1;
      piVar3 = (int *)puVar8[-2];
      if (((piVar3[1] == 0) &&
          (((piVar3 != (int *)puVar9[-2] || (*puVar8 != *puVar9)) || (puVar8[-1] != puVar9[-1]))))
         && (piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0xc))(1);
      }
    }
    if ((*puVar9 & 0x10000) == 0) {
      puVar8[-1] = 0;
      uVar2 = puVar9[-2];
      if (uVar2 == 0) {
        puVar8[-2] = 0;
        *puVar8 = 0;
      }
      else {
        puVar8[-2] = uVar2;
        *puVar8 = *puVar9;
        *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
      }
    }
    else {
      *puVar8 = *puVar9;
      puVar8[-2] = puVar9[-2];
      puVar8[-1] = puVar9[-1];
    }
    puVar1 = puVar8 + 1;
    if (puVar9 + 1 != puVar1) {
      uVar2 = puVar9[2];
      uVar10 = puVar9[1];
      uVar7 = *puVar1;
      uVar4 = (int)(uVar2 - uVar10) / 0xc;
      if ((uint)((int)(puVar8[3] - uVar7) / 0xc) < uVar4) {
        uVar7 = FUN_004a46c0(uVar4,uVar10,uVar2);
        uVar2 = puVar8[2];
        for (uVar10 = *puVar1; uVar10 != uVar2; uVar10 = uVar10 + 0xc) {
          FUN_0046c790(0);
        }
        iVar5 = (int)(puVar8[3] - *puVar1) / 0xc;
        if (iVar5 != 0) {
          FUN_0044b440(*puVar1,iVar5 * 0xc);
        }
        *puVar1 = uVar7;
        puVar8[3] = uVar7 + uVar4 * 0xc;
      }
      else {
        uVar6 = (int)(puVar8[2] - uVar7) / 0xc;
        if (uVar6 < uVar4) {
          FUN_004a2d60(uVar10,uVar10 + uVar6 * 0xc,uVar7,param_3,0);
          FUN_004a2e60(puVar9[1] + ((int)(puVar8[2] - *puVar1) / 0xc) * 0xc,puVar9[2],puVar8[2],
                       param_3);
        }
        else {
          uVar10 = FUN_004a2d60(uVar10,uVar2,uVar7,param_3,0);
          uVar2 = puVar8[2];
          for (; uVar10 != uVar2; uVar10 = uVar10 + 0xc) {
            FUN_0046c790(0);
          }
        }
      }
      puVar8[2] = *puVar1 + uVar4 * 0xc;
    }
    puVar8[4] = puVar9[4];
    FUN_0040c060(puVar9 + 5);
    puVar9 = puVar9 + 0xb;
    puVar8 = puVar8 + 0xb;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return param_3;
}

