
int * FUN_00410ee0(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  int *local_64;
  int *local_60 [2];
  uint uStack_58;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [24];
  undefined1 auStack_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063c207;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_00631d33(0x80);
  local_4._0_1_ = 1;
  local_64 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_004042a0();
    local_4._0_1_ = 2;
    FUN_00411ae0();
    piVar4[8] = 0;
    FUN_004042a0();
    local_4._0_1_ = 4;
    FUN_004011e0(piVar4 + 0xc,4,2,&LAB_00411ad0);
    piVar4[0xe] = -1;
    FUN_00405ea0(0,0,0,0,0,0);
    FUN_00478a20(&local_67);
    local_4._0_1_ = 5;
    FUN_00478a20(&local_66);
    local_4._0_1_ = 6;
    FUN_00478a20(&local_65);
  }
  piVar5 = (int *)FUN_00409000(local_60,&param_2);
  local_4._0_1_ = 7;
  if ((((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
      (param_2[1] = param_2[1] + -1, param_2[1] == 0)) &&
     ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
     ((local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0 && (local_60[0] != (int *)0x0)))) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar6 = (int *)FUN_00407e60(local_60,&param_2);
  iVar7 = piVar4[9];
  piVar5 = piVar4 + 9;
  local_4._0_1_ = 8;
  if ((((iVar7 != 0) && ((piVar4[0xb] & 0x10000U) == 0)) &&
      (*(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1, *(int *)(*piVar5 + 4) == 0)) &&
     ((cVar3 = FUN_00408fd0(piVar5,piVar6), cVar3 == '\0' && ((int *)*piVar5 != (int *)0x0)))) {
    (**(code **)(*(int *)*piVar5 + 0xc))(1);
  }
  if ((piVar6[2] & 0x10000U) == 0) {
    piVar4[10] = 0;
    iVar7 = *piVar6;
    if (iVar7 == 0) {
      *piVar5 = 0;
      piVar4[0xb] = 0;
    }
    else {
      *piVar5 = iVar7;
      piVar4[0xb] = piVar6[2];
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
    }
  }
  else {
    piVar4[0xb] = piVar6[2];
    *piVar5 = *piVar6;
    piVar4[10] = piVar6[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
     ((local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0 && (local_60[0] != (int *)0x0)))) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00407e60(local_60,&param_2);
  iVar7 = *piVar5;
  local_4._0_1_ = 9;
  piVar5 = (int *)(iVar7 + 0xc);
  if (piVar5 != piVar4) {
    iVar8 = *(int *)(iVar7 + 0x10);
    iVar1 = *piVar5;
    iVar2 = *piVar4;
    piVar6 = (int *)(iVar8 - iVar1);
    local_64 = piVar6;
    if ((int *)(piVar4[2] - iVar2) < piVar6) {
      iVar7 = FUN_00458d60(piVar6,iVar1,iVar8);
      iVar8 = piVar4[2] - *piVar4;
      if (iVar8 != 0) {
        FUN_0044b440(*piVar4,iVar8);
      }
      *piVar4 = iVar7;
      piVar4[2] = iVar7 + (int)piVar6;
    }
    else if ((int *)(piVar4[1] - iVar2) < piVar6) {
      FUN_00407250(iVar1,(piVar4[1] - iVar2) + iVar1,iVar2);
      FUN_00407250((piVar4[1] - *piVar4) + *piVar5,*(undefined4 *)(iVar7 + 0x10),piVar4[1]);
      piVar6 = local_64;
    }
    else {
      FUN_00407250(iVar1,iVar8,iVar2);
      piVar6 = local_64;
    }
    piVar4[1] = *piVar4 + (int)piVar6;
  }
  local_4._0_1_ = 0;
  if (((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
      (local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0)) && (local_60[0] != (int *)0x0)) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00409000(local_60,&param_2);
  local_4._0_1_ = 10;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     ((param_2[1] = param_2[1] + -1, param_2[1] == 0 &&
      ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if (((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
      (local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0)) && (local_60[0] != (int *)0x0)) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00409000(local_60,&param_2);
  local_4._0_1_ = 0xb;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     ((param_2[1] = param_2[1] + -1, param_2[1] == 0 &&
      ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if (((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
      (local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0)) && (local_60[0] != (int *)0x0)) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00407e60(local_60,&param_2);
  local_4._0_1_ = 0xc;
  piVar5 = (int *)FUN_00436650(&local_64,*(undefined4 *)(*piVar5 + 0xc));
  piVar4[3] = *piVar5;
  local_4._0_1_ = 0;
  if ((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
     ((local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0 && (local_60[0] != (int *)0x0)))) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00409000(local_60,&param_2);
  local_4._0_1_ = 0xd;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     ((param_2[1] = param_2[1] + -1, param_2[1] == 0 &&
      ((cVar3 = FUN_00408fd0(&param_2,piVar5), cVar3 == '\0' && (param_2 != (int *)0x0)))))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar5[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar5;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar5[2];
      *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 1;
    }
  }
  else {
    param_2 = (int *)*piVar5;
    param_3 = piVar5[1];
  }
  local_4._0_1_ = 0;
  if (((((uStack_58 & 0x10000) == 0) && (local_60[0] != (int *)0x0)) &&
      (local_60[0][1] = local_60[0][1] + -1, local_60[0][1] == 0)) && (local_60[0] != (int *)0x0)) {
    (**(code **)(*local_60[0] + 0xc))(1);
  }
  piVar5 = (int *)FUN_00407e60(auStack_54,&param_2);
  local_4._0_1_ = 0xe;
  FUN_0044c100(*piVar5 + 0xc);
  local_4._0_1_ = 0;
  FUN_00492340();
  uVar9 = FUN_00409000(auStack_54,&param_2);
  local_4._0_1_ = 0xf;
  FUN_0040c060(uVar9);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  piVar5 = (int *)FUN_00407e60(auStack_54,&param_2);
  pcVar11 = *(char **)(*piVar5 + 0xc);
  FUN_00492340();
  iVar7 = -1;
  pcVar10 = pcVar11;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  if (iVar7 == -2) {
    piVar4[0xc] = -1;
  }
  else {
    piVar5 = (int *)FUN_004365f0(&local_64,pcVar11);
    piVar4[0xc] = *piVar5;
  }
  uVar9 = FUN_00409000(auStack_54,&param_2);
  local_4._0_1_ = 0x10;
  FUN_0040c060(uVar9);
  local_4._0_1_ = 0;
  FUN_00492340();
  piVar5 = (int *)FUN_00407e60(auStack_54,&param_2);
  pcVar11 = *(char **)(*piVar5 + 0xc);
  FUN_00492340();
  iVar7 = -1;
  pcVar10 = pcVar11;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  if (iVar7 == -2) {
    piVar4[0xd] = -1;
  }
  else {
    piVar5 = (int *)FUN_004365f0(&local_64,pcVar11);
    piVar4[0xd] = *piVar5;
  }
  if ((char)param_4 == '\x02') {
    uVar9 = FUN_00409000(auStack_54,&param_2);
    local_4._0_1_ = 0x11;
    FUN_0040c060(uVar9);
    local_4._0_1_ = 0;
    FUN_00492340();
    if ((char)param_4 == '\x02') {
      iVar7 = FUN_00407e60(auStack_54,&param_2);
      cVar3 = *(char *)(iVar7 + 8);
      FUN_00492340();
      if (cVar3 != '\x03') goto LAB_0041175e;
      piVar5 = (int *)FUN_00407e60(auStack_54,&param_2);
      local_4._0_1_ = 0x12;
      FUN_0044c100(*piVar5 + 0xc);
      local_4._0_1_ = 0;
      FUN_00492340();
    }
    else {
LAB_0041175e:
      FUN_00447200();
    }
    if ((char)param_4 == '\x02') {
      uVar9 = FUN_00409000(auStack_54,&param_2);
      local_4._0_1_ = 0x13;
      FUN_0040c060(uVar9);
      local_4._0_1_ = 0;
      FUN_00492340();
      if ((char)param_4 == '\x02') {
        iVar7 = FUN_00407e60(auStack_54,&param_2);
        cVar3 = *(char *)(iVar7 + 8);
        FUN_00492340();
        if (cVar3 != '\x03') goto LAB_00411816;
        piVar5 = (int *)FUN_00407e60(auStack_54,&param_2);
        local_4._0_1_ = 0x14;
        FUN_0044c100(*piVar5 + 0xc);
        local_4._0_1_ = 0;
        FUN_00492340();
      }
      else {
LAB_00411816:
        FUN_00447200();
      }
      if ((char)param_4 == '\x02') {
        uVar9 = FUN_00409000(auStack_54,&param_2);
        local_4._0_1_ = 0x15;
        FUN_0040c060(uVar9);
        local_4._0_1_ = 0;
        FUN_00492340();
        if ((char)param_4 == '\x02') {
          iVar7 = FUN_00407e60(auStack_54,&param_2);
          cVar3 = *(char *)(iVar7 + 8);
          FUN_00492340();
          if (cVar3 == '\x02') {
            uVar9 = FUN_00407e60(auStack_48,&param_2);
            local_4._0_1_ = 0x16;
            FUN_0044ca50(uVar9);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00492340();
            while ((char)uStack_58 == '\x02') {
              uVar9 = FUN_00407ec0(auStack_3c,local_60);
              local_4._0_1_ = 0x1a;
              FUN_004556d0(uVar9);
              local_4 = CONCAT31(local_4._1_3_,0x1c);
              FUN_00492340();
              iVar7 = FUN_004b8250();
              iVar8 = -1;
              pcVar11 = *(char **)(iVar7 + 0xc);
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                cVar3 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar3 != '\0');
              if (iVar8 != -2) {
                uVar9 = FUN_004365f0(&local_64,*(char **)(iVar7 + 0xc));
                FUN_00448830(uVar9);
              }
              local_4 = local_4 & 0xffffff00;
              FUN_00492340();
              uVar9 = FUN_00407f50(auStack_24,local_60);
              local_4._0_1_ = 0x19;
              FUN_0044cae0(uVar9);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00492340();
            }
            local_4._1_3_ = (uint3)(local_4 >> 8);
            local_4._0_1_ = 0;
            FUN_00492340();
          }
        }
      }
    }
  }
  iVar7 = piVar4[0xc];
  if (iVar7 == -1) {
LAB_004119fd:
    if (piVar4[0xd] == -1) goto LAB_00411a19;
    iVar7 = *(int *)(DAT_0068be60 + piVar4[0xd] * 4);
LAB_00411a0d:
    iVar7 = iVar7 + 0x30;
  }
  else {
    if (piVar4[0xd] == -1) {
      if (iVar7 == -1) goto LAB_004119fd;
      iVar7 = *(int *)(DAT_0068be60 + iVar7 * 4);
      goto LAB_00411a0d;
    }
    piVar5 = (int *)FUN_00480520(&local_64,iVar7,piVar4[0xd]);
    piVar4[0xe] = *piVar5;
    uVar9 = FUN_00411a70(auStack_24,*(int *)(DAT_0068be60 + piVar4[0xc] * 4) + 0x30,
                         *(int *)(DAT_0068be60 + piVar4[0xd] * 4) + 0x30);
    iVar7 = FUN_00411aa0(auStack_3c,0,0x3fe00000,uVar9);
  }
  FUN_00405ed0(iVar7);
LAB_00411a19:
  piVar5 = (int *)piVar4[0x1c];
  if (piVar5 != (int *)piVar4[0x1d]) {
    do {
      FUN_00405ed0(*(int *)(DAT_0068be60 + *piVar5 * 4) + 0x30);
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)piVar4[0x1d]);
  }
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return piVar4;
}

