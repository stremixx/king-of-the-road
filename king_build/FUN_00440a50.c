
/* WARNING: Removing unreachable block (ram,0x00440be8) */

undefined4 FUN_00440a50(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puStack_200;
  int *piStack_1fc;
  int *piStack_1f8;
  undefined1 **ppuStack_1f4;
  int *local_1dc;
  undefined1 *local_1d4;
  undefined1 *local_1d0;
  int local_1cc;
  int local_1c8;
  char *local_1c4;
  undefined *local_1c0;
  undefined1 local_1bc [12];
  undefined1 local_1b0 [184];
  char local_f8;
  uint local_f0 [55];
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dd8c;
  local_c = ExceptionList;
  ppuStack_1f4 = (undefined1 **)0x8;
  piStack_1f8 = (int *)s_START__0066b830;
  local_1c4 = s_getTownInfo_PlayerId_player__AI__0066de8c;
  local_1c0 = &DAT_0071d768;
  piStack_1fc = (int *)0x440a90;
  ExceptionList = &local_c;
  FUN_00401870();
  ppuStack_1f4 = (undefined1 **)s_getTownInfo_PlayerId_player__AI__0066de8c;
  piStack_1f8 = (int *)0x440a9f;
  FUN_004018b0();
  puVar4 = param_3;
  iVar9 = param_2;
  puVar11 = (undefined1 *)0x0;
  piVar1 = param_3 + 5;
  param_3[10] = *(undefined4 *)(param_2 + 0x60);
  local_4 = 0;
  ppuStack_1f4 = (undefined1 **)param_3[6];
  piStack_1f8 = (int *)*piVar1;
  piStack_1fc = (int *)0x440acd;
  FUN_0044add0();
  puVar4[9] = 0;
  *puVar4 = *(undefined4 *)(iVar9 + 0xc);
  piStack_1f8 = (int *)local_1bc;
  ppuStack_1f4 = (undefined1 **)iVar9;
  puVar4[1] = *(undefined4 *)(iVar9 + 0x18);
  piStack_1fc = (int *)0x440ae6;
  puVar5 = (undefined4 *)FUN_00440470();
  puVar4[2] = *puVar5;
  puVar4[3] = puVar5[1];
  puVar4[4] = puVar5[2];
  while( true ) {
    ppuStack_1f4 = (undefined1 **)0x440b07;
    FUN_004184d0();
    piStack_1fc = *(int **)(iVar9 + 0x18);
    puStack_200 = local_1b0;
    local_1d0 = (undefined1 *)&puStack_200;
    local_4._0_1_ = 1;
    piStack_1f8 = (int *)puVar11;
    ppuStack_1f4 = (undefined1 **)puStack_200;
    FUN_0041d3f0(&param_1);
    iVar6 = FUN_00441920();
    if (iVar6 == -1) break;
    if (iVar6 == 0) {
      piStack_1f8 = (int *)puVar4[6];
      if (piStack_1f8 == (int *)puVar4[7]) {
        ppuStack_1f4 = (undefined1 **)local_1b0;
        piStack_1fc = (int *)0x440b6f;
        FUN_00452e40();
      }
      else {
        ppuStack_1f4 = (undefined1 **)local_1b0;
        piStack_1fc = (int *)0x440b52;
        FUN_00461410();
        puVar4[6] = puVar4[6] + 0xc0;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_1f4 = (undefined1 **)0x440b80;
    FUN_00418590();
    puVar11 = puVar11 + 1;
  }
  local_4._0_1_ = 0;
  ppuStack_1f4 = (undefined1 **)0x440b97;
  FUN_00418590();
  ppuStack_1f4 = (undefined1 **)0x440b9c;
  FUN_00483b10();
  ppuStack_1f4 = (undefined1 **)0x440ba7;
  ppuStack_1f4 = (undefined1 **)__ftol();
  piStack_1f8 = (int *)0x440bb4;
  FUN_00440eb0();
  ppuStack_1f4 = (undefined1 **)0x0;
  piStack_1f8 = (int *)0x0;
  piStack_1fc = (int *)0x28;
  local_4 = CONCAT31(local_4._1_3_,2);
  puStack_200 = (undefined1 *)0x440bd7;
  piVar7 = (int *)FUN_0044acb0();
  local_1cc = 0;
  local_1d0 = (undefined1 *)0x0;
  local_1dc = piVar7;
  do {
    ppuStack_1f4 = (undefined1 **)local_f0;
    piStack_1fc = &local_1c8;
    piStack_1f8 = (int *)iVar9;
    puStack_200 = (undefined1 *)0x440c22;
    FUN_00404cc0();
    if (local_1c8 != -1) {
      local_14 = (local_14 + 1) % 0x37;
      local_10 = (local_10 + 1) % 0x37;
      local_f0[local_14] = local_f0[local_14] - local_f0[local_10];
      uVar3 = local_f0[local_14];
      if (*(int *)(DAT_0068be20 + local_1c8 * 4) != iVar9) {
        puVar11 = (undefined1 *)(uVar3 % 9 + local_1c8 * 1000);
        for (piVar8 = piVar7; piVar8 != local_1dc; piVar8 = piVar8 + 1) {
          if ((undefined1 *)*piVar8 == puVar11) {
            if (local_1dc != piVar8) goto LAB_00440d9b;
            break;
          }
        }
        local_1d4 = puVar11;
        if (local_1dc == piVar7 + 0x28) {
          ppuStack_1f4 = &local_1d4;
          piStack_1f8 = local_1dc;
          piStack_1fc = (int *)0x440d07;
          FUN_00451fc0();
        }
        else {
          ppuStack_1f4 = &local_1d4;
          piStack_1f8 = local_1dc;
          piStack_1fc = (int *)0x440ce8;
          FUN_00460970();
          local_1dc = local_1dc + 1;
        }
        ppuStack_1f4 = (undefined1 **)0x440d10;
        FUN_004184d0();
        puStack_200 = local_1b0;
        piStack_1fc = (int *)local_1c8;
        local_1d4 = (undefined1 *)&puStack_200;
        local_4 = CONCAT31(local_4._1_3_,3);
        piStack_1f8 = (int *)(uVar3 % 9);
        ppuStack_1f4 = (undefined1 **)puStack_200;
        FUN_0041d3f0(&param_1);
        FUN_004410f0();
        if (local_f8 != '\0') {
          piStack_1f8 = (int *)puVar4[6];
          if (piStack_1f8 == (int *)puVar4[7]) {
            ppuStack_1f4 = (undefined1 **)local_1b0;
            piStack_1fc = (int *)0x440d7c;
            FUN_00452e40();
          }
          else {
            ppuStack_1f4 = (undefined1 **)local_1b0;
            piStack_1fc = (int *)0x440d5f;
            FUN_00461410();
            puVar4[6] = puVar4[6] + 0xc0;
          }
          local_1cc = local_1cc + 1;
          if (3 < local_1cc) {
            local_4 = CONCAT31(local_4._1_3_,2);
            ppuStack_1f4 = (undefined1 **)0x440dc0;
            FUN_00418590();
            goto LAB_00440dc0;
          }
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        ppuStack_1f4 = (undefined1 **)0x440d9b;
        FUN_00418590();
      }
    }
LAB_00440d9b:
    local_1d0 = (undefined1 *)((int)local_1d0 + 1);
    if (0x27 < (int)local_1d0) {
LAB_00440dc0:
      iVar9 = *piVar1;
      local_4 = local_4 & 0xffffff00;
      param_3[8] = (puVar4[6] - *piVar1) / 0xc0;
      param_3[9] = iVar9;
      iVar9 = (int)(piVar7 + 0x28) - (int)piVar7 >> 2;
      if (iVar9 != 0) {
        ppuStack_1f4 = (undefined1 **)(iVar9 * 4);
        piStack_1fc = (int *)0x440e0e;
        piStack_1f8 = piVar7;
        FUN_0044b440();
      }
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar10 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar10 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar10 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar10 = s_getTownInfo_PlayerId_player__AI__0066de8c;
      cVar2 = s_getTownInfo_PlayerId_player__AI__0066de8c[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
          cVar2 = *pcVar10;
        }
      }
      ExceptionList = local_c;
      return 0;
    }
  } while( true );
}

