
int FUN_004ab3f0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  
  param_2 = (param_2 - param_1) / 0x2c;
  if (param_2 < 1) {
    return param_3;
  }
  iVar8 = param_3 - param_1;
  puVar10 = (uint *)(param_1 + 0xc);
  do {
    iVar2 = *(int *)(param_3 + 4);
    if ((iVar2 != 0) && ((*(uint *)((int)puVar10 + iVar8) & 0x10000) == 0)) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
      piVar3 = *(int **)(param_3 + 4);
      if (((piVar3[1] == 0) &&
          (((piVar3 != (int *)puVar10[-2] || (*(uint *)((int)puVar10 + iVar8) != *puVar10)) ||
           (*(uint *)(param_3 + 8) != puVar10[-1])))) && (piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0xc))(1);
      }
    }
    if ((*puVar10 & 0x10000) == 0) {
      *(undefined4 *)(param_3 + 8) = 0;
      uVar9 = puVar10[-2];
      if (uVar9 == 0) {
        *(undefined4 *)(param_3 + 4) = 0;
        *(undefined4 *)((int)puVar10 + iVar8) = 0;
      }
      else {
        *(uint *)(param_3 + 4) = uVar9;
        *(uint *)((int)puVar10 + iVar8) = *puVar10;
        *(int *)(uVar9 + 4) = *(int *)(uVar9 + 4) + 1;
      }
    }
    else {
      *(uint *)((int)puVar10 + iVar8) = *puVar10;
      *(uint *)(param_3 + 4) = puVar10[-2];
      *(uint *)(param_3 + 8) = puVar10[-1];
    }
    puVar1 = (uint *)(param_3 + 0x10);
    if (puVar10 + 1 != puVar1) {
      uVar9 = puVar10[1];
      uVar5 = (int)(puVar10[2] - uVar9) / 0xc;
      uVar4 = *puVar1;
      if ((uint)((int)(*(int *)(param_3 + 0x18) - uVar4) / 0xc) < uVar5) {
        uVar6 = FUN_004a46c0(uVar5,uVar9,puVar10[2]);
        uVar4 = *(uint *)(param_3 + 0x14);
        for (uVar9 = *puVar1; uVar9 != uVar4; uVar9 = uVar9 + 0xc) {
          FUN_004ab660(uVar9);
        }
        iVar2 = (int)(*(int *)(param_3 + 0x18) - *puVar1) / 0xc;
        if (iVar2 != 0) {
          FUN_0044b440(*puVar1,iVar2 * 0xc);
        }
        *puVar1 = uVar6;
        *(uint *)(param_3 + 0x18) = uVar6 + uVar5 * 0xc;
      }
      else {
        uVar6 = (int)(*(int *)(param_3 + 0x14) - uVar4) / 0xc;
        if (uVar6 < uVar5) {
          FUN_004a2d60(uVar9,uVar9 + uVar6 * 0xc,uVar4,uVar5,0);
          FUN_004a2e60(puVar10[1] + ((int)(*(int *)(param_3 + 0x14) - *puVar1) / 0xc) * 0xc,
                       puVar10[2],*(int *)(param_3 + 0x14),uVar5);
        }
        else {
          iVar7 = FUN_004a2d60(uVar9,puVar10[2],uVar4,uVar5,0);
          iVar2 = *(int *)(param_3 + 0x14);
          for (; iVar7 != iVar2; iVar7 = iVar7 + 0xc) {
            FUN_004ab660(iVar7);
          }
        }
      }
      *(uint *)(param_3 + 0x14) = *puVar1 + uVar5 * 0xc;
    }
    *(uint *)(param_3 + 0x1c) = puVar10[4];
    FUN_0040c060(puVar10 + 5);
    param_3 = param_3 + 0x2c;
    puVar10 = puVar10 + 0xb;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return param_3;
}

