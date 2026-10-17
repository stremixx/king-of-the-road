
undefined4
FUN_005e7550(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6
            )

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int local_18;
  int local_14;
  int local_10;
  
  uVar2 = param_2;
  iVar10 = -1;
  local_18 = -1;
  local_14 = -1;
  local_10 = -1;
  iVar6 = FUN_0061db0f(param_2);
  iVar6 = iVar6 + param_4;
  iVar7 = FUN_0061db0f(uVar2);
  iVar3 = param_5;
  if (iVar6 <= iVar7) {
    return 1;
  }
  do {
    uVar4 = FUN_0061f40b(uVar2);
    param_2 = CONCAT31(param_2._1_3_,uVar4);
    uVar4 = FUN_0061f40b(uVar2);
    param_2._0_2_ = CONCAT11(uVar4,(char)param_2);
    uVar4 = FUN_0061f40b(uVar2);
    param_2._0_3_ = CONCAT12(uVar4,(undefined2)param_2);
    uVar4 = FUN_0061f40b(uVar2);
    param_2 = CONCAT13(uVar4,(undefined3)param_2);
    iVar7 = FUN_005aa810(uVar2);
    uVar11 = iVar7 + 3U & 0xfffffffc;
    param_4 = uVar11;
    iVar7 = FUN_0061db0f(uVar2);
    iVar8 = _strncmp((char *)&param_2,&DAT_006823e8,4);
    if (iVar8 == 0) {
      local_18 = FUN_005aa810(uVar2);
      local_14 = FUN_005aa810(uVar2);
      iVar10 = FUN_005aa810(uVar2);
      iVar8 = iVar10 * local_14 * param_3 * 4;
      uVar11 = param_4;
      local_10 = iVar10;
      if (1 < local_18) {
        iVar9 = local_18 + -1;
        local_18 = local_18 - iVar9;
        do {
          param_1 = param_1 + iVar8;
          iVar8 = iVar8 << 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      iVar8 = _strncmp((char *)&param_2,&DAT_006823e0,4);
      if (iVar8 == 0) {
        if (local_18 == -1) {
          return 0;
        }
        iVar8 = iVar10 * local_14 * param_3;
        if (param_3 == 1) {
          if (param_6 == 1) {
            FUN_0061d8bf(param_1,iVar8,1,uVar2);
          }
        }
        else if (param_3 == 2) {
          if ((param_6 != 1) && (param_6 == 2)) {
            FUN_0061d8bf(param_1,iVar8,1,uVar2);
          }
        }
        else if (((param_3 == 4) && (param_6 == 1)) && (uVar11 = param_4, 0 < local_14)) {
          param_5 = local_14;
          puVar12 = param_1;
          do {
            iVar8 = iVar10;
            if (0 < iVar10) {
              do {
                bVar5 = FUN_0061f40b(uVar2);
                puVar1 = (undefined1 *)(iVar3 + (uint)bVar5 * 3);
                *puVar12 = puVar1[2];
                puVar12[1] = puVar1[1];
                puVar12[2] = *puVar1;
                puVar12[3] = 0;
                puVar12 = puVar12 + 4;
                iVar8 = iVar8 + -1;
                iVar10 = local_10;
              } while (iVar8 != 0);
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
          param_5 = 0;
          uVar11 = param_4;
        }
      }
    }
    FUN_0061dd53(uVar2,iVar7 + uVar11,0);
    iVar7 = FUN_0061db0f(uVar2);
  } while (iVar7 < iVar6);
  return 1;
}

