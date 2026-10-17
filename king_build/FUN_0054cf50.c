
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0054cf50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  undefined8 local_2a0;
  float local_298;
  float local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264 [4];
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_210 [12];
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [100];
  undefined1 local_164 [48];
  undefined1 local_134 [100];
  undefined1 local_d0 [204];
  
  if (param_2 != (undefined4 *)0x0) {
    switch(*param_2) {
    case 4:
      *(undefined4 *)(param_1 + 0x4f60) = 1;
      *(float *)(param_1 + 0x142c) = (float)(int)param_2[1] * (float)_DAT_0064a5a8;
      return 1;
    case 9:
      *(undefined4 *)(param_1 + 0x4f64) = 1;
      return 1;
    case 0xc:
      if (param_2[1] != 0) {
        *(undefined4 *)(param_1 + 4000) = 1;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x4f5c) = 0;
      return 1;
    case 0x1f:
      if (((*(int *)(param_1 + 0x5460) != 0) && (iVar12 = FUN_005689f0(param_2[1]), iVar12 != 0)) &&
         ((param_2[2] & 0x3fffffff) == 7)) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x5460) + 0x29d0);
        if ((3 < iVar12) || (iVar12 < 0)) {
          FUN_0061c369(local_1c8,&DAT_00679298,*param_2,
                       *(int *)(*(int *)(param_1 + 0x5460) + 0x29d0) + 1);
          FUN_004e1e9c();
        }
        pfVar7 = (float *)param_2[3];
        local_278 = *pfVar7;
        local_274 = pfVar7[1];
        local_270 = pfVar7[2];
        local_290 = pfVar7[3];
        local_28c = pfVar7[4];
        local_288 = pfVar7[5];
        FUN_0041ce10();
        local_284 = (undefined4)local_2a0;
        local_280 = local_2a0._4_4_;
        local_27c = local_298;
        fVar14 = (float10)FUN_005aabc0(&local_284);
        local_26c = (float)fVar14;
        local_268 = *(float *)(param_2[3] + 0x18);
        if ((((local_268 < (float)_DAT_0064a590) ||
             (local_2a0 = (double)local_268, (float)_DAT_0064a658 < local_268)) ||
            (_DAT_0064b2e8 < local_26c)) || (local_26c < (float)_DAT_0064a5a8)) {
          local_2a0 = (double)local_268;
          FUN_0061c369();
          FUN_0061c369(local_1c8,s_P1__f__f__f_P2___f__f__f_WIDTH___0067922c,(double)local_278,
                       (double)local_274,(double)local_270,(double)local_290,(double)local_28c,
                       (double)local_288,(undefined4)local_2a0,local_2a0._4_4_);
          FUN_0061c369(local_d0,s__s_s_s_00679224,local_134,local_1c8);
          FUN_004e1e9c();
        }
        *(float *)(*(int *)(param_1 + 0x5460) + 0x29c0 +
                  *(int *)(*(int *)(param_1 + 0x5460) + 0x29d0) * 4) = local_268;
        FUN_005aad10(local_210,_DAT_0064b240 / local_26c);
        FUN_005ab7d0(local_164,0x3fc90fdb);
        FUN_0041ce10();
        FUN_0041ce10();
        FUN_0041ce10();
        puVar2 = (undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x5460) + 0x29d0) * 0x30 + 0x2900 +
                 *(int *)(param_1 + 0x5460));
        *puVar2 = local_234;
        puVar2[1] = local_230;
        puVar2[2] = local_22c;
        FUN_0041ce10();
        iVar12 = *(int *)(param_1 + 0x5460);
        local_228 = local_234;
        local_224 = local_230;
        puVar10 = &local_228;
        local_220 = local_22c;
        pfVar7 = &local_278;
        puVar16 = local_204;
        puVar8 = (undefined4 *)FUN_004bddd0();
        puVar2 = (undefined4 *)(*(int *)(iVar12 + 0x29d0) * 0x30 + 0x290c + iVar12);
        *puVar2 = *puVar8;
        puVar2[1] = puVar8[1];
        puVar2[2] = puVar8[2];
        iVar12 = *(int *)(param_1 + 0x5460);
        uVar9 = FUN_004bdd80(local_1f8,&local_2ac,0x3f000000,puVar16,pfVar7,puVar10);
        puVar16 = local_1e0;
        uVar15 = CONCAT44(uVar9,&local_290);
        puVar10 = (undefined4 *)FUN_004bddd0();
        puVar2 = (undefined4 *)(*(int *)(iVar12 + 0x29d0) * 0x30 + 0x2918 + iVar12);
        *puVar2 = *puVar10;
        puVar2[1] = puVar10[1];
        puVar2[2] = puVar10[2];
        iVar12 = *(int *)(param_1 + 0x5460);
        uVar9 = FUN_004bdd80(local_1d4,&local_2ac,0x3f000000,puVar16,uVar15);
        puVar10 = (undefined4 *)FUN_004bde20(local_1ec,&local_290,uVar9);
        puVar2 = (undefined4 *)(*(int *)(iVar12 + 0x29d0) * 0x30 + 0x2924 + iVar12);
        *puVar2 = *puVar10;
        puVar2[1] = puVar10[1];
        puVar2[2] = puVar10[2];
        piVar1 = (int *)(*(int *)(param_1 + 0x5460) + 0x29d0);
        *piVar1 = *piVar1 + 1;
      }
      return 1;
    case 0x20:
      bVar6 = FUN_0056e8e0(param_2[1]);
      iVar12 = -1;
      if ((bVar6 & 3) == 1) {
        iVar12 = 0;
      }
      if ((bVar6 & 0xc) == 1) {
        iVar12 = 1;
      }
      if ((bVar6 & 0x30) == 1) {
        iVar12 = 2;
      }
      else if (iVar12 == -1) {
        return 0;
      }
      pfVar7 = local_264 + 2;
      iVar11 = 4;
      do {
        pfVar7[-2] = 0.0;
        pfVar7[-1] = 0.0;
        *pfVar7 = 0.0;
        pfVar7 = pfVar7 + 3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      pfVar7 = (float *)&DAT_00701550;
      pfVar13 = local_264;
      for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar13 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar13 = pfVar13 + 1;
      }
      local_2a0 = 0.0;
      local_298 = 0.0;
      if (iVar12 == 0) {
        fVar3 = DAT_007015a0 * _DAT_0064c9c8;
        fVar4 = DAT_007015a4 * _DAT_0064c9c8;
        fVar5 = DAT_007015a8 * _DAT_0064c9c8;
        local_2ac = fVar5 * local_24c + local_264[0] * fVar3 + fVar4 * local_264[3] + local_240;
        local_2a8 = fVar4 * local_254 + fVar5 * local_248 + local_264[1] * fVar3 + local_23c;
        local_2a0 = (double)CONCAT44(local_2a8,local_2ac);
        local_2a4 = fVar4 * local_250 + fVar5 * local_244 + local_264[2] * fVar3 + local_238;
        local_298 = local_2a4;
      }
      else if (iVar12 == 1) {
        fVar3 = DAT_007015a0 * _DAT_0064b928;
        fVar4 = DAT_007015a4 * _DAT_0064b928;
        fVar5 = DAT_007015a8 * _DAT_0064b928;
        local_2ac = fVar5 * local_24c + fVar3 * local_264[0] + fVar4 * local_264[3] + local_240;
        local_2a8 = fVar4 * local_254 + fVar5 * local_248 + local_264[1] * fVar3 + local_23c;
        local_2a0 = (double)CONCAT44(local_2a8,local_2ac);
        local_2a4 = fVar4 * local_250 + fVar5 * local_244 + local_264[2] * fVar3 + local_238;
        local_298 = local_2a4;
      }
      else if (iVar12 == 2) {
        fVar3 = DAT_007015a0 * _DAT_0064b480;
        fVar4 = DAT_007015a4 * _DAT_0064b480;
        fVar5 = DAT_007015a8 * _DAT_0064b480;
        local_2ac = fVar3 * local_264[0] + fVar4 * local_264[3] + fVar5 * local_24c + local_240;
        local_2a8 = fVar4 * local_254 + fVar5 * local_248 + local_264[1] * fVar3 + local_23c;
        local_2a0 = (double)CONCAT44(local_2a8,local_2ac);
        local_2a4 = fVar4 * local_250 + fVar5 * local_244 + local_264[2] * fVar3 + local_238;
        local_298 = local_2a4;
      }
      FUN_0041ce10();
      FUN_0041ce10();
      local_290 = local_2ac;
      local_28c = local_2a8;
      local_288 = local_2a4;
      fVar14 = (float10)FUN_004e221b(&local_290);
      if ((((fVar14 < (float10)_DAT_0064e758) && (iVar12 = FUN_00549300(), iVar12 != 1)) &&
          (iVar12 = FUN_00549300(), iVar12 != 2)) && (iVar12 = FUN_00549300(), iVar12 != 3)) {
        FUN_00549010(0);
      }
    }
  }
  return 0;
}

