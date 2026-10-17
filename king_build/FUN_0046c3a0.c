
/* WARNING: Type propagation algorithm not settling */

void FUN_0046c3a0(uint *param_1)

{
  uint *****pppppuVar1;
  int *piVar2;
  char cVar3;
  uint *****pppppuVar4;
  int iVar5;
  uint ******ppppppuVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  byte bVar10;
  uint *****pppppuVar11;
  uint uVar12;
  uint ******ppppppuVar13;
  uint uVar14;
  uint uVar15;
  int unaff_EBP;
  byte local_c1;
  uint *****local_c0;
  uint *******local_bc;
  uint ******local_b8 [46];
  
  uVar14 = param_1[10];
  pppppuVar1 = (uint *****)*param_1;
  uVar12 = param_1[2];
  bVar10 = (byte)param_1[0xb];
  if ((int)pppppuVar1 - uVar12 < *(uint *)param_1[uVar14 + 6]) {
    piVar2 = (int *)param_1[uVar14 + 6];
    cVar3 = (char)piVar2[2];
    if (cVar3 == '\0') {
      uVar14 = piVar2[5];
      param_1[3] = uVar14;
      param_1[4] = (uVar14 - uVar12) + (int)pppppuVar1;
      param_1[5] = param_1[3] + *piVar2;
      return;
    }
    if (('\x01' < cVar3) && (cVar3 < '\x04')) {
      local_bc = (uint *******)piVar2[5];
      pppppuVar4 = (uint *****)(*piVar2 + uVar12);
      local_c0 = (uint *****)0xf;
      uVar14 = uVar12;
      if (((uint *****)(uVar12 + 0xf) <= pppppuVar1) &&
         (uVar14 = (int)pppppuVar1 - 3, pppppuVar4 < pppppuVar1 + 3)) {
        uVar14 = (int)pppppuVar4 - 0xf;
      }
      if (pppppuVar4 < (uint *****)(uVar14 + 0xf)) {
        local_c0 = (uint *****)((int)pppppuVar4 - uVar14);
      }
      (*(code *)(*local_bc)[1])(uVar14 - uVar12,local_c0,(int)param_1 + 0x2dU);
      param_1[3] = (int)param_1 + 0x2dU;
      param_1[4] = (int)param_1 + (int)pppppuVar1 + (0x2d - uVar14);
      param_1[5] = unaff_EBP + 0x2d + (int)param_1;
      return;
    }
    return;
  }
  iVar5 = uVar14 - 1;
  if (-1 < iVar5) {
    puVar9 = param_1 + uVar14 + 5;
    do {
      if ((bVar10 & 1) == 0) {
        if (-1 < iVar5) {
          bVar10 = bVar10 | 1;
          uVar14 = *(uint *)(param_1[iVar5 + 6] + 0x18);
          iVar7 = **(int **)(param_1[iVar5 + 6] + 0x14);
          param_1[iVar5 + 7] = uVar14;
          uVar12 = uVar12 + iVar7;
          uVar8 = iVar5 + 1;
          cVar3 = *(char *)(uVar14 + 8);
          while (cVar3 == '\x01') {
            uVar8 = uVar8 + 1;
            if (uVar8 == 4) {
              puVar9 = param_1 + 6;
              iVar5 = 3;
              do {
                *puVar9 = puVar9[1];
                puVar9 = puVar9 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              uVar8 = 3;
            }
            uVar14 = *(uint *)(uVar14 + 0x14);
            param_1[uVar8 + 6] = uVar14;
            bVar10 = bVar10 << 1;
            cVar3 = *(char *)(uVar14 + 8);
          }
          param_1[10] = uVar8;
          param_1[2] = uVar12;
          *(byte *)(param_1 + 0xb) = bVar10;
          piVar2 = (int *)param_1[uVar8 + 6];
          uVar14 = *param_1;
          cVar3 = (char)piVar2[2];
          if (cVar3 == '\0') {
            uVar8 = piVar2[5];
            param_1[3] = uVar8;
            param_1[4] = (uVar8 - uVar12) + uVar14;
            param_1[5] = param_1[3] + *piVar2;
            return;
          }
          if (cVar3 < '\x02') {
            return;
          }
          if ('\x03' < cVar3) {
            return;
          }
          local_bc = (uint *******)piVar2[5];
          uVar15 = *piVar2 + uVar12;
          local_c0 = (uint *****)0xf;
          uVar8 = uVar12;
          if ((uVar12 + 0xf <= uVar14) && (uVar8 = uVar14 - 3, uVar15 < uVar14 + 0xc)) {
            uVar8 = uVar15 - 0xf;
          }
          if (uVar15 < uVar8 + 0xf) {
            local_c0 = (uint *****)(uVar15 - uVar8);
          }
          (*(code *)(*local_bc)[1])(uVar8 - uVar12,local_c0,(int)param_1 + 0x2dU);
          param_1[3] = (int)param_1 + 0x2dU;
          param_1[4] = (uVar14 - uVar8) + 0x2d + (int)param_1;
          param_1[5] = unaff_EBP + 0x2d + (int)param_1;
          return;
        }
        break;
      }
      uVar14 = *puVar9;
      puVar9 = puVar9 + -1;
      bVar10 = bVar10 >> 1;
      uVar12 = uVar12 - **(int **)(uVar14 + 0x14);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  ppppppuVar13 = (uint ******)param_1[1];
  local_c0 = (uint *****)0x0;
  local_c1 = 0;
  if (*ppppppuVar13 <= pppppuVar1) {
    param_1[4] = 0;
    return;
  }
  if (ppppppuVar13[4] == (uint *****)0x0) {
    local_bc = (uint *******)&local_bc;
    pppppuVar4 = (uint *****)0x0;
    iVar5 = -1;
    do {
      iVar7 = iVar5;
      ppppppuVar6 = ppppppuVar13;
      pppppuVar11 = ppppppuVar6[2];
      local_bc = local_bc + 1;
      iVar5 = iVar7 + 1;
      *local_bc = ppppppuVar6;
      ppppppuVar13 = ppppppuVar6;
      switch((char)pppppuVar11) {
      case '\0':
      case '\x02':
      case '\x03':
        param_1[2] = (uint)pppppuVar4;
        iVar7 = iVar7 + -2;
        uVar14 = 0xffffffff;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        if (iVar7 <= iVar5) {
          uVar14 = iVar5 - iVar7;
          ppppppuVar13 = (uint ******)(local_b8 + iVar7);
          iVar5 = uVar14 + 1;
          puVar9 = param_1 + 5;
          do {
            pppppuVar1 = *ppppppuVar13;
            puVar9 = puVar9 + 1;
            ppppppuVar13 = ppppppuVar13 + 1;
            iVar5 = iVar5 + -1;
            *puVar9 = (uint)pppppuVar1;
          } while (iVar5 != 0);
        }
        param_1[10] = uVar14;
        *(byte *)(param_1 + 0xb) = local_c1;
        FUN_0046c6d0(param_1);
        return;
      case '\x01':
        local_c1 = local_c1 << 1;
        pppppuVar11 = (uint *****)((int)*ppppppuVar6[5] + (int)local_c0);
        ppppppuVar13 = (uint ******)ppppppuVar6[5];
        pppppuVar4 = local_c0;
        if (pppppuVar11 <= pppppuVar1) {
          local_c1 = local_c1 | 1;
          ppppppuVar13 = (uint ******)ppppppuVar6[6];
          pppppuVar4 = pppppuVar11;
          local_c0 = pppppuVar11;
        }
      }
    } while( true );
  }
  param_1[3] = (uint)ppppppuVar13[4];
  param_1[5] = (int)*ppppppuVar13 + (int)ppppppuVar13[4];
  pppppuVar4 = ppppppuVar13[4];
  param_1[6] = (uint)ppppppuVar13;
  param_1[4] = (int)pppppuVar4 + (int)pppppuVar1;
  param_1[10] = 0;
  param_1[2] = 0;
  return;
}

