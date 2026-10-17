
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a8070(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  double dVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  float10 fVar13;
  int local_c;
  
  dVar3 = _DAT_0064a668;
  if ((_DAT_0064c9f0 < *(double *)(param_1 + 0x68)) &&
     (dVar3 = _DAT_00650288, *(double *)(param_1 + 0x68) < _DAT_00650530)) {
    dVar3 = *(double *)(param_1 + 0x68) - _DAT_0064c9f0;
  }
  fVar13 = (float10)FUN_005a9410(-dVar3);
  fVar13 = (fVar13 - (float10)_DAT_0064a798) * (float10)_DAT_00650648;
  *(float *)(param_1 + 0x218) = (float)fVar13;
  if (fVar13 < (float10)_DAT_0064a668) {
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  if (_DAT_0064b240 < *(float *)(param_1 + 0x218)) {
    *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  }
  iVar7 = *(int *)(param_1 + 0x50);
  *(float *)(param_1 + 0x218) = SQRT(*(float *)(param_1 + 0x218));
  uVar8 = *(uint *)(iVar7 + 0xbb0) & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar8 == 1) &&
     ((*(int *)(iVar7 + 0x1e4) == 0 || (*(int *)(*(int *)(iVar7 + 0x1e4) + 0x14) == 0)))) {
    iVar7 = *(int *)(iVar7 + 0x1d4);
    do {
      if (iVar7 == 0) break;
      piVar9 = (int *)(iVar7 + 0x9c);
      iVar10 = 6;
      do {
        if (*piVar9 != 0) {
          *(undefined4 *)(*(int *)(iVar7 + 0x4c) + 0x28 + *piVar9 * 0x7c) = 4;
        }
        piVar9 = piVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      FUN_005eea00();
      local_c = 0;
      if (0 < *(int *)(iVar7 + 0x48)) {
        iVar10 = 0;
        do {
          pcVar11 = s_mat_refl_road_0067aa70;
          pbVar1 = (byte *)(*(int *)(iVar7 + 0x4c) + iVar10);
          pbVar5 = pbVar1;
          do {
            bVar2 = *pbVar5;
            bVar12 = bVar2 < (byte)*pcVar11;
            if (bVar2 != *pcVar11) {
LAB_005a81dd:
              iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_005a81e2;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar12 = bVar2 < (byte)pcVar11[1];
            if (bVar2 != pcVar11[1]) goto LAB_005a81dd;
            pbVar5 = pbVar5 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_005a81e2:
          if (((iVar6 == 0) && (pbVar1 != (byte *)0x0)) && (*(int *)(pbVar1 + 0x4c) != 0)) {
            if ((DAT_0071f82c == 0) || (DAT_0071f834 == 0)) {
              if ((((float)_DAT_0064a5a8 < *(float *)(param_1 + 0x218)) &&
                  (*(float *)(param_1 + 0x218) < (float)_DAT_0064b948)) || (DAT_0070151c < 0x1e)) {
                FUN_005bb2a0((double)-*(float *)(param_1 + 0x218));
              }
            }
            else {
              *(float *)(pbVar1 + 0x68) = *(float *)(param_1 + 0x218) * (float)_DAT_0064a830;
            }
          }
          local_c = local_c + 1;
          iVar10 = iVar10 + 0x7c;
        } while (local_c < *(int *)(iVar7 + 0x48));
      }
      iVar7 = *(int *)(iVar7 + 8);
    } while (iVar7 != 0);
    iVar7 = thunk_FUN_005b5b70();
    if (iVar7 != 0) {
      uVar4 = __ftol();
      *(undefined1 *)(iVar7 + 0x24) = uVar4;
      *(undefined1 *)(iVar7 + 0x25) = uVar4;
      *(undefined1 *)(iVar7 + 0x26) = uVar4;
    }
  }
  return;
}

