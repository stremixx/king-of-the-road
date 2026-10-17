
undefined4 * FUN_00492370(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uVar8;
  int *local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00640ec7;
  pvStack_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00491b70(param_2,&local_30,&local_3c,param_3,&DAT_0066f658);
  if (iVar3 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4._0_1_ = 1;
    if (((((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) &&
        (local_3c[1] = local_3c[1] + -1, local_3c[1] == 0)) && (local_3c != (int *)0x0)) {
      (**(code **)(*local_3c + 0xc))(1);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_28 & 0x10000) != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    local_30[1] = local_30[1] + -1;
    if (local_30[1] != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    (**(code **)(*local_30 + 0xc))(1);
    ExceptionList = pvStack_c;
    return param_1;
  }
  if (((local_30 == local_3c) && (local_28 == local_34)) && (local_2c == local_38)) {
    uVar8 = 0xffffffff;
LAB_0049248e:
    FUN_00492320(param_1,0,uVar8);
    if (((local_34 & 0x10000) != 0) || (local_3c == (int *)0x0)) goto LAB_00492552;
    local_3c[1] = local_3c[1] + -1;
    iVar3 = local_3c[1];
  }
  else {
    if (((local_30 == (int *)0x0) && (local_28 == 0)) && (local_2c == 0)) {
      uVar8 = 0;
      goto LAB_0049248e;
    }
    if (((local_3c == (int *)0x0) && (local_34 == 0)) && (local_38 == 0)) {
      uVar8 = 0;
      goto LAB_0049248e;
    }
    if ((char)local_34 == (char)local_28) {
      uVar4 = local_28 & 0xff;
      if (uVar4 != 7) {
        if (uVar4 == 9) {
          FUN_0044c9a0(&local_30);
          local_4._0_1_ = 4;
          FUN_0044c9a0(&local_3c);
          local_4._0_1_ = 5;
          iVar3 = FUN_004b8250();
          uVar8 = *(undefined4 *)(iVar3 + 0xc);
          iVar3 = FUN_004b8250();
          iVar3 = FUN_0061d520(*(undefined4 *)(iVar3 + 0xc),uVar8);
          FUN_00492320(param_1,0,iVar3 == 0);
          local_4._0_1_ = 4;
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        else if (uVar4 == 3) {
          FUN_004556d0(&local_30);
          local_4._0_1_ = 6;
          FUN_004556d0(&local_3c);
          local_4._0_1_ = 7;
          iVar3 = FUN_004b8250();
          pbVar6 = *(byte **)(iVar3 + 0xc);
          iVar3 = FUN_004b8250();
          pbVar5 = *(byte **)(iVar3 + 0xc);
          do {
            bVar1 = *pbVar5;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00492751:
              iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_00492756;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00492751;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00492756:
          FUN_00492320(param_1,0,iVar3 == 0);
          local_4._0_1_ = 6;
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        else if (uVar4 == 8) {
          FUN_004922a0(&local_30);
          local_4._0_1_ = 8;
          FUN_004922a0(&local_3c);
          FUN_00492320(param_1,0,local_24 == local_18);
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        else if (((uVar4 == 4) || (uVar4 == 5)) || (uVar4 != 6)) {
          FUN_00492320(param_1,0,0);
        }
        else {
          FUN_00455640(&local_30);
          local_4._0_1_ = 9;
          FUN_00455640(&local_3c);
          local_4._0_1_ = 10;
          uVar2 = FUN_004b1040(local_24,local_18);
          FUN_00492320(param_1,0,uVar2);
          local_4._0_1_ = 9;
          FUN_00492340();
          local_4._0_1_ = 2;
          FUN_00492340();
        }
        local_4._0_1_ = 1;
        FUN_00492340();
        goto LAB_004928a0;
      }
      FUN_004a1a40(&local_30);
      local_4._0_1_ = 3;
      FUN_004a1a40(&local_3c);
      if (local_18 == 0) {
        if (local_24 != 0) goto LAB_004925d5;
LAB_00492651:
        uVar8 = 1;
      }
      else {
        if (local_24 != 0) goto LAB_00492651;
LAB_004925d5:
        uVar8 = 0;
      }
      FUN_00492320(param_1,0,uVar8);
      FUN_00492340();
      local_4._0_1_ = 2;
      FUN_00492340();
      local_4._0_1_ = 1;
      if ((((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) &&
         ((local_3c[1] = local_3c[1] + -1, local_3c[1] == 0 && (local_3c != (int *)0x0)))) {
        (**(code **)(*local_3c + 0xc))(1);
      }
LAB_004928a0:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00492340();
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_00492320(param_1,0,0);
    if (((local_34 & 0x10000) != 0) || (local_3c == (int *)0x0)) goto LAB_00492552;
    local_3c[1] = local_3c[1] + -1;
    iVar3 = local_3c[1];
  }
  if ((iVar3 == 0) && (local_3c != (int *)0x0)) {
    local_4._0_1_ = 1;
    (**(code **)(*local_3c + 0xc))(1);
  }
LAB_00492552:
  local_4 = (uint)local_4._1_3_ << 8;
  if (((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
      (local_30[1] = local_30[1] + -1, local_30[1] == 0)) && (local_30 != (int *)0x0)) {
    (**(code **)(*local_30 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

