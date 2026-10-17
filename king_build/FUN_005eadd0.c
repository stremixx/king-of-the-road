
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005eadd0(char *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *_Str1;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  
  iVar3 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (param_1[iVar3] == '\"') {
      param_1[iVar3] = ' ';
    }
    iVar5 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    cVar1 = param_1[iVar5];
  }
  _Str1 = (byte *)FUN_005aa880(&param_1);
  iVar3 = param_2;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  do {
    pbVar7 = &DAT_00682610;
    pbVar4 = _Str1;
    do {
      bVar2 = *pbVar4;
      bVar10 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_005eae40:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005eae45;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar10 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_005eae40;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_005eae45:
    if (iVar5 == 0) {
      uVar6 = FUN_005aa880(&param_1);
      iVar5 = FUN_0061f34d(uVar6);
      *(int *)(iVar3 + 0x28) = iVar5 + -1;
      goto LAB_005eb6be;
    }
    pbVar7 = &DAT_0068260c;
    pbVar4 = _Str1;
    do {
      bVar2 = *pbVar4;
      bVar10 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_005eae90:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005eae95;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar10 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_005eae90;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_005eae95:
    if (iVar5 == 0) {
      uVar6 = FUN_005aa880(&param_1);
      uVar9 = *(uint *)(iVar3 + 0x20) | 1;
LAB_005eaea9:
      *(uint *)(iVar3 + 0x20) = uVar9;
      iVar5 = FUN_0061f34d(uVar6);
      *(int *)(iVar3 + 0x38) = iVar5 + -1;
    }
    else {
      pbVar7 = &DAT_00682608;
      pbVar4 = _Str1;
      do {
        bVar2 = *pbVar4;
        bVar10 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_005eaee9:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_005eaeee;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar10 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_005eaee9;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_005eaeee:
      if (iVar5 == 0) {
        uVar6 = FUN_005aa880(&param_1);
        uVar9 = *(uint *)(iVar3 + 0x20) | 3;
        goto LAB_005eaea9;
      }
      pbVar7 = &DAT_00682604;
      pbVar4 = _Str1;
      do {
        bVar2 = *pbVar4;
        bVar10 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_005eaf2f:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_005eaf34;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar10 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_005eaf2f;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_005eaf34:
      if (iVar5 == 0) {
        uVar6 = FUN_005aa880(&param_1);
        uVar9 = *(uint *)(iVar3 + 0x20) | 0x41;
        goto LAB_005eaea9;
      }
      pbVar7 = &DAT_00677a08;
      pbVar4 = _Str1;
      do {
        bVar2 = *pbVar4;
        bVar10 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_005eaf78:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_005eaf7d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar10 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_005eaf78;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_005eaf7d:
      if (iVar5 == 0) {
        uVar6 = FUN_005aa880(&param_1);
        *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 0x10;
        iVar5 = FUN_0061f34d(uVar6);
        *(int *)(iVar3 + 0x3c) = iVar5 + -1;
      }
      else {
        pbVar7 = &DAT_006825fc;
        pbVar4 = _Str1;
        do {
          bVar2 = *pbVar4;
          bVar10 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_005eafd1:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_005eafd6;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar10 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_005eafd1;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005eafd6:
        if (iVar5 == 0) {
          uVar6 = FUN_005aa880(&param_1);
          uVar9 = *(uint *)(iVar3 + 0x20);
          *(uint *)(iVar3 + 0x20) = uVar9 | 0x20;
          if (DAT_0071f864 == 0) {
            *(uint *)(iVar3 + 0x20) = uVar9 | 0x1a0;
          }
          fVar11 = (float10)FUN_0061f358(uVar6);
          *(float *)(iVar3 + 0x58) = (float)fVar11;
        }
        else {
          pcVar8 = s_specular_006825f0;
          pbVar4 = _Str1;
          do {
            bVar2 = *pbVar4;
            bVar10 = bVar2 < (byte)*pcVar8;
            if (bVar2 != *pcVar8) {
LAB_005eb041:
              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_005eb046;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar10 = bVar2 < (byte)pcVar8[1];
            if (bVar2 != pcVar8[1]) goto LAB_005eb041;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_005eb046:
          if (iVar5 == 0) {
            iVar5 = FUN_005aa880(&param_1);
            if (iVar5 != 0) {
              fVar11 = (float10)FUN_0061f358(iVar5);
              *(float *)(iVar3 + 0x5c) = (float)fVar11;
            }
          }
          else {
            pcVar8 = s_reflect_006825e8;
            pbVar4 = _Str1;
            do {
              bVar2 = *pbVar4;
              bVar10 = bVar2 < (byte)*pcVar8;
              if (bVar2 != *pcVar8) {
LAB_005eb09b:
                iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_005eb0a0;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar10 = bVar2 < (byte)pcVar8[1];
              if (bVar2 != pcVar8[1]) goto LAB_005eb09b;
              pbVar4 = pbVar4 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_005eb0a0:
            if (iVar5 == 0) {
              iVar5 = FUN_005aa880(&param_1);
              if (iVar5 != 0) {
                fVar11 = (float10)FUN_0061f358(iVar5);
                *(float *)(iVar3 + 0x68) = (float)fVar11;
              }
              uVar9 = *(uint *)(iVar3 + 0x20) | 0x2000;
            }
            else {
              pcVar8 = s_alphamirr_006825dc;
              pbVar4 = _Str1;
              do {
                bVar2 = *pbVar4;
                bVar10 = bVar2 < (byte)*pcVar8;
                if (bVar2 != *pcVar8) {
LAB_005eb0f7:
                  iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005eb0fc;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar4[1];
                bVar10 = bVar2 < (byte)pcVar8[1];
                if (bVar2 != pcVar8[1]) goto LAB_005eb0f7;
                pbVar4 = pbVar4 + 2;
                pcVar8 = pcVar8 + 2;
              } while (bVar2 != 0);
              iVar5 = 0;
LAB_005eb0fc:
              if (iVar5 == 0) {
                uVar9 = *(uint *)(iVar3 + 0x20) | 0x4000;
              }
              else {
                pbVar7 = &DAT_006825d4;
                pbVar4 = _Str1;
                do {
                  bVar2 = *pbVar4;
                  bVar10 = bVar2 < *pbVar7;
                  if (bVar2 != *pbVar7) {
LAB_005eb136:
                    iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                    goto LAB_005eb13b;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar4[1];
                  bVar10 = bVar2 < pbVar7[1];
                  if (bVar2 != pbVar7[1]) goto LAB_005eb136;
                  pbVar4 = pbVar4 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar2 != 0);
                iVar5 = 0;
LAB_005eb13b:
                if (iVar5 == 0) {
                  uVar9 = *(uint *)(iVar3 + 0x20) | 0x100000;
                }
                else {
                  pcVar8 = s_bumpcoord_006825c8;
                  pbVar4 = _Str1;
                  do {
                    bVar2 = *pbVar4;
                    bVar10 = bVar2 < (byte)*pcVar8;
                    if (bVar2 != *pcVar8) {
LAB_005eb177:
                      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                      goto LAB_005eb17c;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar10 = bVar2 < (byte)pcVar8[1];
                    if (bVar2 != pcVar8[1]) goto LAB_005eb177;
                    pbVar4 = pbVar4 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar2 != 0);
                  iVar5 = 0;
LAB_005eb17c:
                  if (iVar5 == 0) {
                    uVar9 = *(uint *)(iVar3 + 0x20) | 0x80000;
                  }
                  else {
                    pcVar8 = s_power_00675df4;
                    pbVar4 = _Str1;
                    do {
                      bVar2 = *pbVar4;
                      bVar10 = bVar2 < (byte)*pcVar8;
                      if (bVar2 != *pcVar8) {
LAB_005eb1b8:
                        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                        goto LAB_005eb1bd;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar4[1];
                      bVar10 = bVar2 < (byte)pcVar8[1];
                      if (bVar2 != pcVar8[1]) goto LAB_005eb1b8;
                      pbVar4 = pbVar4 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar2 != 0);
                    iVar5 = 0;
LAB_005eb1bd:
                    if (iVar5 == 0) {
LAB_005eb1c1:
                      iVar5 = FUN_005aa880(&param_1);
                      if (iVar5 != 0) {
                        uVar6 = FUN_0061f34d(iVar5);
                        *(undefined4 *)(iVar3 + 0x24) = uVar6;
                      }
                      goto LAB_005eb6be;
                    }
                    pbVar7 = &DAT_006825c0;
                    pbVar4 = _Str1;
                    do {
                      bVar2 = *pbVar4;
                      bVar10 = bVar2 < *pbVar7;
                      if (bVar2 != *pbVar7) {
LAB_005eb212:
                        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                        goto LAB_005eb217;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar4[1];
                      bVar10 = bVar2 < pbVar7[1];
                      if (bVar2 != pbVar7[1]) goto LAB_005eb212;
                      pbVar4 = pbVar4 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar2 != 0);
                    iVar5 = 0;
LAB_005eb217:
                    if (iVar5 == 0) {
                      uVar9 = *(uint *)(iVar3 + 0x20) | 0x1000;
                    }
                    else {
                      pbVar7 = &DAT_00676698;
                      pbVar4 = _Str1;
                      do {
                        bVar2 = *pbVar4;
                        bVar10 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005eb251:
                          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                          goto LAB_005eb256;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar4[1];
                        bVar10 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005eb251;
                        pbVar4 = pbVar4 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar5 = 0;
LAB_005eb256:
                      if (iVar5 == 0) {
                        iVar5 = FUN_005aa880(&param_1);
                        if (iVar5 != 0) {
                          fVar11 = (float10)FUN_0061f358(iVar5);
                          *(float *)(iVar3 + 0x60) = (float)fVar11;
                        }
                        iVar5 = FUN_005aa880(&param_1);
                        if (iVar5 != 0) {
                          fVar11 = (float10)FUN_0061f358(iVar5);
                          *(float *)(iVar3 + 100) = (float)fVar11;
                        }
                        *(undefined4 *)(iVar3 + 0x40) = 0;
                        uVar9 = *(uint *)(iVar3 + 0x20) | 0x800;
                      }
                      else {
                        iVar5 = _strncmp((char *)_Str1,&DAT_00676698,3);
                        if (iVar5 != 0) {
                          pcVar8 = s_coord_006825b8;
                          pbVar4 = _Str1;
                          do {
                            bVar2 = *pbVar4;
                            bVar10 = bVar2 < (byte)*pcVar8;
                            if (bVar2 != *pcVar8) {
LAB_005eb33b:
                              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                              goto LAB_005eb340;
                            }
                            if (bVar2 == 0) break;
                            bVar2 = pbVar4[1];
                            bVar10 = bVar2 < (byte)pcVar8[1];
                            if (bVar2 != pcVar8[1]) goto LAB_005eb33b;
                            pbVar4 = pbVar4 + 2;
                            pcVar8 = pcVar8 + 2;
                          } while (bVar2 != 0);
                          iVar5 = 0;
LAB_005eb340:
                          if (iVar5 == 0) {
                            iVar5 = FUN_005aa880(&param_1);
                            if (iVar5 != 0) {
                              iVar5 = FUN_0061f34d(iVar5);
                              *(int *)(iVar3 + 0x30) = iVar5 + -1;
                            }
                          }
                          else {
                            pbVar7 = &DAT_006825b4;
                            pbVar4 = _Str1;
                            do {
                              bVar2 = *pbVar4;
                              bVar10 = bVar2 < *pbVar7;
                              if (bVar2 != *pbVar7) {
LAB_005eb396:
                                iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                goto LAB_005eb39b;
                              }
                              if (bVar2 == 0) break;
                              bVar2 = pbVar4[1];
                              bVar10 = bVar2 < pbVar7[1];
                              if (bVar2 != pbVar7[1]) goto LAB_005eb396;
                              pbVar4 = pbVar4 + 2;
                              pbVar7 = pbVar7 + 2;
                            } while (bVar2 != 0);
                            iVar5 = 0;
LAB_005eb39b:
                            if (iVar5 == 0) {
                              iVar5 = FUN_005aa880(&param_1);
                              if (iVar5 != 0) {
                                iVar5 = FUN_0061f34d(iVar5);
                                *(int *)(iVar3 + 0x2c) = iVar5 + -1;
                                uVar9 = *(uint *)(iVar3 + 0x20) | 0x400;
                                goto LAB_005eb6bb;
                              }
                            }
                            else {
                              pbVar7 = &DAT_006825b0;
                              pbVar4 = _Str1;
                              do {
                                bVar2 = *pbVar4;
                                bVar10 = bVar2 < *pbVar7;
                                if (bVar2 != *pbVar7) {
LAB_005eb3f7:
                                  iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                  goto LAB_005eb3fc;
                                }
                                if (bVar2 == 0) break;
                                bVar2 = pbVar4[1];
                                bVar10 = bVar2 < pbVar7[1];
                                if (bVar2 != pbVar7[1]) goto LAB_005eb3f7;
                                pbVar4 = pbVar4 + 2;
                                pbVar7 = pbVar7 + 2;
                              } while (bVar2 != 0);
                              iVar5 = 0;
LAB_005eb3fc:
                              if (iVar5 == 0) {
                                iVar5 = FUN_005aa880(&param_1);
                                if (iVar5 != 0) {
                                  iVar5 = FUN_0061f34d(iVar5);
                                  *(int *)(iVar3 + 0x34) = iVar5 + -1;
                                }
                              }
                              else {
                                pcVar8 = s_power_00675df4;
                                pbVar4 = _Str1;
                                do {
                                  bVar2 = *pbVar4;
                                  bVar10 = bVar2 < (byte)*pcVar8;
                                  if (bVar2 != *pcVar8) {
LAB_005eb452:
                                    iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                    goto LAB_005eb457;
                                  }
                                  if (bVar2 == 0) break;
                                  bVar2 = pbVar4[1];
                                  bVar10 = bVar2 < (byte)pcVar8[1];
                                  if (bVar2 != pcVar8[1]) goto LAB_005eb452;
                                  pbVar4 = pbVar4 + 2;
                                  pcVar8 = pcVar8 + 2;
                                } while (bVar2 != 0);
                                iVar5 = 0;
LAB_005eb457:
                                if (iVar5 == 0) goto LAB_005eb1c1;
                                pbVar7 = &DAT_006825a8;
                                pbVar4 = _Str1;
                                do {
                                  bVar2 = *pbVar4;
                                  bVar10 = bVar2 < *pbVar7;
                                  if (bVar2 != *pbVar7) {
LAB_005eb48a:
                                    iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                    goto LAB_005eb48f;
                                  }
                                  if (bVar2 == 0) break;
                                  bVar2 = pbVar4[1];
                                  bVar10 = bVar2 < pbVar7[1];
                                  if (bVar2 != pbVar7[1]) goto LAB_005eb48a;
                                  pbVar4 = pbVar4 + 2;
                                  pbVar7 = pbVar7 + 2;
                                } while (bVar2 != 0);
                                iVar5 = 0;
LAB_005eb48f:
                                if (iVar5 == 0) {
                                  *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 4;
                                  uVar6 = FUN_005aa880(&param_1);
                                  fVar11 = (float10)FUN_0061f358(uVar6);
                                  *(float *)(iVar3 + 0x50) = (float)fVar11;
                                  uVar6 = FUN_005aa880(&param_1);
                                  fVar11 = (float10)FUN_0061f358(uVar6);
                                  *(float *)(iVar3 + 0x54) = (float)fVar11;
                                }
                                else {
                                  pcVar8 = s_RotPoint_0068259c;
                                  pbVar4 = _Str1;
                                  do {
                                    bVar2 = *pbVar4;
                                    bVar10 = bVar2 < (byte)*pcVar8;
                                    if (bVar2 != *pcVar8) {
LAB_005eb4f5:
                                      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                      goto LAB_005eb4fa;
                                    }
                                    if (bVar2 == 0) break;
                                    bVar2 = pbVar4[1];
                                    bVar10 = bVar2 < (byte)pcVar8[1];
                                    if (bVar2 != pcVar8[1]) goto LAB_005eb4f5;
                                    pbVar4 = pbVar4 + 2;
                                    pcVar8 = pcVar8 + 2;
                                  } while (bVar2 != 0);
                                  iVar5 = 0;
LAB_005eb4fa:
                                  if (iVar5 == 0) {
                                    uVar6 = FUN_005aa880(&param_1);
                                    fVar11 = (float10)FUN_0061f358(uVar6);
                                    *(float *)(iVar3 + 0x70) = (float)fVar11;
                                    uVar6 = FUN_005aa880(&param_1);
                                    fVar11 = (float10)FUN_0061f358(uVar6);
                                    *(float *)(iVar3 + 0x74) = (float)fVar11;
                                  }
                                  else {
                                    pbVar7 = &DAT_00682598;
                                    pbVar4 = _Str1;
                                    do {
                                      bVar2 = *pbVar4;
                                      bVar10 = bVar2 < *pbVar7;
                                      if (bVar2 != *pbVar7) {
LAB_005eb557:
                                        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                        goto LAB_005eb55c;
                                      }
                                      if (bVar2 == 0) break;
                                      bVar2 = pbVar4[1];
                                      bVar10 = bVar2 < pbVar7[1];
                                      if (bVar2 != pbVar7[1]) goto LAB_005eb557;
                                      pbVar4 = pbVar4 + 2;
                                      pbVar7 = pbVar7 + 2;
                                    } while (bVar2 != 0);
                                    iVar5 = 0;
LAB_005eb55c:
                                    if (iVar5 != 0) {
                                      pbVar7 = &DAT_00682594;
                                      pbVar4 = _Str1;
                                      do {
                                        bVar2 = *pbVar4;
                                        bVar10 = bVar2 < *pbVar7;
                                        if (bVar2 != *pbVar7) {
LAB_005eb5b5:
                                          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                          goto LAB_005eb5ba;
                                        }
                                        if (bVar2 == 0) break;
                                        bVar2 = pbVar4[1];
                                        bVar10 = bVar2 < pbVar7[1];
                                        if (bVar2 != pbVar7[1]) goto LAB_005eb5b5;
                                        pbVar4 = pbVar4 + 2;
                                        pbVar7 = pbVar7 + 2;
                                      } while (bVar2 != 0);
                                      iVar5 = 0;
LAB_005eb5ba:
                                      if (iVar5 == 0) {
                                        uVar9 = *(uint *)(iVar3 + 0x20) | 0x80;
                                      }
                                      else {
                                        pbVar7 = &DAT_00682590;
                                        pbVar4 = _Str1;
                                        do {
                                          bVar2 = *pbVar4;
                                          bVar10 = bVar2 < *pbVar7;
                                          if (bVar2 != *pbVar7) {
LAB_005eb5f3:
                                            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                            goto LAB_005eb5f8;
                                          }
                                          if (bVar2 == 0) break;
                                          bVar2 = pbVar4[1];
                                          bVar10 = bVar2 < pbVar7[1];
                                          if (bVar2 != pbVar7[1]) goto LAB_005eb5f3;
                                          pbVar4 = pbVar4 + 2;
                                          pbVar7 = pbVar7 + 2;
                                        } while (bVar2 != 0);
                                        iVar5 = 0;
LAB_005eb5f8:
                                        if (iVar5 == 0) {
                                          uVar9 = *(uint *)(iVar3 + 0x20) | 0x100;
                                        }
                                        else {
                                          pcVar8 = s_notile_00682588;
                                          pbVar4 = _Str1;
                                          do {
                                            bVar2 = *pbVar4;
                                            bVar10 = bVar2 < (byte)*pcVar8;
                                            if (bVar2 != *pcVar8) {
LAB_005eb632:
                                              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                              goto LAB_005eb637;
                                            }
                                            if (bVar2 == 0) break;
                                            bVar2 = pbVar4[1];
                                            bVar10 = bVar2 < (byte)pcVar8[1];
                                            if (bVar2 != pcVar8[1]) goto LAB_005eb632;
                                            pbVar4 = pbVar4 + 2;
                                            pcVar8 = pcVar8 + 2;
                                          } while (bVar2 != 0);
                                          iVar5 = 0;
LAB_005eb637:
                                          if (iVar5 == 0) {
                                            uVar9 = *(uint *)(iVar3 + 0x20) | 0x200;
                                          }
                                          else {
                                            pcVar8 = s_notileu_00682580;
                                            pbVar4 = _Str1;
                                            do {
                                              bVar2 = *pbVar4;
                                              bVar10 = bVar2 < (byte)*pcVar8;
                                              if (bVar2 != *pcVar8) {
LAB_005eb66e:
                                                iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                                goto LAB_005eb673;
                                              }
                                              if (bVar2 == 0) break;
                                              bVar2 = pbVar4[1];
                                              bVar10 = bVar2 < (byte)pcVar8[1];
                                              if (bVar2 != pcVar8[1]) goto LAB_005eb66e;
                                              pbVar4 = pbVar4 + 2;
                                              pcVar8 = pcVar8 + 2;
                                            } while (bVar2 != 0);
                                            iVar5 = 0;
LAB_005eb673:
                                            if (iVar5 == 0) {
                                              uVar9 = *(uint *)(iVar3 + 0x20) | 0x8000;
                                            }
                                            else {
                                              pcVar8 = s_notilev_00682578;
                                              do {
                                                bVar2 = *_Str1;
                                                bVar10 = bVar2 < (byte)*pcVar8;
                                                if (bVar2 != *pcVar8) {
LAB_005eb6aa:
                                                  iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                                                  goto LAB_005eb6af;
                                                }
                                                if (bVar2 == 0) break;
                                                bVar2 = _Str1[1];
                                                bVar10 = bVar2 < (byte)pcVar8[1];
                                                if (bVar2 != pcVar8[1]) goto LAB_005eb6aa;
                                                _Str1 = _Str1 + 2;
                                                pcVar8 = pcVar8 + 2;
                                              } while (bVar2 != 0);
                                              iVar5 = 0;
LAB_005eb6af:
                                              if (iVar5 != 0) goto LAB_005eb6be;
                                              uVar9 = *(uint *)(iVar3 + 0x20) | 0x10000;
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_005eb6bb;
                                    }
                                    *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 8;
                                    uVar6 = FUN_005aa880(&param_1);
                                    fVar11 = (float10)FUN_0061f358(uVar6);
                                    *(float *)(iVar3 + 0x6c) =
                                         (float)(fVar11 * (float10)_DAT_0064cad0);
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_005eb6be;
                        }
                        if (_Str1[3] == 0) {
                          *(undefined4 *)(iVar3 + 0x40) = 0;
                        }
                        else {
                          *(int *)(iVar3 + 0x40) = (char)_Str1[3] + -0x30;
                        }
                        iVar5 = FUN_005aa880(&param_1);
                        if (iVar5 != 0) {
                          fVar11 = (float10)FUN_0061f358(iVar5);
                          *(float *)(iVar3 + 0x60) = (float)fVar11;
                        }
                        iVar5 = FUN_005aa880(&param_1);
                        if (iVar5 != 0) {
                          fVar11 = (float10)FUN_0061f358(iVar5);
                          *(float *)(iVar3 + 100) = (float)fVar11;
                        }
                        uVar9 = *(uint *)(iVar3 + 0x20) | 0x800;
                      }
                    }
                  }
                }
              }
            }
LAB_005eb6bb:
            *(uint *)(iVar3 + 0x20) = uVar9;
          }
        }
      }
    }
LAB_005eb6be:
    _Str1 = (byte *)FUN_005aa880(&param_1);
    if (_Str1 == (byte *)0x0) {
      return 1;
    }
  } while( true );
}

