
void FUN_004a6550(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 *puStack_78;
  int **ppiStack_74;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  int aiStack_54 [2];
  uint uStack_4c;
  int *piStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int *apiStack_24 [2];
  uint uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00642f00;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x6c);
  ExceptionList = &local_c;
  while( true ) {
    if (*piVar1 == *(int *)(param_1 + 0x70)) {
      ppiStack_74 = (int **)0x1;
      puStack_78 = (undefined4 *)0xc;
      iStack_7c = 0x4a658b;
      FUN_004a5470();
    }
    if (*(int *)(param_1 + 0x78) != 0) break;
    iVar6 = *(int *)(param_1 + 0x70);
    if ((((*(int *)(iVar6 + -0x28) == 0) && (*(int *)(iVar6 + -0x20) == 0)) &&
        (*(int *)(iVar6 + -0x24) == 0)) && ((uint)((*(int *)(param_1 + 0x70) - *piVar1) / 0x2c) < 2)
       ) {
      ExceptionList = local_c;
      return;
    }
    puVar2 = *(undefined4 **)(iVar6 + -0x1c);
    if ((puVar2 == *(undefined4 **)(iVar6 + -0x18)) || (*(char *)(puVar2 + 2) != '\"')) {
      if ((*(int *)(iVar6 + -0x28) == 0) &&
         ((*(int *)(iVar6 + -0x20) == 0 && (*(int *)(iVar6 + -0x24) == 0)))) {
        if ((uint)((*(int *)(param_1 + 0x70) - *piVar1) / 0x2c) < 2) {
          ExceptionList = local_c;
          return;
        }
        if (*(int *)(iVar6 + -0x1c) == *(int *)(iVar6 + -0x18)) {
          ppiStack_74 = (int **)0x0;
          piVar5 = (int *)(*(int *)(param_1 + 0x70) + -0x2c);
          *(int **)(param_1 + 0x70) = piVar5;
          puStack_78 = (undefined4 *)0x4a6647;
          (**(code **)(*piVar5 + 4))();
          piStack_30 = (int *)0x0;
          uStack_2c = 0;
          uStack_28 = 0;
          ppiStack_74 = &piStack_30;
          puStack_78 = (undefined4 *)(*(int *)(param_1 + 0x70) + -0x2c);
          uStack_4 = 0;
          uStack_80 = 0x4a6669;
          iStack_7c = param_1;
          FUN_004a5dc0();
          uStack_4 = 0xffffffff;
          if (((((uStack_28 & 0x10000) == 0) && (piStack_30 != (int *)0x0)) &&
              (piStack_30[1] = piStack_30[1] + -1, piStack_30[1] == 0)) &&
             (piStack_30 != (int *)0x0)) {
            ppiStack_74 = (int **)0x1;
            puStack_78 = (undefined4 *)0x4a66b4;
            (**(code **)(*piStack_30 + 0xc))();
          }
        }
        else {
          piVar5 = *(int **)(iVar6 + -0x1c);
          uStack_40 = piVar5[2];
          if ((uStack_40 & 0x10000) == 0) {
            piStack_48 = (int *)*piVar5;
            iStack_44 = 0;
            if (piStack_48 == (int *)0x0) {
              piStack_48 = (int *)0x0;
              uStack_40 = 0;
            }
            else {
              piStack_48[1] = piStack_48[1] + 1;
            }
          }
          else {
            piStack_48 = (int *)*piVar5;
            iStack_44 = piVar5[1];
          }
          uVar3 = uStack_40;
          piVar5 = piStack_48;
          uStack_4 = 1;
          if (((piStack_48 == (int *)0x0) && (uStack_40 == 0)) && (iStack_44 == 0)) {
            ppiStack_74 = (int **)0x1f;
            puStack_78 = (undefined4 *)param_1;
            iStack_7c = 0x4a6722;
            FUN_004a5a90();
          }
          else {
            if ((uStack_40 & 0x10000) != 0) {
              ppiStack_74 = (int **)0x4a673e;
              ppiStack_74 = (int **)FUN_004a69e0();
              puStack_78 = (undefined4 *)0x1d;
              iStack_7c = param_1;
              uStack_80 = 0x4a6747;
              FUN_004a5be0();
            }
            ppiStack_74 = (int **)param_1;
            puStack_78 = (undefined4 *)0x4a6753;
            (**(code **)(*piVar5 + 8))();
          }
          uStack_4 = 0xffffffff;
          if ((((uVar3 & 0x10000) == 0) && (piVar5 != (int *)0x0)) &&
             (iVar6 = piVar5[1], piVar5[1] = iVar6 + -1, iVar6 + -1 == 0)) {
            ppiStack_74 = (int **)0x1;
            puStack_78 = (undefined4 *)0x4a6786;
            (**(code **)(*piVar5 + 0xc))();
          }
        }
      }
      else if (*(char *)(iVar6 + -0x20) == '\x02') {
        ppiStack_74 = (int **)0x0;
        iStack_7c = 0x4a6798;
        puStack_78 = (undefined4 *)param_1;
        FUN_004a5f30();
      }
      else {
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_4 = 2;
        if (*(char *)(iVar6 + -0x20) == '\t') {
          ppiStack_74 = (int **)0x4a67c8;
          FUN_004042a0();
          uStack_4._0_1_ = 3;
          if (*(undefined4 **)(iVar6 + -0x28) == (undefined4 *)0x0) {
            aiStack_54[0] = 0;
            uStack_4c = 0;
          }
          else {
            ppiStack_74 = (int **)0x4a67d8;
            iVar4 = (**(code **)**(undefined4 **)(iVar6 + -0x28))();
            if (iVar4 == 9) {
              aiStack_54[0] = *(int *)(iVar6 + -0x28);
              uStack_4c = *(uint *)(iVar6 + -0x20);
              *(int *)(aiStack_54[0] + 4) = *(int *)(aiStack_54[0] + 4) + 1;
            }
            else {
              ppiStack_74 = (int **)s_Identifier_0066be4c;
              puStack_78 = (undefined4 *)0x4a67ea;
              puStack_78 = (undefined4 *)(**(code **)(**(int **)(iVar6 + -0x28) + 4))();
              iStack_7c = 1;
              uStack_80 = 2;
              uStack_84 = 0x4a67f4;
              FUN_004a5670();
            }
          }
          ppiStack_74 = (int **)&iStack_60;
          puStack_78 = &uStack_5c;
          puStack_58 = (undefined1 *)&uStack_84;
          uStack_4._0_1_ = 4;
          uStack_5c = 0;
          iStack_60 = -1;
          FUN_00455dc0(aiStack_54);
          ppiVar7 = apiStack_24;
          uStack_4._0_1_ = 4;
          FUN_004aa2e0(ppiVar7);
          FUN_004b8250();
          ppiStack_74 = (int **)FUN_004a3910(ppiVar7);
          uStack_4._0_1_ = 6;
          puStack_78 = (undefined4 *)0x4a687d;
          FUN_0040c060();
          uStack_4 = CONCAT31(uStack_4._1_3_,4);
          if (((((uStack_1c & 0x10000) == 0) && (apiStack_24[0] != (int *)0x0)) &&
              (apiStack_24[0][1] = apiStack_24[0][1] + -1, apiStack_24[0][1] == 0)) &&
             (apiStack_24[0] != (int *)0x0)) {
            ppiStack_74 = (int **)0x1;
            puStack_78 = (undefined4 *)0x4a68b2;
            (**(code **)(*apiStack_24[0] + 0xc))();
          }
          if (iStack_60 == -1) {
            if (aiStack_54[0] == 0) {
              ppiStack_74 = (int **)0x1;
              puStack_78 = (undefined4 *)0x0;
              iStack_7c = 0x4a68c7;
              FUN_004a5470();
            }
            if ((uStack_4c & 0x10000) != 0) {
              ppiStack_74 = (int **)0x1;
              puStack_78 = (undefined4 *)0x4;
              iStack_7c = 0x4a68d9;
              FUN_004a5470();
            }
            ppiStack_74 = *(int ***)(aiStack_54[0] + 0xc);
            puStack_78 = (undefined4 *)0x20;
            uStack_80 = 0x4a68ec;
            iStack_7c = param_1;
            FUN_004a5be0();
            ppiStack_74 = (int **)0x4a68f8;
            ppiStack_74 = (int **)FUN_004042a0();
            uStack_4._0_1_ = 7;
            puStack_78 = (undefined4 *)0x4a6907;
            FUN_0040c060();
            uStack_4 = CONCAT31(uStack_4._1_3_,4);
            ppiStack_74 = (int **)0x4a6915;
            FUN_00492340();
          }
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          ppiStack_74 = (int **)0x4a6923;
          FUN_00492340();
        }
        else {
          ppiStack_74 = (int **)(iVar6 + -0x28);
          puStack_78 = (undefined4 *)0x4a6932;
          FUN_0040c060();
        }
        ppiStack_74 = (int **)0x0;
        piVar5 = (int *)(*(int *)(param_1 + 0x70) + -0x2c);
        *(int **)(param_1 + 0x70) = piVar5;
        puStack_78 = (undefined4 *)0x4a6941;
        (**(code **)(*piVar5 + 4))();
        ppiStack_74 = (int **)&uStack_3c;
        puStack_78 = (undefined4 *)(*(int *)(param_1 + 0x70) + -0x2c);
        uStack_80 = 0x4a6953;
        iStack_7c = param_1;
        FUN_004a5dc0();
        uStack_4 = 0xffffffff;
        ppiStack_74 = (int **)0x4a6967;
        FUN_00492340();
      }
    }
    else {
      puStack_78 = (undefined4 *)0x4a65ea;
      ppiStack_74 = (int **)param_1;
      (**(code **)(*(int *)*puVar2 + 8))();
    }
  }
  iVar6 = *piVar1;
  puStack_78 = *(undefined4 **)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x70);
  uStack_80 = 0x4a6983;
  iStack_7c = iVar4;
  ppiStack_74 = (int **)iVar6;
  piVar5 = (int *)FUN_004ab3f0();
  piVar1 = *(int **)(param_1 + 0x70);
  for (; piVar5 != piVar1; piVar5 = piVar5 + 0xb) {
    ppiStack_74 = (int **)0x0;
    puStack_78 = (undefined4 *)0x4a6998;
    (**(code **)(*piVar5 + 4))();
  }
  iVar6 = (int)((ulonglong)((longlong)(iVar4 - iVar6) * -0x2e8ba2e9) >> 0x20);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + ((iVar6 >> 3) - (iVar6 >> 0x1f)) * 0x2c;
  ExceptionList = local_c;
  return;
}

