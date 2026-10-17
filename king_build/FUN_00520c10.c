
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00520c10(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  int *piStack_428;
  undefined4 **ppuStack_424;
  int local_410;
  int *local_40c;
  int local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  int local_3e0 [8];
  int local_3c0;
  int local_3b0;
  int local_3a0;
  int local_390;
  int local_380;
  int local_370;
  int local_360;
  byte local_350;
  int local_340;
  int local_330;
  int local_320;
  int local_310;
  int local_2f0;
  int local_2e0;
  int local_2d0;
  int local_2c0;
  uint local_2b0 [8];
  uint local_290;
  uint local_280;
  uint local_270;
  uint local_260;
  uint local_250;
  uint local_240;
  uint local_230;
  int local_220;
  uint local_210;
  uint local_200;
  uint local_1f0;
  uint local_1e0;
  uint local_1c0;
  uint local_1b0;
  uint local_1a0;
  uint local_190;
  undefined1 local_180 [4];
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  int local_168 [76];
  undefined1 local_38 [52];
  
  ppuStack_424 = (undefined4 **)0x520c27;
  FUN_0050b5a0();
  ppuStack_424 = (undefined4 **)0x520c31;
  FUN_0052f780();
  ppuStack_424 = (undefined4 **)0x0;
  piStack_428 = (int *)0x520c39;
  FUN_004e1230();
  ppuStack_424 = (undefined4 **)0x520c43;
  FUN_005d7cc0();
  piVar1 = local_3e0;
  iVar5 = 0x13;
  do {
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[3] = 0x3ff00000;
    piVar1 = piVar1 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ppuStack_424 = &local_40c;
  piStack_428 = (int *)0x520c69;
  FUN_004363e0();
  if (local_40c != (int *)0xffffffff) {
LAB_00520c7e:
    local_17c = 0xffffffff;
    local_178 = 0.0;
    local_174 = 0.0;
    local_170 = 0.0;
    piVar1 = local_168;
    iVar5 = 0x13;
    do {
      piVar1[2] = 0;
      *piVar1 = 0;
      piVar1[3] = 0x3ff00000;
      piVar1 = piVar1 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    ppuStack_424 = (undefined4 **)local_180;
    piStack_428 = local_40c;
    FUN_00441f10();
    local_3f4 = local_174;
    local_3f8 = local_178;
    ppuStack_424 = (undefined4 **)local_38;
    local_3f0 = local_170;
    piStack_428 = (int *)0x520d12;
    iVar5 = FUN_0057d570();
    local_404 = local_3f8 - *(float *)(iVar5 + 0x24);
    local_400 = local_3f4 - *(float *)(iVar5 + 0x28);
    local_3fc = local_3f0 - *(float *)(iVar5 + 0x2c);
    ppuStack_424 = (undefined4 **)&local_3ec;
    piStack_428 = (int *)0x520d58;
    local_3ec = local_404;
    local_3e8 = local_400;
    local_3e4 = local_3fc;
    fVar12 = (float10)FUN_005aabc0();
    if ((float10)_DAT_0064b654 <= fVar12) goto code_r0x00520d68;
    piVar1 = local_168;
    piVar8 = local_3e0;
    for (iVar5 = 0x4c; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar8 = piVar8 + 1;
    }
  }
LAB_00520d9e:
  puVar2 = local_2b0;
  piStack_428 = (int *)0x13;
  do {
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2[3] = 0x3ff00000;
    puVar2 = puVar2 + 4;
    piStack_428 = (int *)((int)piStack_428 + -1);
  } while (piStack_428 != (int *)0x0);
  ppuStack_424 = (undefined4 **)local_2b0;
  FUN_00568670(&piStack_428);
  FUN_004769d0();
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  local_410 = 0;
  do {
    ppuStack_424 = (undefined4 **)(local_410 * 2 + 0xd9);
    piStack_428 = (int *)0x520e01;
    local_408 = FUN_005bd200();
    uVar6 = local_190;
    uVar10 = local_280;
    iVar4 = local_2c0;
    iVar5 = local_3b0;
    iVar7 = 0;
    uVar9 = 0;
    switch(local_410) {
    case 0:
      if (local_3b0 == 0) {
        ppuStack_424 = (undefined4 **)0x5211b0;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x17c) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x3;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x5211cc;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x17c) = uVar3;
      }
      break;
    case 1:
      iVar5 = local_3a0;
      uVar10 = local_270;
      if (local_3a0 == 0) {
        ppuStack_424 = (undefined4 **)0x52116f;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x180) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x4;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x52118b;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x180) = uVar3;
      }
      break;
    case 2:
      iVar5 = local_390;
      uVar10 = local_260;
      if (local_390 == 0) {
        ppuStack_424 = (undefined4 **)0x52112b;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x184) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x5;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x521147;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x184) = uVar3;
      }
      break;
    case 3:
      iVar5 = local_380;
      uVar10 = local_250;
      if (local_380 == 0) {
        ppuStack_424 = (undefined4 **)0x5210e7;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x188) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x6;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x521103;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x188) = uVar3;
      }
      break;
    case 4:
      iVar5 = local_370;
      uVar10 = local_240;
      if (local_370 == 0) {
        ppuStack_424 = (undefined4 **)0x5210a3;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x18c) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x7;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x5210bf;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x18c) = uVar3;
      }
      break;
    case 5:
      iVar5 = local_2d0;
      uVar10 = local_1a0;
      if (local_2d0 == 0) {
        ppuStack_424 = (undefined4 **)0x5212f7;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 400) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x11;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x521310;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 400) = uVar3;
      }
      break;
    case 6:
      iVar5 = local_3e0[0];
      uVar10 = local_2b0[0];
      if (local_3e0[0] == 0) {
        ppuStack_424 = (undefined4 **)0x521273;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x194) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x0;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x52128e;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x194) = uVar3;
      }
      break;
    case 7:
      iVar5 = local_3e0[4];
      uVar10 = local_2b0[4];
      if (local_3e0[4] == 0) {
        ppuStack_424 = (undefined4 **)0x521232;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x198) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x1;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x52124e;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x198) = uVar3;
      }
      break;
    case 8:
      if (local_2c0 != 0) {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x12;
        FUN_00476a60();
      }
      ppuStack_424 = (undefined4 **)0x521343;
      uVar3 = __ftol();
      *(undefined4 *)(param_1 + 0x19c) = uVar3;
      iVar5 = iVar4;
      uVar10 = uVar6;
      break;
    case 9:
      bVar11 = local_220 == 1;
      uVar10 = (uint)bVar11;
      if ((local_350 & 1) == 0) {
        ppuStack_424 = (undefined4 **)0x52101b;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1a0) = uVar3;
        iVar5 = 0;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x9;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x521037;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1a0) = uVar3;
        iVar5 = 1;
      }
      break;
    case 10:
      bVar11 = local_220 == 2;
      uVar10 = (uint)bVar11;
      if ((local_350 & 2) == 0) {
        ppuStack_424 = (undefined4 **)0x520fe3;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1a4) = uVar3;
        iVar5 = 0;
      }
      else {
        ppuStack_424 = (undefined4 **)0x2;
        piStack_428 = (int *)0x9;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x520fcb;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1a4) = uVar3;
        iVar5 = 1;
      }
      break;
    case 0xb:
      iVar5 = local_310;
      uVar10 = local_1e0;
      if (local_310 == 0) {
        ppuStack_424 = (undefined4 **)0x520f72;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1a8) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0xd;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x520f8e;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1a8) = uVar3;
      }
      break;
    case 0xc:
      iVar5 = local_3c0;
      uVar10 = local_290;
      if (local_3c0 == 0) {
        ppuStack_424 = (undefined4 **)0x5211f1;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1ac) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x2;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x52120d;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1ac) = uVar3;
      }
      break;
    case 0xd:
      iVar5 = local_2f0;
      uVar10 = local_1c0;
      if (local_2f0 == 0) {
        ppuStack_424 = (undefined4 **)0x520e62;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1b0) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0xf;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x520e7e;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1b0) = uVar3;
      }
      break;
    case 0xe:
      iVar5 = local_2e0;
      uVar10 = local_1b0;
      if (local_2e0 == 0) {
        ppuStack_424 = (undefined4 **)0x5212b6;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1b4) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x10;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x5212d2;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1b4) = uVar3;
      }
      break;
    case 0xf:
      iVar5 = local_340;
      uVar10 = local_210;
      if (local_340 == 0) {
        ppuStack_424 = (undefined4 **)0x520eea;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1b8) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0xa;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x520f06;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1b8) = uVar3;
      }
      break;
    case 0x10:
      iVar5 = local_320;
      uVar10 = local_1f0;
      if (local_320 == 0) {
        ppuStack_424 = (undefined4 **)0x520ea6;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0xc;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x520ec2;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      }
      break;
    case 0x11:
      iVar5 = local_360;
      uVar10 = local_230;
      if (local_360 == 0) {
        ppuStack_424 = (undefined4 **)0x52105f;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1c0) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0x8;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x52107b;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1c0) = uVar3;
      }
      break;
    case 0x12:
      iVar5 = local_330;
      uVar10 = local_200;
      if (local_330 == 0) {
        ppuStack_424 = (undefined4 **)0x520f2e;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1c4) = uVar3;
      }
      else {
        ppuStack_424 = (undefined4 **)0x1;
        piStack_428 = (int *)0xb;
        FUN_00476a60();
        ppuStack_424 = (undefined4 **)0x520f4a;
        uVar3 = __ftol();
        *(undefined4 *)(param_1 + 0x1c4) = uVar3;
      }
      break;
    case 0x13:
      iVar7 = 1;
      uVar9 = 0;
    default:
      goto switchD_00520e14_default;
    }
    iVar7 = iVar5;
    uVar9 = uVar10;
    if (uVar10 == 0) {
switchD_00520e14_default:
      uVar6 = *(uint *)(local_408 + 0x11c) & 0xfffffffd;
      iVar5 = iVar7;
      uVar10 = uVar9;
    }
    else {
      uVar6 = *(uint *)(local_408 + 0x11c) | 2;
    }
    *(uint *)(local_408 + 0x11c) = uVar6;
    if (iVar5 == 0) {
      *(undefined4 *)(local_408 + 0x28) = 1;
    }
    else {
      *(undefined4 *)(local_408 + 0x28) = 0;
      if ((uVar10 == 0) && (local_410 != 0x13)) {
        *(int *)(param_1 + 0x1c8) =
             *(int *)(param_1 + 0x1c8) + *(int *)(param_1 + 0x17c + local_410 * 4);
      }
    }
    local_410 = local_410 + 1;
  } while (local_410 < 0x14);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  iVar5 = 0;
  do {
    ppuStack_424 = (undefined4 **)(iVar5 * 2 + 0x101);
    piStack_428 = (int *)0x5213be;
    iVar4 = FUN_005bd200();
    switch(iVar5) {
    case 0:
      ppuStack_424 = (undefined4 **)0x5213dd;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x38))();
      break;
    case 1:
      ppuStack_424 = (undefined4 **)0x521413;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x28))();
      break;
    case 2:
      ppuStack_424 = (undefined4 **)0x521425;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x34))();
      break;
    case 3:
      ppuStack_424 = (undefined4 **)0x521437;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x30))();
      break;
    case 4:
      ppuStack_424 = (undefined4 **)0x521449;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x24))();
      break;
    case 5:
      ppuStack_424 = (undefined4 **)0x52145b;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x3c))();
      break;
    case 6:
      ppuStack_424 = (undefined4 **)0x52146d;
      fVar12 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x2c))();
      break;
    case 7:
      goto LAB_00521478;
    default:
      goto switchD_005213c5_default;
    }
    if (fVar12 < (float10)_DAT_0064a590) {
switchD_005213c5_default:
      *(undefined4 *)(iVar4 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x1cc + iVar5 * 4) = 0xffffffff;
    }
    else {
LAB_00521478:
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(uint *)(iVar4 + 0x11c) = *(uint *)(iVar4 + 0x11c) & 0xfffffffd;
      if (iVar5 != 7) {
        ppuStack_424 = (undefined4 **)0x52149e;
        iVar4 = __ftol();
        *(int *)(param_1 + 0x1cc + iVar5 * 4) = iVar4;
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + iVar4;
      }
    }
    iVar5 = iVar5 + 1;
    if (7 < iVar5) {
      *(undefined1 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2700) = 0;
      *(undefined4 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 10000) = 0x3f000000;
      *(undefined4 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x270c) = 0;
      *(undefined2 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2714) = 0;
      *(undefined2 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2716) = 1;
      *(undefined2 *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x2746) = 0x15;
      return;
    }
  } while( true );
code_r0x00520d68:
  piStack_428 = &local_408;
  ppuStack_424 = (undefined4 **)local_40c;
  local_40c = (int *)FUN_00436410();
  local_40c = (int *)*local_40c;
  if (local_40c == (int *)0xffffffff) goto LAB_00520d9e;
  goto LAB_00520c7e;
}

