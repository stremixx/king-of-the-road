
int FUN_0058a530(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int local_1b8;
  undefined4 local_1b0 [12];
  undefined4 local_180 [12];
  undefined4 local_150 [12];
  undefined1 local_120 [8];
  undefined4 local_118 [7];
  undefined1 local_fc [12];
  undefined1 local_f0 [36];
  undefined1 local_cc [12];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  iVar6 = 0;
  local_1b8 = 0;
  puVar2 = local_118;
  iVar4 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = local_150 + 2;
  iVar4 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = local_180 + 2;
  puVar7 = &DAT_00701550;
  puVar8 = local_150;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = local_1b0 + 2;
  puVar7 = &DAT_00701550;
  puVar8 = local_180;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = &DAT_00701550;
  puVar7 = local_1b0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  fVar9 = (float10)FUN_004e1fd9();
  while( true ) {
    iVar4 = *(int *)(param_1 + 0xdb4 + iVar6 * 4);
    if (iVar4 == 0) {
      return local_1b8;
    }
    fVar1 = (ABS(*(float *)(iVar4 + 0xce4) - *(float *)(param_1 + 0xce4)) +
            ABS(*(float *)(iVar4 + 0xce8) - *(float *)(param_1 + 0xce8)) +
            ABS(*(float *)(iVar4 + 0xcec) - *(float *)(param_1 + 0xcec))) * (float)fVar9 +
            *(float *)(iVar4 + 0xcc8) + *(float *)(param_1 + 0xcc8);
    if (fVar1 * fVar1 < *(float *)(param_1 + 0xdcc + iVar6 * 4)) break;
    if ((*(int *)(iVar4 + 0x188) == 2) || (*(int *)(iVar4 + 0x188) == 1)) {
      if (iVar6 == 0) {
        FUN_0057d570(local_60);
        puVar2 = (undefined4 *)FUN_0057d5a0(local_c0);
        puVar7 = local_150;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = (undefined4 *)FUN_005ab130(local_90,local_150,param_2);
        puVar7 = local_180;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = (undefined4 *)FUN_005aba00(local_30,local_180);
        puVar7 = local_1b0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      FUN_0057d570(local_120);
      FUN_005ab130(local_f0,local_120,local_1b0);
      iVar4 = *(int *)(param_1 + 0xdb4 + iVar6 * 4);
      iVar5 = *(int *)(param_3 + 0xb00);
      if (*(int *)(iVar4 + 0x188) == 2) {
        iVar4 = FUN_00589720(iVar4,local_f0,param_3,param_1,0xffffffff);
        local_1b8 = local_1b8 + iVar4;
      }
      else if ((*(int *)(iVar4 + 0x188) == 1) &&
              (iVar4 = FUN_00584350(local_fc,local_cc,*(undefined4 *)(iVar4 + 0xcc8),param_3,param_1
                                    ,0xffffffff), iVar4 != 0)) {
        local_1b8 = local_1b8 + iVar4;
        uVar3 = FUN_00588ac0(*(undefined4 *)(param_1 + 0xdb4 + iVar6 * 4));
        *(undefined4 *)(param_3 + 0x5fc + *(int *)(param_3 + 0xb00) * 4) = uVar3;
      }
      if (iVar5 < *(int *)(param_3 + 0xb00)) {
        iVar4 = *(int *)(param_3 + 0xb00) - iVar5;
        puVar2 = (undefined4 *)(iVar5 * 0x30 + 0xd04 + param_3);
        do {
          iVar4 = iVar4 + -1;
          puVar7 = local_1b0;
          puVar8 = puVar2;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar2 = puVar2 + 0xc;
        } while (iVar4 != 0);
      }
    }
    iVar4 = FUN_00589720(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0xdb4 + iVar6 * 4),1);
    local_1b8 = local_1b8 + iVar4;
    iVar6 = iVar6 + 1;
    if (5 < iVar6) {
      return local_1b8;
    }
  }
  return local_1b8;
}

