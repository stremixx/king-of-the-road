
/* WARNING: Type propagation algorithm not settling */

void FUN_00446670(int ***param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int ***pppiVar7;
  int ***extraout_ECX;
  int ***extraout_ECX_00;
  int ***pppiStack_44;
  int ***pppiStack_40;
  int ***local_3c;
  int ***local_30;
  int *local_2c;
  undefined1 *local_28;
  char *local_24;
  undefined *local_20;
  int ***local_1c;
  int **local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e0e0;
  local_c = ExceptionList;
  local_3c = (int ***)0x8;
  pppiStack_40 = (int ***)s_START__0066b830;
  local_24 = s_killPlayer_PlayerId_player__0066e3d4;
  local_20 = &DAT_0071d768;
  pppiStack_44 = (int ***)0x4466ab;
  ExceptionList = &local_c;
  FUN_00401870();
  local_3c = (int ***)s_killPlayer_PlayerId_player__0066e3d4;
  pppiStack_40 = (int ***)0x4466ba;
  FUN_004018b0();
  local_28 = (undefined1 *)&local_3c;
  local_4 = 0;
  local_3c = param_1;
  pppiStack_40 = (int ***)0x4466d2;
  iVar4 = FUN_00456670();
  if (iVar4 != 0) {
    local_3c = (int ***)&DAT_0066c4e4;
    pppiStack_40 = (int ***)&DAT_0077d5c0;
    pppiStack_44 = (int ***)0x4466e8;
    FUN_0061c369();
    pppiStack_44 = (int ***)&DAT_0077d5c0;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x473d,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8);
  }
  if (((uint)param_1[0x18] & 0x40000) != 0) {
    local_3c = (int ***)0x8;
    pppiStack_40 = (int ***)s_COMPL__0066b7ec;
    pppiStack_44 = (int ***)0x446731;
    FUN_00401870();
    local_3c = (int ***)s_killPlayer_PlayerId_player__0066e3d4;
    pppiStack_40 = (int ***)0x446740;
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  local_3c = (int ***)0x0;
  pppiStack_40 = (int ***)0x7;
  local_28 = (undefined1 *)&pppiStack_44;
  pppiStack_44 = param_1;
  param_1[0x18] = (int **)((uint)param_1[0x18] | 0x40000);
  FUN_0041d3f0(&param_1);
  FUN_004015a0();
  local_28 = (undefined1 *)&local_3c;
  local_3c = param_1;
  pppiStack_40 = (int ***)0x446786;
  FUN_00419830();
  local_3c = param_1;
  pppiStack_40 = (int ***)0x446797;
  local_28 = (undefined1 *)&local_3c;
  FUN_00419bd0();
  local_3c = param_1;
  pppiStack_40 = (int ***)0x4467a8;
  local_28 = (undefined1 *)&local_3c;
  cVar3 = FUN_004171e0();
  if (cVar3 != '\0') {
    DAT_0068c0bc = DAT_0068c0bc + -1;
  }
  local_3c = param_1;
  pppiStack_40 = (int ***)0x4467c7;
  local_28 = (undefined1 *)&local_3c;
  FUN_00417430();
  local_3c = param_1;
  pppiStack_40 = (int ***)0x4467d8;
  local_28 = (undefined1 *)&local_3c;
  FUN_00417580();
  local_3c = (int ***)*DAT_0068a8f0;
  local_30 = local_3c;
  if (local_3c != DAT_0068a8f0) {
    do {
      local_28 = (undefined1 *)&local_3c;
      pppiStack_40 = (int ***)0x4467fd;
      local_30 = local_3c;
      iVar4 = FUN_0040a950();
      if (iVar4 != 0) {
        local_28 = (undefined1 *)&pppiStack_40;
        local_3c = param_1;
        pppiStack_44 = (int ***)&local_30;
        FUN_0041d3f0();
        pppiStack_44 = (int ***)0x446827;
        iVar4 = FUN_0040a950();
        pppiStack_40 = *(int ****)(iVar4 + 0x1fc);
        pppiStack_44 = (int ***)0x446836;
        FUN_00446490();
        local_28 = (undefined1 *)&pppiStack_40;
        local_3c = param_1;
        pppiStack_44 = (int ***)&local_30;
        FUN_0041d3f0();
        pppiStack_44 = (int ***)0x44685b;
        iVar4 = FUN_0040a950();
        pppiStack_40 = *(int ****)(iVar4 + 0x200);
        pppiStack_44 = (int ***)0x44686a;
        FUN_00446490();
      }
      local_3c = (int ***)*local_30;
      local_30 = local_3c;
    } while (local_3c != DAT_0068a8f0);
  }
  local_2c = (int *)*DAT_0068becc;
  if (local_2c != DAT_0068becc) {
    do {
      local_28 = (undefined1 *)&local_3c;
      local_3c = param_1;
      pppiStack_40 = (int ***)0x4468ab;
      piVar5 = (int *)FUN_00418950();
      pppiStack_40 = *(int ****)(*piVar5 + 0x14);
      pppiStack_44 = (int ***)0x4468b6;
      FUN_00446490();
      local_2c = (int *)*local_2c;
    } while (local_2c != DAT_0068becc);
  }
  pppiVar7 = DAT_0068a8f0;
  piVar5 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      if (*(int ****)(*piVar5 + 0x7c) == param_1) {
        local_18 = (int **)0x0;
        local_14 = 0;
        local_10 = 0;
        *(int ****)(*piVar5 + 0x7c) = pppiVar7;
        local_3c = &local_18;
        local_4._0_1_ = 1;
        pppiStack_40 = (int ***)0x446915;
        local_1c = pppiVar7;
        FUN_0044c100();
        local_4 = (uint)local_4._1_3_ << 8;
        local_3c = (int ***)0x446923;
        FUN_0044a450();
        pppiVar7 = DAT_0068a8f0;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != DAT_006898d4);
  }
  pppiVar2 = param_1;
  pppiVar1 = param_1 + 0x2c;
  if ((int ***)param_1[0x2c] == pppiVar7) {
    pppiVar7 = param_1 + 0x28;
    if ((param_1[0x28] != param_1[0x29]) && (param_1[0x28] != param_1[0x29])) {
      do {
        local_3c = (int ***)0x0;
        pppiStack_40 = (int ***)0x44699a;
        pppiStack_44 = (int ***)FUN_00448470();
        local_28 = (undefined1 *)&pppiStack_40;
        FUN_0041d3f0();
        local_28 = (undefined1 *)&pppiStack_44;
        pppiStack_44 = extraout_ECX_00;
        FUN_0041d3f0(&param_1);
        FUN_00477010();
      } while (*pppiVar7 != pppiVar2[0x29]);
    }
  }
  else {
    local_3c = (int ***)0x1;
    local_28 = (undefined1 *)&pppiStack_40;
    pppiStack_44 = (int ***)&param_1;
    pppiStack_40 = pppiVar7;
    FUN_0041d3f0();
    local_28 = (undefined1 *)&pppiStack_44;
    pppiStack_44 = extraout_ECX;
    FUN_0041d3f0(pppiVar1);
    FUN_00477010();
  }
  local_28 = (undefined1 *)&local_3c;
  local_3c = param_1;
  pppiStack_40 = (int ***)0x4469db;
  cVar3 = FUN_00417560();
  if (cVar3 != '\0') {
    local_28 = (undefined1 *)&local_3c;
    local_3c = DAT_0068a8f0;
    pppiStack_40 = (int ***)0x4469f6;
    FUN_00477ba0();
  }
  local_3c = (int ***)0xffffffff;
  pppiStack_40 = (int ***)0x446a07;
  FUN_004741b0();
  local_28 = (undefined1 *)&local_3c;
  local_3c = param_1;
  pppiStack_40 = (int ***)0x446a19;
  FUN_004224c0();
  local_3c = param_1;
  pppiStack_40 = (int ***)0x446a2a;
  local_28 = (undefined1 *)&local_3c;
  FUN_00473520();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_killPlayer_PlayerId_player__0066e3d4;
  cVar3 = s_killPlayer_PlayerId_player__0066e3d4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return;
}

