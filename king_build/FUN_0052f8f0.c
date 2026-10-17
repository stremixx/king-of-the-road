
void FUN_0052f8f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5,size_t param_6)

{
  char cVar1;
  byte bVar2;
  size_t _MaxCount;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  code *pcVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  bool bVar18;
  int unaff_retaddr;
  void *in_stack_00001bf0;
  char *pcStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646698;
  pcStack_c = ExceptionList;
  ExceptionList = &pcStack_c;
  FUN_0061d4f0();
  if (DAT_006d103c != 0) {
    puVar14 = (undefined4 *)(DAT_006d103c + -4);
    while (puVar17 = puVar14, puVar17 != (undefined4 *)0x0) {
      if (puVar17[2] == 0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14 = (undefined4 *)(puVar17[2] + -4);
      }
      if (puVar17 != (undefined4 *)0x0) {
        (**(code **)*puVar17)();
      }
    }
  }
  DAT_006d103c = 0;
  iStack_4 = FUN_00631d33();
  if (iStack_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0052f880();
  }
  puVar14 = &DAT_006ce438;
  puVar17 = (undefined4 *)(iVar3 + 0x24);
  for (iVar9 = 0xae; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  iStack_4 = FUN_00631d33();
  if (iStack_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0052f880();
  }
  puVar14 = &DAT_006ce438;
  pcVar4 = (char *)(iVar3 + 0x24);
  for (iVar9 = 0xae; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pcVar4 = *puVar14;
    puVar14 = puVar14 + 1;
    pcVar4 = pcVar4 + 4;
  }
  *(undefined4 **)(iVar3 + 0x2a4) = &DAT_006d0b10;
  *(undefined4 *)(iVar3 + 0x2a8) = 0;
  *(undefined4 *)(iVar3 + 0x2ac) = 0;
  *(undefined4 *)(iVar3 + 0x2c8) = 0;
  *(undefined4 *)(iVar3 + 0x2cc) = 1;
  *(undefined4 *)(iVar3 + 0x14) = 1;
  uVar10 = 0xffffffff;
  pcVar4 = s_One_Axis_Joystick_00677810;
  do {
    pcVar12 = pcVar4;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar4 = pcVar12 + -uVar10;
  pcVar12 = (char *)(iVar3 + 0x24);
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  iStack_4 = FUN_00631d33();
  if (iStack_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0052f880();
  }
  puVar14 = &DAT_006ce438;
  pcVar4 = (char *)(iVar3 + 0x24);
  for (iVar9 = 0xae; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pcVar4 = *puVar14;
    puVar14 = puVar14 + 1;
    pcVar4 = pcVar4 + 4;
  }
  *(undefined4 **)(iVar3 + 0x2a4) = &DAT_006d0b10;
  *(undefined4 **)(iVar3 + 0x2a8) = &DAT_006d0b1c;
  *(undefined4 **)(iVar3 + 0x2ac) = &DAT_006d0b1c;
  *(undefined4 *)(iVar3 + 0x2c8) = 1;
  *(undefined4 *)(iVar3 + 0x2cc) = 1;
  *(undefined4 *)(iVar3 + 0x14) = 2;
  uVar10 = 0xffffffff;
  pcVar4 = s_Two_Axes_Joystick_006777fc;
  do {
    pcVar12 = pcVar4;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar4 = pcVar12 + -uVar10;
  pcVar12 = (char *)(iVar3 + 0x24);
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  iVar3 = FUN_0061c356();
  if (iVar3 == 0) {
    GetCurrentDirectoryA(200,&stack0x00000288);
    FUN_0061c369();
    FUN_004e1e9c();
  }
  FUN_0061c25a();
  FUN_0052f1e0();
  pbVar15 = &stack0x00000480;
  pcVar4 = s_________0067205c;
  do {
    bVar2 = *pcVar4;
    bVar18 = bVar2 < *pbVar15;
    if (bVar2 != *pbVar15) {
LAB_0052fb61:
      iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_0052fb66;
    }
    if (bVar2 == 0) break;
    bVar2 = pcVar4[1];
    bVar18 = bVar2 < pbVar15[1];
    if (bVar2 != pbVar15[1]) goto LAB_0052fb61;
    pcVar4 = pcVar4 + 2;
    pbVar15 = pbVar15 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_0052fb66:
  if (iVar3 != 0) {
    param_1 = 0;
    param_5 = 0;
    pcVar13 = GetPrivateProfileStringA_exref;
    do {
      if ((&stack0x00000480)[param_1] == '\0') {
        ExceptionList = in_stack_00001bf0;
        return;
      }
      uVar10 = 0xffffffff;
      pcVar4 = &stack0x00000480 + param_1;
      do {
        pcVar12 = pcVar4;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar4 = pcVar12 + -uVar10;
      pcVar12 = &stack0x000001c0;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar12 = pcVar12 + 1;
      }
      iVar3 = FUN_00631d33();
      if (iVar3 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)FUN_0052f880();
      }
      puVar14 = &DAT_006ce438;
      pcVar4 = puVar5 + 0x24;
      for (iVar9 = 0xae; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pcVar4 = *puVar14;
        puVar14 = puVar14 + 1;
        pcVar4 = pcVar4 + 4;
      }
      uVar10 = 0xffffffff;
      pcVar4 = &stack0x000001c0;
      do {
        pcVar12 = pcVar4;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar4 = pcVar12 + -uVar10;
      pcVar12 = puVar5 + 0x24;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar12 = pcVar12 + 1;
      }
      puStack_8 = puVar5;
      (*pcVar13)();
      pcVar4 = s_________0067205c;
      pbVar15 = (byte *)&param_6;
      do {
        bVar2 = *pbVar15;
        bVar18 = bVar2 < (byte)*pcVar4;
        if (bVar2 != *pcVar4) {
LAB_0052fc7a:
          iVar9 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0052fc7f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar15[1];
        bVar18 = bVar2 < (byte)pcVar4[1];
        if (bVar2 != pcVar4[1]) goto LAB_0052fc7a;
        pbVar15 = pbVar15 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar2 != 0);
      iVar9 = 0;
LAB_0052fc7f:
      if (iVar9 == 0) {
        FUN_004e1e9c();
      }
      uVar6 = FUN_0061e066();
      *(undefined4 *)(puVar5 + 0x10) = uVar6;
      FUN_00507820();
      if ((((param_1 == 0) && (iVar3 == 0)) && (param_3 == 0)) && (param_5 == 0)) {
        FUN_004e1e9c();
      }
      *(int *)(puVar5 + 0x14) = param_1;
      *(int *)(puVar5 + 0x18) = iVar3;
      *(int *)(puVar5 + 0x1c) = param_3;
      *(undefined4 **)(puVar5 + 0x20) = param_4;
      if (1 < param_1) {
        *(undefined4 *)(puVar5 + 0x2c8) = 1;
        *(undefined4 **)(puVar5 + 0x2a8) = &DAT_006d0b1c;
        *(undefined4 **)(puVar5 + 0x2ac) = &DAT_006d0b1c;
      }
      if (0 < param_1) {
        *(undefined4 **)(puVar5 + 0x2a4) = &DAT_006d0b10;
        *(undefined4 *)(puVar5 + 0x2cc) = 1;
      }
      (*pcVar13)();
      pbVar15 = &stack0x00000480;
      pcVar4 = s_________0067205c;
      do {
        bVar2 = *pcVar4;
        bVar18 = bVar2 < *pbVar15;
        if (bVar2 != *pbVar15) {
LAB_0052fd9e:
          iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0052fda3;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar4[1];
        bVar18 = bVar2 < pbVar15[1];
        if (bVar2 != pbVar15[1]) goto LAB_0052fd9e;
        pcVar4 = pcVar4 + 2;
        pbVar15 = pbVar15 + 2;
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_0052fda3:
      if (iVar3 != 0) {
        param_2 = 0;
        do {
          if ((&stack0x00000994)[unaff_retaddr] == '\0') break;
          uVar10 = 0xffffffff;
          pcVar4 = &stack0x00000994 + unaff_retaddr;
          do {
            pcVar12 = pcVar4;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar12 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar12;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar4 = pcVar12 + -uVar10;
          pcVar12 = &stack0x000000f8;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar12 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar12 = pcVar12 + 1;
          }
          (*pcVar13)();
          pcVar4 = s_________0067205c;
          pbVar15 = &stack0x00000030;
          do {
            bVar2 = *pbVar15;
            bVar18 = bVar2 < (byte)*pcVar4;
            if (bVar2 != *pcVar4) {
LAB_0052fe51:
              iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_0052fe56;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar15[1];
            bVar18 = bVar2 < (byte)pcVar4[1];
            if (bVar2 != pcVar4[1]) goto LAB_0052fe51;
            pbVar15 = pbVar15 + 2;
            pcVar4 = pcVar4 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_0052fe56:
          if (iVar3 == 0) {
            FUN_0061c369();
            FUN_004e1e9c();
          }
          uVar10 = 0xffffffff;
          pcVar12 = (char *)&DAT_006ee234;
          pcVar4 = &stack0x000000f8;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          param_6 = ~uVar10 - 1;
          param_3 = 0;
          param_4 = (undefined4 *)(puVar5 + 0x1e8);
          pcStack_c = (char *)((int)&DAT_006ee230 + ~uVar10 + 3);
          do {
            iVar3 = _strncmp(pcVar12,&stack0x000000f8,param_6);
            _MaxCount = param_6;
            if ((iVar3 == 0) && ((*pcStack_c == ' ' || (*pcStack_c == '\0')))) {
              iVar3 = 0x103;
              pbVar15 = &DAT_006f1030;
              do {
                pbVar16 = &stack0x00000030;
                pbVar7 = pbVar15;
                do {
                  bVar2 = *pbVar7;
                  bVar18 = bVar2 < *pbVar16;
                  if (bVar2 != *pbVar16) {
LAB_0052ff16:
                    iVar9 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                    goto LAB_0052ff1b;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar7[1];
                  bVar18 = bVar2 < pbVar16[1];
                  if (bVar2 != pbVar16[1]) goto LAB_0052ff16;
                  pbVar7 = pbVar7 + 2;
                  pbVar16 = pbVar16 + 2;
                } while (bVar2 != 0);
                iVar9 = 0;
LAB_0052ff1b:
                if (iVar9 == 0) {
                  *param_4 = &DAT_006d08a8 + iVar3 * 2;
                  if (param_3 != -1) goto LAB_005302ea;
                  break;
                }
                pbVar15 = pbVar15 + 0x28;
                iVar3 = iVar3 + 1;
              } while ((int)pbVar15 < 0x6f15d0);
            }
            pcVar12 = pcVar12 + 0x1e;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            pcStack_c = pcStack_c + 0x1e;
          } while ((int)pcVar12 < 0x6ee7b6);
          iVar3 = _strncmp((char *)&DAT_006ee234,&stack0x000000f8,param_6);
          if ((iVar3 == 0) &&
             ((*(char *)((int)&DAT_006ee234 + _MaxCount) == '\0' ||
              (*(char *)((int)&DAT_006ee234 + _MaxCount) == ' ')))) {
            pcStack_c = (char *)&DAT_006d0b10;
            pbVar15 = &DAT_006f1698;
            do {
              uVar10 = 0;
              pbVar16 = pbVar15;
              do {
                pbVar7 = &stack0x00000030;
                pbVar8 = pbVar16;
                do {
                  bVar2 = *pbVar8;
                  bVar18 = bVar2 < *pbVar7;
                  if (bVar2 != *pbVar7) {
LAB_0052ffe4:
                    iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                    goto LAB_0052ffe9;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar18 = bVar2 < pbVar7[1];
                  if (bVar2 != pbVar7[1]) goto LAB_0052ffe4;
                  pbVar8 = pbVar8 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar2 != 0);
                iVar3 = 0;
LAB_0052ffe9:
                if (iVar3 == 0) {
                  *(char **)(puStack_8 + 0x2ac) = pcStack_c;
                  if ((uVar10 & 1) == 0) {
                    *(undefined4 *)(puStack_8 + 0x2c4) = 1;
                  }
                  else {
                    *(undefined4 *)(puStack_8 + 0x2c4) = 0;
                  }
                  if ((*(int *)(puStack_8 + 0x2ac) != *(int *)(puStack_8 + 0x2a8)) &&
                     (*(int *)(puStack_8 + 0x2a8) != 0)) {
                    *(undefined4 *)(puStack_8 + 0x2d4) = 1;
                  }
                  *(undefined4 *)(puStack_8 + 0x2c8) = 1;
                  break;
                }
                uVar10 = uVar10 + 1;
                pbVar16 = pbVar16 + 0x28;
              } while ((int)uVar10 < 4);
              pbVar15 = pbVar15 + 0xa0;
              pcStack_c = pcStack_c + 0xc;
            } while ((int)pbVar15 < 0x6f1b98);
          }
          else {
            iVar3 = _strncmp((char *)&DAT_006ee252,&stack0x000000f8,_MaxCount);
            if ((iVar3 == 0) &&
               ((*(char *)((int)&DAT_006ee252 + _MaxCount) == '\0' ||
                (*(char *)((int)&DAT_006ee252 + _MaxCount) == ' ')))) {
              pcStack_c = (char *)&DAT_006d0b10;
              pbVar15 = &DAT_006f1698;
              do {
                uVar10 = 0;
                pbVar16 = pbVar15;
                do {
                  pbVar7 = &stack0x00000030;
                  pbVar8 = pbVar16;
                  do {
                    bVar2 = *pbVar8;
                    bVar18 = bVar2 < *pbVar7;
                    if (bVar2 != *pbVar7) {
LAB_005300cf:
                      iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                      goto LAB_005300d4;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar8[1];
                    bVar18 = bVar2 < pbVar7[1];
                    if (bVar2 != pbVar7[1]) goto LAB_005300cf;
                    pbVar8 = pbVar8 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar2 != 0);
                  iVar3 = 0;
LAB_005300d4:
                  if (iVar3 == 0) {
                    *(char **)(puStack_8 + 0x2a4) = pcStack_c;
                    if ((uVar10 & 1) == 0) {
                      *(undefined4 *)(puStack_8 + 700) = 0;
                    }
                    else {
                      *(undefined4 *)(puStack_8 + 700) = 1;
                    }
                    *(undefined4 *)(puStack_8 + 0x2cc) = 1;
                    break;
                  }
                  uVar10 = uVar10 + 1;
                  pbVar16 = pbVar16 + 0x28;
                } while ((int)uVar10 < 4);
                pbVar15 = pbVar15 + 0xa0;
                pcStack_c = pcStack_c + 0xc;
              } while ((int)pbVar15 < 0x6f1b98);
            }
            else {
              iVar3 = _strncmp((char *)&DAT_006ee270,&stack0x000000f8,_MaxCount);
              if ((iVar3 == 0) &&
                 ((*(char *)((int)&DAT_006ee270 + _MaxCount) == '\0' ||
                  (*(char *)((int)&DAT_006ee270 + _MaxCount) == ' ')))) {
                pcStack_c = (char *)&DAT_006d0b10;
                pbVar15 = &DAT_006f1698;
                do {
                  uVar10 = 0;
                  pbVar16 = pbVar15;
                  do {
                    pbVar7 = &stack0x00000030;
                    pbVar8 = pbVar16;
                    do {
                      bVar2 = *pbVar8;
                      bVar18 = bVar2 < *pbVar7;
                      if (bVar2 != *pbVar7) {
LAB_0053019f:
                        iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                        goto LAB_005301a4;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar8[1];
                      bVar18 = bVar2 < pbVar7[1];
                      if (bVar2 != pbVar7[1]) goto LAB_0053019f;
                      pbVar8 = pbVar8 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar2 != 0);
                    iVar3 = 0;
LAB_005301a4:
                    if (iVar3 == 0) {
                      *(char **)(puStack_8 + 0x2a4) = pcStack_c;
                      if ((uVar10 & 1) == 0) {
                        *(undefined4 *)(puStack_8 + 700) = 1;
                      }
                      else {
                        *(undefined4 *)(puStack_8 + 700) = 0;
                      }
                      *(undefined4 *)(puStack_8 + 0x2cc) = 1;
                      break;
                    }
                    uVar10 = uVar10 + 1;
                    pbVar16 = pbVar16 + 0x28;
                  } while ((int)uVar10 < 4);
                  pbVar15 = pbVar15 + 0xa0;
                  pcStack_c = pcStack_c + 0xc;
                } while ((int)pbVar15 < 0x6f1b98);
              }
              else {
                iVar3 = _strncmp((char *)&DAT_006ee28e,&stack0x000000f8,_MaxCount);
                if ((iVar3 == 0) &&
                   ((*(char *)((int)&DAT_006ee28e + _MaxCount) == '\0' ||
                    (*(char *)((int)&DAT_006ee28e + _MaxCount) == ' ')))) {
                  pcStack_c = (char *)&DAT_006d0b10;
                  pbVar15 = &DAT_006f1698;
                  do {
                    uVar10 = 0;
                    pbVar16 = pbVar15;
                    do {
                      pbVar7 = &stack0x00000030;
                      pbVar8 = pbVar16;
                      do {
                        bVar2 = *pbVar8;
                        bVar18 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_0053026f:
                          iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                          goto LAB_00530274;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar8[1];
                        bVar18 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_0053026f;
                        pbVar8 = pbVar8 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar3 = 0;
LAB_00530274:
                      if (iVar3 == 0) {
                        *(char **)(puStack_8 + 0x2a8) = pcStack_c;
                        if ((uVar10 & 1) == 0) {
                          *(undefined4 *)(puStack_8 + 0x2c0) = 0;
                        }
                        else {
                          *(undefined4 *)(puStack_8 + 0x2c0) = 1;
                        }
                        if ((*(int *)(puStack_8 + 0x2ac) != *(int *)(puStack_8 + 0x2a8)) &&
                           (*(int *)(puStack_8 + 0x2ac) != 0)) {
                          *(undefined4 *)(puStack_8 + 0x2d4) = 1;
                        }
                        *(undefined4 *)(puStack_8 + 0x2c8) = 1;
                        break;
                      }
                      uVar10 = uVar10 + 1;
                      pbVar16 = pbVar16 + 0x28;
                    } while ((int)uVar10 < 4);
                    pbVar15 = pbVar15 + 0xa0;
                    pcStack_c = pcStack_c + 0xc;
                  } while ((int)pbVar15 < 0x6f1b98);
                }
              }
            }
          }
LAB_005302ea:
          uVar10 = 0xffffffff;
          pcVar4 = &stack0x000000f8;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          unaff_retaddr = unaff_retaddr + ~uVar10;
          param_2 = param_2 + 1;
          pcVar13 = GetPrivateProfileStringA_exref;
          puVar5 = puStack_8;
        } while (param_2 < 0x2f);
      }
      uVar10 = 0xffffffff;
      pcVar4 = &stack0x000001c0;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_1 = param_1 + ~uVar10;
      param_5 = param_5 + 1;
    } while (param_5 < 0xd);
  }
  ExceptionList = in_stack_00001bf0;
  return;
}

