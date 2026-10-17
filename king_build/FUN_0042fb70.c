
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fb70(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  int iStack_6c;
  uint *puStack_68;
  undefined1 local_52;
  undefined1 local_51;
  uint local_50;
  undefined1 *local_4c;
  double local_48;
  double local_40;
  double local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d4c0;
  local_14 = ExceptionList;
  iStack_6c = *(undefined4 *)(DAT_0068bb58 + 0x18);
  puStack_68 = *(uint **)(DAT_0068bb58 + 0x1c);
  uStack_70 = 0x42fba7;
  ExceptionList = &local_14;
  FUN_0044ac60();
  puStack_68 = *(uint **)(DAT_0068bb58 + 0x58);
  iStack_6c = *(undefined4 *)(DAT_0068bb58 + 0x54);
  uStack_70 = 0x42fbbc;
  FUN_0044ac60();
  puStack_68 = *(uint **)(DAT_0068bb58 + 100);
  iStack_6c = *(undefined4 *)(DAT_0068bb58 + 0x60);
  uStack_70 = 0x42fbd1;
  FUN_0044ac60();
  iStack_6c = *(int *)(DAT_0068bb58 + 0x6c);
  puStack_68 = *(uint **)(DAT_0068bb58 + 0x70);
  uStack_70 = 0x42fbe6;
  FUN_0044ac60();
  iVar8 = 4;
  do {
    local_50 = 0;
    if (DAT_0068bf3c - DAT_0068bf38 >> 2 != 0) {
      do {
        puStack_68 = (uint *)0x7;
        local_4c = auStack_74;
        iVar1 = *(int *)(DAT_0068bf38 + local_50 * 4) + 0x24;
        FUN_004489a0(iVar1);
        cVar3 = FUN_00415690();
        if (cVar3 == '\0') {
          puStack_68 = (uint *)0x8;
          local_4c = auStack_74;
          FUN_004489a0(iVar1);
          cVar3 = FUN_00415690();
          if (cVar3 != '\0') goto LAB_0042fc70;
          puStack_68 = (uint *)0x2;
          local_4c = auStack_74;
          FUN_004489a0(iVar1);
          cVar3 = FUN_00415690();
          if (cVar3 != '\0') goto LAB_0042fc70;
        }
        else {
LAB_0042fc70:
          iVar1 = DAT_0068bb58;
          iStack_6c = *(int *)(DAT_0068bb58 + 100);
          if (iStack_6c == *(int *)(DAT_0068bb58 + 0x68)) {
            puStack_68 = &local_50;
            uStack_70 = 0x42fca7;
            FUN_00451fc0();
          }
          else {
            puStack_68 = &local_50;
            uStack_70 = 0x42fc8d;
            FUN_00460970();
            *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 4;
          }
          iVar1 = DAT_0068bb58;
          if (*(int *)(*(int *)(DAT_0068bf38 + local_50 * 4) + 0x20) == 1) {
            iStack_6c = *(int *)(DAT_0068bb58 + 100);
            if (iStack_6c == *(int *)(DAT_0068bb58 + 0x68)) {
              puStack_68 = &local_50;
              uStack_70 = 0x42fcf0;
              FUN_00451fc0();
            }
            else {
              puStack_68 = &local_50;
              uStack_70 = 0x42fcd6;
              FUN_00460970();
              *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 4;
            }
            iVar1 = DAT_0068bb58;
            iStack_6c = *(int *)(DAT_0068bb58 + 100);
            if (iStack_6c == *(int *)(DAT_0068bb58 + 0x68)) {
              puStack_68 = &local_50;
              uStack_70 = 0x42fd27;
              FUN_00451fc0();
            }
            else {
              puStack_68 = &local_50;
              uStack_70 = 0x42fd0d;
              FUN_00460970();
              *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 4;
            }
          }
        }
        local_50 = local_50 + 1;
      } while (local_50 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = *(int *)(DAT_0068bb58 + 100);
  iVar1 = *(int *)(DAT_0068bb58 + 0x60);
  iVar2 = iVar1;
  if (iVar1 != iVar8) {
    while (iVar2 = iVar2 + 4, iVar2 != iVar8) {
      puStack_68 = (uint *)((iVar2 - iVar1 >> 2) + 1);
      iStack_6c = 0x42fd79;
      iVar4 = FUN_004155e0();
      puStack_68 = (uint *)(iVar1 + iVar4 * 4);
      uStack_70 = 0x42fd83;
      iStack_6c = iVar2;
      FUN_0046ce20();
    }
  }
  local_50 = 0;
  if (DAT_0068bf3c - DAT_0068bf38 >> 2 != 0) {
    do {
      iVar8 = *(int *)(DAT_0068bf38 + local_50 * 4);
      if ((DAT_0068c0e8 == 0) || (*(int *)(iVar8 + 0x20) == 3)) {
        puStack_68 = (uint *)0x2;
        local_4c = auStack_74;
        FUN_004489a0(iVar8 + 0x24);
        cVar3 = FUN_00415690();
        iVar8 = DAT_0068bb58;
        if (cVar3 != '\0') {
          iStack_6c = *(int *)(DAT_0068bb58 + 0x1c);
          if (iStack_6c == *(int *)(DAT_0068bb58 + 0x20)) {
            puStack_68 = &local_50;
            uStack_70 = 0x42fe19;
            FUN_00451fc0();
          }
          else {
            puStack_68 = &local_50;
            uStack_70 = 0x42fdff;
            FUN_00460970();
            *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 4;
          }
        }
      }
      local_50 = local_50 + 2;
    } while (local_50 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
  }
  local_50 = 1;
  if (1 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2)) {
    do {
      iVar8 = *(int *)(DAT_0068bf38 + local_50 * 4);
      if ((DAT_0068c0e8 == 0) || (*(int *)(iVar8 + 0x20) == 3)) {
        puStack_68 = (uint *)0x2;
        local_4c = auStack_74;
        FUN_004489a0(iVar8 + 0x24);
        cVar3 = FUN_00415690();
        iVar8 = DAT_0068bb58;
        if (cVar3 != '\0') {
          iStack_6c = *(int *)(DAT_0068bb58 + 0x1c);
          if (iStack_6c == *(int *)(DAT_0068bb58 + 0x20)) {
            puStack_68 = &local_50;
            uStack_70 = 0x42febf;
            FUN_00451fc0();
          }
          else {
            puStack_68 = &local_50;
            uStack_70 = 0x42fea5;
            FUN_00460970();
            *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 4;
          }
        }
      }
      local_50 = local_50 + 2;
    } while (local_50 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
  }
  puStack_68 = (uint *)&local_52;
  iStack_6c = 0x42fef0;
  FUN_00478a20();
  puStack_68 = (uint *)&local_51;
  local_c = 0;
  iStack_6c = 0x42ff06;
  FUN_00478a20();
  local_c = CONCAT31(local_c._1_3_,1);
  local_50 = 0;
  if (DAT_0068bf3c - DAT_0068bf38 >> 2 != 0) {
    do {
      puStack_68 = (uint *)0x7;
      local_4c = auStack_74;
      iVar8 = *(int *)(DAT_0068bf38 + local_50 * 4) + 0x24;
      FUN_004489a0(iVar8);
      cVar3 = FUN_00415690();
      if (cVar3 == '\0') {
        puStack_68 = (uint *)0x2;
        local_4c = auStack_74;
        FUN_004489a0(iVar8);
        cVar3 = FUN_00415690();
        if (cVar3 != '\0') goto LAB_0042ff69;
      }
      else {
LAB_0042ff69:
        if (*(int *)(*(int *)(DAT_0068bf38 + local_50 * 4) + 0x20) == 1) {
          if (local_1c == local_18) {
            puStack_68 = &local_50;
            iStack_6c = local_1c;
            uStack_70 = 0x42ffb0;
            FUN_00451fc0();
          }
          else {
            puStack_68 = &local_50;
            iStack_6c = local_1c;
            uStack_70 = 0x42ff92;
            FUN_00460970();
            local_1c = local_1c + 4;
          }
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
  }
  local_50 = 1;
  if (1 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2)) {
    do {
      puStack_68 = (uint *)0x7;
      local_4c = auStack_74;
      iVar8 = *(int *)(DAT_0068bf38 + local_50 * 4) + 0x24;
      FUN_004489a0(iVar8);
      cVar3 = FUN_00415690();
      if (cVar3 == '\0') {
        puStack_68 = (uint *)0x2;
        local_4c = auStack_74;
        FUN_004489a0(iVar8);
        cVar3 = FUN_00415690();
        if (cVar3 != '\0') goto LAB_00430028;
      }
      else {
LAB_00430028:
        if (*(int *)(*(int *)(DAT_0068bf38 + local_50 * 4) + 0x20) != 1) {
          if (local_28 == local_24) {
            puStack_68 = &local_50;
            iStack_6c = local_28;
            uStack_70 = 0x43006e;
            FUN_00451fc0();
          }
          else {
            puStack_68 = &local_50;
            iStack_6c = local_28;
            uStack_70 = 0x430050;
            FUN_00460970();
            local_28 = local_28 + 4;
          }
        }
      }
      local_50 = local_50 + 2;
    } while (local_50 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
  }
  local_50 = 0;
  if (DAT_0068bf3c - DAT_0068bf38 >> 2 != 0) {
    do {
      puStack_68 = (uint *)0x7;
      local_4c = auStack_74;
      iVar8 = *(int *)(DAT_0068bf38 + local_50 * 4) + 0x24;
      FUN_004489a0(iVar8);
      cVar3 = FUN_00415690();
      if (cVar3 == '\0') {
        puStack_68 = (uint *)0x2;
        local_4c = auStack_74;
        FUN_004489a0(iVar8);
        cVar3 = FUN_00415690();
        if (cVar3 != '\0') goto LAB_004300e4;
      }
      else {
LAB_004300e4:
        if (*(int *)(*(int *)(DAT_0068bf38 + local_50 * 4) + 0x20) != 1) {
          if (local_28 == local_24) {
            puStack_68 = &local_50;
            iStack_6c = local_28;
            uStack_70 = 0x43012a;
            FUN_00451fc0();
          }
          else {
            puStack_68 = &local_50;
            iStack_6c = local_28;
            uStack_70 = 0x43010c;
            FUN_00460970();
            local_28 = local_28 + 4;
          }
        }
      }
      local_50 = local_50 + 2;
    } while (local_50 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
  }
  uVar7 = local_28 - local_2c >> 2;
  uVar5 = local_1c - local_20 >> 2;
  uVar6 = 0;
  local_38 = _DAT_0066b6f0 * _DAT_0064a878;
  local_48 = 0.0;
  local_40 = 0.0;
  local_4c = (undefined1 *)0x0;
  local_50 = 0;
  if (uVar7 * uVar5 != 0) {
    do {
      iVar8 = DAT_0068bb58;
      if (local_40 < local_48 * local_38) {
        puStack_68 = (uint *)(local_20 + (uVar6 % uVar5) * 4);
        iStack_6c = *(int *)(DAT_0068bb58 + 0x58);
        if (iStack_6c == *(int *)(DAT_0068bb58 + 0x5c)) {
          uStack_70 = 0x430245;
          FUN_00451fc0();
        }
        else {
          uStack_70 = 0x430230;
          FUN_00460970();
          *(int *)(iVar8 + 0x58) = *(int *)(iVar8 + 0x58) + 4;
        }
        local_40 = local_40 + _DAT_0064a660;
        uVar6 = uVar6 + 1;
      }
      else {
        iStack_6c = *(int *)(DAT_0068bb58 + 0x58);
        puStack_68 = (uint *)(local_2c + ((uint)local_4c % uVar7) * 4);
        if (iStack_6c == *(int *)(DAT_0068bb58 + 0x5c)) {
          uStack_70 = 0x4301fb;
          FUN_00451fc0();
        }
        else {
          uStack_70 = 0x4301e6;
          FUN_00460970();
          *(int *)(iVar8 + 0x58) = *(int *)(iVar8 + 0x58) + 4;
        }
        local_48 = local_48 + _DAT_0064a660;
        local_4c = (undefined1 *)((int)local_4c + 1);
      }
      uVar7 = local_28 - local_2c >> 2;
      uVar5 = local_1c - local_20 >> 2;
      local_50 = local_50 + 1;
    } while (local_50 < uVar7 * uVar5);
  }
  puStack_68 = (uint *)(DAT_0068bb58 + 0x54);
  iStack_6c = 0x430295;
  FUN_00452250();
  iVar8 = *(int *)(DAT_0068bb58 + 0x70);
  iVar1 = *(int *)(DAT_0068bb58 + 0x6c);
  iVar2 = iVar1;
  if (iVar1 != iVar8) {
    while (iVar2 = iVar2 + 4, iVar2 != iVar8) {
      puStack_68 = (uint *)((iVar2 - iVar1 >> 2) + 1);
      iStack_6c = 0x4302be;
      iVar4 = FUN_004155e0();
      puStack_68 = (uint *)(iVar1 + iVar4 * 4);
      uStack_70 = 0x4302c8;
      iStack_6c = iVar2;
      FUN_0046ce20();
    }
  }
  local_c = local_c & 0xffffff00;
  puStack_68 = (uint *)0x4302e0;
  FUN_00449050();
  local_c = 0xffffffff;
  puStack_68 = (uint *)0x4302f1;
  FUN_00449050();
  ExceptionList = local_14;
  return;
}

