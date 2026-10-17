
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b8030(ushort *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int local_b0;
  int local_ac;
  uint local_a8;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  byte *local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64 [2];
  undefined4 local_5c;
  
  local_a8 = 0;
  puVar3 = (undefined4 *)FUN_005b5b70();
  if (((DAT_00701dec & 0x4000) == 0) || (bVar2 = true, param_5 < 1)) {
    bVar2 = false;
  }
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x1c) & 1) != 0)) {
    if (*(int *)(param_1 + 0x3a) == 1) {
      local_64[0] = 100;
      local_5c = 0xcc0020;
      if (param_2 < 0) {
        local_90 = 0;
        local_74 = -param_2;
      }
      else {
        local_74 = 0;
        local_90 = param_2;
      }
      local_88 = (uint)*(ushort *)(param_4 + 4) + param_2;
      if (-1 < (int)local_88) {
        if ((int)(uint)*param_1 <= (int)local_88) {
          local_88 = (uint)*param_1;
        }
        local_6c = (local_88 - local_90) + local_74;
        if (param_3 < 0) {
          local_8c = 0;
          local_70 = -param_3;
        }
        else {
          local_70 = 0;
          local_8c = param_3;
        }
        local_84 = param_3 + (uint)*(ushort *)(param_4 + 6);
        if (-1 < (int)local_84) {
          if ((int)(uint)param_1[1] <= (int)local_84) {
            local_84 = (uint)param_1[1];
          }
          local_68 = (local_84 - local_8c) + local_70;
          if ((local_8c <= (int)local_84) && (local_90 <= (int)local_88)) {
            if (*(int *)(param_1 + 0x30) != 0) {
              local_90 = local_90 + *(int *)(param_1 + 0x32);
              local_8c = local_8c + *(int *)(param_1 + 0x34);
              local_88 = local_88 + *(int *)(param_1 + 0x32);
              local_84 = local_84 + *(int *)(param_1 + 0x34);
            }
            iVar4 = (**(code **)(*DAT_0071f85c + 0x14))
                              (DAT_0071f85c,&local_90,*(undefined4 *)(param_4 + 0x24),&local_74,
                               0x1008000,local_64);
            if (iVar4 != 0) {
              uVar5 = FUN_005d42c0(iVar4,s_ddrw_mask_fail_0067e044,0);
              FUN_005d2250(uVar5);
              return;
            }
          }
        }
      }
    }
    else {
      pbVar9 = *(byte **)(param_4 + 0x10);
      if (pbVar9 != (byte *)0x0) {
        if ((((-1 < param_2) && (-1 < param_3)) &&
            ((int)((uint)*(ushort *)(param_4 + 4) + param_2) <= (int)(uint)*param_1)) &&
           ((((int)((uint)*(ushort *)(param_4 + 6) + param_3) <= (int)(uint)param_1[1] &&
             ((DAT_00701dec & 0x4000) == 0)) &&
            ((param_1[2] == 1 &&
             ((*(int *)(param_1 + 0x28) != 4 && (*(int *)(param_1 + 0x28) != 3)))))))) {
          FUN_005b7dd0(param_1,param_2,param_3,param_4);
          return;
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 == 2) {
          if (puVar3 == (undefined4 *)0x0) {
            return;
          }
          if (*(float *)(param_1 + 0x2c) == (float)_DAT_0064a668) {
            return;
          }
          if (*(float *)(param_1 + 0x2c) == (float)_DAT_0064a660) {
            local_a0 = 0;
          }
          else {
            uVar5 = __ftol();
            local_a0 = FUN_005b8b60(uVar5);
            local_a8 = 1;
          }
        }
        else if (iVar4 == 4) {
          local_a8 = 8;
        }
        else if (iVar4 == 3) {
          local_7c = *puVar3;
          local_a8 = 0x10;
          local_a0 = (undefined4)(0x100 / (longlong)(int)puVar3[199]);
          local_78 = (uint)(byte)param_1[0x2e];
        }
        if (param_1[2] == 2) {
          local_a8 = local_a8 | 2;
        }
        if (bVar2) {
          local_a8 = local_a8 | 4;
          local_98 = *(int *)(param_1 + 0x18) + ((uint)param_1[4] * param_3 + param_2) * 2;
        }
        if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) {
          uVar7 = (uint)param_1[2];
          pbVar8 = (byte *)(uVar7 * param_2 + *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) +
                           (uint)param_1[3] * param_3);
          iVar4 = param_3;
          if (*(short *)(param_4 + 6) != 0) {
            do {
              if (bVar2) {
                local_ac = local_98;
              }
              local_b0 = param_2;
              local_80 = pbVar8;
              if (*(short *)(param_4 + 4) != 0) {
                do {
                  bVar1 = *pbVar9;
                  if ((bVar1 & 0x80) == 0) {
                    local_9c = bVar1 & 0x7f;
                    pbVar9 = pbVar9 + 1;
                    if ((((-1 < iVar4) && (iVar4 < (int)(uint)param_1[1])) &&
                        (uVar6 = (uint)*param_1, local_b0 < (int)uVar6)) &&
                       (uVar10 = local_9c + local_b0, -1 < (int)uVar10)) {
                      if (local_b0 < 0) {
                        pbVar8 = pbVar8 + -(uVar7 * local_b0);
                        pbVar9 = pbVar9 + -((uint)*(ushort *)(param_4 + 8) * local_b0);
                        if (bVar2) {
                          local_ac = local_ac + local_b0 * -2;
                        }
                        local_b0 = 0;
                        local_9c = uVar10;
                      }
                      uVar7 = local_9c;
                      if ((int)uVar6 < (int)(local_9c + local_b0)) {
                        uVar7 = uVar6 - local_b0;
                      }
                      switch(local_a8) {
                      case 1:
                        FUN_005fded0(local_a0,pbVar8,pbVar9,uVar7);
                        break;
                      case 2:
                        uVar7 = uVar7 * 2;
                      case 0:
                        pbVar11 = pbVar9;
                        pbVar12 = pbVar8;
                        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                          *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
                          pbVar11 = pbVar11 + 4;
                          pbVar12 = pbVar12 + 4;
                        }
                        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                          *pbVar12 = *pbVar11;
                          pbVar11 = pbVar11 + 1;
                          pbVar12 = pbVar12 + 1;
                        }
                        break;
                      case 3:
                        FUN_005fe073(local_a0,pbVar8,pbVar9,uVar7);
                        break;
                      case 4:
                        FUN_005fdfb3(pbVar8,pbVar9,uVar7,local_ac,param_5);
                        break;
                      case 5:
                        FUN_005fdf76(local_a0,pbVar8,pbVar9,uVar7,local_ac,param_5);
                        break;
                      case 8:
                      case 0xc:
                        FUN_005fde84(pbVar8,pbVar9,uVar7);
                        break;
                      case 10:
                      case 0xe:
                        FUN_005fdea7(pbVar8,pbVar9,uVar7);
                        break;
                      case 0x10:
                        FUN_005fdef7(local_7c,pbVar8,pbVar9,uVar7,local_78,local_a0);
                      }
                    }
                    pbVar9 = pbVar9 + *(ushort *)(param_4 + 8) * local_9c;
                    uVar7 = (uint)param_1[2];
                    pbVar8 = pbVar8 + uVar7 * local_9c;
                    if (bVar2) {
                      local_ac = local_ac + local_9c * 2;
                    }
                    local_b0 = local_b0 + local_9c;
                  }
                  else {
                    uVar6 = bVar1 & 0x7f;
                    pbVar8 = pbVar8 + uVar7 * uVar6;
                    pbVar9 = pbVar9 + 1;
                    local_b0 = local_b0 + uVar6;
                    if (bVar2) {
                      local_ac = local_ac + uVar6 * 2;
                    }
                  }
                } while (local_b0 - param_2 < (int)(uint)*(ushort *)(param_4 + 4));
              }
              if (bVar2) {
                local_98 = local_98 + (uint)param_1[4] * 2;
              }
              iVar4 = iVar4 + 1;
              pbVar8 = local_80 + param_1[3];
            } while (iVar4 - param_3 < (int)(uint)*(ushort *)(param_4 + 6));
          }
        }
      }
    }
  }
  return;
}

