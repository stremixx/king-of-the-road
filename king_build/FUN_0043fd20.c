
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fd20(int param_1,int param_2)

{
  undefined4 uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  char *pcStack_44;
  char *local_40;
  double local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dcc8;
  local_14 = ExceptionList;
  local_40 = (char *)0x8;
  pcStack_44 = s_START__0066b830;
  ExceptionList = &local_14;
  FUN_00401870();
  local_40 = s_getPlayerData_PlayerId_player__G_0066dd70;
  pcStack_44 = (char *)0x43fd71;
  FUN_004018b0();
  local_c = 0;
  local_40 = (char *)param_1;
  pcStack_44 = (char *)0x43fd88;
  iVar4 = FUN_00456670();
  if (iVar4 != 0) {
    local_40 = &DAT_0066c4e4;
    pcStack_44 = &DAT_0077d5c0;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x414f,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8);
  }
  local_40 = (char *)param_1;
  pcStack_44 = (char *)0x43fdd9;
  FUN_004772b0();
  iVar4 = param_2;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x204) == 0) ||
     (iVar6 = *(int *)(*(int *)(param_1 + 0x204) + 4), iVar6 == -1)) {
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)(DAT_0068bf38 + iVar6 * 4) + 0x40);
    *(undefined4 *)(param_2 + 0x10) =
         *(undefined4 *)
          (*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x204) + 4) * 4) + 0x44);
    *(undefined4 *)(param_2 + 0x14) =
         *(undefined4 *)
          (*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x204) + 4) * 4) + 0x48);
  }
  if ((*(int *)(param_1 + 0x208) == 0) ||
     (iVar6 = *(int *)(*(int *)(param_1 + 0x208) + 4), iVar6 == -1)) {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(*(int *)(DAT_0068bf38 + iVar6 * 4) + 0x40);
    *(undefined4 *)(param_2 + 0x1c) =
         *(undefined4 *)
          (*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x208) + 4) * 4) + 0x44);
    *(undefined4 *)(param_2 + 0x20) =
         *(undefined4 *)
          (*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x208) + 4) * 4) + 0x48);
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x110);
  pcStack_44 = *(char **)(param_1 + 0x90);
  local_40 = (char *)(param_2 + 0x40);
  *(int *)(param_2 + 0x34) = *(int *)(param_1 + 0x94) - (int)pcStack_44 >> 3;
  local_30 = (double)ZEXT48(&pcStack_44);
  FUN_0041d3f0();
  FUN_00477620();
  *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x210);
  *(int *)(iVar4 + 0x50) = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 4;
  uVar1 = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  if (((_DAT_0064a668 < *(double *)(param_1 + 0xc0)) &&
      (_DAT_0064a668 < *(double *)(param_1 + 0x360))) &&
     (dVar2 = *(double *)(param_1 + 0xc0) / (*(double *)(param_1 + 0x360) * _DAT_0064a770),
     *(double *)(iVar4 + 0x58) = dVar2, _DAT_0064a660 < dVar2)) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0x3ff00000;
  }
  local_40 = (char *)(param_1 + 8);
  *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_1 + 0x308);
  uVar1 = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(iVar4 + 0x78) = 0;
  *(undefined4 *)(iVar4 + 0x74) = uVar1;
  *(undefined4 *)(iVar4 + 0x7c) = 0;
  pcStack_44 = (char *)0x43ffb9;
  iVar5 = FUN_00477850();
  iVar6 = param_1;
  if (iVar5 == 0) {
    if (((*(int *)(param_1 + 100) == 5) || (DAT_0068c0e8 == 1)) || (DAT_0068c0e8 == 2)) {
      if (((*(uint *)(param_1 + 0x60) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x60) & 0x100) == 0))
      {
        local_40 = (char *)0x44007b;
        fVar9 = (float10)FUN_00401000();
        *(double *)(iVar6 + 0x328) = (double)(fVar9 - (float10)*(double *)(iVar6 + 0x318));
      }
      *(double *)(iVar4 + 0x78) = _DAT_0066b698 - *(double *)(param_1 + 0x328);
    }
  }
  else {
    local_40 = (char *)param_1;
    pcStack_44 = (char *)0x43ffda;
    iVar6 = FUN_00477920();
    local_40 = (char *)0x43ffe4;
    fVar9 = (float10)FUN_00401000();
    fVar9 = (float10)*(double *)(iVar6 + 0x48) - fVar9;
    *(double *)(iVar4 + 0x78) = (double)fVar9;
    if (fVar9 < (float10)_DAT_0064a668) {
      *(undefined4 *)(iVar4 + 0x78) = 0;
      *(undefined4 *)(iVar4 + 0x7c) = 0;
    }
    local_40 = (char *)0x440004;
    fVar9 = (float10)FUN_00401000();
    pcStack_44 = (char *)&param_1;
    FUN_0041d3f0();
    pcStack_44 = (char *)0x44001d;
    iVar6 = FUN_00477920();
    local_30 = (double)fVar9 - *(double *)(iVar6 + 0x50);
    local_40 = (char *)0x440033;
    iVar6 = FUN_00418950();
    *(double *)(iVar6 + 800) = local_30;
  }
  *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(param_1 + 0x32c);
  *(bool *)(iVar4 + 0x88) = DAT_006898e0 != DAT_006898e4;
  if (*(int *)(param_1 + 100) == 5) {
    *(undefined1 *)(iVar4 + 0x88) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x208);
  if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
    iVar6 = *(int *)(param_1 + 0x204);
    if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
      local_40 = &DAT_0068c120;
      pcStack_44 = &DAT_0068c120;
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4);
    }
    else {
      local_30._0_4_ = (int *)(iVar6 + 0x1c);
    }
  }
  else {
    local_30._0_4_ = (int *)(iVar6 + 0x1c);
  }
  if (*local_30._0_4_ != local_30._0_4_[1]) {
    *(undefined1 *)(iVar4 + 0x88) = 1;
  }
  pcStack_44 = (char *)0x44014e;
  local_40 = (char *)param_1;
  cVar3 = FUN_004171e0();
  if (cVar3 != '\0') {
    *(undefined1 *)(iVar4 + 0x88) = 1;
  }
  local_40 = (char *)param_1;
  pcStack_44 = (char *)0x44016d;
  fVar9 = (float10)FUN_00429610();
  *(double *)(iVar4 + 0x90) = (double)fVar9;
  local_40 = (char *)param_1;
  pcStack_44 = (char *)0x440183;
  fVar9 = (float10)FUN_004294b0();
  *(double *)(iVar4 + 0x98) = (double)fVar9;
  *(undefined4 *)(iVar4 + 0xa0) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(iVar4 + 0xa4) = *(undefined4 *)(param_1 + 0x15c);
  local_40 = (char *)param_1;
  pcStack_44 = (char *)0x4401b1;
  cVar3 = FUN_004164e0();
  if (cVar3 != '\0') {
    *(undefined4 *)(iVar4 + 0xa0) = 0;
    *(undefined4 *)(iVar4 + 0xa4) = 0;
  }
  *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(param_1 + 0x220);
  local_40 = (char *)(iVar4 + 0xa8);
  pcStack_44 = (char *)(iVar4 + 0xb0);
  *(undefined4 *)(iVar4 + 100) = *(undefined4 *)(param_1 + 0x224);
  FUN_0041d3f0(&param_1);
  FUN_0041b9e0();
  local_40 = (char *)0x44020a;
  puVar7 = (undefined4 *)FUN_00474260();
  if (puVar7 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar4 + 0xb8) = 1;
  }
  else {
    *(undefined4 *)(iVar4 + 0xb8) = *puVar7;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar8 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar8 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar8 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar8 = s_getPlayerData_PlayerId_player__G_0066dd70;
  cVar3 = s_getPlayerData_PlayerId_player__G_0066dd70[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar8;
    }
  }
  ExceptionList = local_14;
  return;
}

