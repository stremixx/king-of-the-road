
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0055cd20(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  undefined4 uVar14;
  int local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1[0x155a] == 0) {
    FUN_00556180();
    param_1[0x9e9] = param_1[0x9e9] & 0xfffdffff;
    return;
  }
  param_1[0x9e9] = param_1[0x9e9] | 0x20000;
  FUN_005580a0();
  local_80 = 1;
  if (((param_1[0x155b] != 0) && (param_1[0x12d] == 0)) && (*(int *)(param_1[0x1514] + 0x2638) == 1)
     ) {
    iVar9 = param_1[0xa29];
    pfVar7 = (float *)(param_1 + 0xad);
    pfVar12 = local_30;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar12 = pfVar12 + 1;
    }
    fVar2 = local_30[0] * (float)(&DAT_00696f98)[iVar9 * 0x25c] +
            local_30[3] * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_18 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] + local_c;
    fVar3 = local_30[1] * (float)(&DAT_00696f98)[iVar9 * 0x25c] +
            local_20 * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_14 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] + local_8;
    fVar4 = local_30[2] * (float)(&DAT_00696f98)[iVar9 * 0x25c] +
            local_1c * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_10 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] + local_4;
    fVar1 = *(float *)(&DAT_00696fc8 + iVar9 * 0x970);
    iVar9 = *(int *)(param_1[0x155a] + 0x28b4);
    pfVar7 = (float *)(param_1[0x155a] + 0x2c4);
    pfVar12 = local_30;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar12 = pfVar12 + 1;
    }
    fVar5 = fVar1 * DAT_00701580 + (float)(&DAT_00696fa4)[iVar9 * 0x25c];
    fVar6 = fVar1 * DAT_00701584 + (float)(&DAT_00696fa8)[iVar9 * 0x25c];
    fVar1 = fVar1 * DAT_00701588 + (float)(&DAT_00696fac)[iVar9 * 0x25c];
    local_78 = fVar6 * local_30[3] + fVar1 * local_18 + local_30[0] * fVar5 + local_c;
    local_74 = fVar6 * local_20 + fVar1 * local_14 + local_30[1] * fVar5 + local_8;
    local_70 = fVar6 * local_1c + fVar1 * local_10 + local_30[2] * fVar5 + local_4;
    local_6c = fVar2 * (float)param_1[0x7d] +
               fVar3 * (float)param_1[0x80] + fVar4 * (float)param_1[0x83] + (float)param_1[0x86];
    local_68 = fVar3 * (float)param_1[0x81] +
               fVar4 * (float)param_1[0x84] + fVar2 * (float)param_1[0x7e] + (float)param_1[0x87];
    local_64 = fVar3 * (float)param_1[0x82] +
               fVar4 * (float)param_1[0x85] + fVar2 * (float)param_1[0x7f] + (float)param_1[0x88];
    pfVar7 = (float *)FUN_0057d570(local_30);
    local_5c = local_74 * pfVar7[4] + local_70 * pfVar7[7] + local_78 * pfVar7[1] + pfVar7[10];
    local_58 = local_74 * pfVar7[5] + local_70 * pfVar7[8] + local_78 * pfVar7[2] + pfVar7[0xb];
    fVar1 = local_6c -
            (local_78 * *pfVar7 + local_74 * pfVar7[3] + local_70 * pfVar7[6] + pfVar7[9]);
    local_74 = local_68 - local_5c;
    local_70 = local_64 - local_58;
    if ((float)_DAT_0064a590 <= fVar1 * fVar1 + local_70 * local_70 + local_74 * local_74) {
      uVar14 = 3;
    }
    else {
      param_1[0x155b] = 0;
      uVar14 = 1;
    }
    FUN_004fc1a0(uVar14);
  }
  FUN_004fc1a0(*(undefined4 *)(param_1[0x1514] + 0x2638));
  if (*(int *)(param_1[0x1514] + 0x2638) == 1) {
    local_80 = FUN_00558140();
  }
  else if (*(int *)(param_1[0x1514] + 0x2638) == 3) {
    local_80 = FUN_00558630();
  }
  if ((param_1[0x155d] == 0) && (local_80 != 0)) {
    param_1[0x155d] = 1;
  }
  if (param_1[0x155d] == 1) {
    param_1[0x155d] = 2;
    param_1[0x1567] = param_1[0x68];
    param_1[0x1568] = param_1[0x69];
    param_1[0x1569] = param_1[0x6a];
    param_1[0x156a] = param_1[0x6b];
    param_1[0x156b] = param_1[0x6c];
    param_1[0x156c] = param_1[0x6d];
    iVar9 = param_1[0x155a];
    *(undefined4 *)(iVar9 + 0x55a4) = *(undefined4 *)(iVar9 + 0x1b0);
    *(undefined4 *)(iVar9 + 0x55a8) = *(undefined4 *)(iVar9 + 0x1b4);
    *(undefined4 *)(iVar9 + 0x55ac) = *(undefined4 *)(iVar9 + 0x1b8);
    iVar9 = param_1[0x155a];
    *(undefined4 *)(iVar9 + 0x55b0) = *(undefined4 *)(iVar9 + 0x1bc);
    *(undefined4 *)(iVar9 + 0x55b4) = *(undefined4 *)(iVar9 + 0x1c0);
    *(undefined4 *)(iVar9 + 0x55b8) = *(undefined4 *)(iVar9 + 0x1c4);
    FUN_004ee200(1);
  }
  *(undefined4 *)(*(int *)(param_1[0x155a] + 0x5460) + 0x34c8) =
       *(undefined4 *)(param_1[0x1514] + 0x34c8);
  if (0 < param_1[0x155d]) {
    local_80 = 0;
    if (param_1[0x155a] == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = param_1[0x155a] + 0x10;
    }
    iVar8 = FUN_005919d0(-(uint)(param_1 != (int *)0x10) & (uint)param_1,iVar9,&local_80);
    iVar9 = param_1[0xa29];
    iVar10 = param_1[0x155a];
    pfVar7 = (float *)(param_1 + 0xad);
    pfVar12 = local_30;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar12 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar12 = pfVar12 + 1;
    }
    fVar2 = local_30[0] * (float)(&DAT_00696f98)[iVar9 * 0x25c] +
            local_30[3] * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_18 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] + local_c;
    fVar4 = local_30[1] * (float)(&DAT_00696f98)[iVar9 * 0x25c] +
            local_20 * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_14 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] + local_8;
    fVar3 = local_30[2] * (float)(&DAT_00696f98)[iVar9 * 0x25c] +
            local_1c * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
            local_10 * (float)(&DAT_00696fa0)[iVar9 * 0x25c] + local_4;
    fVar1 = *(float *)(&DAT_00696fc8 + iVar9 * 0x970);
    iVar9 = *(int *)(iVar10 + 0x28b4);
    fStack_60 = fVar1 * DAT_00701580;
    pfVar7 = (float *)(iVar10 + 0x2c4);
    pfVar12 = local_30;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar12 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_5c = fVar1 * DAT_00701584;
    local_6c = fStack_60 + (float)(&DAT_00696fa4)[iVar9 * 0x25c];
    local_68 = local_5c + (float)(&DAT_00696fa8)[iVar9 * 0x25c];
    fVar1 = fVar1 * DAT_00701588 + (float)(&DAT_00696fac)[iVar9 * 0x25c];
    local_78 = local_30[0] * local_6c + local_68 * local_30[3] + fVar1 * local_18 + local_c;
    local_74 = local_30[1] * local_6c + local_68 * local_20 + fVar1 * local_14 + local_8;
    local_70 = local_30[2] * local_6c + local_68 * local_1c + fVar1 * local_10 + local_4;
    FUN_0041ce10(fVar2 * (float)param_1[0x7d] +
                 fVar4 * (float)param_1[0x80] + fVar3 * (float)param_1[0x83] + (float)param_1[0x86],
                 fVar2 * (float)param_1[0x7e] +
                 fVar4 * (float)param_1[0x81] + fVar3 * (float)param_1[0x84] + (float)param_1[0x87],
                 fVar2 * (float)param_1[0x7f] +
                 fVar4 * (float)param_1[0x82] + fVar3 * (float)param_1[0x85] + (float)param_1[0x88])
    ;
    uVar14 = FUN_0057d570(local_30);
    FUN_0043f690(&fStack_48,&local_78,uVar14);
    FUN_0041ce10(fStack_54 - fStack_48,fStack_50 - fStack_44,fStack_4c - fStack_40);
    fStack_3c = fStack_60;
    fStack_38 = local_5c;
    fStack_34 = local_58;
    fVar13 = (float10)FUN_005aabc0(&fStack_3c);
    if ((iVar8 == 0) && ((float10)_DAT_0064c2e8 < fVar13)) {
      FUN_00556150();
      (**(code **)(*param_1 + 0x90))(param_1 + 0x1567,0);
      (**(code **)(*param_1 + 0x94))(param_1 + 0x156a,0);
      (**(code **)(*(int *)(param_1[0x155a] + 0x10) + 0x90))(param_1[0x155a] + 0x55a4,0);
      (**(code **)(*(int *)(param_1[0x155a] + 0x10) + 0x94))(param_1[0x155a] + 0x55b0,0);
      FUN_00556150();
      FUN_0055e4a0();
      (**(code **)(*(int *)param_1[0x155a] + 100))();
      FUN_00558040();
      goto LAB_0055d54e;
    }
  }
  iVar9 = FUN_0054d890(&uStack_7c);
  iVar10 = FUN_0054d890(&local_80);
  if (iVar9 != iVar10) {
    FUN_004e1e9c(s__VEH_Tractor__run____res1__res2_00679520);
  }
  if (iVar9 != 0) {
    FUN_0055c890(uStack_7c,local_80);
    FUN_0054f690();
    FUN_0054f690();
  }
LAB_0055d54e:
  if (param_1[0xa51] != 0) {
    FUN_00552050();
    param_1[0xa51] = 0;
    if (param_1[0x155a] != 0) {
      FUN_00552050();
    }
  }
  return;
}

