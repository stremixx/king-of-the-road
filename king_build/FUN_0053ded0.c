
/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0053ded0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_17c;
  float local_16c [4];
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined1 local_130 [300];
  
  if ((DAT_00695c00 != 0) && (DAT_006d0fd8 != 0)) {
    pfVar5 = local_16c + 2;
    iVar6 = 4;
    do {
      pfVar5[-2] = 0.0;
      pfVar5[-1] = 0.0;
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_004e9574();
    FUN_004e9b5b();
    FUN_0061c369(local_130,s_GlobalTIME__f_frame__d_dt__f_00678404,
                 *(undefined4 *)(DAT_00695c00 + 0xb98),*(undefined4 *)(DAT_00695c00 + 0xb9c),
                 *(undefined4 *)(DAT_00695c00 + 0xbb0),*(undefined4 *)(DAT_00695c00 + 0xb90),
                 *(undefined4 *)(DAT_00695c00 + 0xb94));
    FUN_004e9b5b(local_130);
    pfVar5 = (float *)(DAT_006d0fd8 + 0x590);
    pfVar7 = local_16c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    FUN_0061c369(local_130,s_Viewer_OM___10f__10f__10f_006783e0,(double)local_16c[0],
                 (double)local_16c[1],(double)local_16c[2]);
    FUN_004e9b5b(local_130);
    FUN_0061c369(local_130,s__10f__10f__10f_006783c8,(double)local_16c[3],(double)local_15c,
                 (double)local_158);
    FUN_004e9b5b(local_130);
    FUN_0061c369(local_130,s__10f__10f__10f_006783c8,(double)local_154,(double)local_150,
                 (double)local_14c);
    FUN_004e9b5b(local_130);
    FUN_0061c369(local_130,s__10f__10f__10f_006783c8,(double)local_148,(double)local_144,
                 (double)local_140);
    FUN_004e9b5b(local_130);
    if (DAT_006ee158 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = DAT_006ee158 + -4;
    }
    local_17c = 0;
    while (iVar6 != 0) {
      uVar10 = CONCAT44(*(undefined4 *)(iVar6 + 0x20),iVar6);
      puVar8 = local_130;
      uVar9 = CONCAT44(*(undefined4 *)(*(int *)(iVar6 + 0x150) + 0xc),
                       s_VEHICLE__s___08X__frame__d_006783a8);
      FUN_0061c369();
      FUN_004e9b5b(local_130,puVar8,uVar9,uVar10);
      if (*(int *)(iVar6 + 0x4c4) != 0) {
        FUN_004e9b5b();
      }
      iVar4 = FUN_0057d5d0();
      puVar8 = local_130;
      uVar9 = CONCAT44(*(undefined4 *)(iVar4 + 0xc),s_room__s_00678394);
      FUN_0061c369();
      FUN_004e9b5b(local_130,puVar8,uVar9);
      pfVar5 = (float *)FUN_0057d570();
      pfVar7 = local_16c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar7 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + 1;
      }
      FUN_0061c369(local_130,s_M__10f__10f__10f_0067837c,(double)local_16c[0],(double)local_16c[1],
                   (double)local_16c[2]);
      FUN_004e9b5b(local_130);
      FUN_0061c369(local_130,s__10f__10f__10f_006783c8,(double)local_16c[3],(double)local_15c,
                   (double)local_158);
      FUN_004e9b5b(local_130);
      FUN_0061c369(local_130,s__10f__10f__10f_006783c8,(double)local_154,(double)local_150,
                   (double)local_14c);
      FUN_004e9b5b(local_130);
      FUN_0061c369(local_130,s__10f__10f__10f_006783c8,(double)local_148,(double)local_144,
                   (double)local_140);
      FUN_004e9b5b(local_130);
      fVar1 = *(float *)(iVar6 + 0x1b0);
      fVar2 = *(float *)(iVar6 + 0x1b4);
      fVar3 = *(float *)(iVar6 + 0x1b8);
      iVar4 = FUN_0057d5a0();
      FUN_0061c369(local_130,s_iVy__f_00678370,
                   (double)(fVar3 * *(float *)(iVar4 + 0x1c) +
                           fVar2 * *(float *)(iVar4 + 0x10) + fVar1 * *(float *)(iVar4 + 4)));
      FUN_004e9b5b();
      FUN_0061c369(local_130,s_V__10f__10f__10f_00678358,(double)fVar1,(double)fVar2,(double)fVar3);
      FUN_004e9b5b(local_130);
      local_13c = *(float *)(iVar6 + 0x1bc);
      local_138 = *(float *)(iVar6 + 0x1c0);
      local_134 = *(float *)(iVar6 + 0x1c4);
      FUN_0061c369(local_130,s_iW__10f__10f__10f_00678340,(double)local_13c,(double)local_138,
                   (double)local_134);
      FUN_004e9b5b(local_130);
      switch(*(undefined4 *)(iVar6 + 0x2aac)) {
      case 0:
        break;
      case 1:
        puVar8 = local_130;
        uVar9 = CONCAT44(*(undefined4 *)(*(int *)(iVar6 + 0x5460) + 0x2638),
                         s_VEH_IN_MODE_CARV_hi_fi__d_006782fc);
        FUN_0061c369();
        FUN_004e9b5b(local_130,puVar8,uVar9);
        goto LAB_0053e35c;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
      }
      FUN_004e9b5b();
LAB_0053e35c:
      FUN_0061c369(local_130,s_in_main__10f__10f__10f_00678248,(double)*(float *)(iVar6 + 0x50c4),
                   (double)*(float *)(iVar6 + 0x50c8),(double)*(float *)(iVar6 + 0x50cc));
      FUN_004e9b5b(local_130);
      if (*(int *)(iVar6 + 8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 8) + -4;
      }
      local_17c = local_17c + 1;
    }
    puVar8 = local_130;
    uVar9 = CONCAT44(local_17c,s_total_vehicles__d_00678234);
    FUN_0061c369();
    FUN_004e9b5b(local_130,puVar8,uVar9);
    FUN_004e9620();
  }
  return;
}

