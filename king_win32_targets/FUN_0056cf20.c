
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056cf20(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint unaff_EBP;
  byte *pbVar7;
  bool bVar8;
  longlong lVar9;
  byte local_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646cb1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(DAT_006cdbcc + 0x540) != 0) {
    ExceptionList = &pvStack_c;
    FUN_005ff2a0((double)((int)*(short *)(DAT_006cdbd8 + 0x180) *
                         (int)*(short *)(DAT_006cdbd8 + 0x17e)) * _DAT_0064a920);
    if (5 < *(short *)(DAT_006cdbd8 + 0x180)) {
      FUN_005ff0a0();
    }
  }
  _DAT_006f2368 = 0;
  FUN_00573700(**(undefined4 **)(*(int *)(param_1 + 0x1d4) + 100));
  FUN_004e5738();
  FUN_005969c0(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x54) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x58) = 0;
  iVar2 = FUN_00598490();
  *(undefined4 *)(*(int *)(iVar2 + 0x1d8) + 0x54) = 0;
  iVar2 = FUN_00598490();
  *(undefined4 *)(*(int *)(iVar2 + 0x1d8) + 0x58) = 0;
  iVar2 = FUN_00631d33(0x248);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_006f230c = 0;
  }
  else {
    DAT_006f230c = FUN_005a6b00(param_1,&DAT_0067aa48,s_moon__0067aa50,s_rain__0067aa58,
                                &DAT_0067aa60,&DAT_0067aa68);
  }
  local_4 = 0xffffffff;
  FUN_005a8030(DAT_006f2248,DAT_006f224c,DAT_006f2250,DAT_006f2254,DAT_006f2260,DAT_006f2264,
               DAT_006f2268,DAT_006f226c);
  *(float *)(DAT_006f230c + 0x220) = (float)_DAT_006f2258;
  if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
    *(uint *)(DAT_006f230c + 0x23c) = *(uint *)(DAT_006f230c + 0x23c) | 0x10000;
  }
  GetPrivateProfileStringA
            (s_EFFECTS_00671998,s_wdemo_0067aa40,&DAT_006719a8,(LPSTR)local_20,10,
             *(LPCSTR *)(param_1 + 0x280));
  pbVar7 = &DAT_00671994;
  pbVar3 = local_20;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0056d0fb:
      iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0056d0ff;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0056d0fb;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_0056d0ff:
  if (iVar2 == 0) {
    *(undefined4 *)(DAT_006f230c + 0x238) = 1;
  }
  else {
    *(undefined4 *)(DAT_006f230c + 0x238) = 0;
  }
  if (DAT_006cdbc8 != 0) {
    if (((DAT_0071f834 != 0) &&
        (((DAT_006cdcd0 == 4 || (DAT_006cdcd0 == 3)) && (0x5a < *(short *)(DAT_006cdbd0 + 0x1a4)))))
       && (0x5a < *(short *)(DAT_006cdbd0 + 0x1a6))) {
      FUN_005a4e10(1);
    }
    iVar2 = FUN_00631d33(0xd8);
    local_4 = 1;
    if (iVar2 == 0) {
      DAT_006f23f8 = (int *)0x0;
    }
    else {
      DAT_006f23f8 = (int *)FUN_0056cc70(param_1);
    }
    local_4 = 0xffffffff;
    *(int **)(DAT_006f230c + 0x1f0) = DAT_006f23f8;
    DAT_006f23f8[0x35] = DAT_006f2278;
  }
  if (DAT_006f23f8 != (int *)0x0) {
    (**(code **)(*DAT_006f23f8 + 0x18))(1);
    DAT_006f23f8[0x29] = 0;
  }
  DAT_006f2404 = (int *)FUN_005eea00(s_fon_main_cl_0067aa34);
  DAT_006f2408 = (int *)FUN_005eea00(s_fon_mount_cl_0067aa24);
  iVar2 = *(int *)(param_1 + 0x1e8);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x4c);
  }
  pbVar7 = &DAT_006757cc;
  pbVar3 = *(byte **)(*(int *)(iVar4 + 0x24) + 0x3c);
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0056d230:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0056d235;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0056d230;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0056d235:
  if (iVar4 != 0) {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x4c);
    }
    pbVar7 = &DAT_006757d0;
    pbVar3 = *(byte **)(*(int *)(iVar4 + 0x24) + 0x3c);
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0056d277:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0056d27c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0056d277;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0056d27c:
    if (iVar4 != 0) {
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar2 + 0x4c);
      }
      pbVar7 = &DAT_0067a5d8;
      pbVar3 = *(byte **)(*(int *)(iVar4 + 0x24) + 0x3c);
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0056d2be:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0056d2c3;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0056d2be;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0056d2c3:
      if (iVar4 != 0) {
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x4c);
        }
        pbVar7 = &DAT_0067aa20;
        pbVar3 = *(byte **)(*(int *)(iVar4 + 0x24) + 0x3c);
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0056d305:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0056d30a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0056d305;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0056d30a:
        if (iVar4 == 0) {
LAB_0056d351:
          FUN_005a8540(7,0);
        }
        else {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + 0x4c);
          }
          pbVar7 = &DAT_00674130;
          pbVar3 = *(byte **)(*(int *)(iVar2 + 0x24) + 0x3c);
          do {
            bVar1 = *pbVar3;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_0056d348:
              iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_0056d34d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_0056d348;
            pbVar3 = pbVar3 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar2 = 0;
LAB_0056d34d:
          if (iVar2 == 0) goto LAB_0056d351;
        }
        *(undefined4 *)(DAT_006f230c + 0x240) = 0;
        if (DAT_006f2404 != (int *)0x0) {
          (**(code **)(*DAT_006f2404 + 0x28))();
        }
        goto LAB_0056d3ee;
      }
    }
  }
  *(undefined4 *)(DAT_006f230c + 0x240) = 1;
  if (DAT_006f2408 != (int *)0x0) {
    (**(code **)(*DAT_006f2408 + 0x28))();
  }
  if (*(int *)(param_1 + 0x1e8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x4c);
  }
  pbVar7 = &DAT_0067a5d8;
  pbVar3 = *(byte **)(*(int *)(iVar2 + 0x24) + 0x3c);
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0056d3d6:
      iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0056d3db;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0056d3d6;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_0056d3db:
  if (iVar2 == 0) {
    uVar6 = 5;
  }
  else {
    uVar6 = 6;
  }
  FUN_005a8540(uVar6,0);
LAB_0056d3ee:
  iVar2 = FUN_00631d33(0x38);
  local_4 = 2;
  if (iVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_005a34f0(param_1,s_Faza8Key_0067aa14,8,0,0x3ff00000);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar5 + 0x18))(1);
  iVar2 = FUN_00598490();
  iVar2 = *(int *)(iVar2 + 0x1d8);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0x40690000;
  iVar2 = *(int *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0x408f4000;
  uVar6 = FUN_005ee8e0(0,s_english_0067aa0c);
  if (DAT_006957f0 == 0) {
    lVar9 = CONCAT44(unaff_EBP,1);
  }
  else {
    lVar9 = (ulonglong)unaff_EBP << 0x20;
  }
  FUN_005e10c0(uVar6,lVar9);
  DAT_006957d4 = DAT_006957d4 & 0xffffffbf;
  ExceptionList = pvStack_10;
  return;
}

