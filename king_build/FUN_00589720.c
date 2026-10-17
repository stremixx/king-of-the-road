
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00589720(int param_1,float *param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iStack00000018;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_0000005c;
  float in_stack_00000060;
  float in_stack_00000064;
  float in_stack_00000068;
  float in_stack_0000006c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_000000b4;
  float in_stack_000000b8;
  float in_stack_000000bc;
  float in_stack_000000c0;
  float in_stack_000000c4;
  float in_stack_000000c8;
  float in_stack_000000cc;
  float in_stack_000000d0;
  float in_stack_000000d4;
  float in_stack_000000d8;
  float in_stack_000000dc;
  float in_stack_000000e0;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f4;
  undefined4 in_stack_000000f8;
  float in_stack_000000fc;
  float in_stack_00000100;
  float in_stack_00000104;
  float in_stack_00000108;
  float in_stack_0000010c;
  float in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined4 in_stack_00000138;
  undefined4 in_stack_0000013c;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000144;
  undefined4 in_stack_00000148;
  undefined4 in_stack_0000014c;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_0000016c;
  undefined4 in_stack_00000170;
  float in_stack_00000174;
  float in_stack_00000178;
  float in_stack_0000017c;
  float in_stack_00000180;
  float in_stack_00000184;
  float in_stack_00000188;
  float in_stack_0000018c;
  float in_stack_00000190;
  float in_stack_00000194;
  float in_stack_00000198;
  float in_stack_0000019c;
  float in_stack_000001a0;
  undefined4 in_stack_000001a4;
  undefined4 in_stack_000001a8;
  undefined4 in_stack_000001ac;
  undefined4 in_stack_000001b0;
  undefined4 in_stack_000001b4;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001bc;
  undefined4 in_stack_000001c0;
  undefined4 in_stack_000001c4;
  undefined4 in_stack_000001c8;
  undefined4 in_stack_000001cc;
  undefined4 in_stack_000001d0;
  float in_stack_00000208;
  float fVar16;
  float in_stack_0000020c;
  float fVar17;
  float in_stack_00000210;
  float in_stack_00000214;
  float fVar18;
  float in_stack_00000218;
  float fVar19;
  float in_stack_0000021c;
  float in_stack_0000022c;
  float in_stack_00000230;
  float in_stack_00000234;
  undefined4 in_stack_00000248;
  
  iVar12 = param_1;
  FUN_0061d4f0();
  FUN_005eebf0();
  FUN_0057d570();
  FUN_005aba00();
  FUN_0057d5d0();
  iStack00000018 = 0;
  iVar9 = FUN_0058c7f0();
  if (iVar9 == 0) {
    return 0;
  }
  do {
    if (0x3e < *(int *)((int)param_3 + 0xb00)) {
      iVar12 = FUN_0058c7f0();
      while (iVar12 != 0) {
        iVar12 = FUN_0058c7f0();
      }
      return iStack00000018;
    }
    param_1._0_1_ = 0;
    pfVar2 = (float *)(in_stack_00000174 * 0.0 + in_stack_00000180 * 0.0 + in_stack_0000018c * 0.0 +
                      in_stack_00000198);
    fVar3 = in_stack_00000178 * 0.0 + in_stack_00000184 * 0.0 + in_stack_00000190 * 0.0 +
            in_stack_0000019c;
    fVar4 = in_stack_0000017c * 0.0 + in_stack_00000188 * 0.0 + in_stack_00000194 * 0.0 +
            in_stack_000001a0;
    fVar5 = *param_2 * 0.0 + param_2[3] * 0.0 + param_2[6] * 0.0 + param_2[9];
    fVar6 = param_2[4] * 0.0 + param_2[7] * 0.0 + param_2[1] * 0.0 + param_2[10];
    fVar7 = param_2[5] * 0.0 + param_2[8] * 0.0 + param_2[2] * 0.0 + param_2[0xb];
    fVar16 = in_stack_00000208;
    fVar17 = in_stack_0000020c;
    fVar18 = in_stack_00000214;
    fVar19 = in_stack_00000218;
    if ((*(int *)((int)param_4 + 0x188) != 2) ||
       (iVar10 = FUN_005895b0(), param_4 = fVar4, iVar10 != 0)) {
      puVar14 = (undefined4 *)((int)param_4 + 0x2b4);
      puVar15 = (undefined4 *)&stack0x000002b0;
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      FUN_0057d570();
      FUN_005ab130();
      FUN_005aba00();
      in_stack_00000108 =
           in_stack_00000048 * (float)pfVar2 + in_stack_00000054 * fVar3 + in_stack_00000060 * fVar4
           + in_stack_0000006c;
      in_stack_0000010c =
           in_stack_0000004c * (float)pfVar2 + in_stack_00000058 * fVar3 + in_stack_00000064 * fVar4
           + in_stack_00000070;
      in_stack_00000110 =
           in_stack_00000050 * (float)pfVar2 + in_stack_0000005c * fVar3 + in_stack_00000068 * fVar4
           + in_stack_00000074;
      in_stack_000000fc =
           in_stack_00000048 * fVar5 + in_stack_00000054 * fVar6 + in_stack_00000060 * fVar7 +
           in_stack_0000006c;
      in_stack_00000100 =
           in_stack_0000004c * fVar5 + in_stack_00000058 * fVar6 + in_stack_00000064 * fVar7 +
           in_stack_00000070;
      in_stack_00000104 =
           in_stack_00000050 * fVar5 + in_stack_0000005c * fVar6 + in_stack_00000068 * fVar7 +
           in_stack_00000074;
      param_1._0_1_ = FUN_004e4b8c();
      if (((byte)param_1 & 1) != 0) {
        fVar16 = in_stack_000000b4 * in_stack_00000208 +
                 in_stack_000000c0 * in_stack_0000020c + in_stack_000000cc * in_stack_00000210 +
                 in_stack_000000d8;
        fVar17 = in_stack_000000b8 * in_stack_00000208 +
                 in_stack_000000c4 * in_stack_0000020c + in_stack_000000d0 * in_stack_00000210 +
                 in_stack_000000dc;
        in_stack_00000210 =
             in_stack_000000bc * in_stack_00000208 +
             in_stack_000000c8 * in_stack_0000020c + in_stack_000000d4 * in_stack_00000210 +
             in_stack_000000e0;
        fVar18 = in_stack_000000b4 * in_stack_00000214 +
                 in_stack_000000cc * in_stack_0000021c + in_stack_000000c0 * in_stack_00000218;
        fVar19 = in_stack_000000d0 * in_stack_0000021c +
                 in_stack_000000c4 * in_stack_00000218 + in_stack_000000b8 * in_stack_00000214;
        in_stack_0000021c =
             in_stack_000000d4 * in_stack_0000021c +
             in_stack_000000c8 * in_stack_00000218 + in_stack_000000bc * in_stack_00000214;
        iVar10 = FUN_004e2140();
        if ((iVar10 != 0) || (iVar10 = FUN_004e2140(), iVar10 != 0)) {
          FUN_0057d570();
          FUN_0057d570();
          puVar14 = &stack0x000000b4;
          puVar15 = &stack0x00000144;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          in_stack_000000f0 = *(undefined4 *)(iVar12 + 0x1a0);
          in_stack_000000f4 = *(undefined4 *)(iVar12 + 0x1a4);
          in_stack_000000f8 = *(undefined4 *)(iVar12 + 0x1a8);
          in_stack_000000e4 = *(undefined4 *)((int)fVar4 + 0x1a0);
          in_stack_000000e8 = *(undefined4 *)((int)fVar4 + 0x1a4);
          in_stack_000000ec = *(undefined4 *)((int)fVar4 + 0x1a8);
          FUN_0061c369();
          FUN_0061c369();
          FUN_0061c369();
          FUN_0061c369();
          FUN_004e1e9c();
        }
        if (iVar9 < 1) {
          in_stack_00000248 = FUN_00588ac0();
        }
        else {
          in_stack_00000248 = FUN_00588ac0();
        }
      }
      param_3 = fVar3;
      if (((((byte)param_1 & 1) == 0) && (*(int *)((int)fVar4 + 0x188) == 2)) &&
         (iVar10 = FUN_00591250(), iVar10 != 0)) {
        param_1._0_1_ = 1;
      }
    }
    *(uint *)((int)param_3 + 0xb04 + *(int *)((int)param_3 + 0xb00) * 4) =
         (uint)(((byte)param_1 & 1) == 1) * iVar9;
    *(undefined4 *)((int)param_3 + 0x800 + *(int *)((int)param_3 + 0xb00) * 4) = 0x3f800000;
    *(undefined4 *)((int)param_3 + 0x900 + *(int *)((int)param_3 + 0xb00) * 4) = 0x3f800000;
    if (*(int *)((int)param_3 + 0xb04 + *(int *)((int)param_3 + 0xb00) * 4) != 0) {
      iStack00000018 = iStack00000018 + 1;
      *(undefined4 *)((int)param_3 + 0x800 + *(int *)((int)param_3 + 0xb00) * 4) = 0;
      fVar8 = (float)iVar9;
      *(undefined4 *)((int)param_3 + 0x900 + *(int *)((int)param_3 + 0xb00) * 4) = 0;
      pfVar1 = (float *)((int)param_3 + *(int *)((int)param_3 + 0xb00) * 0xc);
      *pfVar1 = fVar16;
      pfVar1[1] = fVar17;
      pfVar1[2] = in_stack_00000210;
      pfVar1 = (float *)((int)param_3 + (*(int *)((int)param_3 + 0xb00) + 0x40) * 0xc);
      *pfVar1 = fVar8 * fVar18;
      pfVar1[1] = fVar8 * fVar19;
      pfVar1[2] = fVar8 * in_stack_0000021c;
      if (iVar9 < 1) {
        uVar11 = FUN_00588ac0();
        *(undefined4 *)((int)param_3 + 0x600 + *(int *)((int)param_3 + 0xb00) * 4) = uVar11;
      }
      else {
        *(undefined4 *)((int)param_3 + 0x600 + *(int *)((int)param_3 + 0xb00) * 4) =
             in_stack_00000248;
        uVar13 = *(uint *)(iVar12 + 0x1444 + iVar9 * 4) | 2;
        *(uint *)(iVar12 + 0x1444 + iVar9 * 4) = uVar13;
        *(uint *)(iVar12 + 0x1494 + iVar9 * 4) = uVar13;
        puVar14 = (undefined4 *)&stack0x000001d4;
        puVar15 = (undefined4 *)(iVar9 * 0xd0 + 0x1418 + iVar12);
        for (iVar10 = 0x34; param_3 = fVar3, iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      *(int *)((int)param_3 + 0xc04 + *(int *)((int)param_3 + 0xb00) * 4) = iVar9 + -1;
      *(float *)((int)param_3 + 0xa00 + *(int *)((int)param_3 + 0xb00) * 4) =
           fVar18 * (fVar16 - fVar5) +
           (in_stack_00000210 - fVar7) * in_stack_0000021c + (fVar17 - fVar6) * fVar19;
      fVar5 = (in_stack_00000234 - fVar4) * (in_stack_00000234 - fVar4) +
              (in_stack_00000230 - fVar3) * (in_stack_00000230 - fVar3) +
              (in_stack_0000022c - (float)pfVar2) * (in_stack_0000022c - (float)pfVar2);
      fVar6 = (in_stack_00000210 - fVar4) * (in_stack_00000210 - fVar4) +
              (fVar17 - fVar3) * (fVar17 - fVar3) +
              (fVar16 - (float)pfVar2) * (fVar16 - (float)pfVar2);
      if ((float)_DAT_0064f6a8 <= fVar5) {
        fVar7 = fVar6 / fVar5;
        if ((float)_DAT_0064a660 < fVar7) {
          fVar7 = _DAT_0064b240;
        }
        *(float *)((int)param_3 + 0x800 + *(int *)((int)param_3 + 0xb00) * 4) = SQRT(fVar7);
        *(undefined4 *)((int)param_3 + 0x900 + *(int *)((int)param_3 + 0xb00) * 4) =
             *(undefined4 *)((int)param_3 + 0x800 + *(int *)((int)param_3 + 0xb00) * 4);
        fVar6 = SQRT(fVar6) - (float)_DAT_0064a590;
        if (fVar6 <= _DAT_0064b254) {
          *(undefined4 *)((int)param_3 + 0x800 + *(int *)((int)param_3 + 0xb00) * 4) = 0;
        }
        else {
          *(float *)((int)param_3 + 0x800 + *(int *)((int)param_3 + 0xb00) * 4) =
               fVar6 / SQRT(fVar5);
        }
      }
      *(int *)((int)param_3 + 0xb00) = *(int *)((int)param_3 + 0xb00) + 1;
    }
    iVar9 = FUN_0058c7f0();
    param_2 = pfVar2;
    param_3 = fVar3;
    param_4 = fVar4;
    in_stack_00000208 = fVar16;
    in_stack_0000020c = fVar17;
    in_stack_00000214 = fVar18;
    in_stack_00000218 = fVar19;
  } while (iVar9 != 0);
  return iStack00000018;
}

