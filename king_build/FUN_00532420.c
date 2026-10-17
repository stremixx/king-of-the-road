
void FUN_00532420(int *param_1,float *param_2,int *param_3)

{
  char cVar1;
  float fVar2;
  undefined4 *puVar3;
  char *pcVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  float local_c0;
  int local_bc;
  char local_ac [60];
  undefined4 local_70 [28];
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xb)) {
    puVar3 = local_70;
    iVar8 = 10;
    do {
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar3 = local_70;
    iVar8 = 10;
    do {
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    pfVar10 = (float *)param_1[3];
    iVar8 = param_1[1] / 10;
    if (*param_3 != iVar8) {
      *param_3 = iVar8;
      iVar8 = param_1[1] + iVar8 * -10;
      param_3[1] = iVar8;
      if (iVar8 != 0) {
        local_c0 = 1e+07;
        local_bc = 0;
        if (0 < iVar8) {
          pfVar5 = (float *)(param_3 + 2);
          do {
            *pfVar5 = *pfVar10;
            pfVar5[1] = pfVar10[1];
            pfVar5[2] = pfVar10[2];
            pfVar5[0x21] = pfVar10[3];
            pfVar5[0x22] = pfVar10[4];
            pfVar5[0x23] = pfVar10[5];
            fVar2 = (pfVar5[2] - param_2[2]) * (pfVar5[2] - param_2[2]) +
                    (pfVar5[1] - param_2[1]) * (pfVar5[1] - param_2[1]) +
                    (*pfVar5 - *param_2) * (*pfVar5 - *param_2);
            if (fVar2 < local_c0) {
              param_3[0x20] = (int)*pfVar5;
              param_3[0x21] = (int)pfVar5[1];
              param_3[0x22] = (int)pfVar5[2];
              param_3[0x41] = (int)pfVar5[0x21];
              param_3[0x42] = (int)pfVar5[0x22];
              param_3[0x43] = (int)pfVar5[0x23];
              local_c0 = fVar2;
            }
            local_bc = local_bc + 1;
            pfVar10 = pfVar10 + 6;
            pfVar5 = pfVar5 + 3;
          } while (local_bc < param_3[1]);
        }
        if ((param_1[2] + param_3[1] * -6 & 0x3fffffffU) != 0) {
          iVar9 = 0;
          pcVar4 = (char *)(param_1[3] + param_3[1] * 0x18);
          iVar8 = -(int)pcVar4;
          do {
            cVar1 = *pcVar4;
            if ((cVar1 == ' ') || (cVar1 == '\0')) break;
            pcVar4[(int)(local_ac + iVar8)] = cVar1;
            iVar9 = iVar9 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar9 < 0x20);
          local_ac[iVar9] = '\0';
          iVar8 = FUN_005ee8e0(0,local_ac);
          if (iVar8 == 0) {
            if (*(int *)(DAT_00695c00 + 0x1e8) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(*(int *)(DAT_00695c00 + 0x1e8) + 0x4c);
            }
          }
          uVar6 = 0xffffffff;
          pcVar4 = *(char **)(iVar8 + 0xc);
          do {
            pcVar12 = pcVar4;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          piVar11 = (int *)(pcVar12 + -uVar6);
          piVar13 = param_3 + 0x44;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *piVar13 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar13 = piVar13 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(char *)piVar13 = (char)*piVar11;
            piVar11 = (int *)((int)piVar11 + 1);
            piVar13 = (int *)((int)piVar13 + 1);
          }
        }
      }
    }
  }
  return;
}

