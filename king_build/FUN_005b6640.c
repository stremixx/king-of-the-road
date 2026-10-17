
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6640(ushort *param_1,int *param_2,uint param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [16];
  
  iVar2 = FUN_005b5b70();
  iVar9 = *param_2;
  iVar11 = param_2[2];
  iVar8 = param_2[3];
  iVar7 = param_2[1];
  if (iVar11 < iVar9) {
    return;
  }
  if (iVar8 < iVar7) {
    return;
  }
  if (iVar11 < 0) {
    return;
  }
  if (iVar8 < 0) {
    return;
  }
  uVar12 = (uint)*param_1;
  if ((int)uVar12 <= iVar9) {
    return;
  }
  uVar6 = (uint)param_1[1];
  if ((int)uVar6 <= iVar7) {
    return;
  }
  param_2 = (int *)iVar9;
  if (iVar9 < 0) {
    param_2 = (int *)0x0;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if ((int)uVar12 <= iVar11) {
    iVar11 = uVar12 - 1;
  }
  if ((int)uVar6 <= iVar8) {
    iVar8 = uVar6 - 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 2) {
      return;
    }
    if (*(float *)(param_1 + 0x2c) != (float)_DAT_0064a660) {
      if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) == 0) {
        return;
      }
      iVar11 = (uint)param_1[3] * iVar7 + *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) +
               (uint)param_1[2] * (int)param_2;
      if (iVar2 == 0) {
        return;
      }
      if (*(float *)(param_1 + 0x2c) == (float)_DAT_0064a668) {
        return;
      }
      uVar3 = __ftol();
      uVar3 = FUN_005b8b60(uVar3);
      if (iVar8 < iVar7) {
        return;
      }
      do {
        uVar1 = param_1[2];
        if (uVar1 == 1) {
          if (iVar7 <= iVar8) {
            iVar9 = (iVar8 - iVar7) + 1;
            iVar7 = iVar7 + iVar9;
            do {
              FUN_005fe023(uVar3,iVar11,param_3,param_2);
              iVar11 = iVar11 + (uint)param_1[3];
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        else if (uVar1 == 2) {
          if (iVar7 <= iVar8) {
            iVar9 = (iVar8 - iVar7) + 1;
            iVar7 = iVar7 + iVar9;
            do {
              FUN_005fe0dc(uVar3,iVar11,param_3,param_2);
              iVar11 = iVar11 + (uint)param_1[3];
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        else if ((uVar1 == 4) && (iVar7 <= iVar8)) {
          iVar9 = (iVar8 - iVar7) + 1;
          iVar7 = iVar7 + iVar9;
          do {
            iVar2 = (int)param_2;
            uVar4 = FUN_005b9aa0(param_3);
            uVar4 = __ftol(iVar11,uVar4,iVar2);
            FUN_005fe182(uVar4);
            iVar11 = iVar11 + (uint)param_1[3];
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + (uint)param_1[3];
      } while (iVar7 <= iVar8);
      return;
    }
  }
  if ((DAT_0071f868 != (int *)0x0) && (*(int *)(param_1 + 0x3a) == 1)) {
    if (param_4 == 0) {
      if (iVar2 == 0) {
        return;
      }
      iVar9 = iVar2 + 0x18 + param_3 * 2;
      iVar2 = param_3 + iVar9;
      param_3 = ((*(byte *)(param_3 + iVar9) | 0xffffff00) << 8 | (uint)*(byte *)(iVar2 + 1)) << 8 |
                (uint)*(byte *)(iVar2 + 2);
    }
    piVar5 = (int *)FUN_005b5dc0(local_10);
    iVar9 = *piVar5;
    iVar2 = FUN_005b5dc0(local_10);
    local_20 = (int)param_2 + iVar9;
    local_18 = iVar9 + iVar11;
    local_1c = *(int *)(iVar2 + 4) + iVar7;
    local_14 = *(int *)(iVar2 + 4) + iVar8;
    (**(code **)(*DAT_0071f868 + 0x28))(DAT_0071f868,1,&local_20,1,param_3,0x3f800000,0);
    return;
  }
  if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) {
    uVar1 = param_1[2];
    puVar10 = (undefined4 *)
              ((uint)uVar1 * (int)param_2 +
              (uint)param_1[3] * iVar7 + *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc));
    uVar12 = (iVar11 - (int)param_2) + 1;
    if (uVar1 == 1) {
      if (iVar7 <= iVar8) {
        param_4 = (iVar8 - iVar7) + 1;
        do {
          puVar13 = puVar10;
          for (uVar6 = uVar12 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar13 = CONCAT22(CONCAT11((undefined1)param_3,(undefined1)param_3),
                                CONCAT11((undefined1)param_3,(undefined1)param_3));
            puVar13 = puVar13 + 1;
          }
          for (uVar6 = uVar12 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar13 = (undefined1)param_3;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          puVar10 = (undefined4 *)((int)puVar10 + (uint)param_1[3]);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
    }
    else if (uVar1 == 2) {
      if (iVar2 != 0) {
        if (param_4 == 0) {
          param_3 = FUN_005b9aa0(param_3);
        }
        if (iVar7 <= iVar8) {
          iVar11 = (iVar8 - iVar7) + 1;
          do {
            FUN_005fe13e(puVar10,param_3,uVar12);
            puVar10 = (undefined4 *)((int)puVar10 + (uint)param_1[3]);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          return;
        }
      }
    }
    else if ((uVar1 == 4) && (iVar2 != 0)) {
      if (param_4 == 0) {
        param_3 = FUN_005b9aa0(param_3);
      }
      if (iVar7 <= iVar8) {
        iVar11 = (iVar8 - iVar7) + 1;
        do {
          FUN_005fe16a(puVar10,param_3,uVar12);
          puVar10 = (undefined4 *)((int)puVar10 + (uint)param_1[3]);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  return;
}

