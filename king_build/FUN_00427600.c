
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00427600(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined1 ****ppppuVar5;
  int *piVar6;
  float10 fVar7;
  int aiStack_a0 [5];
  undefined4 uStack_8c;
  int ****ppppiStack_88;
  undefined1 **ppuStack_84;
  undefined1 **appuStack_80 [6];
  undefined4 uStack_68;
  undefined1 **ppuStack_64;
  int ****local_60;
  undefined1 ****local_50;
  int *local_4c;
  undefined1 ***local_48;
  undefined4 uStack_44;
  char *local_3c;
  undefined *local_38;
  int local_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cea8;
  local_14 = ExceptionList;
  local_60 = (int ****)0x8;
  ppuStack_64 = (undefined1 **)s_START__0066b830;
  local_3c = s_startRaces___0066ca70;
  local_38 = &DAT_0071d768;
  uStack_68 = 0x427641;
  ExceptionList = &local_14;
  FUN_00401870();
  local_60 = (int ****)s_startRaces___0066ca70;
  ppuStack_64 = (undefined1 **)0x427650;
  FUN_004018b0();
  local_c = 0;
  if (DAT_0068c0c8 == '\0') {
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar2 = s_startRaces___0066ca70;
    cVar1 = s_startRaces___0066ca70[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar2;
      }
    }
    ExceptionList = local_14;
    return 0xffffffff;
  }
  local_60 = (int ****)&local_50;
  ppuStack_64 = (undefined1 **)0x42766f;
  FUN_00477c00();
  DAT_0068c0c8 = 0;
  DAT_0066b6e0 = 1;
  local_60 = (int ****)local_50;
  ppuStack_64 = (undefined1 **)0x427691;
  local_4c = (int *)&local_60;
  FUN_00445290();
  local_60 = (int ****)local_50;
  ppuStack_64 = (undefined1 **)0x4276a2;
  local_4c = (int *)&local_60;
  FUN_00425880();
  piVar4 = DAT_0068bec0;
  if (DAT_0068bec0 != DAT_0068bec4) {
    do {
      local_4c = (int *)&local_60;
      local_60 = (int ****)*piVar4;
      ppuStack_64 = (undefined1 **)0x4276c4;
      FUN_004174c0();
      iVar3 = *piVar4;
      ppuStack_64 = (undefined1 **)0x4276ce;
      fVar7 = (float10)FUN_00401000();
      *(double *)(iVar3 + 0x318) = (double)fVar7;
      local_60 = (int ****)*piVar4;
      ppuStack_64 = (undefined1 **)0x4276e3;
      local_4c = (int *)&local_60;
      FUN_004772b0();
      piVar4 = piVar4 + 1;
    } while (piVar4 != DAT_0068bec4);
  }
  ppppuVar5 = local_50;
  local_50[0x19] = (undefined1 ***)0x5;
  local_50[0x18] = (undefined1 ***)((uint)local_50[0x18] | 0x4000);
  local_50[0xb5] = (undefined1 ***)0x0;
  local_60 = (int ****)0x427727;
  fVar7 = (float10)FUN_00401000();
  *(double *)(ppppuVar5 + 0xc6) = (double)fVar7;
  local_4c = (int *)&local_60;
  local_60 = (int ****)local_50;
  ppuStack_64 = (undefined1 **)0x42773f;
  FUN_004273b0();
  if ((DAT_0068c0e8 == 0) || (DAT_0068c0e8 == 1)) {
    local_60 = (int ****)0x427759;
    FUN_004164f0();
    ppuStack_64 = (undefined1 **)&local_4c;
    local_60 = (int ****)s_check_point1_0066c168;
    uStack_68 = 0x427768;
    FUN_004365f0();
    local_60 = (int ****)0x1;
    local_48 = appuStack_80;
    ppuStack_84 = (undefined1 **)local_4c;
    ppppiStack_88 = (int ****)0x427780;
    FUN_0040a430();
    local_48 = &ppuStack_84;
    ppppiStack_88 = (int ****)&local_50;
    uStack_8c = 0x427791;
    FUN_0041d3f0();
    ppppiStack_88 = (int ****)0x427796;
    FUN_00478300();
    ppppuVar5 = local_50 + 10;
    piVar4 = local_34;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = (int)*ppppuVar5;
      ppppuVar5 = ppppuVar5 + 1;
      piVar4 = piVar4 + 1;
    }
    local_60 = (int ****)&local_48;
    local_48 = (undefined1 ***)0x0;
    uStack_44 = 0;
    ppuStack_84 = (undefined1 **)local_4c;
    ppppiStack_88 = (int ****)0x4277cf;
    FUN_0040a430();
    piVar4 = local_34;
    piVar6 = aiStack_a0;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    FUN_00486900(0);
    *(double *)(local_50 + 0x7e) =
         -(double)CONCAT44(uStack_44,local_48) -
         *(double *)(&DAT_0068bed0 + (int)local_50[0xb5] * 8);
  }
  local_48 = (undefined1 ***)&local_60;
  local_60 = (int ****)local_50;
  ppuStack_64 = (undefined1 **)0x427818;
  FUN_004772b0();
  DAT_0068c0c4 = 0;
  ppppuVar5 = (undefined1 ****)*DAT_0068a8f0;
  if (ppppuVar5 != DAT_0068a8f0) {
    do {
      local_48 = (undefined1 ***)&local_60;
      ppuStack_64 = (undefined1 **)0x42783e;
      local_60 = (int ****)ppppuVar5;
      iVar3 = FUN_0040a950();
      if (iVar3 != 0) {
        local_48 = (undefined1 ***)&local_60;
        ppuStack_64 = (undefined1 **)0x427853;
        local_60 = (int ****)ppppuVar5;
        iVar3 = FUN_0040a950();
        *(undefined1 *)(iVar3 + 0x360) = 1;
      }
      ppppuVar5 = (undefined1 ****)*ppppuVar5;
    } while (ppppuVar5 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_startRaces___0066ca70;
  cVar1 = s_startRaces___0066ca70[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_14;
  return 0;
}

