
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424640(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  double *pdVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  int **ppiVar11;
  int *piVar12;
  float10 fVar13;
  undefined4 *puStack_2bc;
  undefined4 *puStack_2b8;
  int *apiStack_2b4 [3];
  int **ppiStack_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  int *local_280;
  int *local_27c;
  undefined8 local_278;
  int *local_26c;
  int *local_268;
  int *local_264;
  double local_260;
  undefined8 local_258;
  double local_250;
  double local_248;
  undefined4 local_240;
  undefined4 local_23c;
  double local_238;
  double local_230;
  undefined1 *local_228;
  undefined1 local_221;
  undefined8 local_220;
  float local_218;
  double local_210;
  double local_208;
  double local_200;
  int *local_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  double local_1ec;
  double local_1e4;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  double local_1d4;
  double local_1cc;
  double local_1c4;
  double local_1bc;
  double local_1b4;
  double local_1ac;
  double local_1a4;
  double local_19c;
  double local_194;
  double local_18c;
  double local_184;
  char *local_17c;
  undefined *local_178;
  int *local_174 [2];
  double local_16c;
  undefined4 local_164;
  undefined4 local_160;
  int *local_158;
  undefined4 local_154;
  undefined4 local_150;
  double local_14c;
  double local_144;
  undefined4 local_13c;
  undefined4 local_138;
  double local_134;
  double local_12c;
  undefined4 local_124;
  undefined4 local_120;
  double local_11c;
  double local_114;
  undefined1 local_10c [32];
  undefined4 local_ec [8];
  undefined1 local_cc [24];
  undefined1 local_b4 [24];
  undefined1 local_9c [24];
  undefined1 local_84 [24];
  undefined1 local_6c [24];
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cdd6;
  local_14 = ExceptionList;
  local_294 = 1.69792922906944e-313;
  local_17c = s_xLoadEntities___0066c97c;
  local_178 = &DAT_0071d768;
  local_29c = (double)CONCAT44(0x42468b,(int **)local_29c);
  ExceptionList = &local_14;
  FUN_00401870();
  local_294 = 1.0140573121572288e-306;
  FUN_004018b0();
  DAT_0068c09c = DAT_0068c09c + 1;
  local_c = 0;
  if (DAT_0068c09c < 9) {
    if (DAT_0068c09c != 0) goto LAB_00424733;
  }
  else {
    DAT_0068c09c = 0;
  }
  DAT_0068c114 = DAT_0068c114 + 1;
  local_294 = (double)CONCAT44(&local_221,0x4246da);
  FUN_00478a20();
  local_c._0_1_ = 1;
  local_294 = (double)CONCAT44(&local_1f8,0x4246ef);
  FUN_00477c00();
  if (local_1f8 == DAT_0068a8f0) {
    local_294 = (double)CONCAT44(&local_280,0x42470d);
    local_1f8 = (int *)FUN_00568670();
    local_1f8 = (int *)*local_1f8;
    if (local_1f8[0x16] != 0x12345678) {
      local_c = (uint)local_c._1_3_ << 8;
      local_294 = (double)CONCAT44(0x424733,(int **)local_294);
      FUN_0044b070();
LAB_00424733:
      local_294 = 1.6979292257098e-313;
      local_29c = (double)CONCAT44(0x424744,(int **)local_29c);
      FUN_00401870();
      local_294 = 1.014057312157258e-306;
      FUN_004018b0();
      ExceptionList = local_14;
      return;
    }
  }
  local_210 = *(double *)(local_1f8 + 0x9c);
  local_208 = *(double *)(local_1f8 + 0x9e);
  local_200 = *(double *)(local_1f8 + 0xa0);
  local_27c = (int *)*DAT_0068a8f0;
  piVar5 = local_1f8 + 0x58;
  pdVar4 = &local_1c4;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(int *)pdVar4 = *piVar5;
    piVar5 = piVar5 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  if (local_27c != DAT_0068a8f0) {
    do {
      local_280 = (int *)((int)&local_294 + 4);
      local_294 = (double)CONCAT44(local_27c,0x4247c7);
      iVar10 = FUN_0040a950();
      uVar6 = extraout_ECX;
      if (*(int *)(iVar10 + 0x4c) == -1) {
LAB_004247e8:
        local_280 = (int *)&local_294;
        local_29c = (double)CONCAT44(&local_27c,0x424800);
        local_294._4_4_ = (undefined1 **)uVar6;
        FUN_0041d3f0();
        local_29c = (double)CONCAT44(0x424807,(int **)local_29c);
        FUN_004042b0();
        local_294 = (double)CONCAT44(local_294._4_4_,0x42480c);
        cVar2 = FUN_00417560();
        if (cVar2 == '\0') {
          local_280 = (int *)((int)&local_294 + 4);
          local_294 = (double)CONCAT44(local_27c,0x424829);
          iVar10 = FUN_0040a950();
          local_294._0_4_ =
               (int **)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),*(byte *)(iVar10 + 0x58));
          if ((*(byte *)(iVar10 + 0x58) & 1) == 0) {
            local_280 = (int *)((int)&local_294 + 4);
            local_294 = (double)CONCAT44(local_27c,0x42484a);
            iVar10 = FUN_0040a950();
            local_294._0_4_ = (int **)extraout_ECX_02;
            if ((*(uint *)(iVar10 + 0x58) >> 2 & 1) != 0) goto LAB_00424a6c;
            local_294._0_4_ = (int **)local_54;
            local_280 = (int *)&local_294;
            local_29c = (double)CONCAT44(&local_27c,0x424874);
            local_294._4_4_ = (undefined1 **)(int **)local_294;
            FUN_0041d3f0();
            local_29c = (double)CONCAT44(0x424879,(int **)local_29c);
            FUN_0040a950();
            local_294 = (double)CONCAT44(local_294._4_4_,0x424886);
            puVar3 = (undefined4 *)FUN_00424010();
            apiStack_2b4[1] = (int *)local_cc;
            ppiVar11 = apiStack_2b4 + 2;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppiVar11 = (int *)*puVar3;
              puVar3 = puVar3 + 1;
              ppiVar11 = ppiVar11 + 1;
            }
            apiStack_2b4[0] = (int *)0x4248a1;
            pdVar4 = (double *)FUN_00435cd0();
            local_294 = pdVar4[2] - local_200;
            local_29c = pdVar4[1] - local_208;
            local_2a4 = *pdVar4 - local_210;
            ppiStack_2a8 = (int **)0x4248de;
            FUN_00405ea0();
            local_250 = local_11c;
            local_280 = (int *)((int)&local_294 + 4);
            local_248 = local_114;
            local_258 = (double)CONCAT44(local_120,local_124);
            local_294 = (double)CONCAT44(local_27c,0x42491c);
            iVar10 = FUN_0040a950();
            local_220 = *(double *)(iVar10 + 0x150) * _DAT_0064a728;
            local_29c._4_4_ = local_34;
            local_294 = (double)ZEXT48(&local_220);
            local_280 = (int *)&local_29c;
            local_2a4 = (double)CONCAT44(&local_27c,0x42494f);
            FUN_0041d3f0();
            local_2a4 = (double)CONCAT44(0x424954,(int)local_2a4);
            FUN_0040a950();
            local_29c = (double)CONCAT44(local_29c._4_4_,0x424961);
            puVar3 = (undefined4 *)FUN_00424010();
            ppiVar11 = apiStack_2b4;
            for (puStack_2bc = (undefined4 *)0x8; puStack_2bc != (undefined4 *)0x0;
                puStack_2bc = (undefined4 *)((int)puStack_2bc + -1)) {
              *ppiVar11 = (int *)*puVar3;
              puVar3 = puVar3 + 1;
              ppiVar11 = ppiVar11 + 1;
            }
            local_280 = (int *)&puStack_2bc;
            puStack_2b8 = puStack_2bc;
            FUN_0041d3f0(&local_27c);
            FUN_004042b0();
            puStack_2bc = local_ec;
            FUN_0043bff0();
            local_294 = local_1b4 * _DAT_0064a728;
            local_29c = local_1bc * _DAT_0064a728;
            local_2a4 = local_1c4 * _DAT_0064a728;
            ppiStack_2a8 = (int **)0x4249e2;
            FUN_00405ea0();
            apiStack_2b4[1] = (int *)local_9c;
            puVar3 = local_ec;
            ppiVar11 = apiStack_2b4 + 2;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *ppiVar11 = (int *)*puVar3;
              puVar3 = puVar3 + 1;
              ppiVar11 = ppiVar11 + 1;
            }
            apiStack_2b4[0] = (int *)0x424a02;
            pdVar4 = (double *)FUN_00435cd0();
            local_294 = pdVar4[2] - local_184;
            local_29c = pdVar4[1] - local_18c;
            local_2a4 = *pdVar4 - local_194;
            ppiStack_2a8 = (int **)0x424a3f;
            FUN_00405ea0();
            local_238 = local_134;
            local_240 = local_13c;
            local_23c = local_138;
            local_230 = local_12c;
          }
          else {
LAB_00424a6c:
            local_280 = (int *)&local_294;
            local_29c = (double)CONCAT44(&local_27c,0x424a84);
            local_294._4_4_ = (undefined1 **)(int **)local_294;
            FUN_0041d3f0();
            local_29c = (double)CONCAT44(0x424a8b,(int **)local_29c);
            FUN_004042b0();
            local_294 = (double)CONCAT44(local_294._4_4_,local_b4);
            local_29c = (double)CONCAT44(0x424a98,(int **)local_29c);
            pdVar4 = (double *)FUN_0040b030();
            local_294 = pdVar4[2] - local_200;
            local_29c = pdVar4[1] - local_208;
            local_2a4 = *pdVar4 - local_210;
            ppiStack_2a8 = (int **)0x424ad2;
            FUN_00405ea0();
            local_250 = local_14c;
            local_248 = local_144;
            local_294 = local_1b4 * _DAT_0064a728;
            local_29c = local_1bc * _DAT_0064a728;
            local_258 = (double)CONCAT44(local_150,local_154);
            local_2a4 = local_1c4 * _DAT_0064a728;
            ppiStack_2a8 = (int **)0x424b45;
            FUN_00405ea0();
            local_294 = 0.25;
            local_280 = (int *)((int)&local_29c + 4);
            local_29c._0_4_ = &local_27c;
            local_2a4 = (double)CONCAT44(0x424b5d,(int)local_2a4);
            local_29c._4_4_ = (undefined1 *)extraout_ECX_03;
            FUN_0041d3f0();
            local_29c = (double)CONCAT44(local_29c._4_4_,0x424b62);
            iVar10 = FUN_0040a950();
            local_29c = (double)CONCAT44(iVar10 + 0x158,local_6c);
            local_2a4 = (double)CONCAT44(0x424b78,(int)local_2a4);
            uVar6 = FUN_00425640();
            ppiStack_2a8 = (int **)local_84;
            local_2a4 = (double)CONCAT44(uVar6,&local_258);
            apiStack_2b4[2] = (int *)0x424b8b;
            pdVar4 = (double *)FUN_00411a70();
            local_294 = pdVar4[2] - local_19c;
            local_29c = pdVar4[1] - local_1a4;
            local_2a4 = *pdVar4 - local_1ac;
            ppiStack_2a8 = (int **)0x424bc8;
            FUN_00405ea0();
            local_238 = local_1d4;
            local_240 = local_1dc;
            local_23c = uStack_1d8;
            local_230 = local_1cc;
          }
          local_294._4_4_ = (undefined1 **)&local_258;
          local_294._0_4_ = (int **)0x424bfe;
          fVar13 = (float10)FUN_004245b0();
          local_278 = (double)fVar13;
          local_280 = (int *)&local_294;
          local_29c = (double)CONCAT44(&local_27c,0x424c19);
          FUN_0041d3f0();
          local_29c = (double)CONCAT44(0x424c20,(int **)local_29c);
          FUN_004042b0();
          local_294 = (double)CONCAT44(local_294._4_4_,local_174);
          local_29c = (double)CONCAT44(0x424c2d,(int **)local_29c);
          pdVar4 = (double *)FUN_0040b030();
          local_294 = pdVar4[2] - local_200;
          local_29c = pdVar4[1] - local_208;
          local_2a4 = *pdVar4 - local_210;
          ppiStack_2a8 = (int **)0x424c67;
          FUN_00405ea0();
          local_280 = (int *)((int)&local_294 + 4);
          local_260 = SQRT((double)CONCAT44(uStack_1f0,local_1f4) *
                           (double)CONCAT44(uStack_1f0,local_1f4) +
                           local_1e4 * local_1e4 + local_1ec * local_1ec);
          local_294 = (double)CONCAT44(local_27c,0x424cab);
          iVar10 = FUN_0040a950();
          local_294._4_4_ = (undefined1 **)extraout_ECX_04;
          if (*(int *)(iVar10 + 0x4c) != -1) {
            local_294 = (double)CONCAT44(*(int *)(iVar10 + 0x4c),0x424cbc);
            iVar10 = FUN_004d89a0();
            local_294._4_4_ = (undefined1 **)extraout_ECX_05;
            if (iVar10 != 0) {
              local_278 = local_278 * _DAT_0064a7a8;
            }
          }
          local_280 = (int *)&local_294;
          local_29c = (double)CONCAT44(&local_27c,0x424cee);
          FUN_0041d3f0();
          local_29c = (double)CONCAT44(0x424cf5,(int **)local_29c);
          FUN_004042b0();
          local_294 = (double)CONCAT44(local_294._4_4_,0x424cfa);
          cVar2 = FUN_004171e0();
          if (cVar2 != '\0') {
            local_278 = local_278 * _DAT_0064a7a0;
          }
          local_280 = (int *)((int)&local_294 + 4);
          local_294 = (double)CONCAT44(local_27c,0x424d21);
          iVar10 = FUN_0040a950();
          if (*(int *)(iVar10 + 0x54) == 8) {
            local_278 = local_278 * _DAT_0064a798;
          }
          local_280 = (int *)((int)&local_294 + 4);
          local_294 = (double)CONCAT44(local_27c,0x424d4c);
          iVar10 = FUN_0040a950();
          if ((*(uint *)(iVar10 + 0x58) & 0x80000) != 0) {
            local_278 = local_278 * _DAT_0064a790;
          }
          if (DAT_0068c098 != '\0') {
            local_280 = (int *)((int)&local_294 + 4);
            local_294 = (double)CONCAT44(local_27c,0x424d83);
            iVar10 = FUN_0040a950();
            local_294._4_4_ = (undefined1 **)extraout_ECX_06;
            if (*(int *)(iVar10 + 0x4c) != -1) {
              local_294 = (double)CONCAT44(*(int *)(iVar10 + 0x4c),0x424d94);
              iVar10 = FUN_004d89a0();
              local_294._4_4_ = (undefined1 **)extraout_ECX_07;
              if ((iVar10 != 0) && (local_260 <= _DAT_0064a788)) goto LAB_00424e1d;
            }
            local_280 = (int *)&local_294;
            local_29c = (double)CONCAT44(&local_27c,0x424dc9);
            FUN_0041d3f0();
            local_29c = (double)CONCAT44(0x424dd0,(int **)local_29c);
            FUN_004042b0();
            local_294 = (double)CONCAT44(local_294._4_4_,0x424dd5);
            cVar2 = FUN_004171e0();
            if (cVar2 == '\0') {
              local_294._4_4_ = &local_228;
              local_294._0_4_ = (int **)0x424de6;
              piVar5 = (int *)FUN_00477c00();
              local_294._0_4_ = &local_27c;
              local_29c = (double)CONCAT44(0x424df8,(int **)local_29c);
              local_280 = (int *)((int)&local_294 + 4);
              FUN_0041d3f0();
              local_294 = (double)CONCAT44(local_294._4_4_,0x424dfd);
              iVar10 = FUN_0040a950();
              if (*(int *)(iVar10 + 0xa8) != *piVar5) {
                local_278 = 0.0;
              }
            }
          }
LAB_00424e1d:
          local_294 = local_260;
          local_29c = local_278;
          local_2a4._4_4_ = (int *)(int)local_278;
          ppiStack_2a8 = &local_27c;
          local_280 = (int *)&local_2a4;
          local_2a4._0_4_ = (int)local_278;
          apiStack_2b4[2] = (int *)0x424e49;
          FUN_0041d3f0();
          ppiStack_2a8 = (int **)0x424e50;
          FUN_004042b0();
          local_2a4 = (double)CONCAT44(local_2a4._4_4_,0x424e5c);
          uVar6 = FUN_00425670();
          local_294 = (double)CONCAT44(uVar6,local_268);
          if (local_268 == local_264) {
            local_29c = (double)CONCAT44(0x424e88,(int **)local_29c);
            FUN_00456e50();
          }
          else {
            local_29c = (double)CONCAT44(0x424e6f,(int **)local_29c);
            FUN_00461650();
            local_268 = local_268 + 8;
          }
        }
      }
      else {
        local_294 = (double)CONCAT44(*(int *)(iVar10 + 0x4c),0x4247d8);
        iVar10 = FUN_004d89c0();
        uVar6 = extraout_ECX_00;
        if (iVar10 != 0) goto LAB_004247e8;
      }
      local_27c = (int *)*local_27c;
    } while (local_27c != DAT_0068a8f0);
  }
  local_280 = (int *)*DAT_0068becc;
  if (local_280 != DAT_0068becc) {
    do {
      if ((*(byte *)((int *)local_280[2] + 2) & 0x20) != 0) {
        iVar10 = *(int *)local_280[2];
        if (iVar10 != -1) {
          local_294 = (double)CONCAT44(iVar10,0x424ed3);
          iVar10 = FUN_004d89c0();
          if (iVar10 == 0) goto LAB_004250dc;
        }
        iVar10 = local_280[2];
        local_294 = *(double *)(iVar10 + 0x30) - local_200;
        local_29c = *(double *)(iVar10 + 0x28) - local_208;
        local_2a4 = *(double *)(iVar10 + 0x20) - local_210;
        ppiStack_2a8 = (int **)0x424f29;
        FUN_00405ea0();
        local_250 = local_1ec;
        local_248 = local_1e4;
        local_294 = local_1b4 * _DAT_0064a728;
        local_29c = local_1bc * _DAT_0064a728;
        local_258 = (double)CONCAT44(uStack_1f0,local_1f4);
        local_2a4 = local_1c4 * _DAT_0064a728;
        ppiStack_2a8 = (int **)0x424f9c;
        FUN_00405ea0();
        local_294 = local_248 - local_19c;
        local_29c = local_250 - local_1a4;
        local_2a4 = local_258 - local_1ac;
        ppiStack_2a8 = (int **)0x424fdd;
        FUN_00405ea0();
        local_238 = local_1d4;
        local_240 = local_1dc;
        local_230 = local_1cc;
        local_23c = uStack_1d8;
        local_294 = (double)CONCAT44(&local_258,0x425013);
        fVar13 = (float10)FUN_004245b0();
        local_278 = (double)fVar13;
        local_260 = SQRT(local_248 * local_248 + local_250 * local_250 + local_258 * local_258);
        if (*(int *)local_280[2] != -1) {
          local_294 = (double)CONCAT44(*(int *)local_280[2],0x425054);
          iVar10 = FUN_004d89a0();
          if (iVar10 != 0) {
            local_278 = local_278 * _DAT_0064a7a8;
          }
        }
        local_294 = local_260;
        local_29c = local_278;
        ppiStack_2a8 = &local_280;
        local_228 = (undefined1 *)&local_2a4;
        local_2a4._0_4_ = local_278._4_4_;
        local_2a4._4_4_ = (int *)local_278._4_4_;
        apiStack_2b4[2] = (int *)0x42509a;
        FUN_0041d3f0();
        ppiStack_2a8 = (int **)0x4250a1;
        FUN_004042b0();
        local_2a4 = (double)CONCAT44(local_2a4._4_4_,0x4250ad);
        uVar6 = FUN_004256c0();
        local_294 = (double)CONCAT44(uVar6,local_268);
        if (local_268 == local_264) {
          local_29c = (double)CONCAT44(0x4250d8,(int **)local_29c);
          FUN_00456e50();
        }
        else {
          local_29c = (double)CONCAT44(0x4250c0,(int **)local_29c);
          FUN_00461650();
          local_268 = local_268 + 8;
        }
      }
LAB_004250dc:
      local_280 = (int *)*local_280;
    } while (local_280 != DAT_0068becc);
  }
  iVar10 = 0;
  if (0 < DAT_0067a1f4) {
    do {
      local_294 = (double)CONCAT44(&local_280,&local_220);
      local_280 = (int *)0xffffffff;
      local_220 = 0.0;
      local_218 = 0.0;
      local_29c = (double)CONCAT44(iVar10,0x425132);
      iVar7 = FUN_005683e0();
      if (iVar7 == 0) {
        if (local_280 != (int *)0xffffffff) {
          local_294 = (double)CONCAT44(local_280,0x42514c);
          iVar7 = FUN_004d89c0();
          if (iVar7 == 0) goto LAB_00425349;
        }
        local_1a4 = (double)local_220._4_4_;
        local_19c = (double)local_218;
        local_250 = local_1a4 - local_208;
        local_248 = local_19c - local_200;
        local_258 = (double)((float)local_220 - (float)local_210);
        local_294 = local_1b4 * _DAT_0064a728;
        local_29c = local_1bc * _DAT_0064a728;
        local_2a4 = local_1c4 * _DAT_0064a728;
        ppiStack_2a8 = (int **)0x425208;
        local_18c = local_250;
        local_184 = local_248;
        FUN_00405ea0();
        local_294 = local_248 - local_1cc;
        local_29c = local_250 - local_1d4;
        local_2a4 = local_258 - (double)CONCAT44(uStack_1d8,local_1dc);
        ppiStack_2a8 = (int **)0x425249;
        FUN_00405ea0();
        local_238 = local_1ec;
        local_240 = local_1f4;
        local_230 = local_1e4;
        local_23c = uStack_1f0;
        local_294 = (double)CONCAT44(&local_258,0x42527f);
        fVar13 = (float10)FUN_004245b0();
        local_278 = SQRT(local_248 * local_248 + local_250 * local_250 + local_258 * local_258);
        fVar13 = fVar13 * (float10)_DAT_0064a790;
        local_260 = (double)fVar13;
        if (local_280 != (int *)0xffffffff) {
          local_294 = (double)CONCAT44(local_280,0x4252c3);
          iVar7 = FUN_004d89a0();
          fVar13 = (float10)local_260;
          if (iVar7 != 0) {
            fVar13 = fVar13 * (float10)_DAT_0064a7a8;
          }
        }
        local_174[0] = local_280;
        local_164 = (int)local_278;
        local_158 = DAT_0068a8f0;
        local_160 = local_278._4_4_;
        local_16c = (double)fVar13;
        if (local_268 == local_264) {
          local_294 = (double)CONCAT44(local_174,local_268);
          local_29c = (double)CONCAT44(0x425349,(int **)local_29c);
          FUN_00456e50();
        }
        else {
          local_294 = (double)CONCAT44(local_174,local_268);
          local_29c = (double)CONCAT44(0x425327,(int **)local_29c);
          FUN_00461650();
          local_268 = local_268 + 8;
        }
      }
LAB_00425349:
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_0067a1f4);
  }
  puVar1 = local_228;
  piVar12 = local_268;
  piVar5 = local_26c;
  if (local_26c != local_268) {
    iVar10 = 0;
    for (iVar7 = (int)local_268 - (int)local_26c >> 5; iVar7 != 1; iVar7 = iVar7 >> 1) {
      iVar10 = iVar10 + 1;
    }
    local_294 = (double)CONCAT44(local_228,iVar10 * 2);
    local_29c = (double)ZEXT48(local_268);
    local_2a4._4_4_ = local_26c;
    local_2a4._0_4_ = 0x42538b;
    FUN_0045e230();
    local_2a4 = (double)CONCAT44(local_2a4._4_4_,puVar1);
    ppiStack_2a8 = (int **)piVar12;
    apiStack_2b4[2] = piVar5;
    apiStack_2b4[1] = (int *)0x425393;
    FUN_0045e300();
  }
  if (local_26c != local_268) {
    do {
      if (_DAT_0064a780 < *(double *)(local_268 + -6)) break;
      iVar10 = local_268[-8];
      if ((iVar10 != -1) || (iVar10 = *(int *)local_268[-2], iVar10 != -1)) {
        local_294 = (double)CONCAT44(iVar10,0x4253ca);
        iVar10 = FUN_004d89a0();
        if (iVar10 != 0) {
          iVar10 = local_268[-8];
          iVar7 = iVar10;
          if (iVar10 == -1) {
            iVar7 = *(int *)local_268[-2];
          }
          if (iVar7 != -1) {
            if (iVar10 == -1) {
              iVar10 = *(int *)local_268[-2];
            }
            local_294 = (double)CONCAT44(iVar10,0x425400);
            FUN_004d8a40();
          }
        }
      }
      local_268 = local_268 + -8;
    } while (local_26c != local_268);
  }
  piVar5 = local_268 + -8;
  piVar12 = local_26c;
  if (local_26c != local_268) {
    do {
      iVar10 = *piVar12;
      if ((iVar10 == -1) && (iVar10 = *(int *)piVar12[6], iVar10 == -1)) {
LAB_00425448:
        if ((double)CONCAT44(_DAT_0068c08c,_DAT_0068c088) < *(double *)(piVar12 + 4)) {
LAB_0042545c:
          iVar10 = *piVar12;
          if (iVar10 == -1) {
            iVar10 = *(int *)piVar12[6];
          }
          local_294 = (double)CONCAT44(iVar10,0x42546e);
          iVar10 = FUN_004d89f0();
          if (iVar10 == 0) {
            do {
              if (piVar5 <= piVar12) goto LAB_00425547;
              iVar10 = *piVar5;
              if ((iVar10 != -1) || (iVar10 = *(int *)piVar5[6], iVar10 != -1)) {
                local_294 = (double)CONCAT44(iVar10,0x425494);
                iVar10 = FUN_004d89a0();
                if ((iVar10 != 0) &&
                   ((double)CONCAT44(_DAT_0068c08c,_DAT_0068c088) < *(double *)(piVar5 + 4)))
                goto LAB_004254b5;
              }
              piVar5 = piVar5 + -8;
            } while( true );
          }
          if ((*piVar12 != -1) || (*(int *)piVar12[6] != -1)) {
            if ((int *)piVar12[7] != DAT_0068a8f0) {
              local_294 = (double)CONCAT44((int *)piVar12[7],local_10c);
              local_29c = (double)CONCAT44(0x425514,(int **)local_29c);
              uVar6 = FUN_00437780();
              local_294 = (double)CONCAT44(uVar6,0x425523);
              FUN_004742e0();
            }
            iVar10 = *piVar12;
            if (iVar10 == -1) {
              iVar10 = *(int *)piVar12[6];
            }
            local_294 = (double)CONCAT44(iVar10,0x425535);
            FUN_004d8a80();
          }
        }
      }
      else {
        local_294 = (double)CONCAT44(iVar10,0x425438);
        iVar10 = FUN_004d89a0();
        if (iVar10 == 0) goto LAB_00425448;
      }
      piVar12 = piVar12 + 8;
    } while (piVar12 != local_268);
  }
LAB_00425547:
  _DAT_0068c088 = 0;
  iVar10 = (int)local_264 - (int)local_26c >> 5;
  _DAT_0068c08c = 0x4062c000;
  DAT_0068c090 = 1;
  if (iVar10 != 0) {
    uVar8 = iVar10 * 0x20;
    if (uVar8 < 0x81) {
      local_294 = (double)CONCAT44(0x42559d,(int **)local_294);
      FUN_00401aa0();
      *local_26c = *(int *)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4) = local_26c;
      DAT_0068c164 = 0;
    }
    else {
      local_294 = (double)CONCAT44(local_26c,0x425581);
      FUN_0061c888();
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar9 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar9 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar9 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar9 = s_xLoadEntities___0066c97c;
  cVar2 = s_xLoadEntities___0066c97c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar9;
    }
  }
  ExceptionList = local_14;
  return;
LAB_004254b5:
  iVar10 = *piVar5;
  iVar7 = iVar10;
  if (iVar10 == -1) {
    iVar7 = *(int *)piVar5[6];
  }
  if (iVar7 != -1) {
    if (iVar10 == -1) {
      iVar10 = *(int *)piVar5[6];
    }
    local_294 = (double)CONCAT44(iVar10,0x4254da);
    FUN_004d8a40();
  }
  piVar5 = piVar5 + -8;
  goto LAB_0042545c;
}

