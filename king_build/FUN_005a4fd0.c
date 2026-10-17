
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a4fd0(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  ushort uVar13;
  ushort *puVar14;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  int local_44;
  double local_28;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647ca3;
  local_14 = ExceptionList;
  uVar12 = *(undefined4 *)(param_1 + 0x70);
  dVar6 = *(double *)(param_1 + 0x70);
  if ((*(uint *)(param_1 + 0xa4) & 4) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0xa8) = 1;
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    dVar5 = *(double *)(*(int *)(param_1 + 0x20) + 0xb90) * _DAT_00650530 +
            *(double *)(param_1 + 0x70);
    ExceptionList = &local_14;
    *(double *)(param_1 + 0x70) = dVar5;
    if (_DAT_0064c9f0 < dVar5) {
      *(undefined4 *)(param_1 + 0x70) = 0x4d12d84a;
      *(undefined4 *)(param_1 + 0xa8) = 1;
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x74) = 0x3ff921fb;
    }
  }
  else {
    dVar5 = *(double *)(param_1 + 0x70) -
            *(double *)(*(int *)(param_1 + 0x20) + 0xb90) * _DAT_00650530;
    ExceptionList = &local_14;
    *(double *)(param_1 + 0x70) = dVar5;
    if (dVar5 < *(double *)(param_1 + 0xb0)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
    }
  }
  if (((*(uint *)(param_1 + 0xa4) & 1) != 0) && (*(int *)(param_1 + 0x9c) == 0)) {
    FUN_005d2a00(1);
    ExceptionList = local_14;
    return;
  }
  if ((((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
      (*(int *)(param_1 + 0x98) != 0)) && (*(int *)(param_1 + 0x94) != 0)) {
    _DAT_0070150c = (float)*(double *)(param_1 + 0xb8);
    if (((*(uint *)(param_1 + 0xa4) & 2) != 0) && ((*(uint *)(param_1 + 0xa4) & 8) != 0)) {
      dVar5 = _DAT_0064a668;
      if (*(double *)(param_1 + 0xb8) <= _DAT_0064a6e0) {
        dVar5 = (_DAT_0064a660 - *(double *)(param_1 + 0xb8) * _DAT_0064c328) *
                *(double *)(*(int *)(param_1 + 0x20) + 0xb90) * *(double *)(param_1 + 0x28);
      }
      *(double *)(param_1 + 0x30) = dVar5 + *(double *)(param_1 + 0x30);
    }
    if (_DAT_0064a660 < *(double *)(param_1 + 0x30)) {
      iVar7 = __ftol();
      *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x30) - (double)iVar7;
      if (0 < iVar7) {
        do {
          uVar1 = **(ushort **)(param_1 + 0x98);
          iVar8 = _rand();
          iVar8 = iVar8 % (int)(uint)uVar1;
          uVar1 = *(ushort *)(*(int *)(param_1 + 0x98) + 2);
          iVar9 = _rand();
          iVar9 = iVar9 % (int)(uint)uVar1;
          if (DAT_00701510 == 0) {
            FUN_005a4e20(*(undefined4 *)(param_1 + 0x98),iVar8,iVar9,*(undefined4 *)(param_1 + 0x40)
                        );
          }
          else {
            FUN_005b8660(*(undefined4 *)(param_1 + 0x98),iVar8,iVar9,*(undefined4 *)(param_1 + 0x40)
                        );
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (((*(uint *)(param_1 + 0xa4) & 2) != 0) && ((*(uint *)(param_1 + 0xa4) & 8) != 0)) {
      dVar5 = _DAT_0064a650;
      if (*(double *)(param_1 + 0xb8) <= _DAT_0064a6e0) {
        dVar5 = (*(double *)(param_1 + 0xb8) * _DAT_0064c328 + _DAT_0064a660) *
                *(double *)(*(int *)(param_1 + 0x20) + 0xb90) * *(double *)(param_1 + 0x28);
      }
      *(double *)(param_1 + 0x38) = dVar5 + *(double *)(param_1 + 0x38);
    }
    if (_DAT_0064a660 < *(double *)(param_1 + 0x38)) {
      local_44 = __ftol();
      *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x38) - (double)local_44;
      if (0 < local_44) {
        do {
          uVar1 = **(ushort **)(param_1 + 0x98);
          iVar7 = _rand();
          uVar13 = *(ushort *)(*(int *)(param_1 + 0x98) + 2);
          iVar8 = _rand();
          puVar10 = (undefined4 *)FUN_00631d33(0x38);
          local_c = 0;
          if (puVar10 != (undefined4 *)0x0) {
            uVar2 = *(undefined4 *)(param_1 + 0x44);
            uVar3 = *(undefined4 *)(param_1 + 0x98);
            uVar4 = *(undefined4 *)(param_1 + 0x20);
            FUN_005d2890(0xb,&DAT_00671638);
            puVar10[10] = uVar3;
            puVar10[0xd] = iVar8 % (int)(uint)uVar13;
            local_c = CONCAT31(local_c._1_3_,1);
            *puVar10 = &PTR_FUN_00650510;
            puVar10[8] = uVar4;
            puVar10[9] = param_1 + 0x9c;
            puVar10[0xc] = iVar7 % (int)(uint)uVar1;
            FUN_005d2c20(puVar10);
            puVar10[0xb] = uVar2;
            FUN_005d2a80(1);
          }
          local_44 = local_44 + -1;
          local_c = 0xffffffff;
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        } while (local_44 != 0);
      }
    }
    uVar11 = *(uint *)(param_1 + 0xa4);
    if ((uVar11 & 0x20) != 0) {
      if (*(int *)(param_1 + 0xa0) < 1) {
        *(uint *)(param_1 + 0xa4) = uVar11 & 0xffffffd7 | 0x40;
      }
      else {
        puVar14 = *(ushort **)(param_1 + 0x98);
        *(uint *)(param_1 + 0xa4) = uVar11 & 0xffffffbf;
        if (puVar14[2] == 2) {
          local_44 = 0;
          iVar7 = *(int *)(puVar14 + *(int *)(puVar14 + 8) * 2 + 0xc);
          if (puVar14[1] != 0) {
            do {
              iVar8 = 0;
              uVar11 = (uint)*puVar14;
              if (uVar11 != 0) {
                do {
                  iVar9 = uVar11 * local_44 + iVar8;
                  uVar1 = *(ushort *)(iVar7 + iVar9 * 2);
                  uVar13 = uVar1 >> 0xc;
                  if ((uVar13 != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0xbb0) % 5 == 0)) {
                    uVar13 = uVar13 - 1;
                  }
                  iVar8 = iVar8 + 1;
                  *(ushort *)(iVar7 + iVar9 * 2) = uVar1 & 0xfff | uVar13 << 0xc;
                  uVar11 = (uint)**(ushort **)(param_1 + 0x98);
                } while (iVar8 < (int)uVar11);
              }
              puVar14 = *(ushort **)(param_1 + 0x98);
              local_44 = local_44 + 1;
            } while (local_44 < (int)(uint)puVar14[1]);
          }
        }
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
      }
    }
    if ((*(byte *)(param_1 + 0xa4) & 4) != 0) {
      uStack_1c = (undefined4)((ulonglong)dVar6 >> 0x20);
      if (*(double *)(param_1 + 0x70) <= dVar6) {
        dVar5 = *(double *)(param_1 + 0x70);
        local_28 = (double)CONCAT44(uStack_1c,uVar12);
        if (*(double *)(param_1 + 0x70) < dVar6) {
          do {
            local_28 = local_28 - _DAT_0064c0a8;
            if (*(int *)(param_1 + 0x7c) != 0) {
              dVar6 = local_28 - _DAT_00650508;
              fcos((float10)local_28 - (float10)_DAT_0064fac8);
              uVar12 = __ftol(0,1);
              fsin(extraout_ST1_00);
              uVar12 = __ftol(uVar12);
              fcos((float10)dVar6);
              uVar12 = __ftol(uVar12);
              fsin((float10)dVar6);
              uVar12 = __ftol(uVar12);
              FUN_005b6a50(*(undefined4 *)(param_1 + 0x98),uVar12);
            }
          } while (dVar5 < local_28);
        }
      }
      else {
        dVar5 = *(double *)(param_1 + 0x70);
        local_28 = (double)CONCAT44(uStack_1c,uVar12);
        if (dVar6 < *(double *)(param_1 + 0x70)) {
          do {
            local_28 = local_28 + _DAT_0064c0a8;
            if (*(int *)(param_1 + 0x7c) != 0) {
              dVar6 = local_28 - _DAT_00650508;
              fcos((float10)local_28 - (float10)_DAT_0064fac8);
              uVar12 = __ftol(0,1);
              fsin(extraout_ST1);
              uVar12 = __ftol(uVar12);
              fcos((float10)dVar6);
              uVar12 = __ftol(uVar12);
              fsin((float10)dVar6);
              uVar12 = __ftol(uVar12);
              FUN_005b6a50(*(undefined4 *)(param_1 + 0x98),uVar12);
            }
          } while (local_28 < dVar5);
          ExceptionList = local_14;
          return;
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

