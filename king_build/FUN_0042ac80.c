
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042ac80(byte *param_1)

{
  double dVar1;
  byte bVar2;
  uint *puVar3;
  char cVar4;
  undefined1 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  byte *pbVar13;
  bool bVar14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cfc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_onModuleLoadX_char_const___modul_0066cc24);
  local_4 = 0;
  piVar12 = DAT_0068bb78;
  if (DAT_0068bb78 != DAT_0068bb7c) {
    do {
      iVar9 = *piVar12;
      if (iVar9 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)(iVar9 + 0xc);
      }
      if (*piVar10 != -1) {
        puVar3 = *(uint **)(DAT_0068c028 + *piVar10 * 4);
        uVar8 = *puVar3;
        pbVar6 = (byte *)(-(uint)(uVar8 != puVar3[1]) & uVar8);
        pbVar13 = param_1;
        do {
          bVar2 = *pbVar6;
          bVar14 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_0042ad35:
            iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0042ad3a;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar14 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_0042ad35;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_0042ad3a:
        if (iVar7 == 0) {
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + 0xc;
          }
          FUN_00483d00(iVar9);
        }
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != DAT_0068bb7c);
  }
  cVar4 = FUN_00484170();
  if (cVar4 == '\0') {
    piVar12 = DAT_0068be10;
    if (DAT_0068be10 != DAT_0068be14) {
      do {
        iVar9 = *piVar12;
        if (iVar9 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)(iVar9 + 0xc);
        }
        if (*piVar10 != -1) {
          puVar3 = *(uint **)(DAT_0068c028 + *piVar10 * 4);
          uVar8 = *puVar3;
          pbVar6 = (byte *)(-(uint)(uVar8 != puVar3[1]) & uVar8);
          pbVar13 = param_1;
          do {
            bVar2 = *pbVar6;
            bVar14 = bVar2 < *pbVar13;
            if (bVar2 != *pbVar13) {
LAB_0042afb1:
              iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_0042afb6;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar14 = bVar2 < pbVar13[1];
            if (bVar2 != pbVar13[1]) goto LAB_0042afb1;
            pbVar6 = pbVar6 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_0042afb6:
          if (iVar7 == 0) {
            *(undefined1 *)(iVar9 + 0x1c) = 0;
            if (*piVar12 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *piVar12 + 0xc;
            }
            FUN_00483d00(iVar9);
          }
        }
        piVar12 = piVar12 + 1;
      } while (piVar12 != DAT_0068be14);
    }
  }
  else {
    piVar12 = DAT_0068be10;
    if (DAT_0068be10 != DAT_0068be14) {
      do {
        iVar9 = *piVar12;
        if (iVar9 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)(iVar9 + 0xc);
        }
        if (*piVar10 == -1) goto LAB_0042af3f;
        puVar3 = *(uint **)(DAT_0068c028 + *piVar10 * 4);
        uVar8 = *puVar3;
        pbVar6 = (byte *)(-(uint)(uVar8 != puVar3[1]) & uVar8);
        pbVar13 = param_1;
        do {
          bVar2 = *pbVar6;
          bVar14 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_0042add7:
            iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0042addc;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar14 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_0042add7;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_0042addc:
        if (iVar7 != 0) goto LAB_0042af3f;
        switch(*(undefined4 *)(iVar9 + 0x20)) {
        case 1:
          dVar1 = *(double *)(iVar9 + 0x28);
          uVar8 = FUN_004155e0(1000000);
LAB_0042aea2:
          if (dVar1 * _DAT_0064a6a0 <= (double)uVar8) goto LAB_0042aebe;
          *(undefined1 *)(*piVar12 + 0x1c) = 1;
          break;
        case 2:
          cVar4 = FUN_00484130();
          if (cVar4 == '\0') goto LAB_0042af20;
          dVar1 = *(double *)(*piVar12 + 0x28);
          uVar8 = FUN_004155e0(1000000);
LAB_0042af0a:
          if (dVar1 * _DAT_0064a6a0 <= (double)uVar8) goto LAB_0042af20;
          uVar5 = 1;
          goto LAB_0042af22;
        case 3:
          cVar4 = FUN_00484100();
          if (cVar4 != '\0') {
            dVar1 = *(double *)(*piVar12 + 0x28);
            uVar8 = FUN_004155e0(1000000);
            goto LAB_0042aea2;
          }
LAB_0042aebe:
          *(undefined1 *)(*piVar12 + 0x1c) = 0;
          break;
        case 4:
          cVar4 = FUN_00484130();
          if ((cVar4 != '\0') && (cVar4 = FUN_00484100(), cVar4 != '\0')) {
            dVar1 = *(double *)(*piVar12 + 0x28);
            uVar8 = FUN_004155e0(1000000);
            goto LAB_0042af0a;
          }
LAB_0042af20:
          uVar5 = 0;
LAB_0042af22:
          *(undefined1 *)(*piVar12 + 0x1c) = uVar5;
        }
        if (*piVar12 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar12 + 0xc;
        }
        FUN_00483d00(iVar9);
LAB_0042af3f:
        piVar12 = piVar12 + 1;
      } while (piVar12 != DAT_0068be14);
    }
  }
  piVar12 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      iVar9 = *piVar12;
      if (iVar9 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)(iVar9 + 0xc);
      }
      if (*piVar10 != -1) {
        puVar3 = *(uint **)(DAT_0068c028 + *piVar10 * 4);
        uVar8 = *puVar3;
        pbVar6 = (byte *)(-(uint)(uVar8 != puVar3[1]) & uVar8);
        pbVar13 = param_1;
        do {
          bVar2 = *pbVar6;
          bVar14 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_0042b048:
            iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0042b04d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar14 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_0042b048;
          pbVar6 = pbVar6 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_0042b04d:
        if (iVar7 == 0) {
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + 0xc;
          }
          FUN_00483d00(iVar9);
        }
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != DAT_006898d4);
  }
  iVar9 = FUN_0061d520(param_1,&DAT_0066ca80);
  if (iVar9 == 0) {
    FUN_00483b60(param_1,s_StartKey_0066ca84,DAT_0066b6e4 != 1);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar11 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar11 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar11 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar11 = s_onModuleLoadX_char_const___modul_0066cc24;
  cVar4 = s_onModuleLoadX_char_const___modul_0066cc24[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar4 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar4;
      cVar4 = *pcVar11;
    }
  }
  ExceptionList = local_c;
  return 0;
}

