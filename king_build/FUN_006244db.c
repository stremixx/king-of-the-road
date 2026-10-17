
undefined4 FUN_006244db(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = false;
  if (param_1 == 2) {
    puVar6 = &DAT_0072d1e8;
    pcVar5 = DAT_0072d1e8;
LAB_00624561:
    bVar1 = true;
    FUN_006238a4(1);
    iVar2 = param_1;
  }
  else {
    if (((param_1 != 4) && (param_1 != 8)) && (param_1 != 0xb)) {
      if (param_1 == 0xf) {
        puVar6 = &DAT_0072d1f4;
        pcVar5 = DAT_0072d1f4;
      }
      else if (param_1 == 0x15) {
        puVar6 = &DAT_0072d1ec;
        pcVar5 = DAT_0072d1ec;
      }
      else {
        if (param_1 != 0x16) {
          return 0xffffffff;
        }
        puVar6 = &DAT_0072d1f0;
        pcVar5 = DAT_0072d1f0;
      }
      goto LAB_00624561;
    }
    iVar2 = FUN_00622273();
    iVar4 = FUN_0062465d(param_1,*(undefined4 *)(iVar2 + 0x50));
    puVar6 = (undefined4 *)(iVar4 + 8);
    pcVar5 = (code *)*puVar6;
  }
  if (pcVar5 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_00623905(1);
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    if (bVar1) {
      FUN_00623905(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_c = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar2 + 0x54) = 0;
    if (param_1 == 8) {
      local_10 = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar2 + 0x58) = 0x8c;
      goto LAB_006245d5;
    }
  }
  else {
LAB_006245d5:
    if (param_1 == 8) {
      if (DAT_006882b8 < DAT_006882bc + DAT_006882b8) {
        iVar3 = DAT_006882b8 * 0xc;
        iVar4 = DAT_006882b8;
        do {
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(*(int *)(iVar2 + 0x50) + -4 + iVar3) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_006882bc + DAT_006882b8);
      }
      goto LAB_00624613;
    }
  }
  *puVar6 = 0;
LAB_00624613:
  if (bVar1) {
    FUN_00623905(1);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,*(undefined4 *)(iVar2 + 0x58));
  }
  else {
    (*pcVar5)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar2 + 0x54) = local_c;
  if (param_1 == 8) {
    *(undefined4 *)(iVar2 + 0x58) = local_10;
  }
  return 0;
}

