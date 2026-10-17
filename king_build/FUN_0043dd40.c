
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dd40(uint *param_1,uint *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  double *pdVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  char **ppcVar14;
  char *apcStack_d4 [2];
  uint uStack_cc;
  undefined4 uStack_c8;
  uint *puStack_c4;
  double *pdStack_c0;
  uint *puStack_bc;
  uint *puStack_b8;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  double local_90;
  uint local_88 [3];
  uint *local_7c;
  double *local_78;
  int local_74;
  uint *local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_5c [2];
  undefined8 local_54;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  char *local_3c;
  undefined *local_38;
  uint local_34 [7];
  int local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dba8;
  local_14 = ExceptionList;
  puStack_b8 = (uint *)0x8;
  puStack_bc = (uint *)s_START__0066b830;
  local_3c = s__setPlayerPosition_PlayerId_play_0066daa8;
  local_38 = &DAT_0071d768;
  pdStack_c0 = (double *)0x43dd8b;
  ExceptionList = &local_14;
  FUN_00401870();
  puStack_b8 = (uint *)s__setPlayerPosition_PlayerId_play_0066daa8;
  puStack_bc = (uint *)0x43dd9a;
  FUN_004018b0();
  local_c = 0;
  if ((int)(param_1[7] - param_1[6]) / 0xc == 1) {
    puStack_b8 = local_5c;
    local_5c[1] = *(undefined4 *)(param_1[7] - 0xc);
    local_5c[0] = 0xffffffff;
    local_40 = 0xffffffff;
    local_54 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    puStack_bc = (uint *)0x43ddf9;
    FUN_004742e0();
    puStack_b8 = (uint *)0x8;
    puStack_bc = (uint *)s_COMPL__0066b7ec;
    pdStack_c0 = (double *)0x43de0a;
    FUN_00401870();
    puStack_b8 = (uint *)s__setPlayerPosition_PlayerId_play_0066daa8;
    puStack_bc = (uint *)0x43de19;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  local_a0 = 0;
  local_88[0] = 0xffffffff;
  local_88[1] = 0xffffffff;
  local_6c = -1;
  local_9c = 0;
  local_78 = (double *)0x0;
  local_74 = 0;
  local_70 = (uint *)0x0;
  puVar7 = param_1 + 10;
  puVar13 = local_5c;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar13 = puVar13 + 1;
  }
  local_90 = 1.79769313486232e+308;
  local_68 = 0;
  uStack_64 = 0;
  local_88[2] = 0;
  local_7c = (uint *)0x0;
  if (local_5c[0] == 0xffffffff) goto LAB_0043dfe9;
  puVar7 = param_1 + 10;
  puVar13 = local_34;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar7 = *(uint **)(DAT_0068be98 + local_5c[0] * 4);
  uVar12 = param_1[7];
  pdVar9 = (double *)param_1[6];
  if (((int)(uVar12 - (int)pdVar9) / 0xc < local_18) && (-1 < local_18)) {
    pdStack_c0 = (double *)((int)pdVar9 + local_18 * 0xc);
    puStack_c4 = (uint *)0x43def5;
    puStack_bc = (uint *)uVar12;
    puStack_b8 = puVar7;
    uVar5 = FUN_00457380();
    if (uVar5 == uVar12) goto LAB_0043df0e;
  }
  else {
LAB_0043df0e:
    puStack_c4 = (uint *)0x43df15;
    pdStack_c0 = pdVar9;
    puStack_bc = (uint *)uVar12;
    puStack_b8 = puVar7;
    uVar5 = FUN_00457380();
  }
  if (param_1[7] != uVar5) {
    uVar12 = 0;
    iVar11 = *(int *)(DAT_0068be98 + local_5c[0] * 4);
    iVar6 = *(int *)(iVar11 + 0x78);
    if (*(int *)(iVar11 + 0x7c) - iVar6 >> 2 != 0) {
      do {
        puStack_b8 = &local_a0;
        puStack_bc = &local_68;
        pdStack_c0 = &local_90;
        puStack_c4 = param_2;
        uStack_c8 = 0x43df5f;
        iVar6 = (**(code **)(**(int **)(iVar6 + uVar12 * 4) + 0xc))();
        if (iVar6 != 0) {
          local_9c = uVar12;
        }
        iVar6 = *(int *)(iVar11 + 0x78);
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(iVar11 + 0x7c) - iVar6 >> 2));
    }
    local_4c = local_a0;
    local_5c[1] = 0xffffffff;
    local_40 = 0xffffffff;
    local_54 = CONCAT44(uStack_64,local_68);
    local_48 = local_9c;
    local_44 = 0;
    puVar7 = local_5c;
    puVar13 = local_88;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar13 = puVar13 + 1;
    }
    local_90 = local_90 * _DAT_0064a658 + _DAT_0064a770;
    local_6c = (int)(uVar5 - param_1[6]) / 0xc;
  }
LAB_0043dfe9:
  local_98 = (double)((ulonglong)local_98._4_4_ << 0x20);
  do {
    piVar8 = (int *)param_1[6];
    if (piVar8 != (int *)param_1[7]) {
      do {
        iVar11 = piVar8[1];
        uVar12 = 0;
        if (iVar11 != 0) {
          iVar6 = *(int *)(iVar11 + 0x78);
          bVar4 = false;
          if (*(int *)(iVar11 + 0x7c) - iVar6 >> 2 != 0) {
            do {
              puStack_b8 = &local_a0;
              puStack_bc = &local_68;
              pdStack_c0 = &local_90;
              puStack_c4 = param_2;
              uStack_c8 = 0x43e03f;
              iVar6 = (**(code **)(**(int **)(iVar6 + uVar12 * 4) + 0xc))();
              if (iVar6 != 0) {
                bVar4 = true;
                local_9c = uVar12;
              }
              iVar6 = *(int *)(iVar11 + 0x78);
              uVar12 = uVar12 + 1;
            } while (uVar12 < (uint)(*(int *)(iVar11 + 0x7c) - iVar6 >> 2));
            if (bVar4) {
              local_5c[0] = *(uint *)(piVar8[1] + 0xc);
              local_4c = local_a0;
              local_5c[1] = 0xffffffff;
              local_54 = CONCAT44(uStack_64,local_68);
              local_40 = 0xffffffff;
              local_48 = local_9c;
              uVar12 = param_1[6];
              local_44 = 0;
              puVar7 = local_5c;
              puVar13 = local_88;
              for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar13 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar13 = puVar13 + 1;
              }
              local_6c = (int)((int)piVar8 - uVar12) / 0xc;
              if (*(int *)(DAT_0068be60 + *piVar8 * 4) == *(int *)(piVar8[1] + 0x74)) {
                local_70 = (uint *)((uint)local_70 | 1);
              }
              else {
                local_70 = (uint *)((uint)local_70 & 0xfffffffe);
              }
              local_98 = (double)CONCAT44(local_98._4_4_,1);
            }
          }
        }
        piVar8 = piVar8 + 3;
      } while (piVar8 != (int *)param_1[7]);
      if ((int)local_98 != 0) {
LAB_0043e14b:
        if (local_88[0] == 0xffffffff) {
          puStack_bc = local_34;
          puStack_b8 = param_2;
          pdStack_c0 = (double *)0x43e163;
          puVar7 = (uint *)FUN_004369e0();
          puVar13 = local_88;
          for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
        }
        if (param_1[6] != param_1[7]) {
          local_98 = (double)CONCAT44(local_98._4_4_,&puStack_b8);
          puStack_b8 = param_1;
          puStack_bc = (uint *)&local_98;
          pdStack_c0 = (double *)0x43e197;
          piVar8 = (int *)FUN_0040a590();
          iVar11 = *(int *)(DAT_0068be60 + *piVar8 * 4);
          puVar7 = local_88;
          ppcVar14 = apcStack_d4;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppcVar14 = (char *)*puVar7;
            puVar7 = puVar7 + 1;
            ppcVar14 = ppcVar14 + 1;
          }
          pdVar9 = (double *)FUN_00435cd0(local_5c);
          dVar2 = *pdVar9 - *(double *)(iVar11 + 0x30);
          dVar3 = pdVar9[1] - *(double *)(iVar11 + 0x38);
          local_98 = pdVar9[2] - *(double *)(iVar11 + 0x40);
          if (SQRT(local_98 * local_98 + dVar3 * dVar3 + dVar2 * dVar2) < _DAT_0064a5a8) {
            puStack_bc = (uint *)&local_98;
            local_98._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
            local_98 = (double)CONCAT44(local_98._4_4_,&puStack_b8);
            puStack_b8 = param_1;
            pdStack_c0 = (double *)0x43e215;
            puVar7 = (uint *)FUN_0040a590();
            local_88[1] = *puVar7;
          }
        }
        if (((((int)local_88[0] < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= local_88[0]))
            && (((int)local_88[1] < 0 || ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= local_88[1])))
            ) || (((((double)CONCAT44(local_7c,local_88[2]) < _DAT_0064a678 ||
                    (_DAT_0064a670 < (double)CONCAT44(local_7c,local_88[2]))) || ((int)local_78 < 0)
                   ) || (local_74 < 0)))) {
          puStack_b8 = local_70;
          puStack_bc = (uint *)local_74;
          pdStack_c0 = local_78;
          puStack_c4 = local_7c;
          uStack_c8 = local_88[2];
          uStack_cc = local_88[0];
          apcStack_d4[1] = s___d__g__d__d__x__0066bc0c;
          apcStack_d4[0] = &DAT_0077d640;
          FUN_0061c369();
          FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3fa2,s_Invalid_id_0066bbf4,
                       s_PositionId_0066bc00,&DAT_0077d640);
        }
        puStack_b8 = local_88;
        puStack_bc = (uint *)0x43e2ed;
        FUN_004742e0();
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar10 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar10 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar10 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcVar10 = s__setPlayerPosition_PlayerId_play_0066daa8;
        cVar1 = s__setPlayerPosition_PlayerId_play_0066daa8[0];
        if (DAT_0071d774 != 0) {
          for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
          {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
            cVar1 = *pcVar10;
          }
        }
        ExceptionList = local_14;
        return;
      }
    }
    if (param_1[6] == param_1[7]) goto LAB_0043e14b;
    local_90 = 1.79769313486232e+308;
    local_68 = 0;
    uStack_64 = 0;
    local_a0 = 0;
    local_9c = 0;
  } while( true );
}

