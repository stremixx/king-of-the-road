
void FUN_0041faf0(char **param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  float10 fVar8;
  char *local_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cc38;
  pvStack_c = ExceptionList;
  local_4c = (char *)0x8;
  ExceptionList = &pvStack_c;
  FUN_00401870();
  local_4c = s_looseSemitrailer_PlayerId_player_0066c81c;
  FUN_004018b0();
  pcVar5 = (char *)param_1;
  local_4 = 0;
  local_4c = (char *)param_1;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    local_4c = &DAT_0066c4e4;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1b4d,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  if ((*(int *)(pcVar5 + 0x208) != 0) && (*(int *)(*(int *)(pcVar5 + 0x208) + 4) != -1)) {
    param_1 = &local_4c;
    local_4c = pcVar5;
    cVar1 = FUN_00417560();
    if (cVar1 != '\0') {
      local_4c = pcVar5;
      FUN_004722f0();
    }
    local_4c = (char *)0x70;
    pcVar3 = (char *)FUN_00631d33();
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3[0] = -1;
      pcVar3[1] = -1;
      pcVar3[2] = -1;
      pcVar3[3] = -1;
      pcVar3[4] = 'x';
      pcVar3[5] = 'V';
      pcVar3[6] = '4';
      pcVar3[7] = '\x12';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      pcVar3[0xc] = -1;
      pcVar3[0xd] = -1;
      pcVar3[0xe] = -1;
      pcVar3[0xf] = -1;
      pcVar3[0x10] = -1;
      pcVar3[0x11] = -1;
      pcVar3[0x12] = -1;
      pcVar3[0x13] = -1;
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      pcVar3[0x18] = -1;
      pcVar3[0x19] = -1;
      pcVar3[0x1a] = -1;
      pcVar3[0x1b] = -1;
      local_4c = (char *)0x41fc07;
      FUN_004132a0();
      pcVar3[0x60] = -1;
      pcVar3[0x61] = -1;
      pcVar3[0x62] = -1;
      pcVar3[99] = -1;
      pcVar3[0x58] = '\0';
      pcVar3[0x59] = '\0';
      pcVar3[0x5a] = '\0';
      pcVar3[0x5b] = '\0';
      pcVar3[100] = -1;
      pcVar3[0x65] = -1;
      pcVar3[0x66] = -0x11;
      pcVar3[0x67] = '\x7f';
      pcVar3[0x68] = '\0';
      pcVar3[0x6c] = -1;
      pcVar3[0x6d] = -1;
      pcVar3[0x6e] = -1;
      pcVar3[0x6f] = -1;
    }
    pcVar3[0x18] = -1;
    pcVar3[0x19] = -1;
    pcVar3[0x1a] = -1;
    pcVar3[0x1b] = -1;
    *(undefined4 *)(pcVar3 + 0x14) = *(undefined4 *)(pcVar5 + 0x208);
    pcVar5[0x208] = '\0';
    pcVar5[0x209] = '\0';
    pcVar5[0x20a] = '\0';
    pcVar5[0x20b] = '\0';
    local_4c = pcVar3 + 0x20;
    *(uint *)(pcVar3 + 8) = *(uint *)(pcVar3 + 8) | 0x20;
    *(undefined8 *)local_4c = *(undefined8 *)(pcVar5 + 0x270);
    *(undefined8 *)(pcVar3 + 0x28) = *(undefined8 *)(pcVar5 + 0x278);
    *(undefined8 *)(pcVar3 + 0x30) = *(undefined8 *)(pcVar5 + 0x280);
    puVar4 = (undefined4 *)FUN_004369e0();
    iVar2 = *(int *)(pcVar3 + 0x14);
    pcVar7 = pcVar3 + 0x38;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      pcVar7 = pcVar7 + 4;
    }
    pcVar3[0x68] = '\x01';
    if (*(int *)(iVar2 + 0x1c) == *(int *)(iVar2 + 0x20)) {
      local_4c = (char *)0x41fc87;
      fVar8 = (float10)FUN_00401000();
      *(double *)(pcVar3 + 0x60) = (double)fVar8;
      DAT_0068bf7c = DAT_0068bf7c + 1;
    }
    else {
      DAT_0068c044 = DAT_0068c044 + 1;
      *(uint *)(pcVar3 + 8) = *(uint *)(pcVar3 + 8) | 0x40;
    }
    *(undefined4 *)pcVar3 = **(undefined4 **)(pcVar3 + 0x14);
    local_4c = pcVar3;
    FUN_0041be00();
    local_4c = (char *)0x1;
    FUN_0041d3f0(&param_1);
    (*DAT_0068c07c)();
    local_4c = pcVar5;
    FUN_00425880();
    local_4c = pcVar5;
    FUN_0041f080();
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_looseSemitrailer_PlayerId_player_0066c81c;
  cVar1 = s_looseSemitrailer_PlayerId_player_0066c81c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

