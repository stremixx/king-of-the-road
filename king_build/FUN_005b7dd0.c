
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7dd0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ushort uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_14;
  byte *local_10;
  int local_c;
  byte *local_8;
  int local_4;
  
  iVar1 = FUN_005b5b70();
  if (*(int *)(param_1 + 0x50) == 2) {
    if (iVar1 == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x58) == (float)_DAT_0064a668) {
      return;
    }
    if (*(float *)(param_1 + 0x58) == (float)_DAT_0064a660) {
      local_c = 0;
    }
    else {
      uVar2 = __ftol();
      local_c = FUN_005b8b60(uVar2);
    }
  }
  else if ((*(short *)(param_1 + 4) == 1) && ((DAT_00701dec & 0x4000) == 0)) {
    FUN_005fe663(*(undefined4 *)(param_4 + 0x10),
                 *(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x10) * 4) +
                 (uint)*(ushort *)(param_1 + 6) * param_3 + param_2,param_2,
                 *(undefined2 *)(param_4 + 4),*(undefined2 *)(param_4 + 6),
                 (uint)*(ushort *)(param_1 + 6));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x10) * 4);
  pbVar7 = *(byte **)(param_4 + 0x10);
  if (iVar1 != 0) {
    uVar8 = *(ushort *)(param_1 + 4);
    uVar5 = (uint)uVar8;
    local_8 = (byte *)(uVar5 * param_2 + iVar1 + (uint)*(ushort *)(param_1 + 6) * param_3);
    local_4 = param_3;
    if (*(short *)(param_4 + 6) != 0) {
      do {
        local_10 = local_8;
        local_14 = param_2;
        if (*(short *)(param_4 + 4) != 0) {
          do {
            uVar3 = (uint)*pbVar7;
            if ((*pbVar7 & 0x80) == 0) {
              uVar4 = uVar3 & 0x7f;
              pbVar7 = pbVar7 + 1;
              if (uVar8 == 1) {
                uVar5 = uVar4;
                if ((*(int *)(param_1 + 0x50) == 2) && (local_c != 0)) {
                  FUN_005fded0(local_c,local_10,pbVar7,uVar4);
                }
                else {
LAB_005b7f9b:
                  pbVar9 = pbVar7;
                  pbVar10 = local_10;
                  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
                    pbVar9 = pbVar9 + 4;
                    pbVar10 = pbVar10 + 4;
                  }
                  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *pbVar10 = *pbVar9;
                    pbVar9 = pbVar9 + 1;
                    pbVar10 = pbVar10 + 1;
                  }
                }
              }
              else if (uVar8 == 2) {
                if ((*(int *)(param_1 + 0x50) != 2) || (local_c == 0)) {
                  uVar5 = uVar4 * 2;
                  goto LAB_005b7f9b;
                }
                FUN_005fe073(local_c,local_10,pbVar7,uVar4);
              }
              uVar8 = *(ushort *)(param_1 + 4);
              uVar5 = (uint)uVar8;
              iVar1 = uVar5 * uVar4;
              pbVar7 = pbVar7 + uVar4;
            }
            else {
              pbVar7 = pbVar7 + 1;
              iVar1 = uVar5 * (uVar3 & 0x7f);
            }
            local_10 = local_10 + iVar1;
            local_14 = local_14 + (uVar3 & 0x7f);
          } while (local_14 - param_2 < (int)(uint)*(ushort *)(param_4 + 4));
        }
        local_4 = local_4 + 1;
        local_8 = local_8 + *(ushort *)(param_1 + 6);
      } while (local_4 - param_3 < (int)(uint)*(ushort *)(param_4 + 6));
    }
  }
  return;
}

