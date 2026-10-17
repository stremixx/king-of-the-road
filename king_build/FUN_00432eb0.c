
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432eb0(void)

{
  char cVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar6;
  int *piVar7;
  int aiStack_d8 [3];
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  int *local_a0;
  int *local_9c;
  int *local_98;
  char *local_94;
  undefined *local_90;
  double local_8c;
  double local_84;
  double local_7c;
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  undefined1 local_44 [24];
  undefined1 local_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d5bb;
  local_14 = ExceptionList;
  local_bc = 1.69792922906944e-313;
  local_94 = s_updateChasedCars___0066d0c8;
  local_90 = &DAT_0071d768;
  local_c4 = (double)CONCAT44(0x432ef5,(int **)local_c4);
  ExceptionList = &local_14;
  FUN_00401870();
  local_bc = 1.0153257563706429e-306;
  FUN_004018b0();
  local_c = 0;
  local_a0 = (int *)*DAT_0068a8f0;
  if (local_a0 != DAT_0068a8f0) {
    do {
      local_bc = (double)CONCAT44(local_a0,0x432f36);
      iVar2 = FUN_0040a950();
      if (iVar2 != 0) {
        local_bc = (double)CONCAT44(local_a0,0x432f53);
        iVar2 = FUN_0040a950();
        if (*(int *)(iVar2 + 0x54) == 6) {
          local_bc = (double)CONCAT44(local_a0,0x432f74);
          iVar2 = FUN_0040a950();
          local_9c = *(int **)(iVar2 + 0x3c0);
          if ((local_9c != DAT_0068a8f0) && (local_9c[0x17] != 1)) {
            local_bc._0_4_ = local_44;
            local_c4 = (double)CONCAT44(0x432fab,(int **)local_c4);
            local_bc._4_4_ = local_9c;
            pdVar3 = (double *)FUN_0040b030();
            local_c4 = (double)CONCAT44(&local_a0,0x432fc7);
            FUN_0041d3f0();
            local_c4 = (double)CONCAT44(0x432fce,(int **)local_c4);
            FUN_004042b0();
            local_bc = (double)CONCAT44(local_bc._4_4_,local_74);
            local_c4 = (double)CONCAT44(0x432fd8,(int **)local_c4);
            pdVar4 = (double *)FUN_0040b030();
            local_bc = pdVar4[2] - pdVar3[2];
            local_c4 = pdVar4[1] - pdVar3[1];
            local_cc = *pdVar4 - *pdVar3;
            aiStack_d8[2] = 0x433002;
            FUN_00405ea0();
            if (_DAT_0066b798 <=
                SQRT(local_7c * local_7c + local_84 * local_84 + local_8c * local_8c)) {
              local_bc = (double)CONCAT44(2,(undefined1 *)local_bc);
              piVar6 = local_9c + 10;
              piVar7 = aiStack_d8;
              for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar7 = *piVar6;
                piVar6 = piVar6 + 1;
                piVar7 = piVar7 + 1;
              }
LAB_00433256:
              FUN_0041d3f0(&local_a0);
              FUN_004042b0();
              FUN_00478300();
            }
            else {
              local_bc = 5.0;
              local_cc = (double)CONCAT44(&local_a0,0x433054);
              local_c4._4_4_ = extraout_ECX;
              FUN_0041d3f0();
              local_cc = (double)CONCAT44(0x43305b,(undefined4)local_cc);
              FUN_004042b0();
              local_c4 = (double)CONCAT44(local_c4._4_4_,0x433060);
              FUN_00477cb0();
              local_c4._0_4_ = &local_9c;
              local_bc = 5.0;
              local_cc = (double)CONCAT44(0x43307b,(undefined4)local_cc);
              local_c4._4_4_ = extraout_ECX_00;
              FUN_0041d3f0();
              local_c4 = (double)CONCAT44(local_c4._4_4_,0x433080);
              FUN_00477cb0();
              local_bc = (double)CONCAT44(local_9c,0x433094);
              FUN_00445290();
              local_bc = (double)CONCAT44(local_9c,0x4330a5);
              FUN_00427170();
              local_9c = DAT_0068a8f0;
            }
          }
        }
        else {
          local_bc = (double)CONCAT44(local_a0,0x4330ef);
          iVar2 = FUN_0040a950();
          if (*(int *)(iVar2 + 0x54) == 5) {
            local_bc = (double)CONCAT44(local_a0,0x433110);
            iVar2 = FUN_0040a950();
            local_98 = *(int **)(iVar2 + 0x3c0);
            if ((local_98 != DAT_0068a8f0) && (local_98[0x17] != 1)) {
              local_bc._0_4_ = local_5c;
              local_c4 = (double)CONCAT44(0x433147,(int **)local_c4);
              local_bc._4_4_ = local_98;
              pdVar3 = (double *)FUN_0040b030();
              local_c4 = (double)CONCAT44(&local_a0,0x433163);
              FUN_0041d3f0();
              local_c4 = (double)CONCAT44(0x43316a,(int **)local_c4);
              FUN_004042b0();
              local_bc = (double)CONCAT44(local_bc._4_4_,local_2c);
              local_c4 = (double)CONCAT44(0x433177,(int **)local_c4);
              pdVar4 = (double *)FUN_0040b030();
              if (_DAT_0066b798 <=
                  SQRT((pdVar4[2] - pdVar3[2]) * (pdVar4[2] - pdVar3[2]) +
                       (pdVar4[1] - pdVar3[1]) * (pdVar4[1] - pdVar3[1]) +
                       (*pdVar4 - *pdVar3) * (*pdVar4 - *pdVar3))) {
                local_bc = (double)CONCAT44(2,(undefined1 *)local_bc);
                piVar6 = local_98 + 10;
                piVar7 = aiStack_d8;
                for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar7 = *piVar6;
                  piVar6 = piVar6 + 1;
                  piVar7 = piVar7 + 1;
                }
                goto LAB_00433256;
              }
              local_bc = 5.0;
              local_cc = (double)CONCAT44(&local_a0,0x4331d4);
              local_c4._4_4_ = extraout_ECX_01;
              FUN_0041d3f0();
              local_cc = (double)CONCAT44(0x4331db,(undefined4)local_cc);
              FUN_004042b0();
              local_c4 = (double)CONCAT44(local_c4._4_4_,0x4331e0);
              FUN_00477cb0();
              local_c4._0_4_ = &local_98;
              local_bc = 5.0;
              local_cc = (double)CONCAT44(0x4331fb,(undefined4)local_cc);
              local_c4._4_4_ = extraout_ECX_02;
              FUN_0041d3f0();
              local_c4 = (double)CONCAT44(local_c4._4_4_,0x433200);
              FUN_00477cb0();
              local_bc = (double)CONCAT44(local_98,0x433214);
              FUN_00445290();
              local_bc = (double)CONCAT44(local_98,0x433225);
              FUN_00427300();
              local_98 = DAT_0068a8f0;
            }
          }
        }
      }
      local_a0 = (int *)*local_a0;
    } while (local_a0 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_updateChasedCars___0066d0c8;
  cVar1 = s_updateChasedCars___0066d0c8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_14;
  return;
}

