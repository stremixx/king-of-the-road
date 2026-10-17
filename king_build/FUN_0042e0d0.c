
int * FUN_0042e0d0(int *param_1,undefined4 param_2,int param_3)

{
  int **ppiVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  uint *puVar11;
  float10 fVar12;
  undefined **ppuStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  char local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int *local_28;
  int iStack_24;
  undefined **ppuStack_20;
  int *local_1c;
  int *local_18 [2];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063d2aa;
  pvStack_c = ExceptionList;
  ppiStack_40 = (int **)0x78;
  local_4 = 0;
  ppiStack_44 = (int **)0x42e0f9;
  ExceptionList = &pvStack_c;
  local_28 = (int *)FUN_00631d33();
  local_4._0_1_ = 1;
  local_1c = local_28;
  if (local_28 == (int *)0x0) {
    local_28 = (int *)0x0;
  }
  else {
    *local_28 = -1;
    local_28[1] = 0;
    ppiStack_40 = (int **)0x42e11f;
    FUN_004042a0();
    ppiStack_40 = (int **)&local_2c;
    local_4._0_1_ = 2;
    ppiStack_44 = (int **)0x42e131;
    FUN_00478a20();
    ppiStack_40 = (int **)&local_2b;
    local_4._0_1_ = 3;
    local_28[8] = -1;
    ppiStack_44 = (int **)0x42e146;
    FUN_00478a20();
    ppiStack_40 = (int **)&local_2a;
    local_28[0xc] = 0;
    local_28[0xe] = 0;
    local_4._0_1_ = 4;
    local_28[0xd] = 0;
    local_28[0xf] = 0;
    local_28[0x10] = -1;
    local_28[0x11] = -1;
    ppiStack_44 = (int **)0x42e16a;
    FUN_00478a20();
    local_4._0_1_ = 5;
    ppiStack_40 = (int **)0x42e177;
    FUN_004042a0();
    ppiStack_40 = (int **)&local_29;
    local_4._0_1_ = 6;
    ppiStack_44 = (int **)0x42e189;
    FUN_00478a20();
    local_28[0x1c] = 0;
    local_28[0x1b] = 0;
    local_28[0x1d] = 0x3ff00000;
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  local_4._0_1_ = 0;
  ppuStack_48 = (undefined **)0x42e1b1;
  piVar5 = (int *)FUN_00407f50();
  local_4 = CONCAT31(local_4._1_3_,7);
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    ppiStack_44 = &param_1;
    ppuStack_48 = (undefined **)0x42e1de;
    ppiStack_40 = (int **)piVar5;
    cVar4 = FUN_00408fd0();
    if ((cVar4 == '\0') && (param_1 != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e1f4;
      (**(code **)(*param_1 + 0xc))();
    }
  }
  if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
    param_1 = (int *)0x0;
    param_3 = 0;
LAB_0042e23c:
    param_2 = 0;
  }
  else {
    ppiStack_40 = (int **)0x42e1fe;
    iVar6 = (*(code *)**(undefined4 **)*piVar5)();
    if (iVar6 == 2) {
      param_1 = (int *)*piVar5;
      param_3 = piVar5[2];
      param_1[1] = param_1[1] + 1;
      goto LAB_0042e23c;
    }
    ppiStack_40 = (int **)&DAT_0066bb08;
    ppiStack_44 = (int **)0x42e20f;
    ppiStack_44 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
    ppuStack_48 = (undefined **)0x1;
    FUN_004a5670(2);
  }
  local_4 = local_4 & 0xffffff00;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e274;
      (**(code **)(*local_18[0] + 0xc))();
    }
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e283;
  piVar7 = (int *)FUN_00407ec0();
  piVar5 = local_28;
  local_4 = CONCAT31(local_4._1_3_,8);
  iVar6 = local_28[2];
  ppiVar1 = (int **)(local_28 + 2);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1, (*ppiVar1)[1] == 0)) {
    ppuStack_48 = (undefined **)0x42e2b0;
    ppiStack_44 = ppiVar1;
    ppiStack_40 = (int **)piVar7;
    cVar4 = FUN_00408fd0();
    if ((cVar4 == '\0') && (*ppiVar1 != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e2c4;
      (**(code **)(**ppiVar1 + 0xc))();
    }
  }
  if ((undefined4 *)*piVar7 == (undefined4 *)0x0) {
    *ppiVar1 = (int *)0x0;
    piVar5[4] = 0;
LAB_0042e306:
    piVar5[3] = 0;
  }
  else {
    ppiStack_40 = (int **)0x42e2ce;
    iVar6 = (*(code *)**(undefined4 **)*piVar7)();
    if (iVar6 == 9) {
      piVar3 = (int *)*piVar7;
      *ppiVar1 = piVar3;
      piVar5[4] = piVar7[2];
      piVar3[1] = piVar3[1] + 1;
      goto LAB_0042e306;
    }
    ppiStack_40 = (int **)s_Identifier_0066be4c;
    ppiStack_44 = (int **)0x42e2df;
    ppiStack_44 = (int **)(**(code **)(*(int *)*piVar7 + 4))();
    ppuStack_48 = (undefined **)0x1;
    FUN_004a5670(2);
  }
  local_4 = local_4 & 0xffffff00;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e338;
      (**(code **)(*local_18[0] + 0xc))();
    }
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e347;
  piVar5 = (int *)FUN_00407f50();
  local_4 = CONCAT31(local_4._1_3_,9);
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    ppiStack_44 = &param_1;
    ppuStack_48 = (undefined **)0x42e374;
    ppiStack_40 = (int **)piVar5;
    cVar4 = FUN_00408fd0();
    if ((cVar4 == '\0') && (param_1 != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e38a;
      (**(code **)(*param_1 + 0xc))();
    }
  }
  if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
    param_1 = (int *)0x0;
    param_3 = 0;
LAB_0042e3d2:
    param_2 = 0;
  }
  else {
    ppiStack_40 = (int **)0x42e394;
    iVar6 = (*(code *)**(undefined4 **)*piVar5)();
    if (iVar6 == 2) {
      param_1 = (int *)*piVar5;
      param_3 = piVar5[2];
      param_1[1] = param_1[1] + 1;
      goto LAB_0042e3d2;
    }
    ppiStack_40 = (int **)&DAT_0066bb08;
    ppiStack_44 = (int **)0x42e3a5;
    ppiStack_44 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
    ppuStack_48 = (undefined **)0x1;
    FUN_004a5670(2);
  }
  local_4 = local_4 & 0xffffff00;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e405;
      (**(code **)(*local_18[0] + 0xc))();
    }
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e414;
  piVar7 = (int *)FUN_00407ec0();
  piVar5 = local_28;
  iVar6 = *piVar7;
  puVar11 = (uint *)(iVar6 + 0xc);
  local_4._0_1_ = 10;
  puVar2 = (uint *)(local_28 + 5);
  if (puVar11 != puVar2) {
    iStack_24 = *(int *)(iVar6 + 0x10);
    ppuStack_48 = (undefined **)*puVar11;
    ppuVar10 = (undefined **)(iStack_24 - (int)ppuStack_48);
    ppuStack_20 = ppuVar10;
    if ((undefined **)(local_28[7] - *puVar2) < ppuVar10) {
      ppiStack_44 = (int **)ppuStack_48;
      ppuStack_48 = ppuVar10;
      ppiStack_40 = (int **)iStack_24;
      uVar8 = FUN_00458d60();
      ppiStack_44 = (int **)*puVar2;
      ppiStack_40 = (int **)(piVar5[7] - (int)ppiStack_44);
      if (ppiStack_40 != (int **)0x0) {
        ppuStack_48 = (undefined **)0x42e46a;
        FUN_0044b440();
      }
      *puVar2 = uVar8;
      piVar5[7] = uVar8 + (int)ppuVar10;
    }
    else if ((undefined **)(local_28[6] - *puVar2) < ppuVar10) {
      ppiStack_40 = (int **)*puVar2;
      ppiStack_44 = (int **)((local_28[6] - (int)ppiStack_40) + (int)ppuStack_48);
      FUN_00407250();
      FUN_00407250((piVar5[6] - *puVar2) + *puVar11,*(undefined4 *)(iVar6 + 0x10),piVar5[6]);
    }
    else {
      ppiStack_40 = (int **)*puVar2;
      ppiStack_44 = (int **)iStack_24;
      FUN_00407250();
    }
    piVar5[6] = (int)ppuVar10 + *puVar2;
  }
  local_4._0_1_ = 0;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e4fa;
      (**(code **)(*local_18[0] + 0xc))();
    }
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e509;
  piVar5 = (int *)FUN_00407f50();
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    ppiStack_44 = &param_1;
    ppuStack_48 = (undefined **)0x42e536;
    ppiStack_40 = (int **)piVar5;
    cVar4 = FUN_00408fd0();
    if ((cVar4 == '\0') && (param_1 != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e54c;
      (**(code **)(*param_1 + 0xc))();
    }
  }
  if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
    param_1 = (int *)0x0;
    param_3 = 0;
  }
  else {
    ppiStack_40 = (int **)0x42e556;
    iVar6 = (*(code *)**(undefined4 **)*piVar5)();
    if (iVar6 != 2) {
      ppiStack_40 = (int **)&DAT_0066bb08;
      ppiStack_44 = (int **)0x42e567;
      ppiStack_44 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
      ppuStack_48 = (undefined **)0x1;
      FUN_004a5670(2);
      goto LAB_0042e598;
    }
    param_1 = (int *)*piVar5;
    param_3 = piVar5[2];
    param_1[1] = param_1[1] + 1;
  }
  param_2 = 0;
LAB_0042e598:
  local_4 = local_4 & 0xffffff00;
  if (((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      ppiStack_40 = (int **)0x1;
      ppiStack_44 = (int **)0x42e5c7;
      (**(code **)(*local_18[0] + 0xc))();
    }
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e5d6;
  FUN_00407ec0();
  local_4._0_1_ = 0xc;
  ppiStack_40 = (int **)0x42e5e5;
  iVar6 = FUN_004b0f30();
  local_4._0_1_ = 0;
  local_28[0x11] = iVar6;
  ppiStack_40 = (int **)0x42e5f9;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e608;
  ppiStack_40 = (int **)FUN_00407f50();
  local_4._0_1_ = 0xd;
  ppiStack_44 = (int **)0x42e61a;
  FUN_0044cae0();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e627;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e636;
  uVar9 = FUN_00407ec0();
  ppuStack_48 = &PTR_DAT_0066ce28;
  local_4._0_1_ = 0xe;
  local_2c = FUN_004b6670(uVar9);
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e65a;
  FUN_00492340();
  if (local_2c == '\0') {
    ppiStack_40 = &param_1;
    ppiStack_44 = local_18;
    ppuStack_48 = (undefined **)0x42e67f;
    uVar9 = FUN_00407ec0();
    ppuStack_48 = (undefined **)s_lorry_0066ce20;
    local_4._0_1_ = 0xf;
    local_2c = FUN_004b6670(uVar9);
    local_4._0_1_ = 0;
    ppiStack_40 = (int **)0x42e6a3;
    FUN_00492340();
    if (local_2c == '\0') {
      ppiStack_40 = &param_1;
      ppiStack_44 = local_18;
      ppuStack_48 = (undefined **)0x42e6c8;
      uVar9 = FUN_00407ec0();
      ppuStack_48 = (undefined **)s_tractor_0066ce18;
      local_4._0_1_ = 0x10;
      local_2c = FUN_004b6670(uVar9);
      local_4._0_1_ = 0;
      ppiStack_40 = (int **)0x42e6ec;
      FUN_00492340();
      if (local_2c == '\0') {
        ppiStack_40 = &param_1;
        ppiStack_44 = local_18;
        ppuStack_48 = (undefined **)0x42e711;
        uVar9 = FUN_00407ec0();
        ppuStack_48 = (undefined **)s_semitrailer_0066ce0c;
        local_4._0_1_ = 0x11;
        local_2c = FUN_004b6670(uVar9);
        local_4._0_1_ = 0;
        ppiStack_40 = (int **)0x42e735;
        FUN_00492340();
        if (local_2c == '\0') {
          ppiStack_40 = &param_1;
          ppiStack_44 = local_18;
          ppuStack_48 = (undefined **)0x42e757;
          piVar5 = (int *)FUN_00407ec0();
          ppuStack_48 = (undefined **)&DAT_0068c120;
          local_4._0_1_ = 0x12;
          FUN_00401010(4,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2f84,
                       s_Unsupported_type_0066cdc4,*(undefined4 *)(*piVar5 + 0xc));
          local_4._0_1_ = 0;
          ppiStack_40 = (int **)0x42e794;
          FUN_00492340();
        }
        else {
          local_28[8] = 4;
        }
      }
      else {
        local_28[8] = 3;
      }
    }
    else {
      local_28[8] = 2;
    }
  }
  else {
    local_28[8] = 1;
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e7a3;
  ppiStack_40 = (int **)FUN_00407f50();
  local_4._0_1_ = 0x13;
  ppiStack_44 = (int **)0x42e7b5;
  FUN_0044cae0();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e7c2;
  FUN_00492340();
  local_1c = (int *)&ppuStack_48;
  FUN_00407ec0(&ppuStack_48,&param_1);
  ppiStack_40 = (int **)FUN_0042dcd0(local_18);
  local_4._0_1_ = 0x14;
  ppiStack_44 = (int **)0x42e7f8;
  FUN_00452250();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e805;
  FUN_00449050();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e814;
  ppiStack_40 = (int **)FUN_00407f50();
  local_4._0_1_ = 0x15;
  ppiStack_44 = (int **)0x42e826;
  FUN_0044cae0();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e833;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e842;
  FUN_00407ec0();
  local_4._0_1_ = 0x16;
  ppiStack_40 = (int **)0x42e851;
  fVar12 = (float10)FUN_004b0f20();
  local_4._0_1_ = 0;
  *(double *)(local_28 + 0xc) = (double)fVar12;
  ppiStack_40 = (int **)0x42e865;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e874;
  ppiStack_40 = (int **)FUN_00407f50();
  local_4._0_1_ = 0x17;
  ppiStack_44 = (int **)0x42e886;
  FUN_0044cae0();
  local_4 = (uint)local_4._1_3_ << 8;
  ppiStack_40 = (int **)0x42e893;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e8a2;
  iVar6 = FUN_00407ec0();
  local_2c = *(char *)(iVar6 + 8) != '\x06';
  ppiStack_40 = (int **)0x42e8b9;
  FUN_00492340();
  if (local_2c != '\0') {
    ppiStack_40 = (int **)&DAT_0068c120;
    ppiStack_44 = (int **)&DAT_0068c120;
    ppuStack_48 = (undefined **)&DAT_0066cde8;
    FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2f91);
  }
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e8f7;
  FUN_00407ec0();
  local_4._0_1_ = 0x18;
  ppiStack_40 = (int **)0x42e906;
  fVar12 = (float10)FUN_004b0f20();
  local_4._0_1_ = 0;
  *(double *)(local_28 + 0xe) = (double)fVar12;
  ppiStack_40 = (int **)0x42e91a;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e929;
  ppiStack_40 = (int **)FUN_00407f50();
  local_4._0_1_ = 0x19;
  ppiStack_44 = (int **)0x42e93b;
  FUN_0044cae0();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e948;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e957;
  ppiStack_40 = (int **)FUN_00407ec0();
  local_4._0_1_ = 0x1a;
  ppiStack_44 = (int **)0x42e96c;
  FUN_0044cae0();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e979;
  FUN_00492340();
  ppiStack_40 = &param_1;
  ppiStack_44 = local_18;
  ppuStack_48 = (undefined **)0x42e988;
  ppiStack_40 = (int **)FUN_00407f50();
  local_4._0_1_ = 0x1b;
  ppiStack_44 = (int **)0x42e99a;
  FUN_0044cae0();
  local_4._0_1_ = 0;
  ppiStack_40 = (int **)0x42e9a7;
  FUN_00492340();
  if ((param_3 != 0) || (param_1 != (int *)0x0)) {
    ppiStack_40 = &param_1;
    ppiStack_44 = local_18;
    ppuStack_48 = (undefined **)0x42e9c6;
    piVar5 = (int *)FUN_00407ec0();
    if ((piVar5[2] != 0) || (local_2c = '\0', *piVar5 != 0)) {
      local_2c = '\x01';
    }
    ppiStack_40 = (int **)0x42e9e8;
    FUN_00492340();
    if (local_2c != '\0') {
      ppiStack_40 = &param_1;
      ppiStack_44 = local_18;
      ppuStack_48 = (undefined **)0x42e9fd;
      iVar6 = FUN_00407ec0();
      local_2c = *(char *)(iVar6 + 8) == '\x06';
      ppiStack_40 = (int **)0x42ea14;
      FUN_00492340();
      if (local_2c != '\0') {
        ppiStack_40 = &param_1;
        ppiStack_44 = local_18;
        ppuStack_48 = (undefined **)0x42ea29;
        FUN_00407ec0();
        local_4._0_1_ = 0x1c;
        ppiStack_40 = (int **)0x42ea38;
        iVar6 = FUN_004b0f30();
        local_4._0_1_ = 0;
        local_28[1] = iVar6;
        ppiStack_40 = (int **)0x42ea4c;
        FUN_00492340();
      }
    }
  }
  local_1c = (int *)&ppuStack_48;
  FUN_00455dc0(local_28 + 2);
  ppiStack_40 = (int **)FUN_0040e5c0();
  ppiStack_44 = (int **)0x42ea77;
  FUN_0044c100();
  *local_28 = DAT_0068bf3c - DAT_0068bf38 >> 2;
  ppiStack_40 = &local_28;
  ppiStack_44 = (int **)0x42ea9c;
  FUN_00447940();
  piVar5 = local_28;
  local_4 = 0xffffffff;
  ppiStack_40 = (int **)0x42eab1;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return piVar5;
}

