
void FUN_0046afd0(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int **ppiVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBP;
  int iVar11;
  byte local_c1;
  int local_c0;
  int *local_bc;
  int *local_b8 [46];
  
  puVar7 = (uint *)param_1[1];
  local_c1 = 0;
  if (*puVar7 <= *param_1) {
    param_1[4] = 0;
    return;
  }
  if (puVar7[4] == 0) {
    ppiVar8 = &local_bc;
    uVar9 = 0;
    iVar11 = -1;
    do {
      iVar5 = iVar11;
      puVar4 = puVar7;
      uVar1 = puVar4[2];
      ppiVar8 = ppiVar8 + 1;
      iVar11 = iVar5 + 1;
      *ppiVar8 = (int *)puVar4;
      puVar7 = puVar4;
      switch((char)uVar1) {
      case '\0':
      case '\x02':
      case '\x03':
        param_1[2] = uVar9;
        iVar5 = iVar5 + -2;
        uVar9 = 0xffffffff;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar11) {
          uVar9 = iVar11 - iVar5;
          ppiVar8 = local_b8 + iVar5;
          iVar11 = uVar9 + 1;
          puVar7 = param_1 + 5;
          do {
            piVar2 = *ppiVar8;
            puVar7 = puVar7 + 1;
            ppiVar8 = ppiVar8 + 1;
            iVar11 = iVar11 + -1;
            *puVar7 = (uint)piVar2;
          } while (iVar11 != 0);
        }
        param_1[10] = uVar9;
        *(byte *)(param_1 + 0xb) = local_c1;
        piVar2 = (int *)param_1[uVar9 + 6];
        uVar9 = param_1[2];
        uVar1 = *param_1;
        cVar3 = (char)piVar2[2];
        if (cVar3 == '\0') {
          uVar10 = piVar2[5];
          param_1[3] = uVar10;
          param_1[4] = (uVar10 - uVar9) + uVar1;
          param_1[5] = *piVar2 + param_1[3];
        }
        else if (('\x01' < cVar3) && (cVar3 < '\x04')) {
          local_bc = (int *)piVar2[5];
          uVar6 = *piVar2 + uVar9;
          local_c0 = 0xf;
          uVar10 = uVar9;
          if ((uVar9 + 0xf <= uVar1) && (uVar10 = uVar1 - 3, uVar6 < uVar1 + 0xc)) {
            uVar10 = uVar6 - 0xf;
          }
          if (uVar6 < uVar10 + 0xf) {
            local_c0 = uVar6 - uVar10;
          }
          (**(code **)(*local_bc + 4))(uVar10 - uVar9,local_c0,(int)param_1 + 0x2dU);
          param_1[3] = (int)param_1 + 0x2dU;
          param_1[4] = (uVar1 - uVar10) + 0x2d + (int)param_1;
          param_1[5] = unaff_EBP + 0x2d + (int)param_1;
          return;
        }
        return;
      case '\x01':
        local_c1 = local_c1 << 1;
        uVar1 = uVar9 + *(uint *)puVar4[5];
        puVar7 = (uint *)puVar4[5];
        if (uVar1 <= *param_1) {
          local_c1 = local_c1 | 1;
          puVar7 = (uint *)puVar4[6];
          uVar9 = uVar1;
        }
      }
    } while( true );
  }
  param_1[3] = puVar7[4];
  param_1[5] = *puVar7 + puVar7[4];
  uVar9 = puVar7[4];
  param_1[6] = (uint)puVar7;
  param_1[4] = uVar9 + *param_1;
  param_1[10] = 0;
  param_1[2] = 0;
  return;
}

