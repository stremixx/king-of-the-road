
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cfe90(int ***param_1,uint *param_2)

{
  int **ppiVar1;
  double dVar2;
  int iVar3;
  code ****ppppcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  code ****ppppcVar8;
  code ****extraout_ECX;
  code ****extraout_ECX_00;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  int *****local_238;
  code ****local_234;
  code ****local_230;
  int ****local_220;
  code ****local_21c;
  undefined8 local_218;
  int ****ppppiStack_210;
  int ****local_204;
  code ****local_200;
  int ***local_1fc;
  double local_1f8;
  code ***apppcStack_1ec [9];
  int ***apppiStack_1c8 [3];
  int ***local_1bc;
  int local_1b8 [12];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c [120];
  double local_f4;
  undefined4 local_ac;
  undefined4 local_a8;
  int ***local_a4 [12];
  undefined1 auStack_74 [48];
  int ***apppiStack_44 [12];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00644e05;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (param_1 != DAT_006d0fd8[0x9a]) goto LAB_004d056c;
  DAT_006f2320 = 0;
  local_21c = (code ****)param_1[0x1518];
  ppppcVar8 = (code ****)param_1[0x1427];
  ExceptionList = &pvStack_14;
  local_200 = ppppcVar8;
  if ((ppppcVar8 == DAT_0068a8f0) || (ExceptionList = &pvStack_14, (*param_2 & 0x4000) != 0))
  goto LAB_004d056c;
  local_220 = (int ****)0x0;
  local_230 = (code ****)&local_1fc;
  local_234 = (code ****)&local_204;
  local_238 = (int *****)0x4cff16;
  ExceptionList = &pvStack_14;
  iVar3 = FUN_0054e710();
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xdf0) == 2)) {
    local_220 = (int ****)(iVar3 + -0x10);
  }
  if (local_204 != (int ****)0x0) {
    if (local_220 == (int ****)0x0) {
      if (iVar3 != 0) {
        local_230 = (code ****)local_a4;
        local_234 = (code ****)0x4d00ef;
        iVar6 = FUN_0057d570();
        local_238 = *(int ******)(iVar6 + 0x24);
        local_234 = *(code *****)(iVar6 + 0x28);
        local_230 = *(code *****)(iVar6 + 0x2c);
        iVar6 = FUN_004cfd30();
        if (iVar6 != 0) {
          ppiVar1 = *(int ***)(iVar3 + 0x158);
          iVar3 = (int)ppiVar1 / 1000;
          if (iVar3 == 0xe7) {
            local_230 = (code ****)&local_220;
            local_234 = (code ****)0x4d0144;
            FUN_004364f0();
            if (local_220 != DAT_0068becc) {
              do {
                local_1f8 = (double)CONCAT44(local_1f8._4_4_,&local_230);
                local_234 = (code ****)0x4d0167;
                local_230 = (code ****)local_220;
                uVar5 = FUN_0043f7e0();
                if ((((uVar5 & 0x40) != 0) && ((uVar5 & 0x20) == 0)) && (*local_220[2] == ppiVar1))
                {
                  if (local_220 != DAT_0068becc) {
                    local_230 = (code ****)FUN_004042a0;
                    local_234 = (code ****)0x4;
                    local_238 = (int *****)0xc;
                    local_1bc = (int ***)0x0;
                    FUN_004011e0(local_1b8);
                    piVar9 = &DAT_00701550;
                    piVar10 = local_1b8;
                    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *piVar10 = *piVar9;
                      piVar9 = piVar9 + 1;
                      piVar10 = piVar10 + 1;
                    }
                    local_188 = 0;
                    local_184 = 0;
                    local_180 = 0;
                    local_17c = 0;
                    local_178 = 0;
                    local_174 = 0xffffffff;
                    local_170 = 0xffffffff;
                    local_230 = (code ****)0x4d0230;
                    FUN_004184d0();
                    local_ac = 0xffffffff;
                    local_a8 = 0xffffffff;
                    local_230 = (code ****)&local_1bc;
                    local_238 = &local_220;
                    local_218._0_4_ = &local_234;
                    local_c = 0;
                    local_234 = extraout_ECX;
                    FUN_0041d3f0();
                    local_218._0_4_ = (code *****)&local_238;
                    local_238 = (int *****)extraout_ECX_00;
                    FUN_00568670(&local_238);
                    FUN_0041bf30();
                    local_218 = (double)CONCAT44(local_218._4_4_,local_16c);
                    local_1f8 = (double)((float)local_1fc * (float)local_f4 * (float)_DAT_0064a5a8);
                    local_c = 3;
                    local_230 = (code ****)0x4d02aa;
                    FUN_004497b0();
                    local_c._0_1_ = 2;
                    local_230 = (code ****)0x4d02be;
                    FUN_004497b0();
                    local_c = CONCAT31(local_c._1_3_,1);
                    local_230 = (code ****)0x4d02d2;
                    FUN_004497b0();
                    local_c = 0xffffffff;
                    local_230 = (code ****)0x4d02e5;
                    FUN_004497b0();
                    ppppcVar8 = local_200;
                    dVar2 = local_1f8;
                    goto LAB_004d0309;
                  }
                  break;
                }
                local_1f8 = (double)CONCAT44(local_1f8._4_4_,&local_230);
                local_230 = (code ****)local_220;
                local_234 = (code ****)&local_218;
                local_238 = (int *****)0x4d0190;
                puVar7 = (undefined4 *)FUN_00436520();
                local_220 = (int ****)*puVar7;
              } while (local_220 != DAT_0068becc);
            }
          }
          else if ((iVar3 == 0xc9) || (iVar3 == 0xca)) {
            dVar2 = (double)(float)local_1fc * _DAT_0064a680;
LAB_004d0309:
            if (_DAT_0064a660 < dVar2) {
              local_230 = (code ****)local_204;
              *(double *)(ppppcVar8 + 0x34) = dVar2 + *(double *)(ppppcVar8 + 0x34);
              local_234 = (code ****)0x4d032c;
              uVar5 = FUN_004cfe40();
              ppppcVar8[0x36] = (code ***)((uint)ppppcVar8[0x36] | uVar5);
            }
          }
        }
      }
    }
    else {
      local_230 = (code ****)0x4cff4b;
      fVar11 = (float10)(*(code *)(*local_220)[0x15])();
      ppppcVar4 = (code ****)(local_220 + 0x1427);
      local_234 = (code ****)*ppppcVar4;
      local_218 = (double)(fVar11 * (float10)_DAT_0064a838 + (float10)_DAT_0064a720);
      if (local_234 == DAT_0068a8f0) {
LAB_004d004b:
        local_230 = (code ****)local_a4;
        local_234 = (code ****)0x4d005b;
        iVar3 = FUN_0057d570();
        local_238 = *(int ******)(iVar3 + 0x24);
        local_234 = *(code *****)(iVar3 + 0x28);
        local_230 = *(code *****)(iVar3 + 0x2c);
        iVar3 = FUN_004cfd30();
        if ((iVar3 != 0) && (_DAT_0064a660 < local_218)) {
          local_230 = (code ****)local_204;
          *(double *)(ppppcVar8 + 0x34) = local_218 + *(double *)(ppppcVar8 + 0x34);
          local_234 = (code ****)0x4d00b2;
          uVar5 = FUN_004cfe40();
          ppppcVar8[0x36] = (code ***)((uint)ppppcVar8[0x36] | uVar5);
          local_230 = (code ****)0x4d00c8;
          fVar11 = (float10)thunk_FUN_00603580();
          *(double *)(local_21c + 0x1028) = (double)fVar11;
        }
      }
      else {
        local_230 = (code ****)&local_1bc;
        local_220 = (int ****)&local_234;
        local_238 = (int *****)ppppcVar4;
        FUN_0041d3f0();
        local_238 = (int *****)0x4cff8b;
        FUN_0043fd20();
        if (local_1b8[1] == 6) {
          if (_DAT_0064a660 < local_218) {
            local_230 = (code ****)local_204;
            *(double *)(ppppcVar8 + 0x38) = local_218 + local_218 + *(double *)(ppppcVar8 + 0x38);
            local_234 = (code ****)0x4cffcb;
            uVar5 = FUN_004cfe40();
            ppppcVar8[0x3a] = (code ***)((uint)ppppcVar8[0x3a] | uVar5);
            local_230 = (code ****)0x4cffe1;
            fVar11 = (float10)thunk_FUN_00603580();
            *(double *)(local_21c + 0x1028) = (double)fVar11;
          }
        }
        else {
          if (local_1b8[1] != 5) goto LAB_004d004b;
          if (_DAT_0064a660 < local_218) {
            local_230 = (code ****)local_204;
            *(double *)(ppppcVar8 + 0x34) = local_218 + local_218 + *(double *)(ppppcVar8 + 0x34);
            local_234 = (code ****)0x4d0026;
            uVar5 = FUN_004cfe40();
            ppppcVar8[0x36] = (code ***)((uint)ppppcVar8[0x36] | uVar5);
            local_230 = (code ****)0x4d003c;
            fVar11 = (float10)thunk_FUN_00603580();
            *(double *)(local_21c + 0x1028) = (double)fVar11;
          }
        }
      }
    }
  }
  local_218 = *(double *)(local_21c + 0x1028) + _DAT_0064baa8;
  local_230 = (code ****)0x4d035a;
  fVar11 = (float10)thunk_FUN_00603580();
  if ((float10)local_218 < fVar11) {
    ppppcVar8[0x34] = (code ***)0x0;
    ppppcVar8[0x35] = (code ***)0x0;
    ppppcVar8[0x36] = (code ***)0x0;
    ppppcVar8[0x38] = (code ***)0x0;
    ppppcVar8[0x39] = (code ***)0x0;
    ppppcVar8[0x3a] = (code ***)0x0;
  }
  ppiVar1 = param_1[0x1474];
  if ((int)ppiVar1 < 0x1e) {
    if (*(double *)(ppppcVar8 + 0x34) <= _DAT_0064a690) {
      if ((((int)ppiVar1 < 0x14) && (*(double *)(ppppcVar8 + 0x34) <= _DAT_0064a668)) &&
         ((*(char *)(ppppcVar8 + 0x32) == '\0' &&
          ((((*(double *)(ppppcVar8 + 0x3c) <= _DAT_0064a668 &&
             (*(double *)(ppppcVar8 + 0x3e) <= _DAT_0064a668)) &&
            (*(double *)(ppppcVar8 + 0x40) <= _DAT_0064a668)) &&
           (*(char *)(ppppcVar8 + 0x42) == '\0')))))) {
        param_1[0x1474] = (int **)0x0;
      }
    }
    else if ((ppiVar1 == (int **)0x0) || (0x13 < (int)ppiVar1)) {
      param_1[0x1474] = (int **)0xb;
    }
    else if ((10 < (int)ppiVar1) && (_DAT_0064a720 < *(double *)(ppppcVar8 + 0x34))) {
      param_1[0x1474] = (int **)((int)ppiVar1 + -10);
    }
  }
  if (((((_DAT_0064a668 < *(double *)(ppppcVar8 + 0x34)) || (*(char *)(ppppcVar8 + 0x32) != '\0'))
       || (_DAT_0064a668 < *(double *)(ppppcVar8 + 0x3c))) ||
      (((_DAT_0064a668 < *(double *)(ppppcVar8 + 0x3e) ||
        (_DAT_0064a668 < *(double *)(ppppcVar8 + 0x40))) || (*(char *)(ppppcVar8 + 0x42) != '\0'))))
     && (ppiVar1 = param_1[0x1474], (int)ppiVar1 < 0x1e)) {
    if ((ppiVar1 == (int **)0x0) || (0x13 < (int)ppiVar1)) {
      param_1[0x1474] = (int **)0x1;
    }
    else if (10 < (int)ppiVar1) {
      param_1[0x1474] = (int **)((int)ppiVar1 + -10);
    }
  }
  ppiVar1 = param_1[0x1474];
  if (*(double *)(ppppcVar8 + 0x38) <= _DAT_0064a690) {
    if ((((0x13 < (int)ppiVar1) && ((int)ppiVar1 < 0x1e)) &&
        (*(double *)(ppppcVar8 + 0x38) <= _DAT_0064a668)) &&
       (*(char *)((int)ppppcVar8 + 0xc9) == '\0')) {
      param_1[0x1474] = (int **)0x0;
    }
  }
  else if (ppiVar1 == (int **)0x0) {
    param_1[0x1474] = (int **)0x15;
  }
  if (((_DAT_0064a668 < *(double *)(ppppcVar8 + 0x38)) || (*(char *)((int)ppppcVar8 + 0xc9) != '\0')
      ) && (param_1[0x1474] == (int **)0x0)) {
    param_1[0x1474] = (int **)0x15;
  }
LAB_004d056c:
  if (((*param_2 & 1) != 0) && (local_21c = (code ****)param_1[0x1427], local_21c != DAT_0068a8f0))
  {
    ppiVar1 = param_1[0x148c];
    ppppiStack_210 = (int ****)param_1[0x148e];
    local_230 = (code ****)local_a4;
    local_234 = (code ****)0x4d05b8;
    local_218._4_4_ = (code ****)param_1[0x148d];
    local_230 = (code ****)FUN_0057d570();
    local_238 = (int *****)local_218._4_4_;
    local_234 = (code ****)ppppiStack_210;
    local_234 = (code ****)FUN_005ab330(auStack_74,ppiVar1);
    local_238 = (int *****)apppcStack_1ec;
    FUN_005ab130();
    local_230 = (code ****)0x4d05f3;
    iVar3 = FUN_0057d5d0();
    local_230 = *(code *****)(iVar3 + 0xc);
    local_234 = (code ****)0x0;
    local_238 = (int *****)0x4d05fe;
    ppppcVar8 = (code ****)FUN_005ee8e0();
    local_230 = (code ****)apppiStack_1c8;
    local_234 = (code ****)apppiStack_44;
    local_238 = (int *****)0x4d0617;
    iVar3 = FUN_0057d570();
    local_234 = (code ****)(iVar3 + 0x24);
    local_238 = (int *****)ppppcVar8;
    iVar3 = FUN_004e5437();
    FUN_004365d0(&local_200,*(undefined4 *)(iVar3 + 0xc));
    if (local_200 == (code ****)0xffffffff) {
      if (DAT_006d0fd8[0x9a] != param_1) {
        local_230 = apppcStack_1ec;
        local_238 = (int *****)&local_21c;
        local_234 = (code ****)DAT_006d0fd8;
        local_218 = (double)CONCAT44(local_218._4_4_,&local_234);
        FUN_0041d3f0();
        local_238 = (int *****)0x4d0664;
        FUN_0043ef50();
        ExceptionList = pvStack_14;
        return;
      }
    }
    else {
      local_234 = apppcStack_1ec;
      local_238 = (int *****)&local_21c;
      local_218 = (double)CONCAT44(local_218._4_4_,&local_234);
      local_230 = local_234;
      FUN_0041d3f0();
      local_238 = (int *****)local_200;
      FUN_0043f320();
    }
  }
  ExceptionList = pvStack_14;
  return;
}

