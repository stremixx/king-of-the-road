
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004224f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 ******ppppppuVar4;
  undefined4 *****pppppuVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 ***extraout_ECX;
  undefined4 ***extraout_ECX_00;
  undefined4 ***extraout_ECX_01;
  undefined4 ***extraout_ECX_02;
  undefined4 ******ppppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 *****pppppuVar10;
  undefined4 ****ppppuVar11;
  uint *puVar12;
  undefined4 ***pppuStack_21c;
  undefined1 *puStack_218;
  undefined1 *puStack_214;
  char *pcStack_210;
  undefined4 ****ppppuStack_20c;
  undefined4 *****pppppuStack_208;
  undefined4 *****pppppuStack_204;
  undefined4 *****pppppuStack_200;
  undefined4 *****pppppuStack_1fc;
  undefined4 *****local_1f8;
  undefined4 ****local_1e0;
  undefined4 ****local_1dc;
  undefined1 local_1d5;
  undefined1 *puStack_1d4;
  undefined4 ****local_1d0;
  undefined4 ***local_1cc;
  int iStack_1c8;
  uint local_1c4;
  undefined4 ****local_1c0;
  undefined1 local_1b9;
  undefined8 local_1b8;
  undefined4 ***local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int *local_184 [2];
  uint local_17c;
  int *local_178 [2];
  uint uStack_170;
  int *apiStack_16c [2];
  uint uStack_164;
  undefined4 *****local_160 [4];
  undefined4 *****pppppuStack_150;
  char *pcStack_14c;
  undefined4 ****ppppuStack_148;
  undefined4 ****ppppuStack_140;
  undefined4 ***pppuStack_13c;
  undefined4 ***pppuStack_138;
  char acStack_134 [32];
  uint auStack_114 [8];
  uint auStack_f4 [5];
  int iStack_e0;
  undefined4 auStack_d4 [8];
  uint auStack_b4 [8];
  undefined4 ****appppuStack_94 [8];
  uint auStack_74 [5];
  int iStack_60;
  uint auStack_54 [8];
  uint auStack_34 [4];
  int iStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cd42;
  local_14 = ExceptionList;
  iVar3 = DAT_0068bf3c - DAT_0068bf38 >> 2;
  local_1f8 = (undefined4 *****)&local_1b9;
  local_1d5 = 1;
  pppppuStack_200 = (undefined4 *****)0x42253b;
  ExceptionList = &local_14;
  pppppuStack_1fc = (undefined4 *****)iVar3;
  FUN_0044a420();
  local_1f8 = (undefined4 *****)&local_1d5;
  pppppuStack_200 = (undefined4 ******)local_1b8;
  local_c = 0;
  pppppuStack_204 = (undefined4 *****)0x422554;
  pppppuStack_1fc = (undefined4 *****)iVar3;
  local_1b8._4_4_ = (undefined4 ******)FUN_004693c0();
  ppppppuVar8 = (undefined4 ******)((int)local_1b8._4_4_ - (int)(undefined4 ******)local_1b8);
  local_c = 1;
  if ((undefined4 ******)(DAT_006897c8 - (int)DAT_006897c0) < ppppppuVar8) {
    pppppuStack_1fc = (undefined4 ******)local_1b8;
    pppppuStack_204 = (undefined4 ******)0x42258d;
    pppppuStack_200 = ppppppuVar8;
    local_1f8 = local_1b8._4_4_;
    ppppppuVar4 = (undefined4 ******)FUN_00459b30();
    local_1f8 = (undefined4 *****)(DAT_006897c8 - (int)DAT_006897c0);
    if (local_1f8 != (undefined4 *****)0x0) {
      pppppuStack_1fc = DAT_006897c0;
      pppppuStack_200 = (undefined4 ******)0x4225a5;
      FUN_0044b440();
    }
    DAT_006897c8 = (int)ppppppuVar4 + (int)ppppppuVar8;
    DAT_006897c0 = ppppppuVar4;
  }
  else {
    local_1f8 = DAT_006897c0;
    if ((undefined4 ******)((int)DAT_006897c4 - (int)DAT_006897c0) < ppppppuVar8) {
      pppppuStack_1fc =
           (undefined4 *****)
           (((int)DAT_006897c4 - (int)DAT_006897c0) + (int)(undefined4 ******)local_1b8);
      pppppuStack_200 = (undefined4 ******)local_1b8;
      pppppuStack_204 = (undefined4 *****)0x4225de;
      FUN_00602c20();
      pppppuStack_204 = DAT_006897c4;
      ppppuStack_20c =
           (undefined4 ****)
           (((int)DAT_006897c4 - (int)DAT_006897c0) + (int)(undefined4 ******)local_1b8);
      pppppuStack_208 = local_1b8._4_4_;
      pcStack_210 = (char *)0x422600;
      FUN_00602c20();
    }
    else {
      pppppuStack_200 = (undefined4 ******)local_1b8;
      pppppuStack_204 = (undefined4 ******)0x4225ce;
      pppppuStack_1fc = local_1b8._4_4_;
      FUN_00602c20();
    }
  }
  DAT_006897c4 = (undefined4 ******)((int)ppppppuVar8 + (int)DAT_006897c0);
  local_c = 0xffffffff;
  local_1f8 = (undefined4 *****)0x422624;
  FUN_0044a450();
  if (*(int *)(DAT_0068bc08 + 4) < *(int *)(DAT_0068be88 + 4)) {
    ppppuVar11 = (undefined4 ****)0x0;
    if (DAT_0068c27c != '\0') {
      local_1f8 = (undefined4 *****)0x42264d;
      ppppuVar11 = (undefined4 ****)FUN_0046e040();
    }
    local_1f8 = (undefined4 *****)0xffffffff;
    pppppuStack_200 = (undefined4 *****)0x1;
    pppppuStack_204 = (undefined4 *****)0x42265a;
    pppppuStack_1fc = (undefined4 *****)ppppuVar11;
    pppppuVar5 = (undefined4 *****)FUN_00415840();
    pppppuStack_208 = &local_1e0;
    ppppuStack_20c = (undefined4 ****)0x422667;
    pppppuStack_204 = pppppuVar5;
    FUN_00422480();
    pppppuVar5[0xb4] = ppppuVar11;
    pppppuStack_1fc = (undefined4 *****)DAT_0066b6e4;
    pppppuStack_204 = local_160;
    pppppuStack_200 = (undefined4 *****)s_start_d__d_0066c8f8;
    pppppuStack_208 = (undefined4 *****)0x42268b;
    local_1f8 = (undefined4 *****)((int)ppppuVar11 + 1);
    FUN_0061c369();
    pppppuStack_208 = local_160;
    ppppuStack_20c = &local_1c0;
    pcStack_210 = (char *)0x42269d;
    puVar6 = (undefined4 *)FUN_004365f0();
    local_1a0 = *puVar6;
    local_1f8 = (undefined4 *****)&local_1a4;
    local_1a4 = (undefined4 ****)0xffffffff;
    local_19c = 0;
    local_198 = 0;
    local_194 = 0;
    local_190 = 0;
    local_18c = 0;
    local_188 = 0xffffffff;
    pppppuStack_1fc = (undefined4 *****)0x4226d6;
    FUN_004742e0();
    if (DAT_0068c0e8 == 1) {
      local_1f8 = (undefined4 *****)0x1;
      pppppuStack_200 = &local_1c0;
      pppppuStack_1fc = (undefined4 *****)s_check_point1_0066c168;
      pppppuStack_204 = (undefined4 ******)0x4226f4;
      puVar6 = (undefined4 *)FUN_004365f0();
      pppuStack_21c = (undefined4 ***)*puVar6;
      local_1d0 = (undefined4 ****)&puStack_218;
      FUN_0040a430();
      local_1d0 = &pppuStack_21c;
      pppuStack_21c = extraout_ECX;
      FUN_0041d3f0(&local_1e0);
      FUN_00478300();
    }
    if (DAT_0068c0e8 == 2) {
      pppppuStack_1fc = (undefined4 *****)DAT_0066b6e4;
      pppppuStack_204 = (undefined4 *****)&local_1a4;
      pppppuStack_200 = (undefined4 *****)s_finish_d__d_0066c198;
      pppppuStack_208 = (undefined4 ******)0x42273e;
      local_1f8 = (undefined4 *****)((int)ppppuVar11 + 1);
      FUN_0061c369();
      pppppuStack_1fc = (undefined4 *****)&local_1a4;
      pppppuStack_200 = &local_1c0;
      local_1f8 = (undefined4 *****)0x1;
      pppppuStack_204 = (undefined4 ******)0x422751;
      puVar6 = (undefined4 *)FUN_004365f0();
      pppuStack_21c = (undefined4 ***)*puVar6;
      local_1d0 = (undefined4 ****)&puStack_218;
      FUN_0040a430();
      local_1d0 = &pppuStack_21c;
      pppuStack_21c = extraout_ECX_00;
      FUN_0041d3f0(&local_1e0);
      FUN_00478300();
    }
    pppppuVar5[0x16] = (undefined4 ****)((uint)pppppuVar5[0x16] | 1);
    if (DAT_0068c27c != '\0') {
      pppppuStack_1fc = (undefined4 *****)0x422792;
      local_1f8 = pppppuVar5;
      FUN_0046db70();
    }
    local_1c0 = &local_1f8;
    local_1f8 = (undefined4 *****)local_1e0;
    pppppuStack_1fc = (undefined4 ******)0x4227a7;
    FUN_004200f0();
  }
  if (DAT_0066e62a != '\0') {
    local_1f8 = (undefined4 *****)0x4227bc;
    ppppuVar11 = (undefined4 ****)FUN_0046e060();
    local_1b8 = (double)(int)ppppuVar11;
    local_1f8 = (undefined4 *****)0x4227e2;
    local_1e0 = ppppuVar11;
    local_1c0 = (undefined4 ****)__ftol();
    local_1f8 = (undefined4 *****)(DAT_006897a0 + 0x18);
    pppppuStack_1fc = (undefined4 *****)0x4227f8;
    FUN_00455dc0();
    local_c = 2;
    if (local_1b8 < (double)*(int *)(DAT_0068be88 + 8) * _DAT_0066b6f0) {
      local_1d0 = (undefined4 ****)((int)ppppuVar11 + 1);
      do {
        if ((int)local_1c0 <= *(int *)(DAT_0068bc08 + 8)) break;
        local_1dc = DAT_0068a8f0;
        if ((char)local_1c4 == '\x02') {
          local_1f8 = (undefined4 *****)&local_1cc;
          pppppuStack_1fc = (undefined4 *****)local_184;
          pppppuStack_200 = (undefined4 *****)0x42285e;
          iVar3 = FUN_00407ec0();
          cVar1 = *(char *)(iVar3 + 8);
          if (((((local_17c & 0x10000) == 0) && (local_184[0] != (int *)0x0)) &&
              (local_184[0][1] = local_184[0][1] + -1, local_184[0][1] == 0)) &&
             (local_184[0] != (int *)0x0)) {
            local_1f8 = (undefined4 *****)0x1;
            pppppuStack_1fc = (undefined4 *****)0x42289b;
            (**(code **)(*local_184[0] + 0xc))();
          }
          if (cVar1 != '\x02') goto LAB_0042295c;
          local_1f8 = (undefined4 *****)&local_1cc;
          pppppuStack_1fc = (undefined4 *****)local_178;
          pppppuStack_200 = (undefined4 *****)0x4228b2;
          piVar7 = (int *)FUN_00407ec0();
          puStack_1d4 = (undefined1 *)&pppppuStack_200;
          pppppuStack_200 = (undefined4 *****)0x0;
          pppppuStack_1fc = (undefined4 *****)0x0;
          local_1f8 = (undefined4 *****)0x0;
          local_c._0_1_ = 4;
          if ((undefined4 *)*piVar7 == (undefined4 *)0x0) {
            pppppuStack_200 = (undefined4 *****)0x0;
            local_1f8 = (undefined4 *****)0x0;
            puStack_1d4 = (undefined1 *)&pppppuStack_200;
          }
          else {
            pppppuStack_204 = (undefined4 *****)0x4228d9;
            iVar3 = (*(code *)**(undefined4 **)*piVar7)();
            pppppuVar5 = (undefined4 *****)*piVar7;
            if (iVar3 == 2) {
              local_1f8 = (undefined4 *****)piVar7[2];
              pppppuVar5[1] = (undefined4 ****)((int)pppppuVar5[1] + 1);
              pppppuStack_200 = pppppuVar5;
            }
            else {
              pppppuStack_204 = (undefined4 *****)&DAT_0066bb08;
              pppppuStack_208 = (undefined4 *****)0x4228ea;
              pppppuStack_208 = (undefined4 *****)(*(code *)(*pppppuVar5)[1])();
              ppppuStack_20c = (undefined4 *****)0x1;
              pcStack_210 = (char *)0x2;
              puStack_214 = (undefined1 *)0x4228f4;
              FUN_004a5670();
            }
          }
          pppppuStack_204 = (undefined4 *****)0x2;
          local_c._0_1_ = 3;
          pppppuStack_208 = (undefined4 ******)0x42291c;
          pppppuVar5 = (undefined4 *****)FUN_00414a30();
          local_c = CONCAT31(local_c._1_3_,2);
          if ((((uStack_170 & 0x10000) == 0) && (local_178[0] != (int *)0x0)) &&
             ((local_178[0][1] = local_178[0][1] + -1, local_178[0][1] == 0 &&
              (local_178[0] != (int *)0x0)))) {
            local_1f8 = (undefined4 *****)0x1;
            pppppuStack_1fc = (undefined4 *****)0x42295a;
            (**(code **)(*local_178[0] + 0xc))();
          }
        }
        else {
LAB_0042295c:
          local_1f8 = (undefined4 *****)&DAT_006897d0;
          pppppuStack_1fc = (undefined4 *****)0x0;
          pppppuStack_200 = (undefined4 *****)0x2;
          pppppuStack_204 = (undefined4 *****)0x422969;
          pppppuVar5 = (undefined4 *****)FUN_004151a0();
        }
        pppppuVar5[0xb4] = local_1e0;
        pppppuStack_1fc = (undefined4 *****)0x42297e;
        local_1f8 = pppppuVar5;
        FUN_00477cd0();
        pppppuStack_200 = (undefined4 *****)&pppuStack_13c;
        pppppuStack_204 = (undefined4 *****)0x42298c;
        pppppuStack_1fc = pppppuVar5;
        piVar7 = (int *)FUN_00422480();
        ppppuVar11 = local_1d0;
        local_1dc = (undefined4 ****)*piVar7;
        pppppuStack_204 = appppuStack_94;
        local_1f8 = (undefined4 *****)local_1d0;
        pppppuStack_1fc = (undefined4 *****)DAT_0066b6e4;
        pppppuStack_200 = (undefined4 *****)s_start_d__d_0066c8f8;
        pppppuStack_208 = (undefined4 *****)0x4229b3;
        FUN_0061c369();
        pppppuStack_208 = appppuStack_94;
        ppppuStack_20c = &pppuStack_138;
        pcStack_210 = (char *)0x4229c8;
        puVar6 = (undefined4 *)FUN_004365f0();
        local_1a0 = *puVar6;
        local_1f8 = (undefined4 *****)&local_1a4;
        local_1a4 = (undefined4 ****)0xffffffff;
        local_188 = 0xffffffff;
        local_19c = 0;
        local_198 = 0;
        local_194 = 0;
        local_190 = 0;
        local_18c = 0;
        pppppuStack_1fc = (undefined4 *****)0x422a04;
        FUN_004742e0();
        if (DAT_0068c0e8 == 1) {
          local_1f8 = (undefined4 *****)0x1;
          pppppuStack_200 = &ppppuStack_140;
          pppppuStack_1fc = (undefined4 *****)s_check_point1_0066c168;
          pppppuStack_204 = (undefined4 ******)0x422a21;
          puVar6 = (undefined4 *)FUN_004365f0();
          pppuStack_21c = (undefined4 ***)*puVar6;
          puStack_1d4 = (undefined1 *)&puStack_218;
          FUN_0040a430();
          puStack_1d4 = (undefined1 *)&pppuStack_21c;
          pppuStack_21c = extraout_ECX_01;
          FUN_0041d3f0(&local_1dc);
          FUN_00478300();
        }
        if (DAT_0068c0e8 == 2) {
          local_1f8 = (undefined4 *****)ppppuVar11;
          pppppuStack_1fc = (undefined4 *****)DAT_0066b6e4;
          pppppuStack_204 = (undefined4 *****)acStack_134;
          pppppuStack_200 = (undefined4 *****)s_finish_d__d_0066c198;
          pppppuStack_208 = (undefined4 ******)0x422a6e;
          FUN_0061c369();
          pppppuStack_1fc = (undefined4 *****)acStack_134;
          pppppuStack_200 = (undefined4 *****)&local_1b8;
          local_1f8 = (undefined4 *****)0x1;
          pppppuStack_204 = (undefined4 ******)0x422a85;
          puVar6 = (undefined4 *)FUN_004365f0();
          pppuStack_21c = (undefined4 ***)*puVar6;
          puStack_1d4 = (undefined1 *)&puStack_218;
          FUN_0040a430();
          puStack_1d4 = (undefined1 *)&pppuStack_21c;
          pppuStack_21c = extraout_ECX_02;
          FUN_0041d3f0(&local_1dc);
          FUN_00478300();
        }
        local_1e0 = (undefined4 ****)((int)local_1e0 + 1);
        local_1d0 = (undefined4 ****)((int)ppppuVar11 + 1);
        pppppuVar10 = (undefined4 *****)(local_1dc + 10);
        puVar6 = auStack_d4;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *pppppuVar10;
          pppppuVar10 = pppppuVar10 + 1;
          puVar6 = puVar6 + 1;
        }
        local_1f8 = (undefined4 *****)0x422ade;
        iVar3 = FUN_0040a460();
        if (iVar3 == 0) {
          pppppuVar10 = (undefined4 *****)(local_1dc + 10);
          ppppppuVar8 = local_160;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppppppuVar8 = (undefined4 *****)*pppppuVar10;
            pppppuVar10 = pppppuVar10 + 1;
            ppppppuVar8 = ppppppuVar8 + 1;
          }
          local_1f8 = (undefined4 *****)ppppuStack_148;
          pppppuStack_1fc = (undefined4 *****)pcStack_14c;
          pppppuStack_200 = pppppuStack_150;
          pppppuStack_204 = local_160[3];
          pppppuStack_208 = local_160[2];
          ppppuStack_20c = local_160[0];
          pcStack_210 = s___d__g__d__d__x__0066bc0c;
          puStack_214 = &DAT_0077d640;
          puStack_218 = (undefined1 *)0x422b36;
          FUN_0061c369();
          puStack_218 = &DAT_0077d640;
          pppuStack_21c = (undefined4 ***)s_PositionId_0066bc00;
          FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1f88,s_Invalid_id_0066bbf4);
        }
        pppppuVar10 = (undefined4 *****)(local_1dc + 10);
        pppppuVar9 = pppppuVar10;
        puVar12 = auStack_54;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar12 = (uint)*pppppuVar9;
          pppppuVar9 = pppppuVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        if ((-1 < (int)auStack_54[0]) && (auStack_54[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2)))
        {
          pppppuVar9 = pppppuVar10;
          puVar12 = auStack_f4;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar12 = (uint)*pppppuVar9;
            pppppuVar9 = pppppuVar9 + 1;
            puVar12 = puVar12 + 1;
          }
          pppppuVar9 = pppppuVar10;
          puVar12 = auStack_114;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar12 = (uint)*pppppuVar9;
            pppppuVar9 = pppppuVar9 + 1;
            puVar12 = puVar12 + 1;
          }
          iVar3 = *(int *)(DAT_0068be98 + auStack_114[0] * 4);
          if (iStack_e0 < *(int *)(iVar3 + 0x7c) - *(int *)(iVar3 + 0x78) >> 2) {
            pppppuVar9 = pppppuVar10;
            puVar12 = auStack_34;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar12 = (uint)*pppppuVar9;
              pppppuVar9 = pppppuVar9 + 1;
              puVar12 = puVar12 + 1;
            }
            pppppuVar9 = pppppuVar10;
            puVar12 = auStack_74;
            for (iVar3 = 8; iVar2 = iStack_60, iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar12 = (uint)*pppppuVar9;
              pppppuVar9 = pppppuVar9 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar12 = auStack_b4;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar12 = (uint)*pppppuVar10;
              pppppuVar10 = pppppuVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            local_1f8 = (undefined4 *****)0x422c2e;
            iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + auStack_b4[0] * 4) +
                                                    0x78) + iVar2 * 4) + 0x18))();
            if (iStack_24 < iVar3) goto LAB_00422c63;
          }
          local_1f8 = (undefined4 *****)&DAT_0068c120;
          pppppuStack_1fc = (undefined4 *****)&DAT_0068c120;
          pppppuStack_200 = (undefined4 *****)s_Invalid_Position_Id_0066bbe0;
          pppppuStack_204 = (undefined4 ******)0x1f88;
          pppppuStack_208 = (undefined4 *****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
          ppppuStack_20c = (undefined4 ****)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
          pcStack_210 = (char *)0x64;
          puStack_214 = (undefined1 *)0x21;
          puStack_218 = (undefined1 *)0x422c5e;
          FUN_00401010();
        }
LAB_00422c63:
        if (pppppuVar5[4] == pppppuVar5[5]) {
          local_1f8 = (undefined4 *****)&DAT_0068c120;
          pppppuStack_1fc = (undefined4 *****)&DAT_0068c120;
          pppppuStack_200 = (undefined4 *****)s_Cannot_trace_player_0066c8e4;
          pppppuStack_204 = (undefined4 ******)0x1f8a;
          pppppuStack_208 = (undefined4 *****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
          ppppuStack_20c = (undefined4 ****)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
          pcStack_210 = (char *)0x64;
          puStack_214 = (undefined1 *)0x0;
          puStack_218 = (undefined1 *)0x422c93;
          FUN_00401010();
        }
        if ((DAT_0068c0e8 == 1) || (DAT_0068c0e8 == 2)) {
          puStack_1d4 = (undefined1 *)&local_1f8;
          local_1f8 = (undefined4 *****)local_1dc;
          pppppuStack_1fc = (undefined4 *****)0x422cb7;
          FUN_00417670();
        }
        if (DAT_0068c27c != '\0') {
          pppppuStack_1fc = (undefined4 *****)0x422cc9;
          local_1f8 = pppppuVar5;
          FUN_0046db70();
        }
        puStack_1d4 = (undefined1 *)&local_1f8;
        local_1f8 = (undefined4 *****)local_1dc;
        pppppuStack_1fc = (undefined4 *****)0x422cde;
        FUN_004200f0();
        if ((char)local_1c4 == '\x02') {
          local_1f8 = (undefined4 *****)&local_1cc;
          pppppuStack_1fc = (undefined4 *****)apiStack_16c;
          pppppuStack_200 = (undefined4 ******)0x422cff;
          piVar7 = (int *)FUN_00407f50();
          local_c = CONCAT31(local_c._1_3_,5);
          if (((((undefined4 ****)local_1cc != (undefined4 ****)0x0) &&
               (local_1cc[1] = (undefined4 ***)((int)local_1cc[1] + -1),
               (undefined4 ***)local_1cc[1] == (undefined4 ***)0x0)) &&
              (((undefined4 ****)local_1cc != (undefined4 ****)*piVar7 ||
               ((local_1c4 != piVar7[2] || (iStack_1c8 != piVar7[1])))))) &&
             ((undefined4 ****)local_1cc != (undefined4 ****)0x0)) {
            local_1f8 = (undefined4 *****)0x1;
            pppppuStack_1fc = (undefined4 *****)0x422d49;
            (*(code *)(*local_1cc)[3])();
          }
          if ((undefined4 *)*piVar7 == (undefined4 *)0x0) {
            local_1cc = (undefined4 ****)0x0;
            local_1c4 = 0;
LAB_00422d91:
            iStack_1c8 = 0;
          }
          else {
            local_1f8 = (undefined4 *****)0x422d53;
            iVar3 = (*(code *)**(undefined4 **)*piVar7)();
            if (iVar3 == 2) {
              local_1cc = (undefined4 ***)*piVar7;
              local_1c4 = piVar7[2];
              local_1cc[1] = (undefined4 ***)((int)local_1cc[1] + 1);
              goto LAB_00422d91;
            }
            local_1f8 = (undefined4 *****)&DAT_0066bb08;
            pppppuStack_1fc = (undefined4 *****)0x422d64;
            pppppuStack_1fc = (undefined4 *****)(**(code **)(*(int *)*piVar7 + 4))();
            pppppuStack_200 = (undefined4 ******)0x1;
            pppppuStack_204 = (undefined4 ******)0x2;
            pppppuStack_208 = (undefined4 ******)0x422d6e;
            FUN_004a5670();
          }
          local_c = CONCAT31(local_c._1_3_,2);
          if (((((uStack_164 & 0x10000) == 0) && (apiStack_16c[0] != (int *)0x0)) &&
              (apiStack_16c[0][1] = apiStack_16c[0][1] + -1, apiStack_16c[0][1] == 0)) &&
             (apiStack_16c[0] != (int *)0x0)) {
            local_1f8 = (undefined4 *****)0x1;
            pppppuStack_1fc = (undefined4 *****)0x422dd4;
            (**(code **)(*apiStack_16c[0] + 0xc))();
          }
        }
      } while ((double)(int)local_1e0 < (double)*(int *)(DAT_0068be88 + 8) * _DAT_0066b6f0);
    }
    local_c = 0xffffffff;
    if ((((local_1c4 & 0x10000) == 0) && ((undefined4 ****)local_1cc != (undefined4 ****)0x0)) &&
       ((local_1cc[1] = (undefined4 ***)((int)local_1cc[1] + -1),
        (undefined4 ***)local_1cc[1] == (undefined4 ***)0x0 &&
        ((undefined4 ****)local_1cc != (undefined4 ****)0x0)))) {
      local_1f8 = (undefined4 *****)0x1;
      pppppuStack_1fc = (undefined4 *****)0x422e2c;
      (*(code *)(*local_1cc)[3])();
    }
  }
  ExceptionList = local_14;
  return;
}

