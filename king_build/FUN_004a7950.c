
void __thiscall FUN_004a7950(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint local_84;
  int iStack_80;
  int iStack_7c;
  int *local_74;
  uint local_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  int *local_5c [2];
  uint local_54;
  int *piStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643110;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a2930();
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_84 = 1;
  local_6c = *(uint *)(param_1 + 0x28);
  if ((local_6c & 0x10000) == 0) {
    local_74 = *(int **)(param_1 + 0x20);
    if (local_74 == (int *)0x0) {
      local_74 = (int *)0x0;
      local_6c = 0;
    }
    else {
      local_74[1] = local_74[1] + 1;
    }
  }
  else {
    local_74 = *(int **)(param_1 + 0x20);
  }
  do {
    if ((local_6c == 0) && (local_74 == (int *)0x0)) goto LAB_004a7fb7;
    if ((local_6c & 0xff) == 2) {
      if ((uint)((*(int *)(*(int *)(param_2 + 0x70) + -0x18) -
                 *(int *)(*(int *)(param_2 + 0x70) + -0x1c)) / 0xc) <= local_84) goto LAB_004a7fb7;
      piVar5 = local_74 + 5;
      FUN_004042a0();
      local_4._0_1_ = 3;
      if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
        local_5c[0] = (int *)0x0;
        local_54 = 0;
      }
      else {
        iVar4 = (*(code *)**(undefined4 **)*piVar5)();
        if (iVar4 == 9) {
          local_5c[0] = (int *)*piVar5;
          local_54 = local_74[7];
          local_5c[0][1] = local_5c[0][1] + 1;
        }
        else {
          (**(code **)(*(int *)*piVar5 + 4))();
          FUN_004a5670();
        }
      }
      local_4._0_1_ = 4;
      FUN_004aa2e0();
      piVar5 = (int *)FUN_004a17c0();
      if (((piVar5[2] & 0x10000U) == 0) && (*piVar5 != 0)) {
        piVar5 = (int *)(*piVar5 + 4);
        *piVar5 = *piVar5 + 1;
      }
      FUN_00455dc0(local_5c);
      local_4._0_1_ = 4;
      iVar4 = param_2;
      FUN_004b8250(param_2);
      FUN_004a3330(iVar4);
      local_4._0_1_ = 1;
      FUN_00492340();
    }
    else {
      if ((local_6c & 0xff) == 9) {
        FUN_004042a0();
        local_4._0_1_ = 7;
        if (local_74 == (int *)0x0) {
          local_5c[0] = (int *)0x0;
          local_54 = 0;
        }
        else {
          iVar4 = (**(code **)*local_74)();
          if (iVar4 == 9) {
            local_5c[0] = local_74;
            local_54 = local_6c;
            local_74[1] = local_74[1] + 1;
          }
          else {
            (**(code **)(*local_74 + 4))();
            FUN_004a5670();
          }
        }
        FUN_004042a0();
        local_4._0_1_ = 9;
        uVar2 = (undefined1)local_4;
        local_4._0_1_ = 9;
        iStack_7c = (*(int *)(*(int *)(param_2 + 0x70) + -0x18) -
                    *(int *)(*(int *)(param_2 + 0x70) + -0x1c)) / 0xc + -1;
        if (iStack_7c != local_84 - 1) {
          iStack_80 = iStack_7c * 0xc;
          iStack_7c = iStack_7c - (local_84 - 1);
          do {
            FUN_004a2a10();
            local_4 = CONCAT31(local_4._1_3_,10);
            if (piStack_50 == (int *)0x0) {
              FUN_004a5470();
            }
            if ((uStack_48 & 0x10000) != 0) {
              FUN_004a5470();
            }
            piVar1 = piStack_50;
            piVar5 = piStack_50 + 8;
            iVar4 = piStack_50[8];
            if ((((iVar4 != 0) && ((piStack_50[10] & 0x10000U) == 0)) &&
                (*(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -1, *(int *)(*piVar5 + 4) == 0)) &&
               ((cVar3 = FUN_00408fd0(), cVar3 == '\0' && ((int *)*piVar5 != (int *)0x0)))) {
              (**(code **)(*(int *)*piVar5 + 0xc))();
            }
            if ((uStack_60 & 0x10000) == 0) {
              piVar1[9] = 0;
              if (iStack_68 == 0) {
                *piVar5 = 0;
                piVar1[10] = 0;
              }
              else {
                *piVar5 = iStack_68;
                piVar1[10] = uStack_60;
                *(int *)(*piVar5 + 4) = *(int *)(*piVar5 + 4) + 1;
              }
            }
            else {
              piVar1[10] = uStack_60;
              *piVar5 = iStack_68;
              piVar1[9] = iStack_64;
            }
            FUN_0040c060();
            iVar4 = *(int *)(*(int *)(param_2 + 0x70) + -0x1c);
            if (iStack_68 == 0) {
              FUN_004a5470();
            }
            if ((uStack_60 & 0x10000) != 0) {
              FUN_004a5470();
            }
            piVar1 = (int *)(iStack_80 + iVar4);
            piVar5 = (int *)(iStack_68 + 0x14);
            iVar4 = *(int *)(iStack_68 + 0x14);
            if (((iVar4 != 0) && ((*(uint *)(iStack_68 + 0x1c) & 0x10000) == 0)) &&
               ((*(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -1, *(int *)(*piVar5 + 4) == 0 &&
                ((cVar3 = FUN_00408fd0(), cVar3 == '\0' && ((int *)*piVar5 != (int *)0x0)))))) {
              (**(code **)(*(int *)*piVar5 + 0xc))();
            }
            if ((piVar1[2] & 0x10000U) == 0) {
              *(undefined4 *)(iStack_68 + 0x18) = 0;
              iVar4 = *piVar1;
              if (iVar4 == 0) {
                *piVar5 = 0;
                *(undefined4 *)(iStack_68 + 0x1c) = 0;
              }
              else {
                *piVar5 = iVar4;
                *(int *)(iStack_68 + 0x1c) = piVar1[2];
                *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
              }
            }
            else {
              *(int *)(iStack_68 + 0x1c) = piVar1[2];
              *piVar5 = *piVar1;
              *(int *)(iStack_68 + 0x18) = piVar1[1];
            }
            local_4._0_1_ = 9;
            FUN_00492340();
            iStack_80 = iStack_80 + -0xc;
            iStack_7c = iStack_7c + -1;
            uVar2 = (undefined1)local_4;
          } while (iStack_7c != 0);
        }
        local_4._0_1_ = uVar2;
        if (((uStack_60 & 0x10000) == 0) && (iStack_68 != 0)) {
          *(int *)(iStack_68 + 4) = *(int *)(iStack_68 + 4) + 1;
        }
        FUN_00455dc0(local_5c);
        local_4._0_1_ = 9;
        iVar4 = param_2;
        FUN_004b8250(param_2);
        FUN_004a3330(iVar4);
        if (local_84 <
            (uint)((*(int *)(*(int *)(param_2 + 0x70) + -0x18) -
                   *(int *)(*(int *)(param_2 + 0x70) + -0x1c)) / 0xc)) {
          FUN_004042a0();
          local_4._0_1_ = 0xe;
          FUN_0040c060();
          local_4 = CONCAT31(local_4._1_3_,9);
          FUN_00492340();
          local_84 = (*(int *)(*(int *)(param_2 + 0x70) + -0x18) -
                     *(int *)(*(int *)(param_2 + 0x70) + -0x1c)) / 0xc;
        }
        else {
          piStack_50 = (int *)0x0;
          uStack_4c = 0;
          uStack_48 = 0;
          local_4._0_1_ = 0xd;
          FUN_0040c060();
          local_4 = CONCAT31(local_4._1_3_,9);
          FUN_00492340();
        }
        local_4._0_1_ = 8;
        FUN_00492340();
        local_4._0_1_ = 1;
        FUN_00492340();
LAB_004a7fb7:
        iVar4 = *(int *)(param_2 + 0x70);
        if ((((uint)((*(int *)(iVar4 + -0x18) - *(int *)(iVar4 + -0x1c)) / 0xc) <= local_84) &&
            ((local_6c != 0 || (local_74 != (int *)0x0)))) ||
           ((local_84 < (uint)((*(int *)(iVar4 + -0x18) - *(int *)(iVar4 + -0x1c)) / 0xc) &&
            ((local_6c == 0 && (local_74 == (int *)0x0)))))) {
          FUN_004a5a90();
        }
        FUN_004b8250();
        FUN_0040c060();
        piVar5 = (int *)(*(int *)(param_2 + 0x70) + -0x2c);
        *(int **)(param_2 + 0x70) = piVar5;
        (**(code **)(*piVar5 + 4))();
        FUN_004a71e0();
        puStack_8._0_1_ = 0xf;
        FUN_004aa2f0();
        puStack_8._0_1_ = 1;
        FUN_004a73b0();
        FUN_0049c660();
        FUN_004a81e0();
        puStack_8._0_1_ = 0x10;
        FUN_00409000();
        cVar3 = FUN_00408fd0();
        FUN_00492340();
        puStack_8._0_1_ = 1;
        FUN_00492340();
        if (cVar3 == '\0') {
          FUN_004a2a10();
          puStack_8._0_1_ = 0x12;
          FUN_004b8250();
          FUN_0040c060();
          FUN_004aab10();
          puStack_8._0_1_ = 0x13;
          FUN_004b8250();
          FUN_0040c060();
          puStack_8._0_1_ = 0x12;
          FUN_00492340();
          FUN_0040c060();
        }
        else {
          FUN_00407e60();
          puStack_8._0_1_ = 0x11;
          FUN_0040c060();
        }
        puStack_8._0_1_ = 1;
        FUN_00492340();
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_00492340();
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_00492340();
        ExceptionList = pvStack_10;
        return;
      }
      FUN_004a5a90();
    }
    local_84 = local_84 + 1;
    puVar6 = (undefined4 *)FUN_00409000();
    local_4._0_1_ = 2;
    if ((((local_74 != (int *)0x0) && ((local_6c & 0x10000) == 0)) &&
        (local_74[1] = local_74[1] + -1, local_74[1] == 0)) &&
       ((cVar3 = FUN_00408fd0(), cVar3 == '\0' && (local_74 != (int *)0x0)))) {
      (**(code **)(*local_74 + 0xc))();
    }
    local_6c = puVar6[2];
    if ((local_6c & 0x10000) == 0) {
      local_74 = (int *)*puVar6;
      if (local_74 == (int *)0x0) {
        local_74 = (int *)0x0;
        local_6c = 0;
      }
      else {
        local_6c = puVar6[2];
        local_74[1] = local_74[1] + 1;
      }
    }
    else {
      local_74 = (int *)*puVar6;
    }
    local_4._0_1_ = 1;
    if ((((uStack_48 & 0x10000) == 0) && (piStack_50 != (int *)0x0)) &&
       ((piStack_50[1] = piStack_50[1] + -1, piStack_50[1] == 0 && (piStack_50 != (int *)0x0)))) {
      (**(code **)(*piStack_50 + 0xc))();
    }
  } while( true );
}

