
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00432640(undefined1 **param_1,undefined1 **param_2,undefined1 ***param_3)

{
  double dVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  char *pcStack_48;
  undefined4 *local_44;
  char *pcStack_40;
  undefined1 **local_3c;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d5a3;
  local_c = ExceptionList;
  local_3c = (undefined1 **)0x8;
  pcStack_40 = s_START__0066b830;
  local_14 = s_offerBribe_PlayerId_giver__Playe_0066d074;
  local_10 = &DAT_0071d768;
  local_44 = (undefined4 *)0x43267b;
  ExceptionList = &local_c;
  FUN_00401870();
  local_3c = (undefined1 **)s_offerBribe_PlayerId_giver__Playe_0066d074;
  pcStack_40 = (char *)0x43268a;
  FUN_004018b0();
  local_30 = (undefined1 *)&local_3c;
  local_4 = 0;
  local_3c = param_1;
  pcStack_40 = (char *)0x4326a4;
  iVar4 = FUN_00456670();
  if (iVar4 != 0) {
    local_3c = (undefined1 **)&DAT_0066c4e4;
    pcStack_40 = &DAT_0077d5c0;
    local_44 = (undefined4 *)0x4326ba;
    FUN_0061c369();
    local_44 = (undefined4 *)&DAT_0077d5c0;
    pcStack_48 = s_PlayerId_0066c4d8;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3324,s_Invalid_id_0066bbf4);
  }
  local_30 = (undefined1 *)&local_3c;
  local_3c = param_2;
  pcStack_40 = (char *)0x4326f6;
  iVar4 = FUN_00456670();
  local_44 = extraout_ECX;
  if (iVar4 != 0) {
    local_3c = (undefined1 **)&DAT_0066c4e4;
    pcStack_40 = &DAT_0077d5c0;
    local_44 = (undefined4 *)0x43270c;
    FUN_0061c369();
    local_44 = (undefined4 *)&DAT_0077d5c0;
    pcStack_48 = s_PlayerId_0066c4d8;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3325,s_Invalid_id_0066bbf4);
    local_44 = extraout_ECX_00;
  }
  pcVar5 = (char *)param_3;
  local_3c = &local_24;
  pcStack_40 = (char *)param_3;
  param_3 = (undefined1 ***)&local_44;
  pcStack_48 = (char *)&param_2;
  local_24 = (undefined1 *)0x0;
  uStack_20 = 0;
  FUN_0041d3f0();
  param_3 = (undefined1 ***)&pcStack_48;
  FUN_0041d3f0(&param_1);
  iVar4 = FUN_004316d0();
  if (iVar4 == 1) {
    local_3c = (undefined1 **)0x8;
    pcStack_40 = s_COMPL__0066b7ec;
    local_44 = (undefined4 *)0x432790;
    FUN_00401870();
    local_3c = (undefined1 **)s_offerBribe_PlayerId_giver__Playe_0066d074;
    pcStack_40 = (char *)0x43279f;
    FUN_004018b0();
    ExceptionList = local_c;
    return 1;
  }
  param_3 = &local_3c;
  local_3c = param_2;
  pcStack_40 = (char *)0x4327c7;
  uVar2 = FUN_004171e0();
  param_3 = (undefined1 ***)CONCAT31(param_3._1_3_,uVar2);
  switch(param_2[0x17]) {
  case (undefined1 *)0x2:
    local_2c = (undefined1 *)&local_3c;
    *(double *)(param_1 + 0x22) = *(double *)(param_1 + 0x22) - (double)CONCAT44(uStack_20,local_24)
    ;
    local_3c = param_1;
    pcStack_40 = (char *)0x432ad1;
    FUN_00427000();
    if (((uint)pcVar5 & 0x20) != 0) {
      param_2[0x18] = (undefined1 *)((uint)param_2[0x18] | 0x1000000);
    }
    if (((uint)pcVar5 & 0x10) != 0) {
      local_2c = (undefined1 *)&local_3c;
      local_3c = param_2;
      pcStack_40 = (char *)0x432afb;
      FUN_00445290();
      if ((char)param_3 != '\0') {
        param_3 = &local_3c;
        DAT_0068c0bc = DAT_0068c0bc + -1;
        local_3c = param_2;
        pcStack_40 = (char *)0x432b25;
        FUN_00417430();
      }
    }
    if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_00432b63;
    goto LAB_00432b44;
  default:
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar5 = s_offerBribe_PlayerId_giver__Playe_0066d074;
    cVar3 = s_offerBribe_PlayerId_giver__Playe_0066d074[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
        cVar3 = *pcVar5;
      }
    }
    break;
  case (undefined1 *)0x5:
    local_3c = param_2 + 2;
    pcStack_40 = (char *)0x4327f1;
    cVar3 = FUN_004742b0();
    if (cVar3 != '\0') {
      param_3 = &local_3c;
      *(double *)(param_1 + 0x22) =
           *(double *)(param_1 + 0x22) - (double)CONCAT44(uStack_20,local_24);
      local_3c = param_1;
      pcStack_40 = (char *)0x432822;
      FUN_00427000();
      if (((uint)pcVar5 & 1) != 0) {
        local_3c = (undefined1 **)0x432839;
        FUN_00472600();
        local_3c = (undefined1 **)0x43283e;
        FUN_0042bc30();
        param_3 = &local_3c;
        local_3c = param_1;
        pcStack_40 = (char *)0x432850;
        FUN_004772b0();
        param_1[0x18] = (undefined1 *)((uint)param_1[0x18] | 0x800000);
      }
      if (((uint)pcVar5 & 2) != 0) {
        local_3c = (undefined1 **)0x432872;
        FUN_00472630();
        param_3 = &local_3c;
        local_3c = param_1;
        pcStack_40 = (char *)0x432884;
        FUN_004772b0();
        param_1[0x18] = (undefined1 *)((uint)param_1[0x18] | 0x100000);
      }
      if (((uint)pcVar5 & 4) != 0) {
        local_3c = (undefined1 **)&param_3;
        pcStack_40 = (char *)0x4328a1;
        FUN_00431500();
        local_3c = (undefined1 **)param_3;
        pcStack_40 = (char *)0x4328b2;
        local_2c = (undefined1 *)&local_3c;
        FUN_0040a5f0();
      }
      local_3c = (undefined1 **)0x8;
      pcStack_40 = s_COMPL__0066b7ec;
      local_44 = (undefined4 *)0x4328c6;
      FUN_00401870();
      goto LAB_00432b63;
    }
    dVar1 = _DAT_0064a668;
    if (((uint)pcVar5 & 1) != 0) {
      dVar1 = _DAT_0066b770;
    }
    if (((uint)pcVar5 & 2) != 0) {
      dVar1 = dVar1 + _DAT_0066b778;
    }
    if (((uint)pcVar5 & 4) != 0) {
      dVar1 = dVar1 + _DAT_0066b780;
    }
    local_3c = (undefined1 **)0x38;
    *(double *)(param_1 + 0x40) = dVar1 + *(double *)(param_1 + 0x40);
    pcStack_40 = (char *)0x43290b;
    param_3 = (undefined1 ***)FUN_00631d33();
    local_4._0_1_ = 1;
    if (param_3 == (undefined1 ***)0x0) {
      local_30 = (undefined1 *)0x0;
    }
    else {
      local_2c = (undefined1 *)&local_3c;
      local_3c = param_1;
      pcStack_40 = (char *)0x43292f;
      local_30 = (undefined1 *)FUN_00432e30();
    }
    local_3c = &local_30;
    local_44 = &pcStack_40;
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_48 = (char *)0x43294d;
    FUN_004896a0();
    local_44 = &param_3;
    pcStack_48 = (char *)0x43295c;
    FUN_0044afd0();
    local_3c = (undefined1 **)0x8;
    pcStack_40 = s_COMPL__0066b7ec;
    local_44 = (undefined4 *)0x43296d;
    FUN_00401870();
    local_3c = (undefined1 **)s_offerBribe_PlayerId_giver__Playe_0066d074;
    pcStack_40 = (char *)0x43297c;
    FUN_004018b0();
    break;
  case (undefined1 *)0x6:
    param_3 = &local_3c;
    *(double *)(param_1 + 0x22) = *(double *)(param_1 + 0x22) - (double)CONCAT44(uStack_20,local_24)
    ;
    local_3c = param_1;
    pcStack_40 = (char *)0x4329a7;
    FUN_00427000();
    uStack_18 = DAT_0066b78c;
    local_1c = DAT_0066b788;
    local_3c = (undefined1 **)0xf4240;
    pcStack_40 = (char *)0x4329cc;
    local_2c = (undefined1 *)FUN_004155e0();
    uStack_28 = 0;
    if ((double)CONCAT44(uStack_18,local_1c) * _DAT_0064a6a0 <= (double)local_2c) {
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      local_3c = (undefined1 **)s_offerBribe_PlayerId_giver__Playe_0066d074;
      pcStack_40 = (char *)0x432a95;
      FUN_004018b0();
      ExceptionList = local_c;
      return 4;
    }
    if (((uint)pcVar5 & 8) != 0) {
      param_1[0x18] = (undefined1 *)((uint)param_1[0x18] | 0x100000);
    }
    if (((uint)pcVar5 & 4) != 0) {
      local_3c = (undefined1 **)&param_3;
      pcStack_40 = (char *)0x432a0e;
      FUN_00431500();
      local_3c = (undefined1 **)param_3;
      pcStack_40 = (char *)0x432a1f;
      local_2c = (undefined1 *)&local_3c;
      FUN_0040a960();
    }
    if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_00432b63;
LAB_00432b44:
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
LAB_00432b63:
    local_3c = (undefined1 **)s_offerBribe_PlayerId_giver__Playe_0066d074;
    pcStack_40 = (char *)0x432b72;
    FUN_004018b0();
    ExceptionList = local_c;
    return 0;
  case (undefined1 *)0x7:
  case (undefined1 *)0x8:
  case (undefined1 *)0x9:
    if (((uint)pcVar5 & 0x40) == 0) {
LAB_00432ce0:
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar5 = s_offerBribe_PlayerId_giver__Playe_0066d074;
      cVar3 = s_offerBribe_PlayerId_giver__Playe_0066d074[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
          cVar3 = *pcVar5;
        }
      }
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)(DAT_006898b8 + (int)param_2[0xf8] * 0x38) == 2) {
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar5 = s_offerBribe_PlayerId_giver__Playe_0066d074;
      cVar3 = s_offerBribe_PlayerId_giver__Playe_0066d074[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
          cVar3 = *pcVar5;
        }
      }
    }
    else {
      param_3 = &local_3c;
      local_3c = param_2;
      pcStack_40 = (char *)0x432c48;
      cVar3 = FUN_004171e0();
      if (cVar3 == '\0') goto LAB_00432ce0;
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar5 = s_offerBribe_PlayerId_giver__Playe_0066d074;
      cVar3 = s_offerBribe_PlayerId_giver__Playe_0066d074[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
          cVar3 = *pcVar5;
        }
      }
    }
  }
  ExceptionList = local_c;
  return 2;
}

