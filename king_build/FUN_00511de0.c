
void __thiscall FUN_00511de0(int param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar2 = 0xffffffff;
  pcVar6 = *(char **)(param_1 + 0x288);
  do {
    pcVar5 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar5 + -uVar2;
  pcVar5 = param_3;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
    pcVar6 = &DAT_00675818;
  }
  else if (*(int *)(DAT_006cdbf8 + 0x180) == 0) {
    pcVar6 = s_MENV__00675810;
  }
  else {
    pcVar6 = &DAT_00675808;
    if (*(int *)(DAT_006cdbf8 + 0x180) != 1) {
      pcVar6 = &DAT_00675800;
    }
  }
  uVar2 = 0xffffffff;
  do {
    pcVar5 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar6 = param_3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar6 = param_2;
  do {
    pcVar5 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar5 + -uVar2;
  pcVar5 = param_4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_00675644;
  do {
    pcVar5 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar6 = param_4;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar6 + -uVar2;
  pcVar5 = param_5;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (DAT_006cdcd0 == 4) {
    pcVar6 = &DAT_0067563c;
  }
  else if (DAT_006cdcd0 == 3) {
    pcVar6 = &DAT_0067563c;
  }
  else if (DAT_006cdcd0 == 2) {
    pcVar6 = s_1_res_00675634;
  }
  else if (DAT_006cdcd0 == 1) {
    pcVar6 = s_1_res_00675634;
  }
  else {
    if (DAT_006cdcd0 != 0) {
      return;
    }
    pcVar6 = s_2_res_00675624;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar5 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar6 = param_5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

