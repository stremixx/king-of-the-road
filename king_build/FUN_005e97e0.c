
/* WARNING: Removing unreachable block (ram,0x005e9a50) */

void FUN_005e97e0(ushort *param_1,int param_2,int param_3,int param_4,byte *param_5,byte *param_6,
                 undefined4 param_7,int param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint local_c4;
  int local_c0;
  undefined4 local_bc;
  uint local_b4;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined1 local_74 [16];
  undefined4 local_64 [2];
  undefined4 local_5c;
  
  iVar3 = param_4;
  if ((param_5 != (byte *)0x0) && (param_6 != (byte *)0x0)) {
    iVar4 = ((int)(*(int *)(param_5 + 0x18) + -1 + (*(int *)(param_5 + 0x18) + -1 >> 0x1f & 7U)) >>
            3) + 1;
    iVar2 = *(int *)(param_5 + 0x14);
    iVar5 = FUN_005d31c0();
    local_bc = param_7;
    if ((param_8 == 0) && (param_1[2] == 1)) {
      if (iVar5 == 1) {
      }
      else {
        iVar11 = thunk_FUN_005b5b70();
        if (iVar11 == 0) {
          return;
        }
        uVar7 = param_7;
        thunk_FUN_005b5b70(param_7);
        local_bc = FUN_005b9aa0(uVar7);
      }
    }
    FUN_005b5dc0(local_74);
    bVar1 = *param_6;
    iVar11 = param_2;
    while (bVar1 != 0) {
      local_b4 = 0;
      if ((*param_5 & 1) == 0) {
        local_c4 = *(uint *)(param_5 + 0x18);
      }
      else {
        iVar6 = *(int *)(param_5 + 4);
        uVar10 = (uint)*param_6;
        if (((int)uVar10 < iVar6) || (*(int *)(param_5 + 8) < (int)uVar10)) {
          local_c4 = *(uint *)(param_5 + 0x18);
        }
        else {
          local_c4 = (uint)*(byte *)((*(int *)(param_5 + 0xc) - iVar6) + uVar10);
          local_b4 = (uint)*(byte *)((*(int *)(param_5 + 0x10) - iVar6) + uVar10);
        }
      }
      bVar1 = *param_6;
      uVar10 = (uint)bVar1;
      if ((((*(int *)(param_5 + 4) <= (int)uVar10) && ((int)uVar10 <= *(int *)(param_5 + 8))) &&
          (iVar11 = iVar11 - local_b4, -1 < iVar11)) &&
         (((local_7c = (local_c4 - 1) + iVar11, local_7c < (int)(uint)*param_1 &&
           (local_c0 = *(int *)(param_5 + 0x14), -1 < (param_3 - local_c0) + 1)) &&
          (param_3 < (int)(uint)param_1[1])))) {
        if (bVar1 == 10) {
          param_3 = param_3 + local_c0;
          local_c4 = 0;
          iVar11 = param_2;
          param_4 = iVar3;
        }
        else {
          if (param_4 <= (int)local_c4) {
            return;
          }
          if (*(int *)(param_1 + 0x3a) == 0) {
            if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) == 0) {
              return;
            }
            puVar12 = (undefined4 *)
                      (iVar5 * iVar11 + *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) +
                      (uint)param_1[3] * param_3);
            if (-1 < local_c0 + -1) {
              puVar13 = (uint *)((local_c0 + -1) * iVar4 +
                                (uVar10 - *(int *)(param_5 + 4)) * iVar4 * iVar2 +
                                *(int *)(param_5 + 0x1c));
              do {
                uVar8 = (*puVar13 & 0xffff) << 8 | (*puVar13 & 0xffff) >> 8;
                puVar9 = puVar12;
                uVar10 = local_c4;
                if (0 < (int)local_c4) {
                  do {
                    if ((uVar8 & 0x8000) != 0) {
                      if (iVar5 == 1) {
                        *(undefined1 *)puVar9 = (undefined1)param_7;
                      }
                      else if (iVar5 == 2) {
                        *(short *)puVar9 = (short)local_bc;
                      }
                      else if (iVar5 == 4) {
                        *puVar9 = local_bc;
                      }
                    }
                    uVar8 = uVar8 << 1;
                    puVar9 = (undefined4 *)((int)puVar9 + iVar5);
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar13 = (uint *)((int)puVar13 - iVar4);
                puVar12 = (undefined4 *)((int)puVar12 - (uint)param_1[3]);
                local_c0 = local_c0 + -1;
              } while (local_c0 != 0);
            }
          }
          else {
            if (*(int *)(param_5 + 0x24) == 0) {
              return;
            }
            local_84 = iVar11;
            local_78 = param_3;
            if (*(int *)(param_1 + 0x30) != 0) {
              local_84 = *(int *)(param_1 + 0x32) + iVar11;
              local_78 = *(int *)(param_1 + 0x34) + param_3;
            }
            local_64[0] = 100;
            local_80 = local_78 - local_c0;
            local_5c = 0xcc0020;
            if (local_7c <= local_84) {
              local_7c = local_84 + 1;
            }
            local_94 = (uVar10 & 0xf) * *(int *)(param_5 + 0x18);
            local_90 = (uint)(bVar1 >> 4) * (local_c0 + 1) + 1;
            local_88 = local_c0 + local_90;
            local_8c = local_94 + -1 + local_c4;
            if (local_8c <= local_94) {
              local_8c = local_94 + 1;
            }
            iVar6 = (**(code **)(*DAT_0071f85c + 0x14))
                              (DAT_0071f85c,&local_84,*(int *)(param_5 + 0x24),&local_94,0x1008000,
                               local_64);
            if (iVar6 != 0) {
              uVar7 = FUN_005d42c0(iVar6,s_Draw_simbol_problem__00682514,0);
              FUN_005d2250(uVar7);
            }
          }
        }
      }
      iVar11 = iVar11 + local_c4;
      param_6 = param_6 + 1;
      param_4 = param_4 + (local_b4 - local_c4);
      bVar1 = *param_6;
    }
  }
  return;
}

