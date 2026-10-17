
/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0053e7f0(void)

{
  double dVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float local_188 [4];
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
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
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [200];
  float local_5c [12];
  undefined1 local_2c [40];
  
  if ((DAT_00695c00 != 0) && (DAT_006d0fd8 != 0)) {
    pfVar3 = local_188 + 2;
    iVar4 = 4;
    do {
      pfVar3[-2] = 0.0;
      pfVar3[-1] = 0.0;
      *pfVar3 = 0.0;
      pfVar3 = pfVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pfVar3 = local_5c + 2;
    pfVar7 = (float *)&DAT_00701550;
    pfVar8 = local_188;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    iVar4 = 4;
    do {
      pfVar3[-2] = 0.0;
      pfVar3[-1] = 0.0;
      *pfVar3 = 0.0;
      pfVar3 = pfVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_14c = 0.0;
    pfVar3 = (float *)&DAT_00701550;
    pfVar7 = local_5c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_148 = 0.0;
    local_144 = 0.0;
    local_140 = 0.0;
    local_13c = 0.0;
    local_138 = 0.0;
    local_158 = 0.0;
    local_154 = 0.0;
    local_150 = 0.0;
    FUN_004e9574();
    uVar11 = CONCAT44(*(undefined4 *)(DAT_00695c00 + 0xbb0),*(undefined4 *)(DAT_00695c00 + 0xb9c));
    puVar9 = local_124;
    uVar10 = CONCAT44(*(undefined4 *)(DAT_00695c00 + 0xb98),s_GlobalTIME__f_frame__d_0067851c);
    FUN_0061c369();
    FUN_004e9b5b(local_124,puVar9,uVar10,uVar11);
    pfVar3 = (float *)(DAT_006d0fd8 + 0x590);
    pfVar7 = local_188;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar7 = pfVar7 + 1;
    }
    FUN_0061c369(local_124,s_Viewer_OM___10f__10f__10f_006783e0,(double)local_188[0],
                 (double)local_188[1],(double)local_188[2]);
    FUN_004e9b5b(local_124);
    FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_188[3],(double)local_178,
                 (double)local_174);
    FUN_004e9b5b(local_124);
    FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_170,(double)local_16c,
                 (double)local_168);
    FUN_004e9b5b(local_124);
    FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_164,(double)local_160,
                 (double)local_15c);
    FUN_004e9b5b(local_124);
    for (iVar4 = DAT_006ee158; (iVar4 != 0 && (iVar4 + -4 != 0)); iVar4 = *(int *)(iVar4 + 4)) {
      iVar6 = 0;
      FUN_0061c369(local_124,s_VEHICLE__s___08X__00678508,
                   *(undefined4 *)(*(int *)(iVar4 + 0x14c) + 0xc),iVar4 + -4);
      FUN_004e9b5b();
      if (*(int *)(iVar4 + 0x4c0) != 0) {
        FUN_004e9b5b();
      }
      do {
        FUN_005541a0(iVar6,&local_12c,&local_130,local_188,&local_14c,local_5c,&local_128,local_2c,
                     &local_140,&local_158,&local_134);
        FUN_0061c369(local_124,s__03d_frame__d_time__f_006784f0,iVar6,local_12c,(double)local_130);
        FUN_004e9b5b(local_124);
        puVar9 = local_124;
        uVar10 = CONCAT44(local_2c,s_room__s_00678394);
        FUN_0061c369();
        FUN_004e9b5b(local_124,puVar9,uVar10);
        FUN_0061c369(local_124,s_M__10f__10f__10f_0067837c,(double)local_188[0],(double)local_188[1]
                     ,(double)local_188[2]);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_188[3],(double)local_178,
                     (double)local_174);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_170,(double)local_16c,
                     (double)local_168);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_164,(double)local_160,
                     (double)local_15c);
        FUN_004e9b5b(local_124);
        fVar2 = local_5c[1];
        dVar1 = (double)local_5c[2];
        pfVar3 = local_5c;
        pfVar7 = local_188;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar7 = pfVar7 + 1;
        }
        FUN_0061c369(local_124,s_in_main___10f__10f__10f_006784cc,(double)local_5c[0],(double)fVar2,
                     dVar1);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_188[3],(double)local_178,
                     (double)local_174);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_170,(double)local_16c,
                     (double)local_168);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s__10f__10f__10f_006783c8,(double)local_164,(double)local_160,
                     (double)local_15c);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s_V__10f__10f__10f_00678358,(double)local_140,(double)local_13c,
                     (double)local_138);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s_iW__10f__10f__10f_00678340,(double)local_158,(double)local_154,
                     (double)local_150);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s_N4__10f__10f__10f_006784b4,(double)local_14c,(double)local_148,
                     (double)local_144);
        FUN_004e9b5b(local_124);
        FUN_0061c369(local_124,s_iVy__f_00678370,(double)local_134);
        FUN_004e9b5b();
        switch(local_128) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
        }
        FUN_004e9b5b();
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x32);
    }
    FUN_004e9620();
    FUN_0053e410();
  }
  return;
}

