
void FUN_0053e410(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float local_19c [4];
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined1 local_160 [208];
  undefined4 local_90 [35];
  
  if ((DAT_00695c00 != 0) && (DAT_006d0fd8 != 0)) {
    pfVar6 = local_19c + 2;
    iVar7 = 4;
    do {
      pfVar6[-2] = 0.0;
      pfVar6[-1] = 0.0;
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar4 = local_90;
    iVar7 = 4;
    do {
      puVar4[-2] = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FUN_004e9574();
    for (iVar7 = DAT_006f549c; (iVar7 != 0 && (iVar7 != 4)); iVar7 = *(int *)(iVar7 + 4)) {
      uVar11 = CONCAT44(*(undefined4 *)(iVar7 + -0x16c),iVar7 + -0x17c);
      puVar9 = local_160;
      uVar10 = CONCAT44(*(undefined4 *)(*(int *)(iVar7 + -0x3c) + 0xc),
                        s_MItem__s___08X__frame__d_00678478);
      FUN_0061c369();
      FUN_004e9b5b(local_160,puVar9,uVar10,uVar11);
      iVar5 = FUN_0057d5d0();
      puVar9 = local_160;
      uVar10 = CONCAT44(*(undefined4 *)(iVar5 + 0xc),s_room__s_00678394);
      FUN_0061c369();
      FUN_004e9b5b(local_160,puVar9,uVar10);
      pfVar6 = (float *)FUN_0057d570();
      pfVar8 = local_19c;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
      }
      FUN_0061c369(local_160,s_M__10f__10f__10f_0067837c,(double)local_19c[0],(double)local_19c[1],
                   (double)local_19c[2]);
      FUN_004e9b5b(local_160);
      FUN_0061c369(local_160,s__10f__10f__10f_006783c8,(double)local_19c[3],(double)local_18c,
                   (double)local_188);
      FUN_004e9b5b(local_160);
      FUN_0061c369(local_160,s__10f__10f__10f_006783c8,(double)local_184,(double)local_180,
                   (double)local_17c);
      FUN_004e9b5b(local_160);
      FUN_0061c369(local_160,s__10f__10f__10f_006783c8,(double)local_178,(double)local_174,
                   (double)local_170);
      FUN_004e9b5b(local_160);
      pfVar6 = (float *)FUN_0057d650();
      pfVar8 = local_19c;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
      }
      FUN_0061c369(local_160,s_Ml__10f__10f__10f_00678460,(double)local_19c[0],(double)local_19c[1],
                   (double)local_19c[2]);
      FUN_004e9b5b(local_160);
      FUN_0061c369(local_160,s__10f__10f__10f_006783c8,(double)local_19c[3],(double)local_18c,
                   (double)local_188);
      FUN_004e9b5b(local_160);
      FUN_0061c369(local_160,s__10f__10f__10f_006783c8,(double)local_184,(double)local_180,
                   (double)local_17c);
      FUN_004e9b5b(local_160);
      FUN_0061c369(local_160,s__10f__10f__10f_006783c8,(double)local_178,(double)local_174,
                   (double)local_170);
      FUN_004e9b5b(local_160);
      fVar1 = *(float *)(iVar7 + 0x24);
      fVar2 = *(float *)(iVar7 + 0x28);
      fVar3 = *(float *)(iVar7 + 0x2c);
      iVar5 = FUN_0057d5a0();
      FUN_0061c369(local_160,s_iVy__f_00678370,
                   (double)(fVar3 * *(float *)(iVar5 + 0x1c) +
                           fVar2 * *(float *)(iVar5 + 0x10) + fVar1 * *(float *)(iVar5 + 4)));
      FUN_004e9b5b();
      FUN_0061c369(local_160,s_V__10f__10f__10f_00678358,(double)fVar1,(double)fVar2,(double)fVar3);
      FUN_004e9b5b(local_160);
      local_16c = *(float *)(iVar7 + 0x30);
      local_168 = *(float *)(iVar7 + 0x34);
      local_164 = *(float *)(iVar7 + 0x38);
      FUN_0061c369(local_160,s_iW__10f__10f__10f_00678340,(double)local_16c,(double)local_168,
                   (double)local_164);
      FUN_004e9b5b(local_160);
    }
    FUN_004e9620();
  }
  return;
}

