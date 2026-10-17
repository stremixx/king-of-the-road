
int FUN_005da350(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar2 = param_3;
  cVar1 = *param_3;
  pcVar9 = param_3;
  while (cVar1 != '\0') {
    pcVar10 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar10;
  }
  if (*pcVar9 != '.') {
    do {
      if (pcVar9 <= param_3) break;
      pcVar10 = pcVar9 + -1;
      pcVar9 = pcVar9 + -1;
    } while (*pcVar10 != '.');
    if (*pcVar9 != '.') {
      return 0;
    }
  }
  uVar7 = 0xffffffff;
  pcVar9 = pcVar9 + 1;
  pcVar10 = &DAT_00681c1c;
  do {
    pcVar11 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar11 + -uVar7;
  pcVar11 = pcVar9;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  param_3 = (char *)0x3;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar3 = FUN_0061c356(pcVar2,&DAT_0066f3e8);
  if (iVar3 == 0) {
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_00675594;
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar10 = pcVar11 + -uVar7;
    pcVar11 = pcVar9;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    param_3 = (char *)0x2;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    iVar3 = FUN_0061c356(pcVar2,&DAT_0066f3e8);
    if (iVar3 == 0) {
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_00681c18;
      do {
        pcVar11 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar11 + -uVar7;
      pcVar11 = pcVar9;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      param_3 = (char *)0x1;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      iVar3 = FUN_0061c356(pcVar2,&DAT_00675198);
      if (iVar3 == 0) {
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_00681c14;
        do {
          pcVar11 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar10 = pcVar11 + -uVar7;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
        iVar3 = FUN_0061c356(pcVar2,&DAT_00675198);
        if (iVar3 == 0) {
          FUN_005d2520(s___pro___res_file_is_absent_00681bf8,pcVar2);
        }
      }
    }
  }
  iVar4 = FUN_005eb720(param_2,iVar3,param_3,pcVar2);
  if (iVar4 != 0) {
    iVar5 = FUN_005d2640();
    if (iVar5 < 150000) {
      FUN_005d2520(s_Not_enough_memory_00681be4,0);
    }
    else {
      uVar6 = FUN_005e9620(DAT_0072081c);
      FUN_0061c369(pcVar2,s_A_problem_was_found_in_the_resou_00681ba4,
                   *(undefined4 *)(param_1 + 0x3c),iVar4,uVar6);
      FUN_005d2520(pcVar2,0);
    }
  }
  if (param_3 == (char *)0x1) {
    FUN_0061c25a(iVar3);
  }
  return (int)param_3;
}

