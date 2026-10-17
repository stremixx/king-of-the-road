
void __fastcall FUN_0056a7b0(char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcStack_e4;
  undefined1 **local_d0;
  uint local_cc;
  undefined1 *local_c8;
  char local_c4 [32];
  int iStack_a4;
  undefined1 local_a0 [80];
  undefined1 *local_50;
  undefined4 local_4c;
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646b88;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  local_d0 = (undefined1 **)0x0;
  ExceptionList = &local_c;
  switch(*(int *)(param_1 + 0x3c)) {
  case 1:
    pcStack_e4 = (char *)0x7;
    ExceptionList = &local_c;
    local_50 = (undefined1 *)FUN_005d2500();
    break;
  case 2:
    pcStack_e4 = (char *)0x8;
    ExceptionList = &local_c;
    local_50 = (undefined1 *)FUN_005d2500();
    local_d0 = (undefined1 **)0x1;
    pcStack_e4 = (char *)0x56a984;
    FUN_006022c0();
    pcStack_e4 = (char *)0x3;
    local_4 = 0;
    local_cc._0_2_ = (ushort)DAT_00695864;
    FUN_006027f0(0x3b7,&local_cc);
    pcStack_e4 = (char *)(local_20 - local_24);
    FUN_00601820(local_24);
    local_4 = 0xffffffff;
    pcStack_e4 = (char *)0x56a9e3;
    FUN_00602560();
    goto switchD_0056a7ec_caseD_4;
  case 3:
    pcStack_e4 = *(char **)(param_1 + 0x38);
    ExceptionList = &local_c;
    uVar9 = FUN_005d2500(3,*(undefined4 *)(param_1 + 0x34));
    FUN_0061c369(local_a0,uVar9);
    goto LAB_0056a85a;
  default:
    goto switchD_0056a7ec_caseD_4;
  case 5:
    local_c8 = (undefined1 *)&pcStack_e4;
    ExceptionList = &local_c;
    pcStack_e4 = param_1;
    FUN_00568670(&pcStack_e4);
    uVar6 = FUN_0043f700();
    uVar6 = ~uVar6 >> 0xc & 1;
    pcStack_e4 = (char *)0x56aa1e;
    iVar5 = FUN_005686e0();
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar5 == 2) {
      if (iVar4 == 0) {
        pcStack_e4 = s_m15_mess4_msk_0067a910;
      }
      else if ((iVar4 == 1) && (uVar6 != 0)) {
        pcStack_e4 = s_m15_mess1_msk_0067a920;
      }
      else {
        pcStack_e4 = s_m15_mess2_msk_0067a930;
      }
    }
    else if (iVar4 == 0) {
      pcStack_e4 = s_m16_mess4_msk_0067a8e0;
    }
    else if ((iVar4 == 1) && (uVar6 != 0)) {
      pcStack_e4 = s_m16_mess1_msk_0067a8f0;
    }
    else {
      pcStack_e4 = s_m16_mess2_msk_0067a900;
    }
    local_cc = FUN_005eea00();
    piVar3 = DAT_006957ac;
    pcStack_e4 = (char *)0x56aa7d;
    (**(code **)(*DAT_006957ac + 0x14))();
    uVar6 = local_cc;
    uVar2 = *(ushort *)(local_cc + 6);
    pcStack_e4 = (char *)0x56aa8e;
    iVar4 = (**(code **)(*piVar3 + 0x18))();
    uVar1 = *(ushort *)(uVar6 + 4);
    iVar5 = (int)(iVar4 - (uint)uVar2) / 2;
    pcStack_e4 = (char *)0x56aaab;
    iVar4 = (**(code **)(*piVar3 + 0x14))();
    pcStack_e4 = (char *)0xffffffff;
    iVar4 = iVar4 - (uint)uVar1;
    FUN_005b8030(piVar3[3],iVar4,iVar5 + 0x14,local_cc);
    if (*(int *)(param_1 + 0x34) < 1) {
      pcStack_e4 = *(char **)(param_1 + 0x38);
      FUN_0061c369(local_a0,&DAT_0066b8cc);
      FUN_005e97a0(piVar3[3],iVar4 + 0xd1,iVar5 + 0xad,*(undefined4 *)(DAT_006f2398 + 0x508),
                   local_a0,6,0);
      pcStack_e4 = DAT_006f23e0;
      FUN_0061c369(local_a0,&DAT_0066b8cc);
      iVar7 = iVar4 + 0xac;
      FUN_005e97a0(piVar3[3],iVar7,iVar5 + 0xec,*(undefined4 *)(DAT_006f2398 + 0x508),local_a0,6,0);
      pcStack_e4 = DAT_006f23e4;
      FUN_0061c369(local_a0,&DAT_0066b8cc);
      FUN_005e97a0(piVar3[3],iVar7,iVar5 + 0xd7,*(undefined4 *)(DAT_006f2398 + 0x508),local_a0,6,0);
      pcStack_e4 = DAT_006f23e0 + -(int)DAT_006f23e4;
      FUN_0061c369(local_a0,&DAT_0066b8cc);
      uVar9 = *(undefined4 *)(DAT_006f2398 + 0x508);
      iVar5 = iVar5 + 299;
    }
    else {
      pcStack_e4 = (char *)(*(int *)(param_1 + 0x38) % 100);
      FUN_0061c369(local_a0,&DAT_0066b8cc);
      iVar7 = iVar4 + 0xa5;
      FUN_005e97a0(piVar3[3],iVar7,iVar5 + 0x10d,*(undefined4 *)(DAT_006f2398 + 0x508),local_a0,6,0)
      ;
      FUN_005e97a0(piVar3[3],iVar4 + 0x81,iVar5 + 0x126,*(undefined4 *)(DAT_006f2398 + 0x508),
                   DAT_006cdc38 + 0x278,6,0);
      if (DAT_006957f0 != 2) {
        pcStack_e4 = (char *)(*(int *)(param_1 + 0x38) / 6000);
        FUN_0061c369(local_a0,&DAT_0066b8cc);
        uVar9 = *(undefined4 *)(DAT_006f2398 + 0x508);
        iVar4 = piVar3[3];
        iVar5 = iVar5 + 0x13f;
        goto LAB_0056ad21;
      }
      pcStack_e4 = (char *)(*(int *)(param_1 + 0x38) / 6000);
      FUN_0061c369(local_a0,s__d_min_0067a8d8);
      uVar9 = *(undefined4 *)(DAT_006f2398 + 0x508);
      iVar5 = iVar5 + 0x13f;
      iVar7 = iVar4 + 0x7d;
    }
    iVar4 = piVar3[3];
LAB_0056ad21:
    FUN_005e97a0(iVar4,iVar7,iVar5,uVar9,local_a0,6,0);
    if (*(int *)(param_1 + 0x10) != 2) {
      ExceptionList = local_c;
      return;
    }
    pcStack_e4 = s_ovationSound_006721dc;
    iVar4 = FUN_005eea00();
    if (iVar4 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcStack_e4 = (char *)0x3f800000;
    FUN_005fd160(0x3f800000);
    ExceptionList = local_c;
    return;
  case 6:
    pcStack_e4 = (char *)0x4;
    ExceptionList = &local_c;
    local_50 = (undefined1 *)FUN_005d2500();
    local_4c = FUN_005d2500(5);
    local_d0 = (undefined1 **)0x2;
    goto switchD_0056a7ec_caseD_4;
  case 7:
    pcStack_e4 = *(char **)(param_1 + 0x34);
    ExceptionList = &local_c;
    uVar9 = FUN_005d2500(6);
    FUN_0061c369(local_a0,uVar9);
LAB_0056a85a:
    local_50 = local_a0;
    break;
  case 8:
  case 9:
    local_50 = *(undefined1 **)(param_1 + 0x30);
    ExceptionList = &local_c;
    break;
  case 10:
    pcStack_e4 = (char *)0x56ad65;
    ExceptionList = &local_c;
    iVar4 = FUN_005686e0();
    if (iVar4 == 2) {
      pcStack_e4 = *(char **)(param_1 + 0x34);
      pcVar10 = s_m15_mess_d_msk_0067a8c8;
    }
    else {
      pcStack_e4 = *(char **)(param_1 + 0x34);
      pcVar10 = s_m16_mess_d_msk_0067a8b8;
    }
    FUN_0061c369(local_c4,pcVar10);
    pcStack_e4 = local_c4;
    iVar4 = FUN_005eea00();
    piVar3 = DAT_006957ac;
    if (iVar4 == 0) goto switchD_0056a7ec_caseD_4;
    pcStack_e4 = (char *)0x56adb4;
    (**(code **)(*DAT_006957ac + 0x14))();
    pcStack_e4 = (char *)0x56adbb;
    (**(code **)(*piVar3 + 0x18))();
    uVar2 = *(ushort *)(iVar4 + 4);
    pcStack_e4 = (char *)0x56adcc;
    iVar7 = (**(code **)(*piVar3 + 0x14))();
    pcStack_e4 = (char *)0xffffffff;
    iVar7 = iVar7 - (uint)uVar2;
    FUN_005b8030(piVar3[3],iVar7,0x32,iVar4);
    pcStack_e4 = *(char **)(param_1 + 0x38);
    FUN_0061c369(local_c4,&PTR_LAB_006769d4);
    pcStack_e4 = local_c4;
    iVar8 = FUN_005e9710();
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar5 < 9) || (iVar5 == 0x14)) {
      uVar9 = 0x94;
LAB_0056aea5:
      iVar8 = (uint)*(ushort *)(iVar4 + 4) - iVar8;
      iVar5 = piVar3[3];
    }
    else {
      if (0xb < iVar5) {
        if (iVar5 == 0x10) {
          uVar9 = 0x105;
        }
        else {
          if (0x13 < iVar5) goto LAB_0056aec1;
          uVar9 = 0x1af;
        }
        goto LAB_0056aea5;
      }
      iVar8 = (uint)*(ushort *)(iVar4 + 4) - iVar8;
      uVar9 = 0x9d;
      iVar5 = piVar3[3];
    }
    pcStack_e4 = (char *)0x0;
    FUN_005e97a0(iVar5,iVar8 / 2 + iVar7,uVar9,DAT_006cdc84,local_c4,6);
LAB_0056aec1:
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar5 == 0xe) {
      pcStack_e4 = *(char **)(param_1 + 0x30);
      iVar5 = FUN_005e9710();
      pcStack_e4 = (char *)0x0;
      FUN_005e97a0(piVar3[3],(int)((uint)*(ushort *)(iVar4 + 4) - iVar5) / 2 + iVar7,0xa0,
                   DAT_006cdc84,*(undefined4 *)(param_1 + 0x30),6);
      ExceptionList = local_c;
      return;
    }
    if (iVar5 == 10) {
      pcStack_e4 = (char *)0x56af3b;
      pcStack_e4 = (char *)__ftol();
      FUN_0061c369(local_c4,&DAT_0066b8cc);
      FUN_005e97a0(piVar3[3],iVar7 + 0x52,0x110,DAT_006cdc84,local_c4,6,0);
      pcStack_e4 = (char *)0x56af94;
      pcStack_e4 = (char *)__ftol();
      FUN_0061c369(local_c4,&DAT_0066b8cc);
      FUN_005e97a0(piVar3[3],iVar7 + 0x52,0x13e,DAT_006cdc84,local_c4,6,0);
      ExceptionList = local_c;
      return;
    }
    if (iVar5 == 0x10) {
      pcStack_e4 = (char *)0x56aff9;
      pcStack_e4 = (char *)__ftol();
      FUN_0061c369(local_c4,&DAT_0066b8cc);
      FUN_005e97a0(piVar3[3],iVar7 + 0x89,0x8e,DAT_006cdc84,local_c4,6,0);
      pcStack_e4 = (char *)0x56b056;
      pcStack_e4 = (char *)__ftol();
      FUN_0061c369(local_c4,&DAT_0066b8cc);
      FUN_005e97a0(piVar3[3],iVar7 + 0x89,0x9e,DAT_006cdc84,local_c4,6,0);
      ExceptionList = local_c;
      return;
    }
    if (iVar5 != 0xf) {
      ExceptionList = local_c;
      return;
    }
    pcStack_e4 = *(char **)(param_1 + 0x30);
    FUN_005e9710();
    pcStack_e4 = (char *)0x0;
    FUN_005e97e0(piVar3[3],iVar7 + 0x2d,0xe3,0xbe,DAT_006cdc84,*(undefined4 *)(param_1 + 0x30),6);
    ExceptionList = local_c;
    return;
  }
  local_d0 = (undefined1 **)0x1;
switchD_0056a7ec_caseD_4:
  piVar3 = DAT_006957ac;
  pcStack_e4 = (char *)0x56a87a;
  local_c8 = (undefined1 *)(**(code **)(*DAT_006957ac + 0x14))();
  pcVar10 = *(char **)(param_1 + 0x2c);
  iStack_a4 = (int)((int)local_c8 - (uint)*(ushort *)(pcVar10 + 0x14)) / 2;
  local_cc = (uint)*(ushort *)(pcVar10 + 0x16);
  pcStack_e4 = (char *)0x56a8a3;
  iVar4 = (**(code **)(*piVar3 + 0x18))();
  iVar4 = iVar4 - local_cc;
  pcStack_e4 = pcVar10;
  FUN_005b7d70(piVar3[3],iStack_a4,iVar4);
  if (local_d0 != (undefined1 **)0x0) {
    iVar4 = iVar4 + 0x14;
    local_cc = (uint)local_d0;
    local_d0 = &local_50;
    do {
      pcVar10 = *local_d0;
      pcStack_e4 = pcVar10;
      iVar5 = FUN_005e9710();
      pcStack_e4 = (char *)0x0;
      FUN_005e97a0(piVar3[3],((int)local_c8 - iVar5) / 2,iVar4,DAT_006cdc84,pcVar10,6);
      iVar4 = iVar4 + 10;
      local_d0 = local_d0 + 1;
      local_cc = local_cc - 1;
    } while (local_cc != 0);
  }
  if (*(int *)(param_1 + 0x3c) == 8) {
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
  }
  ExceptionList = local_c;
  return;
}

