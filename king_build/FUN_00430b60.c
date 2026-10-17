
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00430b60(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  double local_30;
  double local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d518;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_c = 0;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x318c,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  iVar2 = FUN_004309c0();
  if (iVar2 == 0) {
    FUN_00401870(s_COMPL__0066b7ec);
    FUN_004018b0();
    ExceptionList = local_14;
    return 0;
  }
  DAT_006898f0._0_1_ = 0;
  local_30 = 0.0;
  if (*(char *)(param_1 + 200) != '\0') {
    fVar9 = (float10)FUN_00430840();
    local_30 = (double)fVar9;
    if (iVar2 == 1) {
      FUN_00483f50(local_30._0_4_);
      FUN_00483f70(9,0);
    }
    else {
      local_28._0_4_ = SUB84((double)fVar9,0);
      uVar10 = FUN_0040e1d0(s_FINE_IM_0066cfc0,local_28._0_4_);
      FUN_0061c369(&DAT_0077d440,uVar10);
      _strncat(&DAT_0077d440,&DAT_0066b4e4,0x100);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_0077d440;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_006898f0;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0xd0)) {
    local_30 = *(double *)(param_1 + 0xd0) + local_30;
    if (iVar2 == 1) {
      FUN_00483f50(local_30._0_4_);
      FUN_00430a20(param_1 + 200,&DAT_006898f0);
      FUN_00483f70(0xe,&DAT_006898f0);
    }
    else {
      uVar10 = FUN_0040e1d0(s_FINE_ACCIDENT_0066cfb0,*(undefined4 *)(param_1 + 0xd0));
      FUN_0061c369(&DAT_0077d440,uVar10);
      _strncat(&DAT_0077d440,&DAT_0066b4e4,0x100);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_0077d440;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_006898f0;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0xf0)) {
    local_30 = *(double *)(param_1 + 0xf0) + local_30;
    if (iVar2 == 1) {
      FUN_00483f50(local_30._0_4_);
      FUN_00483f70(10,0);
    }
    else {
      uVar10 = FUN_0040e1d0(s_FINE_SPEEDING_0066cfa0,*(undefined4 *)(param_1 + 0xf0));
      FUN_0061c369(&DAT_0077d440,uVar10);
      _strncat(&DAT_0077d440,&DAT_0066b4e4,0x100);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_0077d440;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_006898f0;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0xf8)) {
    local_30 = *(double *)(param_1 + 0xf8) + local_30;
    if (iVar2 == 1) {
      FUN_00483f50(local_30._0_4_);
      FUN_00483f70(0xc,0);
    }
    else {
      uVar10 = FUN_0040e1d0(s_FINE_RED_LIGHT_0066cf90,*(undefined4 *)(param_1 + 0xf8));
      FUN_0061c369(&DAT_0077d440,uVar10);
      _strncat(&DAT_0077d440,&DAT_0066b4e4,0x100);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_0077d440;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_006898f0;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
  }
  if (_DAT_0064a668 < *(double *)(param_1 + 0x100)) {
    local_30 = *(double *)(param_1 + 0x100) + local_30;
    if (iVar2 == 1) {
      FUN_00483f50(local_30._0_4_);
      FUN_00483f70(0xb,0);
    }
    else {
      uVar10 = FUN_0040e1d0(s_FINE_BRIBERY_0066cf80,*(undefined4 *)(param_1 + 0x100));
      FUN_0061c369(&DAT_0077d440,uVar10);
      _strncat(&DAT_0077d440,&DAT_0066b4e4,0x100);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_0077d440;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_006898f0;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x108) == '\0') {
LAB_00431110:
    if (iVar2 < 2) goto LAB_00431133;
    FUN_00483f50(local_30._0_4_);
    puVar11 = &DAT_006898f0;
    uVar10 = 0xf;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x204);
    local_28 = 0.0;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != -1)) {
      local_28 = *(double *)(*(int *)(DAT_0068bf38 + *(int *)(iVar5 + 4) * 4) + 0x30) *
                 _DAT_0064a888;
      *(uint *)(iVar5 + 0x28) = *(uint *)(iVar5 + 0x28) & 0xfffffffd;
      local_30 = local_28 + local_30;
    }
    if (iVar2 != 1) {
      uVar10 = FUN_0040e1d0(s_FINE_STOLEN_0066cf74,local_28._0_4_);
      FUN_0061c369(&DAT_0077d440,uVar10);
      _strncat(&DAT_0077d440,&DAT_0066b4e4,0x100);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_0077d440;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_006898f0;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      goto LAB_00431110;
    }
    FUN_00483f50(local_30._0_4_);
    puVar11 = (undefined4 *)0x0;
    uVar10 = 0xd;
  }
  FUN_00483f70(uVar10,puVar11);
LAB_00431133:
  if (local_30 != _DAT_0064a668) {
    *(double *)(param_1 + 0x88) = *(double *)(param_1 + 0x88) - local_30;
  }
  FUN_00444f50();
  FUN_00472600();
  FUN_0042bc30();
  FUN_00425880();
  FUN_00427300();
  FUN_0041f080();
  FUN_004772b0();
  FUN_00427000();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_cleanBeforeLaw_PlayerId_player__0066cfc8;
  cVar1 = s_cleanBeforeLaw_PlayerId_player__0066cfc8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = local_14;
  return 0;
}

