
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b86d0(ushort *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  if (param_3 != 0) {
    local_24 = (undefined4 *)0x0;
    local_20 = 0;
    local_30 = FUN_005b5b70();
    iVar8 = param_2[2];
    iVar14 = *param_2;
    iVar5 = iVar8 - iVar14;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 - (uint)*(ushort *)(param_3 + 0x14);
      } while (0 < iVar5);
    }
    local_3c = param_2[3];
    iVar4 = param_2[1];
    iVar5 = iVar5 / 2;
    iVar6 = local_3c - iVar4;
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 - (uint)*(ushort *)(param_3 + 0x16);
      } while (0 < iVar6);
    }
    if (((((*(byte *)(param_3 + 0x34) & 1) != 0) && (iVar14 <= iVar8)) && (iVar4 <= local_3c)) &&
       (((uVar11 = (uint)*param_1, iVar14 < (int)uVar11 &&
         (uVar9 = (uint)param_1[1], iVar4 < (int)uVar9)) && ((-1 < iVar8 && (-1 < local_3c)))))) {
      if ((int)uVar11 <= iVar8) {
        iVar8 = uVar11 - 1;
      }
      if ((int)uVar9 <= local_3c) {
        local_3c = uVar9 - 1;
      }
      local_2c = iVar14;
      if (iVar14 < 0) {
        local_2c = 0;
        local_24 = (undefined4 *)iVar14;
      }
      local_28 = iVar4;
      if (iVar4 < 0) {
        local_28 = 0;
        local_20 = iVar4;
      }
      uVar1 = *(ushort *)(param_3 + 0x14);
      uVar2 = *(ushort *)(param_3 + 0x18);
      local_c = 0;
      local_40 = (undefined4 *)
                 (*(int *)(param_3 + 8) - ((uint)uVar1 * (iVar6 / 2) + iVar5) * (uint)uVar2);
      if (DAT_0071f864 == 0) {
        if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) {
          local_24 = (undefined4 *)
                     ((uint)param_1[3] * local_28 +
                      *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) +
                     (uint)param_1[2] * local_2c);
          if (*(int *)(param_1 + 0x28) == 2) {
            if (local_30 == 0) {
              return;
            }
            if (*(float *)(param_1 + 0x2c) == (float)_DAT_0064a668) {
              return;
            }
            uVar7 = __ftol();
            local_30 = FUN_005b8b60(uVar7);
          }
          local_34 = local_28;
          if (local_28 <= local_3c) {
            do {
              uVar3 = *(ushort *)(param_3 + 0x18);
              uVar11 = (uint)uVar3 * iVar5 + (uint)uVar2 * (uint)uVar1;
              local_20 = iVar5;
              iVar14 = local_2c;
              puVar12 = local_24;
              while (iVar14 <= iVar8) {
                iVar4 = iVar14 + uVar11;
                if (iVar8 + 1 < iVar4) {
                  if (*(int *)(param_1 + 0x28) == 2) {
                    if (uVar3 == 1) {
                      FUN_005fded0(local_30,puVar12,local_40,(iVar8 - iVar14) + 1);
                    }
                    else if (uVar3 == 2) {
                      FUN_005fe073(local_30,puVar12,local_40,(iVar8 - iVar14) + 1);
                    }
                  }
                  else {
                    uVar10 = ((iVar8 - iVar14) + 1) * (uint)param_1[2];
                    puVar13 = local_40;
                    puVar15 = puVar12;
                    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar15 = puVar15 + 1;
                    }
                    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
                      puVar13 = (undefined4 *)((int)puVar13 + 1);
                      puVar15 = (undefined4 *)((int)puVar15 + 1);
                    }
                  }
                }
                else if (*(int *)(param_1 + 0x28) == 2) {
                  if (uVar3 == 1) {
                    FUN_005fded0(local_30,puVar12,local_40,uVar11);
                  }
                  else if (uVar3 == 2) {
                    FUN_005fe073(local_30,puVar12,local_40,(int)uVar11 / 2);
                  }
                }
                else {
                  puVar13 = local_40;
                  puVar15 = puVar12;
                  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                  }
                  for (uVar9 = uVar11 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
                    puVar13 = (undefined4 *)((int)puVar13 + 1);
                    puVar15 = (undefined4 *)((int)puVar15 + 1);
                  }
                }
                puVar12 = (undefined4 *)((int)puVar12 + uVar11);
                uVar3 = *(ushort *)(param_3 + 0x18);
                local_40 = (undefined4 *)((int)local_40 + (uint)uVar3 * local_20);
                uVar11 = uVar11 - (uint)uVar3 * local_20;
                local_20 = 0;
                iVar14 = iVar4;
              }
              local_34 = local_34 + 1;
              if (((local_34 - local_28) - iVar6 / 2) % (int)(uint)*(ushort *)(param_3 + 0x16) == 0)
              {
                local_40 = (undefined4 *)
                           (*(int *)(param_3 + 8) - (uint)*(ushort *)(param_3 + 0x18) * iVar5);
              }
              else {
                local_40 = (undefined4 *)
                           ((int)local_40 +
                           ((uint)*(ushort *)(param_3 + 0x14) - iVar5) *
                           (uint)*(ushort *)(param_3 + 0x18));
              }
              local_24 = (undefined4 *)((int)local_24 + (uint)param_1[3]);
            } while (local_34 <= local_3c);
            return;
          }
        }
      }
      else {
        local_4 = 0;
        for (; local_28 < local_3c; local_28 = local_28 + (local_4 - local_c)) {
          if (local_2c < iVar8) {
            puVar12 = local_24;
            iVar14 = local_2c;
            do {
              local_10 = -(int)puVar12;
              local_8 = (uint)*(ushort *)(param_3 + 0x14);
              local_4 = (uint)*(ushort *)(param_3 + 0x16);
              if (iVar8 < (int)(local_8 + (int)puVar12 + iVar14)) {
                local_8 = (local_10 - iVar14) + iVar8;
              }
              if (local_3c < (int)(local_4 + local_20 + local_28)) {
                local_4 = (-local_20 - local_28) + local_3c;
              }
              local_c = -local_20;
              FUN_005b7870(param_1,param_3,&local_10,iVar14,local_28);
              iVar14 = iVar14 + (local_8 - local_10);
              puVar12 = (undefined4 *)0x0;
            } while (iVar14 < iVar8);
          }
          local_20 = 0;
        }
      }
    }
  }
  return;
}

