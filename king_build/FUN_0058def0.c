
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058def0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  int local_4b4;
  float local_49c [4];
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  undefined1 local_454 [500];
  undefined1 local_260 [100];
  undefined1 local_1fc [100];
  undefined1 local_198 [100];
  undefined1 local_134 [100];
  undefined1 local_d0 [100];
  undefined1 local_6c [104];
  
  pfVar8 = local_49c + 2;
  iVar9 = 4;
  do {
    pfVar8[-2] = 0.0;
    pfVar8[-1] = 0.0;
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pfVar8 = (float *)&DAT_00701550;
  pfVar10 = local_49c;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar10 = pfVar10 + 1;
  }
  FUN_005f1c10();
  pfVar8 = param_2 + 6;
  pfVar10 = param_2 + 3;
  local_4b4 = 0;
  do {
    local_4e0 = 0.0;
    local_4dc = 0.0;
    local_4d8 = 0.0;
    if (local_4b4 == 0) {
      local_4e0 = DAT_007015a0;
      local_4dc = DAT_007015a4;
      local_4d8 = DAT_007015a8;
    }
    else if (local_4b4 == 1) {
      local_4e0 = DAT_00701580;
      local_4dc = DAT_00701584;
      local_4d8 = DAT_00701588;
    }
    else if (local_4b4 == 2) {
      local_4e0 = DAT_00701590;
      local_4dc = DAT_00701594;
      local_4d8 = DAT_00701598;
    }
    dVar7 = (double)local_4dc * (double)*pfVar10 +
            (double)local_4d8 * (double)*pfVar8 + (double)local_4e0 * (double)*param_2;
    local_46c = local_4dc * *(float *)(param_1 + 0x230) +
                local_4d8 * *(float *)(param_1 + 0x23c) + local_4e0 * *(float *)(param_1 + 0x224);
    local_468 = local_4e0 * *(float *)(param_1 + 0x228) +
                local_4dc * *(float *)(param_1 + 0x234) + local_4d8 * *(float *)(param_1 + 0x240);
    local_464 = local_4dc * *(float *)(param_1 + 0x238) +
                local_4d8 * *(float *)(param_1 + 0x244) + local_4e0 * *(float *)(param_1 + 0x22c);
    fVar3 = local_4e0 * *(float *)(param_1 + 500) +
            local_4dc * *(float *)(param_1 + 0x200) + local_4d8 * *(float *)(param_1 + 0x20c);
    fVar4 = local_4e0 * *(float *)(param_1 + 0x1f8) +
            local_4dc * *(float *)(param_1 + 0x204) + local_4d8 * *(float *)(param_1 + 0x210);
    fVar5 = local_4e0 * *(float *)(param_1 + 0x1fc) +
            local_4dc * *(float *)(param_1 + 0x208) + local_4d8 * *(float *)(param_1 + 0x214);
    local_460 = local_4e0 * local_49c[0] + local_4dc * local_49c[3] + local_4d8 * local_484;
    local_45c = local_4e0 * local_49c[1] + local_4dc * local_48c + local_4d8 * local_480;
    local_458 = local_4e0 * local_49c[2] + local_4dc * local_488 + local_4d8 * local_47c;
    dVar1 = (double)(local_4dc * param_2[5] + local_4d8 * param_2[8] + local_4e0 * param_2[2]);
    dVar2 = (double)(local_4dc * param_2[4] + local_4d8 * param_2[7] + local_4e0 * param_2[1]);
    dVar1 = dVar1 * dVar1 + dVar2 * dVar2 + dVar7 * dVar7;
    fVar6 = local_464 * local_464 + local_468 * local_468 + local_46c * local_46c;
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
    fVar4 = local_460 * local_460 + local_458 * local_458 + local_45c * local_45c;
    if (((((_DAT_0064c908 < dVar1) || (dVar1 < _DAT_0064ca48)) || ((float)_DAT_0064c908 < fVar6)) ||
        ((fVar6 < (float)_DAT_0064ca48 || ((float)_DAT_0064c908 < fVar3)))) ||
       ((fVar3 < (float)_DAT_0064ca48 ||
        (((float)_DAT_0064c908 < fVar4 || (fVar4 < (float)_DAT_0064ca48)))))) {
      FUN_004e9574();
      FUN_004e3cf8();
      FUN_0061c369(local_454,s_testAM__s___d__0X___s_while__s_i_0067cdfc,local_260,param_4,param_4,
                   param_3,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x40) + 0xc),
                   *(undefined4 *)(*(int *)(param_1 + 800) + 0xc));
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s_Viewer_Pos__6_3f__6_3f__6_3f_0067cddc,(double)_DAT_00695954,
                   (double)_DAT_00695958,(double)_DAT_0069595c);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s_testM__6_3f__6_3f__6_3f_0067cdc0,(double)param_2[9],
                   (double)param_2[10],(double)param_2[0xb]);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)*param_2,(double)param_2[1],
                   (double)param_2[2]);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)*pfVar10,(double)param_2[4],
                   (double)param_2[5]);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)*pfVar8,(double)param_2[7],
                   (double)param_2[8]);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s_M_pos__6_3f__6_3f__6_3f_0067cd90,(double)*(float *)(param_1 + 0x218),
                   (double)*(float *)(param_1 + 0x21c),(double)*(float *)(param_1 + 0x220));
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)*(float *)(param_1 + 500),
                   (double)*(float *)(param_1 + 0x1f8),(double)*(float *)(param_1 + 0x1fc));
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)*(float *)(param_1 + 0x200),
                   (double)*(float *)(param_1 + 0x204),(double)*(float *)(param_1 + 0x208));
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)*(float *)(param_1 + 0x20c),
                   (double)*(float *)(param_1 + 0x210),(double)*(float *)(param_1 + 0x214));
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s_placeNode_pos__6_3f__6_3f__6_3f_0067cd6c,(double)local_478,
                   (double)local_474,(double)local_470);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)local_49c[0],(double)local_49c[1],
                   (double)local_49c[2]);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)local_49c[3],(double)local_48c,
                   (double)local_488);
      FUN_004e9b5b(local_454);
      FUN_0061c369(local_454,s__6_3f__6_3f__6_3f_0067cdac,(double)local_484,(double)local_480,
                   (double)local_47c);
      FUN_004e9b5b(local_454);
      FUN_004e9620();
      puVar11 = local_454;
      uVar12 = CONCAT44(param_3,s_testAM__while__s_see_log_0067cd50);
      FUN_0061c369();
      FUN_004e1e9c(local_454,puVar11,uVar12);
    }
    local_4b4 = local_4b4 + 1;
  } while (local_4b4 < 3);
  iVar9 = FUN_004e2140(param_2 + 9,0x466a6000);
  if (iVar9 != 0) {
    FUN_0061c369(local_134,s_testAM_v_3____d__0X___s__s_in_ro_0067cd28,param_4,param_4,param_3,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x40) + 0xc),
                 *(undefined4 *)(*(int *)(param_1 + 800) + 0xc));
    FUN_0061c369(local_198,s_old_pos__6_3f__6_3f__6_3f_0067ccb0,(double)*(float *)(param_1 + 0x248),
                 (double)*(float *)(param_1 + 0x24c),(double)*(float *)(param_1 + 0x250));
    FUN_0061c369(local_d0,s_testM___6_3f__6_3f__6_3f_0067cd0c,(double)param_2[9],(double)param_2[10]
                 ,(double)param_2[0xb]);
    FUN_0061c369(local_6c,s__6_3f__6_3f__6_3f_0067cdac,(double)*param_2,(double)param_2[1],
                 (double)param_2[2]);
    FUN_0061c369(local_1fc,s__6_3f__6_3f__6_3f_0067cdac,(double)*pfVar10,(double)param_2[4],
                 (double)param_2[5]);
    FUN_0061c369(local_260,s__6_3f__6_3f__6_3f_0067cdac,(double)*pfVar8,(double)param_2[7],
                 (double)param_2[8]);
    FUN_0061c369(local_454,s__s_s_s_s_s_s_0067ccfc,local_134,local_198,local_d0,local_6c,local_1fc,
                 local_260);
    FUN_004e1e9c(local_454);
  }
  return;
}

