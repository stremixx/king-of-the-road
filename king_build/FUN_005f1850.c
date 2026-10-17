
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_005f1850(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  uint local_200;
  double local_1fc;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 local_1d0 [52];
  undefined1 auStack_100 [48];
  undefined4 local_d0 [52];
  
  if ((param_2 < *(int *)(param_1 + 0x34)) && (-1 < param_2)) {
    if (param_4[0x33] == 0) {
      fVar6 = (float10)thunk_FUN_00603580();
      *(double *)(param_4 + 0x30) = (double)fVar6;
      param_4[0x32] = 0;
    }
    param_4[0x33] = param_4[0x33] + 1;
    if ((param_3 & 8) != 0) {
      FUN_005eebf0();
      FUN_005eebf0();
      local_200 = 0;
      puVar3 = param_4;
      puVar5 = local_d0;
      for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      local_1fc = 1000000.0;
      puVar3 = param_4;
      puVar5 = local_1d0;
      for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (piVar1 = *(int **)(*(int *)(param_1 + 0x30) + param_2 * 4); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[2]) {
        uVar2 = (**(code **)(*piVar1 + 0x34))(param_3,param_4);
        if ((uVar2 & 1) != 0) {
          if ((DAT_007229b4 & 1) == 0) {
            DAT_007229b4 = DAT_007229b4 | 1;
            iVar4 = 4;
            puVar3 = &DAT_007229c0;
            do {
              puVar3[-2] = 0;
              puVar3[-1] = 0;
              *puVar3 = 0;
              puVar3 = puVar3 + 3;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            FUN_0061c439(&DAT_005f1c00);
          }
          puVar3 = (undefined4 *)FUN_005aba00(auStack_100,param_4 + 1);
          puVar5 = &DAT_007229b8;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          fStack_1dc = (float)param_4[0x13] -
                       (DAT_007229c4 * (float)param_4[0xe] +
                        _DAT_007229d0 * (float)param_4[0xf] + DAT_007229b8 * (float)param_4[0xd] +
                       _DAT_007229dc);
          fStack_1d8 = (float)param_4[0x14] -
                       (DAT_007229c8 * (float)param_4[0xe] +
                        _DAT_007229d4 * (float)param_4[0xf] + DAT_007229bc * (float)param_4[0xd] +
                       _DAT_007229e0);
          fStack_1d4 = (float)param_4[0x15] -
                       (DAT_007229cc * (float)param_4[0xe] +
                        _DAT_007229d8 * (float)param_4[0xf] + DAT_007229c0 * (float)param_4[0xd] +
                       _DAT_007229e4);
          fVar6 = (float10)FUN_005aabc0(&fStack_1dc);
          if ((local_200 & 1) == 0) {
            local_1fc = (double)fVar6;
            puVar3 = param_4;
            puVar5 = local_1d0;
            for (iVar4 = 0x34; local_200 = uVar2, iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          else if (fVar6 < (float10)local_1fc) {
            local_1fc = (double)fVar6;
            puVar3 = param_4;
            puVar5 = local_1d0;
            for (iVar4 = 0x34; local_200 = uVar2, iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar5 = puVar5 + 1;
            }
          }
        }
        if ((uVar2 & 2) != 0) {
          puVar3 = param_4;
          puVar5 = local_1d0;
          for (iVar4 = 0x34; local_200 = uVar2, iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        puVar3 = local_d0;
        puVar5 = param_4;
        for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      puVar3 = local_1d0;
      puVar5 = param_4;
      for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar4 = param_4[0x33];
      param_4[0x33] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        fVar6 = (float10)thunk_FUN_00603580();
        *(double *)(param_4 + 0x30) = (double)(fVar6 - (float10)*(double *)(param_4 + 0x30));
        DAT_00701dd4 = DAT_00701dd4 + param_4[0x32];
        _DAT_00701dd8 = _DAT_00701dd8 + *(double *)(param_4 + 0x30);
      }
      return local_200;
    }
    for (piVar1 = *(int **)(*(int *)(param_1 + 0x30) + param_2 * 4); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      uVar2 = (**(code **)(*piVar1 + 0x34))(param_3,param_4);
      if (uVar2 != 0) {
        iVar4 = param_4[0x33];
        param_4[0x33] = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          fVar6 = (float10)thunk_FUN_00603580();
          *(double *)(param_4 + 0x30) = (double)(fVar6 - (float10)*(double *)(param_4 + 0x30));
          DAT_00701dd4 = DAT_00701dd4 + param_4[0x32];
          _DAT_00701dd8 = _DAT_00701dd8 + *(double *)(param_4 + 0x30);
        }
        return uVar2;
      }
    }
    iVar4 = param_4[0x33];
    param_4[0x33] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      fVar6 = (float10)thunk_FUN_00603580();
      *(double *)(param_4 + 0x30) = (double)(fVar6 - (float10)*(double *)(param_4 + 0x30));
      DAT_00701dd4 = DAT_00701dd4 + param_4[0x32];
      _DAT_00701dd8 = _DAT_00701dd8 + *(double *)(param_4 + 0x30);
    }
  }
  return 0;
}

