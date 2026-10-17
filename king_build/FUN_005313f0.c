
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005313f0(int param_1,int *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  char *pcVar11;
  undefined4 *puVar12;
  float *pfVar13;
  char *pcVar14;
  float10 fVar15;
  undefined4 uVar16;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_140;
  float fStack_134;
  undefined1 auStack_130 [100];
  undefined1 auStack_cc [204];
  
  FUN_00531120();
  if (param_2 == (int *)0x0) {
    FUN_004e1e9c(s__Viewer__attach_vehicle____veh___00677920);
  }
  *(int **)(param_1 + 0x268) = param_2;
  (**(code **)(*param_2 + 0x6c))(1);
  *(undefined1 **)(*(int *)(param_1 + 0x268) + 0x51dc) = &LAB_005311d0;
  *(uint *)(*(int *)(param_1 + 0x268) + 0x51a4) =
       *(uint *)(*(int *)(param_1 + 0x268) + 0x51a4) | 0x34;
  if (param_2[0x1518] == 0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x28b4);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x8cc);
    iVar6 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    puVar4 = (undefined4 *)(iVar6 + 0x1ae8);
    puVar9 = (undefined4 *)(param_1 + 0x34);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar6 + 0x1ae4);
    (**(code **)(**(int **)(param_1 + 0x268) + 0x70))(3);
    *(uint *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2768) =
         (uint)(*(int *)(DAT_006cdbcc + 0x518) == 0);
    *(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2724) =
         (float)(int)*(short *)(DAT_006cdbd4 + 0x184) * (float)_DAT_0064a590;
    *(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2728) =
         (float)(int)*(short *)(DAT_006cdbd4 + 0x186) * (float)_DAT_0064a590;
    FUN_004feff0((int)*(short *)(DAT_006cdbd4 + 0x18a));
    if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2700) = 2;
    }
    else if ((*(int *)(DAT_006cdbcc + 0x524) == 2) ||
            ((((*(byte *)(param_1 + 0x57c) & 1) != 0 && (*(int *)(param_1 + 0x660) != 0)) &&
             (*(int *)(*(int *)(param_1 + 0x660) + 0x50) != 0)))) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2700) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2700) = 2;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2764) = 0x3f000000;
    FUN_0053a860();
    *(undefined4 *)(param_1 + 0x74) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3c50);
  }
  *(undefined4 *)(param_1 + 0x274) = 0;
  puVar4 = (undefined4 *)FUN_005ab5d0(afStack_160,(&DAT_00696960)[*(int *)(param_1 + 0x68) * 0x25c])
  ;
  iVar6 = *(int *)(param_1 + 0x68);
  puVar9 = (undefined4 *)(param_1 + 0x1d8);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_1 + 200) = (&DAT_00696960)[iVar6 * 0x25c];
  puVar4 = (undefined4 *)
           FUN_005ab330(afStack_160,(&DAT_00696954)[iVar6 * 0x25c],(&DAT_00696958)[iVar6 * 0x25c],
                        (&DAT_0069695c)[iVar6 * 0x25c]);
  puVar9 = puVar4;
  puVar12 = (undefined4 *)(param_1 + 0x208);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  iVar6 = *(int *)(param_1 + 0x268);
  puVar9 = (undefined4 *)(param_1 + 0x238);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  pfVar10 = (float *)(iVar6 + 0x2c4);
  pfVar13 = afStack_160;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar13 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar13 = pfVar13 + 1;
  }
  fVar2 = (afStack_160[2] * *(float *)(param_1 + 0x22c) +
           fStack_14c * *(float *)(param_1 + 0x230) + fStack_140 * *(float *)(param_1 + 0x234) +
          fStack_134) - *(float *)(iVar6 + 0x5238);
  if ((float)_DAT_0064a658 < fVar2) {
    if (_DAT_0064c2e8 <= fVar2) {
      fVar3 = *(float *)(param_1 + 0x264) - _DAT_0064b240;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x264) - (fVar2 - (float)_DAT_0064a658) * (float)_DAT_0064ca78;
    }
    *(float *)(param_1 + 0x264) = fVar3;
  }
  if ((float)_DAT_0064a658 < fVar2) {
    if (_DAT_0064c2e8 <= fVar2) {
      fVar2 = *(float *)(param_1 + 0x234) - _DAT_0064b240;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x234) - (fVar2 - (float)_DAT_0064a658) * (float)_DAT_0064ca78;
    }
    *(float *)(param_1 + 0x234) = fVar2;
  }
  FUN_00598560();
  DAT_006967ac = 0;
  FUN_005311f0(*(undefined4 *)(param_1 + 0x268));
  if (((DAT_00695bd0 != 0) || (DAT_00671d80 != 0)) || ((DAT_00695bcc != 0 || (DAT_00695bd4 != 0))))
  {
    FUN_004e9574();
    FUN_004e95b7();
    FUN_004e3cf8(auStack_130);
    FUN_0061c369(auStack_cc,s___________Vehicle_ATTACHED_______006778ec,auStack_130);
    FUN_004e9b0e(auStack_cc);
  }
  iVar6 = 4;
  puVar4 = (undefined4 *)(param_1 + 0x88);
  *(float *)(param_1 + 0x30) = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98);
  do {
    puVar4[-4] = 0;
    *puVar4 = 0x3f800000;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)(param_1 + 0x98) = 0x40400000;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x9c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xac) = 0x41700000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0xa0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0xb0) = 0x41200000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3df5c28f;
  *(undefined4 *)(param_1 + 0xa4) = 0x42480000;
  *(undefined4 *)(param_1 + 0xb4) = 0x41200000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_00577900(4);
  *(undefined4 *)(param_1 + 0xd8) = DAT_007015a0;
  *(undefined4 *)(param_1 + 0xdc) = DAT_007015a4;
  *(undefined4 *)(param_1 + 0xe0) = DAT_007015a8;
  iVar6 = FUN_0057d570(afStack_160);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = FUN_0057d5d0();
  uVar7 = 0xffffffff;
  pcVar11 = *(char **)(iVar6 + 0xc);
  do {
    pcVar14 = pcVar11;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar14 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar14;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  uVar16 = 0;
  pcVar11 = pcVar14 + -uVar7;
  pcVar14 = (char *)(param_1 + 0xe4);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar14 = pcVar14 + 1;
  }
  fVar15 = (float10)FUN_004e2035(0);
  FUN_004ea4a3((float)fVar15,uVar16);
  uVar16 = 0;
  fVar15 = (float10)FUN_004e2035(0);
  FUN_004ea4a3((float)fVar15,uVar16);
  uVar16 = 0;
  fVar15 = (float10)FUN_004e2035(0);
  FUN_004ea4a3((float)fVar15,uVar16);
  uVar16 = 0;
  fVar15 = (float10)FUN_004e2035(0);
  FUN_004ea4a3((float)fVar15,uVar16);
  uVar16 = 0;
  fVar15 = (float10)FUN_004e2035(0);
  FUN_004ea4a3((float)fVar15,uVar16);
  FUN_005ac200(DAT_006957b0 / 2,DAT_006957b4 / 2);
  _DAT_006d0af8 = 0;
  _DAT_00695c70 = 0;
  DAT_00695c74 = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  puVar4 = (undefined4 *)FUN_0057d570(afStack_160);
  puVar9 = (undefined4 *)(param_1 + 0x590);
  for (iVar6 = 0xc; fVar2 = DAT_00701588, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  fVar3 = -DAT_00701584;
  *(float *)(param_1 + 0x1c8) = -DAT_00701580;
  *(float *)(param_1 + 0x1cc) = fVar3;
  *(float *)(param_1 + 0x1d0) = -fVar2;
  fVar15 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x1d4) = (float)(fVar15 - (float10)_DAT_0064b2e8);
  fVar15 = (float10)FUN_004e2035();
  _DAT_006d1038 = (float)fVar15;
  return;
}

