
void __thiscall
FUN_004a3330(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,int *param_6
            ,int param_7,uint param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined1 local_52;
  undefined1 local_51;
  int local_50;
  char local_4c;
  undefined1 local_48 [12];
  int local_3c;
  undefined1 local_38 [12];
  int local_2c;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642bfb;
  local_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((*(int *)(param_1 + 0x14) < 8) && (*(int *)(param_1 + 0x90) == 0)) {
    local_50 = 0;
    ExceptionList = &local_c;
    if (0 < *(int *)(param_1 + 0x14)) {
      piVar9 = (int *)(param_1 + 0x24);
      ExceptionList = &local_c;
      do {
        if (*piVar9 == 0) {
          FUN_004a5470(0,1);
        }
        if ((piVar9[2] & 0x10000U) != 0) {
          FUN_004a5470(4,1);
        }
        pcVar1 = *(char **)(*piVar9 + 0xc);
        if (param_3 == 0) {
          FUN_004a5470(0,1);
        }
        if ((param_5 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        pcVar2 = *(char **)(param_3 + 0xc);
        iVar5 = FUN_0061de0c((int)*pcVar1);
        iVar6 = FUN_0061de0c((int)*pcVar2);
        if (iVar5 == iVar6) {
          if (param_3 == 0) {
            FUN_004a5470(0,1);
          }
          if ((param_5 & 0x10000) != 0) {
            FUN_004a5470(4,1);
          }
          iVar5 = *(int *)(param_3 + 0xc);
          if (*piVar9 == 0) {
            FUN_004a5470(0,1);
          }
          if ((piVar9[2] & 0x10000U) != 0) {
            FUN_004a5470(4,1);
          }
          iVar5 = FUN_0061d520(*(int *)(*piVar9 + 0xc) + 1,iVar5 + 1);
          if (iVar5 == 0) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x84) + local_50 * 0xc);
            piVar9 = (int *)(*(int *)(param_1 + 0x84) + local_50 * 0xc);
            if ((((iVar5 != 0) && ((piVar9[2] & 0x10000U) == 0)) &&
                (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar9 + 4) == 0)) &&
               ((cVar4 = FUN_00408fd0(piVar9,&param_6), cVar4 == '\0' &&
                ((int *)*piVar9 != (int *)0x0)))) {
              (**(code **)(*(int *)*piVar9 + 0xc))(1);
            }
            if ((param_8 & 0x10000) == 0) {
              piVar9[1] = 0;
              if (param_6 == (int *)0x0) {
                *piVar9 = 0;
                piVar9[2] = 0;
              }
              else {
                *piVar9 = (int)param_6;
                piVar9[2] = param_8;
                param_6[1] = param_6[1] + 1;
              }
            }
            else {
              piVar9[2] = param_8;
              *piVar9 = (int)param_6;
              piVar9[1] = param_7;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00492340();
            local_4 = 0xffffffff;
            if ((param_8 & 0x10000) != 0) {
              ExceptionList = local_c;
              return;
            }
            if (param_6 == (int *)0x0) {
              ExceptionList = local_c;
              return;
            }
            param_6[1] = param_6[1] + -1;
            if (param_6[1] != 0) {
              ExceptionList = local_c;
              return;
            }
            if (param_6 == (int *)0x0) {
              ExceptionList = local_c;
              return;
            }
            (**(code **)(*param_6 + 0xc))(1);
            ExceptionList = local_c;
            return;
          }
        }
        local_50 = local_50 + 1;
        piVar9 = piVar9 + 3;
      } while (local_50 < *(int *)(param_1 + 0x14));
    }
    FUN_0040c060(&param_3);
    iVar5 = *(int *)(param_1 + 0x88);
    if (iVar5 == *(int *)(param_1 + 0x8c)) {
      FUN_0044c6b0(iVar5,&param_6);
    }
    else {
      FUN_00460920(iVar5,&param_6);
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 0xc;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    FUN_00492340();
    local_4 = 0xffffffff;
    if ((((param_8 & 0x10000) == 0) && (param_6 != (int *)0x0)) &&
       ((param_6[1] = param_6[1] + -1, param_6[1] == 0 && (param_6 != (int *)0x0)))) {
      (**(code **)(*param_6 + 0xc))(1);
    }
  }
  else {
    ExceptionList = &local_c;
    uVar3 = (undefined1)local_4;
    if (*(int *)(param_1 + 0x90) == 0) {
      ExceptionList = &local_c;
      iVar5 = FUN_00631d33(0xc);
      local_4._0_1_ = 2;
      local_50 = iVar5;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        FUN_004a4920(&local_51,&local_52);
      }
      *(int *)(param_1 + 0x90) = iVar5;
      iVar5 = 0;
      local_4._0_1_ = 1;
      uVar3 = (undefined1)local_4;
      local_4._0_1_ = 1;
      if (0 < *(int *)(param_1 + 0x14)) {
        iVar8 = 0;
        iVar6 = param_1 + 0x24;
        do {
          FUN_00455dc0(*(int *)(param_1 + 0x84) + iVar8);
          local_4._0_1_ = 3;
          local_3c = iVar5;
          FUN_00455dc0(iVar6);
          local_4._0_1_ = 4;
          FUN_004a3800(local_48);
          local_4._0_1_ = 5;
          FUN_004a4c80(&local_50,local_28);
          local_4._0_1_ = 6;
          FUN_00492340();
          local_4._0_1_ = 3;
          FUN_00492340();
          local_4._0_1_ = 1;
          FUN_00492340();
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 0xc;
          iVar6 = iVar6 + 0xc;
          uVar3 = (undefined1)local_4;
        } while (iVar5 < *(int *)(param_1 + 0x14));
      }
    }
    local_4._0_1_ = uVar3;
    iVar5 = *(int *)(param_1 + 0x88);
    iVar6 = *(int *)(param_1 + 0x84);
    FUN_00455dc0(&param_6);
    local_2c = (iVar5 - iVar6) / 0xc;
    local_4._0_1_ = 7;
    uVar7 = FUN_004a4620(&param_3,local_38);
    local_4._0_1_ = 8;
    FUN_004a4c80(&local_50,uVar7);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004a3870();
    if (local_4c == '\0') {
      FUN_0040c060(&param_6);
      FUN_0040c060(&param_6);
    }
    else {
      FUN_004a17d0(&param_6);
    }
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
    local_4 = 0xffffffff;
    FUN_00492340();
  }
  ExceptionList = local_c;
  return;
}

