
int FUN_0062f620(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 unaff_EDI;
  uint uVar10;
  uint uVar11;
  uint local_518;
  int local_514;
  uint local_510;
  uint local_50c;
  uint local_508;
  int local_504;
  uint local_500;
  undefined4 local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0 [14];
  undefined4 uStack_4b8;
  undefined4 *puStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined *puStack_4a8;
  undefined *puStack_4a4;
  undefined4 *puStack_4a0;
  undefined4 *puStack_49c;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480 [144];
  undefined4 local_240 [112];
  undefined4 local_80 [24];
  undefined4 local_20 [6];
  
  uVar10 = DAT_0077d354;
  iVar6 = DAT_0077d358;
  if (DAT_0077d358 == 0) {
    if (DAT_007355e4 < DAT_007355e0) {
      uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      local_20[5] = 0;
      local_20[4] = 0x62f659;
      uVar11 = FUN_0062afd0();
    }
    iVar6 = 8;
    uVar10 = uVar10 | uVar11 & 0xff;
  }
  uVar11 = uVar10 >> 1;
  *param_1 = uVar10 & 1;
  uVar10 = iVar6 - 1;
  iVar6 = DAT_007355e8;
  for (; DAT_007355e8 = iVar6, uVar10 < 2; uVar10 = uVar10 + 8) {
    if (DAT_007355e4 < DAT_007355e0) {
      uVar4 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      local_20[5] = 0;
      local_20[4] = 0x62f6ae;
      uVar4 = FUN_0062afd0();
    }
    uVar11 = uVar11 | (uVar4 & 0xff) << ((byte)uVar10 & 0x1f);
    iVar6 = DAT_007355e8;
  }
  DAT_0077d358 = uVar10 - 2;
  DAT_0077d354 = uVar11 >> 2;
  uVar11 = uVar11 & 3;
  uVar10 = DAT_0077d358;
  uVar4 = DAT_0077d354;
  if (uVar11 != 2) {
    if (uVar11 != 0) {
      if (uVar11 != 1) {
        return 2;
      }
      puStack_4b4 = local_480;
      puVar7 = local_480;
      for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 8;
        puVar7 = puVar7 + 1;
      }
      local_48c = 7;
      puVar7 = local_240;
      for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 9;
        puVar7 = puVar7 + 1;
      }
      puVar7 = local_80;
      for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 7;
        puVar7 = puVar7 + 1;
      }
      puVar7 = local_20;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 8;
        puVar7 = puVar7 + 1;
      }
      puStack_49c = &local_48c;
      puStack_4a0 = &local_490;
      puStack_4a4 = &DAT_0068959c;
      puStack_4a8 = &DAT_0068955c;
      uStack_4ac = 0x101;
      uStack_4b0 = 0x120;
      uStack_4b8 = 0x62efae;
      iVar6 = FUN_0062e4f0();
      if (iVar6 == 0) {
        local_484 = 5;
        puVar7 = local_480;
        for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 5;
          puVar7 = puVar7 + 1;
        }
        puStack_49c = &local_484;
        puStack_4a0 = &local_488;
        puStack_4a4 = &DAT_00689618;
        puStack_4a8 = &DAT_006895dc;
        uStack_4ac = 0;
        puStack_4b4 = local_480;
        uStack_4b0 = 0x1e;
        uStack_4b8 = 0x62efef;
        iVar6 = FUN_0062e4f0();
        if (1 < iVar6) {
          puStack_49c = (undefined4 *)local_490;
          puStack_4a0 = (undefined4 *)0x62f003;
          FUN_0062e990();
          return iVar6;
        }
        puStack_49c = (undefined4 *)local_484;
        puStack_4a0 = (undefined4 *)local_48c;
        puStack_4a4 = (undefined *)local_488;
        puStack_4a8 = (undefined *)local_490;
        uStack_4ac = 0x62f02a;
        iVar6 = FUN_0062e9c0();
        if (iVar6 != 0) {
          return 1;
        }
        puStack_49c = (undefined4 *)local_490;
        puStack_4a0 = (undefined4 *)0x62f049;
        FUN_0062e990();
        puStack_4a0 = (undefined4 *)local_488;
        puStack_4a4 = (undefined *)0x62f053;
        FUN_0062e990();
        iVar6 = 0;
      }
      return iVar6;
    }
    uVar11 = DAT_0077d354 >> (sbyte)(DAT_0077d358 & 7);
    for (uVar10 = DAT_0077d358 - (DAT_0077d358 & 7); uVar10 < 0x10; uVar10 = uVar10 + 8) {
      if (DAT_007355e4 < DAT_007355e0) {
        uVar4 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        local_20[3] = 0;
        local_20[2] = 0x62edfd;
        uVar4 = FUN_0062afd0();
      }
      uVar11 = uVar11 | (uVar4 & 0xff) << ((byte)uVar10 & 0x1f);
    }
    uVar4 = uVar11 & 0xffff;
    uVar11 = uVar11 >> 0x10;
    for (uVar10 = uVar10 - 0x10; uVar10 < 0x10; uVar10 = uVar10 + 8) {
      if (DAT_007355e4 < DAT_007355e0) {
        uVar5 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        local_20[3] = 0;
        local_20[2] = 0x62ee4c;
        uVar5 = FUN_0062afd0();
      }
      uVar11 = uVar11 | (uVar5 & 0xff) << ((byte)uVar10 & 0x1f);
    }
    if (uVar4 == (~uVar11 & 0xffff)) {
      uVar11 = uVar11 >> 0x10;
      uVar10 = uVar10 - 0x10;
      uVar5 = DAT_007355e4;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        for (; uVar10 < 8; uVar10 = uVar10 + 8) {
          if (uVar5 < DAT_007355e0) {
            uVar1 = (uint)(byte)(&DAT_0072d594)[uVar5];
            DAT_007355e4 = uVar5 + 1;
          }
          else {
            local_20[3] = 0;
            local_20[2] = 0x62eeb3;
            uVar1 = FUN_0062afd0();
          }
          uVar11 = uVar11 | (uVar1 & 0xff) << ((byte)uVar10 & 0x1f);
          uVar5 = DAT_007355e4;
        }
        *(char *)((int)&DAT_00759df0 + iVar6) = (char)uVar11;
        iVar6 = iVar6 + 1;
        if (iVar6 == 0x8000) {
          local_20[3] = 0x62eeef;
          DAT_007355e8 = iVar6;
          FUN_0062b0d0();
          iVar6 = 0;
          uVar5 = DAT_007355e4;
        }
        uVar11 = uVar11 >> 8;
        uVar10 = uVar10 - 8;
      }
      DAT_0077d358 = uVar10;
      DAT_0077d354 = uVar11;
      DAT_007355e8 = iVar6;
      return 0;
    }
    return 1;
  }
  for (; uVar10 < 5; uVar10 = uVar10 + 8) {
    if (DAT_007355e4 < DAT_007355e0) {
      uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar11 = FUN_0062afd0(0,unaff_EDI,unaff_ESI);
    }
    bVar2 = (byte)uVar10;
    uVar4 = uVar4 | (uVar11 & 0xff) << (bVar2 & 0x1f);
  }
  local_500 = (uVar4 & 0x1f) + 0x101;
  uVar4 = uVar4 >> 5;
  for (uVar10 = uVar10 - 5; uVar10 < 5; uVar10 = uVar10 + 8) {
    if (DAT_007355e4 < DAT_007355e0) {
      uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar11 = FUN_0062afd0(0,unaff_EDI,unaff_ESI);
    }
    uVar4 = uVar4 | (uVar11 & 0xff) << ((byte)uVar10 & 0x1f);
  }
  uVar11 = (uVar4 & 0x1f) + 1;
  uVar4 = uVar4 >> 5;
  local_4f8 = uVar11;
  for (uVar10 = uVar10 - 5; uVar10 < 4; uVar10 = uVar10 + 8) {
    if (DAT_007355e4 < DAT_007355e0) {
      uVar5 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar5 = FUN_0062afd0(0,unaff_EDI,unaff_ESI);
    }
    uVar4 = uVar4 | (uVar5 & 0xff) << ((byte)uVar10 & 0x1f);
  }
  uVar10 = uVar10 - 4;
  uVar5 = (uVar4 & 0xf) + 4;
  uVar4 = uVar4 >> 4;
  if (0x11e < local_500) {
    return 1;
  }
  if (0x1e < uVar11) {
    return 1;
  }
  local_50c = 0;
  if (uVar5 != 0) {
    piVar8 = &DAT_00689510;
    uVar11 = DAT_007355e4;
    local_50c = uVar5;
    local_508 = uVar5;
    do {
      for (; uVar10 < 3; uVar10 = uVar10 + 8) {
        if (uVar11 < DAT_007355e0) {
          uVar1 = (uint)(byte)(&DAT_0072d594)[uVar11];
          DAT_007355e4 = uVar11 + 1;
        }
        else {
          uVar1 = FUN_0062afd0(0);
        }
        uVar4 = uVar4 | (uVar1 & 0xff) << ((byte)uVar10 & 0x1f);
        uVar11 = DAT_007355e4;
      }
      uVar10 = uVar10 - 3;
      local_4f0[*piVar8] = uVar4 & 7;
      uVar4 = uVar4 >> 3;
      piVar8 = piVar8 + 1;
      local_508 = local_508 - 1;
    } while (local_508 != 0);
    local_508 = 0;
    if (0x12 < uVar5) goto LAB_0062f236;
  }
  piVar8 = &DAT_00689510 + local_50c;
  do {
    iVar6 = *piVar8;
    piVar8 = piVar8 + 1;
    local_4f0[iVar6] = 0;
  } while (piVar8 < &DAT_0068955c);
LAB_0062f236:
  local_510 = 7;
  iVar6 = FUN_0062e4f0(local_4f0,0x13,0x13,0,0,&local_514,&local_510);
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      FUN_0062e990(local_514);
    }
    return iVar6;
  }
  local_50c = 0;
  local_508 = local_4f8 + local_500;
  local_4f4 = (uint)*(ushort *)(&DAT_00689654 + local_510 * 2);
  local_518 = 0;
  if (local_508 != 0) {
    uVar11 = 0;
    uVar5 = DAT_007355e4;
    do {
      if (uVar10 < local_510) {
        do {
          if (uVar5 < DAT_007355e0) {
            uVar1 = (uint)(byte)(&DAT_0072d594)[uVar5];
            DAT_007355e4 = uVar5 + 1;
          }
          else {
            uVar1 = FUN_0062afd0(0);
          }
          bVar2 = (byte)uVar10;
          uVar10 = uVar10 + 8;
          uVar4 = uVar4 | (uVar1 & 0xff) << (bVar2 & 0x1f);
          uVar5 = DAT_007355e4;
        } while (uVar10 < local_510);
      }
      local_504 = local_514 + (local_4f4 & uVar4) * 8;
      uVar1 = (uint)*(ushort *)(local_504 + 4);
      uVar4 = uVar4 >> (*(byte *)(local_504 + 1) & 0x1f);
      uVar10 = uVar10 - *(byte *)(local_504 + 1);
      if (uVar1 < 0x10) {
        local_4f0[uVar11] = uVar1;
        uVar11 = uVar11 + 1;
        local_518 = uVar11;
        local_50c = uVar1;
      }
      else if (uVar1 == 0x10) {
        for (; uVar10 < 2; uVar10 = uVar10 + 8) {
          if (uVar5 < DAT_007355e0) {
            uVar1 = (uint)(byte)(&DAT_0072d594)[uVar5];
            DAT_007355e4 = uVar5 + 1;
          }
          else {
            uVar1 = FUN_0062afd0(0);
          }
          uVar4 = uVar4 | (uVar1 & 0xff) << ((byte)uVar10 & 0x1f);
          uVar5 = DAT_007355e4;
        }
        uVar10 = uVar10 - 2;
        iVar6 = (uVar4 & 3) + 3;
        uVar4 = uVar4 >> 2;
        if (local_508 < uVar11 + iVar6) {
          return 1;
        }
        if (iVar6 != 0) {
          puVar9 = local_4f0 + local_518;
          for (iVar3 = iVar6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = local_50c;
            puVar9 = puVar9 + 1;
          }
          uVar11 = local_518 + iVar6;
          local_518 = uVar11;
        }
      }
      else {
        if (uVar1 == 0x11) {
          for (; uVar10 < 3; uVar10 = uVar10 + 8) {
            if (uVar5 < DAT_007355e0) {
              uVar1 = (uint)(byte)(&DAT_0072d594)[uVar5];
              DAT_007355e4 = uVar5 + 1;
            }
            else {
              uVar1 = FUN_0062afd0(0);
            }
            uVar4 = uVar4 | (uVar1 & 0xff) << ((byte)uVar10 & 0x1f);
            uVar5 = DAT_007355e4;
          }
          uVar10 = uVar10 - 3;
          iVar6 = (uVar4 & 7) + 3;
          uVar4 = uVar4 >> 3;
          if (local_508 < uVar11 + iVar6) {
            return 1;
          }
          if (iVar6 != 0) {
            puVar9 = local_4f0 + local_518;
            iVar3 = iVar6;
code_r0x0062f4b8:
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            uVar11 = local_518 + iVar3;
            local_518 = uVar11;
          }
        }
        else {
          for (; uVar10 < 7; uVar10 = uVar10 + 8) {
            if (uVar5 < DAT_007355e0) {
              uVar1 = (uint)(byte)(&DAT_0072d594)[uVar5];
              DAT_007355e4 = uVar5 + 1;
            }
            else {
              uVar1 = FUN_0062afd0(0);
            }
            uVar4 = uVar4 | (uVar1 & 0xff) << ((byte)uVar10 & 0x1f);
            uVar5 = DAT_007355e4;
          }
          uVar10 = uVar10 - 7;
          iVar6 = (uVar4 & 0x7f) + 0xb;
          uVar4 = uVar4 >> 7;
          if (local_508 < uVar11 + iVar6) {
            return 1;
          }
          if (iVar6 != 0) {
            puVar9 = local_4f0 + local_518;
            iVar3 = iVar6;
            goto code_r0x0062f4b8;
          }
        }
        local_50c = 0;
      }
    } while (uVar11 < local_508);
  }
  uVar11 = local_500;
  FUN_0062e990(local_514);
  local_510 = DAT_00689678;
  DAT_0077d354 = uVar4;
  DAT_0077d358 = uVar10;
  iVar6 = FUN_0062e4f0(local_4f0,uVar11,0x101,&DAT_0068955c,&DAT_0068959c,&local_514,&local_510);
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      FUN_0061d86c(&DAT_006852e0,s_incomplete_literal_tree_0068969c);
      FUN_0062e990(local_514);
    }
    return iVar6;
  }
  local_4fc = DAT_0068967c;
  iVar6 = FUN_0062e4f0(local_4f0 + uVar11,local_4f8,0,&DAT_006895dc,&DAT_00689618,&local_504,
                       &local_4fc);
  if (iVar6 == 0) {
    iVar6 = FUN_0062e9c0(local_514,local_504,local_510,local_4fc);
    if (iVar6 != 0) {
      return 1;
    }
    FUN_0062e990(local_514);
    FUN_0062e990(local_504);
    return 0;
  }
  if (iVar6 == 1) {
    FUN_0061d86c(&DAT_006852e0,s_incomplete_distance_tree_00689680);
    FUN_0062e990(local_504);
  }
  FUN_0062e990(local_514);
  return iVar6;
}

