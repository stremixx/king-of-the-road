
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00590420(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iStack_ec;
  float fStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  int iStack_c4;
  int iStack_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  (**(code **)(*(int *)(param_1 + -0x100) + 0xe8))();
  uStack_b4 = FUN_0057cc60(param_2,param_3);
  if ((1 < DAT_00695b44) && (DAT_00695b44 == 2)) {
    iVar6 = *(int *)(param_1 + 0xe88);
    pfVar8 = (float *)(*(int *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x2020) * 0x30 + 0x8c0 +
                      *(int *)(DAT_006ee15c + 0x1d0));
    pfVar10 = afStack_ac;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    }
    fStack_d0 = 0.0;
    fStack_cc = 0.0;
    fStack_c8 = 0.0;
    if (iVar6 == 3) {
      iVar6 = FUN_0058c7f0(&fStack_d0);
      while (iVar6 != 0) {
        fVar3 = fStack_cc * *(float *)(param_1 + 0x100) +
                fStack_c8 * *(float *)(param_1 + 0x10c) + fStack_d0 * *(float *)(param_1 + 0xf4) +
                *(float *)(param_1 + 0x118);
        fVar4 = fStack_d0 * *(float *)(param_1 + 0xf8) +
                fStack_cc * *(float *)(param_1 + 0x104) + fStack_c8 * *(float *)(param_1 + 0x110) +
                *(float *)(param_1 + 0x11c);
        fVar5 = fStack_d0 * *(float *)(param_1 + 0xfc) +
                fStack_cc * *(float *)(param_1 + 0x108) + fStack_c8 * *(float *)(param_1 + 0x114) +
                *(float *)(param_1 + 0x120);
        FUN_0041ce10(afStack_ac[3] * fVar4 + fStack_94 * fVar5 + afStack_ac[0] * fVar3 + fStack_88,
                     fStack_9c * fVar4 + fStack_90 * fVar5 + afStack_ac[1] * fVar3 + fStack_84,
                     fStack_98 * fVar4 + fStack_8c * fVar5 + afStack_ac[2] * fVar3 + fStack_80);
        if (_DAT_0064b240 < fStack_e4) {
          iVar6 = *(int *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
          uStack_bc = (uint)*(ushort *)(iVar6 + 2);
          iVar9 = __ftol();
          iVar7 = __ftol();
          FUN_005b6a50(iVar6,iVar9 + -2,iVar7 + -2,iVar9 + 2,iVar7 + 2,5,0);
          FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar9 + 2,iVar7 + -2,
                       iVar9 + -2,iVar7 + 2,5,0);
          FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar9,iVar7 + -3,
                       iVar9,iVar7 + 3,0,0);
          FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar9 + -3,iVar7,
                       iVar9 + 3,iVar7,0,0);
        }
        iVar6 = FUN_0058c7f0(&fStack_d0);
      }
    }
    if (*(int *)(param_1 + 0xe88) == 2) {
      iVar6 = FUN_005db380(auStack_60);
      fStack_dc = *(float *)(param_1 + 0x118) - *(float *)(iVar6 + 0x24);
      fStack_d8 = *(float *)(param_1 + 0x11c) - *(float *)(iVar6 + 0x28);
      fStack_d4 = *(float *)(param_1 + 0x120) - *(float *)(iVar6 + 0x2c);
      FUN_005aabc0(&fStack_dc);
      iStack_c0 = __ftol();
      uStack_bc = 4;
      if (0x14 < iStack_c0) {
        iStack_c0 = 0x14;
      }
      iStack_b8 = 0;
      fVar3 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xc6c) +
              *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0xc70) +
              *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xc74) +
              *(float *)(param_1 + 0x118);
      fVar4 = *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0xc70) +
              *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xc6c) +
              *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0xc74) +
              *(float *)(param_1 + 0x11c);
      fVar5 = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0xc70) +
              *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xc6c) +
              *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0xc74) +
              *(float *)(param_1 + 0x120);
      fStack_dc = fVar3;
      fStack_d8 = fVar4;
      fStack_d4 = fVar5;
      fStack_d0 = fVar3;
      fStack_cc = fVar4;
      fStack_c8 = fVar5;
      if (0 < iStack_c0) {
        do {
          iStack_ec = 0;
          iVar6 = iStack_b8;
          do {
            if (iStack_ec == 0) {
              if (iVar6 != 0) {
                pfVar8 = (float *)FUN_005ab6d0(auStack_30,
                                               ((float)iStack_b8 * (float)_DAT_0064a810) /
                                               (float)iStack_c0);
                goto LAB_00590893;
              }
            }
            else {
              pfVar8 = (float *)FUN_005ab5d0(auStack_60,
                                             ((float)iStack_b8 * (float)_DAT_0064a810) /
                                             (float)iStack_c0);
LAB_00590893:
              fStack_b0 = *(float *)(param_1 + 0xbc8);
              FUN_0041ce10((DAT_00701590 * *pfVar8 +
                            DAT_00701594 * pfVar8[3] + DAT_00701598 * pfVar8[6] + pfVar8[9]) *
                           fStack_b0,
                           (DAT_00701590 * pfVar8[1] +
                            DAT_00701594 * pfVar8[4] + DAT_00701598 * pfVar8[7] + pfVar8[10]) *
                           fStack_b0,
                           (DAT_00701590 * pfVar8[2] +
                            DAT_00701594 * pfVar8[5] + DAT_00701598 * pfVar8[8] + pfVar8[0xb]) *
                           fStack_b0);
              FUN_0041ce10(fStack_78 + fStack_d0,fStack_74 + fStack_cc,fStack_70 + fStack_c8);
              fStack_dc = fStack_6c;
              fStack_d8 = fStack_68;
              fStack_d4 = fStack_64;
              uStack_bc = 5;
            }
            FUN_0041ce10(afStack_ac[0] * fStack_dc +
                         afStack_ac[3] * fStack_d8 + fStack_94 * fStack_d4 + fStack_88,
                         fStack_9c * fStack_d8 + afStack_ac[1] * fStack_dc + fStack_90 * fStack_d4 +
                         fStack_84,
                         fStack_98 * fStack_d8 + afStack_ac[2] * fStack_dc + fStack_8c * fStack_d4 +
                         fStack_80);
            fStack_dc = fVar3;
            fStack_d8 = fVar4;
            fStack_d4 = fVar5;
            if (_DAT_0064b240 < fVar4) {
              puVar2 = *(ushort **)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
              uVar1 = puVar2[1];
              iStack_c4 = (int)(uint)*puVar2 >> 1;
              uStack_7c = (uint)uVar1;
              iVar6 = __ftol();
              iStack_c4 = (int)(uint)uVar1 >> 1;
              iVar9 = __ftol();
              FUN_005b6a50(puVar2,iVar6 + -2,iVar9 + -2,iVar6 + 2,iVar9 + 2,uStack_bc,0);
              FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar6 + 2,
                           iVar9 + -2,iVar6 + -2,iVar9 + 2,uStack_bc,0);
              FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar6,iVar9 + -3,
                           iVar6,iVar9 + 3,0,0);
              FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar6 + -3,iVar9,
                           iVar6 + 3,iVar9,0,0);
              iVar6 = iStack_b8;
            }
            iStack_ec = iStack_ec + 1;
          } while (iStack_ec < 2);
          iStack_b8 = iVar6 + 1;
        } while (iStack_b8 < iStack_c0);
      }
      return uStack_b4;
    }
  }
  return uStack_b4;
}

