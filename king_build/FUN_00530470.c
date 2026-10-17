
void FUN_00530470(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int local_24;
  undefined4 *local_20;
  undefined2 *local_1c;
  undefined2 *local_18;
  undefined2 *local_14;
  undefined2 *local_10;
  int local_c;
  int local_8;
  char *local_4;
  
  uVar4 = 0xffffffff;
  DAT_006d0fdc = 1;
  pcVar7 = PTR_s_ACT_LABS_Force_RS_006776c0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_24 = 0;
  DAT_006d0fd4 = ~uVar4 - 1;
  if (0 < DAT_006f3af0) {
    local_c = 1;
    local_10 = &DAT_006f24b0;
    local_14 = &DAT_006f24b2;
    local_18 = &DAT_006f24b4;
    local_1c = &DAT_006f24b6;
    pcVar7 = (char *)&DAT_006f25bc;
    local_20 = &DAT_006f2488;
    do {
      local_8 = 0;
      FUN_00530370(pcVar7,*local_20,*local_10,*local_14,*local_18,*local_1c,&local_8);
      iVar3 = DAT_006d0fdc;
      if (local_8 != 0) {
        iVar2 = DAT_006d0fdc * 0xae;
        puVar8 = (undefined4 *)(local_8 + 0x24);
        pcVar9 = (char *)(&DAT_006ce438 + iVar2);
        for (iVar5 = 0xae; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          pcVar9 = pcVar9 + 4;
        }
        uVar4 = 0xffffffff;
        pcVar9 = pcVar7;
        do {
          pcVar10 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar9 = pcVar10 + -uVar4;
        pcVar10 = (char *)(&DAT_006ce438 + iVar2);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      iVar2 = DAT_006d0fd4;
      *(int *)(iVar3 * 0x2b8 + 0x6ce53c) = local_24;
      iVar3 = FUN_0061f130(pcVar7,PTR_s_ACT_LABS_Force_RS_006776c0,iVar2);
      if (iVar3 == 0) {
        FUN_0061c369(&DAT_006ce438 + DAT_006d0fdc * 0xae,pcVar7);
        if (DAT_006d0fdc == local_c) {
          local_24 = local_24 + -1;
          local_20 = local_20 + -0x8e;
          local_1c = local_1c + -0x11c;
          pcVar7 = pcVar7 + -0x238;
          local_18 = local_18 + -0x11c;
          local_14 = local_14 + -0x11c;
          local_10 = local_10 + -0x11c;
          local_c = local_c + -1;
        }
        else {
          uVar4 = 0xffffffff;
          iVar3 = DAT_006d0fdc * 0x2b8;
          pcVar9 = PTR_s_ACT_LABS_Force_RS___SHIFTER_006776c4;
          do {
            pcVar10 = pcVar9;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          local_4 = (char *)(&DAT_006ce438 + DAT_006d0fdc * 0xae);
          pcVar9 = pcVar10 + -uVar4;
          pcVar10 = local_4;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar10 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(undefined **)(&DAT_006ce618 + iVar3) = &DAT_006d0af4;
          *(undefined **)(&DAT_006ce61c + iVar3) = &DAT_006d0ab8;
          *(undefined **)(&DAT_006ce620 + iVar3) = &DAT_006d0aba;
          *(undefined1 **)(&DAT_006ce624 + iVar3) = &DAT_006d0aae;
          *(undefined1 **)(&DAT_006ce628 + iVar3) = &DAT_006d0ab0;
          *(undefined1 **)(&DAT_006ce62c + iVar3) = &DAT_006d0aee;
          *(undefined1 **)(&DAT_006ce630 + iVar3) = &DAT_006d0af0;
          *(undefined **)(&DAT_006ce634 + iVar3) = &DAT_006d0af2;
        }
      }
      DAT_006d0fdc = DAT_006d0fdc + 1;
      local_20 = local_20 + 0x8e;
      local_1c = local_1c + 0x11c;
      pcVar7 = pcVar7 + 0x238;
      local_18 = local_18 + 0x11c;
      local_14 = local_14 + 0x11c;
      local_10 = local_10 + 0x11c;
      local_24 = local_24 + 1;
      local_c = local_c + 1;
    } while (local_24 < DAT_006f3af0);
  }
  return;
}

