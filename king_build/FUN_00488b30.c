
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_00488b30(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_560;
  int local_55c;
  int local_558;
  uint local_554;
  int local_550;
  undefined4 *local_54c;
  int local_548;
  int local_544;
  int local_540;
  int local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c [2];
  undefined8 local_504;
  undefined8 local_4fc;
  undefined4 local_4f4 [18];
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined1 local_494 [128];
  char local_414 [1024];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640744;
  local_14 = ExceptionList;
  local_54c = &param_2;
  ExceptionList = &local_14;
  FUN_00490c50(param_2,&local_540,&local_548,&local_544);
  local_c = 0;
  if (local_540 == DAT_0066f3b4) {
    FUN_00490c50(param_2,&local_558,&local_560,&local_55c);
    if (local_558 == DAT_0066f3ac) {
      FUN_0061d8bf(local_494,local_55c,1,param_2);
    }
    FUN_00490cb0(param_2,local_560,local_55c);
    local_53c = FUN_00631d33(0x90);
    local_c._0_1_ = 1;
    if (local_53c == 0) {
      local_554 = 0;
    }
    else {
      local_554 = FUN_004889a0(local_494,0);
    }
    local_c = (uint)local_c._1_3_ << 8;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == *(int *)(param_1 + 0x20)) {
      FUN_0048a370(iVar2,&local_554);
    }
    else {
      FUN_00460970(iVar2,&local_554);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    }
    iVar2 = FUN_0061db0f(*local_54c);
    for (iVar2 = (local_548 - iVar2) + local_544; iVar2 != 0;
        iVar2 = (local_548 - iVar2) + local_544) {
      FUN_00490c50(param_2,&local_558,&local_560,&local_55c);
      if (local_558 == DAT_0066f3a4) {
        FUN_00488a30(local_50c,param_2);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + -4);
        *(undefined4 *)(iVar2 + 0x10) = local_50c[0];
        *(undefined4 *)(iVar2 + 0x14) = local_50c[1];
        *(undefined8 *)(iVar2 + 0x18) = local_504;
        *(undefined8 *)(iVar2 + 0x20) = local_4fc;
      }
      else if (local_558 == DAT_0066f39c) {
        FUN_00488ad0(local_4f4,param_2);
        puVar5 = local_4f4;
        puVar6 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + -4) + 0x28);
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + -4);
        *(undefined4 *)(iVar2 + 0x10) = local_4ac;
        *(undefined4 *)(iVar2 + 0x14) = local_4a8;
        *(undefined4 *)(iVar2 + 0x18) = local_4a4;
        *(undefined4 *)(iVar2 + 0x1c) = local_4a0;
        *(undefined4 *)(iVar2 + 0x20) = local_49c;
        *(undefined4 *)(iVar2 + 0x24) = local_498;
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c) + -4) + 0x8c) = 1;
      }
      else if (local_558 == DAT_0066f394) {
        FUN_0061d8bf(&local_550,4,1,param_2);
        *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + -4) + 0x88) = local_550;
      }
      FUN_00490cb0(param_2,local_560,local_55c);
      iVar2 = FUN_0061db0f(*local_54c);
    }
  }
  else if (local_540 == DAT_0066f38c) {
    iVar2 = FUN_0061db0f(*local_54c);
    for (iVar2 = (local_548 - iVar2) + local_544; iVar2 != 0;
        iVar2 = (local_548 - iVar2) + local_544) {
      FUN_00490c50(param_2,&local_558,&local_560,&local_55c);
      local_c._0_1_ = 2;
      if (local_558 == DAT_0066f384) {
        FUN_0061d8bf(&local_554,4,1,param_2);
        if ((local_554 & 1) == 0) {
          iVar2 = FUN_00631d33(0x38);
          if (iVar2 == 0) {
            local_534 = 0;
          }
          else {
            local_534 = FUN_00488980(local_554);
          }
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 != *(int *)(param_1 + 0x14)) {
            puVar5 = &local_534;
            goto LAB_00488ea0;
          }
          puVar5 = &local_534;
LAB_00488ef3:
          FUN_0048a0b0(iVar2,puVar5);
        }
        else {
          iVar2 = FUN_00631d33(0x38);
          if (iVar2 == 0) {
            local_538 = 0;
          }
          else {
            local_538 = FUN_00488960(local_554);
          }
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == *(int *)(param_1 + 0x14)) {
            puVar5 = &local_538;
            goto LAB_00488ef3;
          }
          puVar5 = &local_538;
LAB_00488ea0:
          FUN_00460970(iVar2,puVar5);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
        }
        FUN_0061d8bf(&local_514,8,1,param_2);
        local_524 = local_510;
        local_528 = local_514;
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x10) + -4);
        *puVar5 = local_514;
        puVar5[1] = local_510;
        FUN_0061d8bf(&local_520,4,1,param_2);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -4) + 8) = local_520;
      }
      else if (local_558 == DAT_0066f37c) {
        FUN_0061d8bf(local_414,local_55c,1,param_2);
        uVar3 = 0xffffffff;
        pcVar7 = local_414;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_0044c1c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + -4) + 0x2c),local_414,
                     local_414 + ~uVar3);
      }
      else if (local_558 == DAT_0066f36c) {
        FUN_0061d8bf(&local_53c,4,1,param_2);
        if (0 < local_53c) {
          local_550 = local_53c;
          do {
            FUN_00488a30(local_50c,param_2);
            iVar2 = *(int *)(*(int *)(param_1 + 0x10) + -4);
            puVar5 = *(undefined4 **)(iVar2 + 0x14);
            if (puVar5 == *(undefined4 **)(iVar2 + 0x18)) {
              FUN_004899b0(puVar5,local_50c);
            }
            else {
              if (puVar5 != (undefined4 *)0x0) {
                puVar6 = local_50c;
                for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar5 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar5 = puVar5 + 1;
                }
              }
              *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 0x18;
            }
            local_550 = local_550 + -1;
          } while (local_550 != 0);
          local_550 = 0;
        }
      }
      else if (local_558 == DAT_0066f374) {
        iVar2 = FUN_0061db0f(param_2);
        for (iVar2 = (local_560 - iVar2) + local_55c; iVar2 != 0;
            iVar2 = (local_560 - iVar2) + local_55c) {
          FUN_0061d8bf(&local_51c,8,1,param_2);
          local_530 = local_51c;
          local_52c = local_518;
          iVar2 = *(int *)(*(int *)(param_1 + 0x10) + -4);
          puVar5 = *(undefined4 **)(iVar2 + 0x20);
          if (puVar5 == *(undefined4 **)(iVar2 + 0x24)) {
            FUN_0044c410(puVar5,&local_530);
          }
          else {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = local_51c;
              puVar5[1] = local_518;
            }
            *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 8;
          }
          iVar2 = FUN_0061db0f(param_2);
        }
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00490cb0(param_2,local_560,local_55c);
      iVar2 = FUN_0061db0f(*local_54c);
    }
  }
  local_c = 0xffffffff;
  FUN_00490cb0(*local_54c,local_548,local_544);
  ExceptionList = local_14;
  return 0;
}

