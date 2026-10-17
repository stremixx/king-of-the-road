
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b19a0(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  float fVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_24;
  int local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  puVar5 = (ushort *)param_2;
  if ((DAT_00701cf8 & 1) == 0) {
    DAT_00701cf8 = DAT_00701cf8 | 1;
    _DAT_00701958 = 0;
    _DAT_0070195c = 0;
    _DAT_00701960 = 0;
    _DAT_00701964 = 0.0;
    FUN_0061c439(&DAT_005b1ff0);
  }
  if ((*(int *)(param_1 + 0x203c) != 0) && (*(int *)(param_1 + 0x79c) != 0)) {
    iVar8 = *(int *)(param_1 + 0x2044) + (short)*(ushort *)((int)param_2 + 0x30) * 0x7c;
    if (*(int *)(param_1 + 0x21ac) == 1) {
      iVar6 = thunk_FUN_005b5b70();
      if (iVar6 != 0) {
        if (((*(ushort *)param_2 & 0x80) == 0) || (DAT_007206d0 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
        if (((*(ushort *)param_2 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        FUN_005aea60((int)(short)*(ushort *)((int)param_2 + 0x30),uVar7,uVar10);
        FUN_005aea90(param_2,iVar8);
        if ((*(ushort *)param_2 & 4) != 0) {
          (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,3);
        }
        FUN_005b1000(iVar8,6 - (uint)((*(ushort *)param_2 & 0x80) != 0),
                     (ushort *)((int)param_2 + 0x34),*(ushort *)((int)param_2 + 4));
        if ((*(ushort *)param_2 & 4) != 0) {
          (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,2);
        }
        if ((*(ushort *)param_2 & 0x80) != 0) {
          *(uint *)(param_1 + 0x20a4) =
               *(int *)(param_1 + 0x20a4) + (*(ushort *)((int)param_2 + 4) - 2);
          *(int *)(param_1 + 0x20c0) = *(int *)(param_1 + 0x20c0) + 1;
          return;
        }
      }
    }
    else {
      FUN_005cd110((ushort *)((int)param_2 + 0x20));
      FUN_005aafe0(*(int *)(param_1 + 0x2020) * 0x30 + 0xc80 + param_1);
      if ((float)_DAT_0064a648 < _DAT_00701964) {
        if (*(int *)(param_1 + 0x21ac) == 2) {
          iVar6 = thunk_FUN_005b5b70();
          if (iVar6 == 0) {
            return;
          }
          FUN_005aea60((int)(short)*(ushort *)((int)param_2 + 0x30),0,0);
        }
        pfVar2 = (float *)(*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1);
        iVar6 = thunk_FUN_005b5b70();
        if (((((iVar6 != 0) && ((*(ushort *)param_2 & 0x10) == 0)) &&
             ((*(ushort *)param_2 & 1) != 0)) &&
            ((((byte)DAT_00701dec & 0x40) != 0 && (*(int *)(param_1 + 0x2030) != 0)))) &&
           ((*(int *)(param_1 + 0x2100) != 2 && (*(int *)(param_1 + 0x2100) == 1)))) {
          local_18 = *(float *)((int)param_2 + 0x20) * *pfVar2 +
                     pfVar2[6] * *(float *)((int)param_2 + 0x28) +
                     pfVar2[3] * *(float *)((int)param_2 + 0x24);
          local_14 = pfVar2[7] * *(float *)((int)param_2 + 0x28) +
                     pfVar2[1] * *(float *)((int)param_2 + 0x20) +
                     pfVar2[4] * *(float *)((int)param_2 + 0x24);
          local_10 = pfVar2[8] * *(float *)((int)param_2 + 0x28) +
                     pfVar2[2] * *(float *)((int)param_2 + 0x20) +
                     pfVar2[5] * *(float *)((int)param_2 + 0x24);
          FUN_005ad290(&local_18,*(undefined4 *)(param_1 + 0x2140),*(undefined4 *)(param_1 + 0x2144)
                      );
        }
        if (((*(uint *)(iVar8 + 0x20) & 0xc) != 0) &&
           (iVar6 = 0, *(ushort *)((int)param_2 + 4) != 0)) {
          do {
            if ((*(ushort *)param_2 & 2) != 0) {
              if ((*(byte *)(iVar8 + 0x20) & 8) != 0) {
                fVar12 = (float10)*(float *)(iVar8 + 0x6c) * (float10)*(double *)(param_1 + 0x2120);
                fVar13 = (float10)fsin(fVar12);
                fVar12 = (float10)fcos(fVar12);
                fVar4 = *(float *)(*(int *)((int)param_2 + 0xc) + iVar6 * 4) -
                        *(float *)(iVar8 + 0x70);
                pfVar1 = (float *)(*(int *)((int)param_2 + 0x10) + iVar6 * 4);
                fVar14 = (float10)*pfVar1 - (float10)*(float *)(iVar8 + 0x74);
                fVar11 = *(float *)(iVar8 + 0x70);
                *pfVar1 = (float)(((float10)(float)fVar14 * fVar12 -
                                  (float10)fVar4 * (float10)(float)fVar13) +
                                 (float10)*(float *)(iVar8 + 0x74));
                *(float *)(*(int *)((int)param_2 + 0xc) + iVar6 * 4) =
                     (float)((float10)fVar4 * fVar12 + fVar14 * (float10)(float)fVar13 +
                            (float10)fVar11);
              }
              if ((*(byte *)(iVar8 + 0x20) & 4) != 0) {
                pfVar1 = (float *)(*(int *)((int)param_2 + 0xc) + iVar6 * 4);
                *pfVar1 = *(float *)(iVar8 + 0x50) * (float)*(double *)(param_1 + 0x2120) + *pfVar1;
                pfVar1 = (float *)(*(int *)((int)param_2 + 0x10) + iVar6 * 4);
                *pfVar1 = *(float *)(iVar8 + 0x54) * (float)*(double *)(param_1 + 0x2120) + *pfVar1;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(uint)*(ushort *)((int)param_2 + 4));
        }
        local_24 = 0.0;
        if (*(ushort *)((int)param_2 + 4) != 0) {
          local_20 = 0;
          param_2 = (float *)(param_1 + 0x680);
          iVar8 = -0x680 - param_1;
          do {
            pfVar1 = (float *)(*(int *)(param_1 + 0x203c) +
                              (uint)*(ushort *)(*(int *)(puVar5 + 4) + (int)local_24 * 2) * 0x1c);
            FUN_005e0dd0(pfVar1);
            iVar6 = thunk_FUN_005b5b70();
            if (iVar6 != 0) {
              uVar3 = *puVar5;
              if ((uVar3 & 0x10) == 0) {
                if (((*(int *)(param_1 + 0x2100) == 2) && ((uVar3 & 1) != 0)) &&
                   (((byte)DAT_00701dec & 0x40) != 0)) {
                  local_c = *pfVar2 * *pfVar1 + pfVar2[3] * pfVar1[1] + pfVar2[6] * pfVar1[2] +
                            pfVar2[9];
                  local_8 = pfVar2[1] * *pfVar1 + pfVar2[4] * pfVar1[1] + pfVar2[7] * pfVar1[2] +
                            pfVar2[10];
                  local_4 = pfVar2[2] * *pfVar1 + pfVar2[5] * pfVar1[1] + pfVar2[8] * pfVar1[2] +
                            pfVar2[0xb];
                  fVar12 = (float10)FUN_005ad200(&local_c,puVar5 + 0x10,
                                                 *(undefined4 *)(param_1 + 0x2140),
                                                 *(undefined4 *)(param_1 + 0x2144));
                  *param_2 = (float)fVar12;
                }
              }
              else if (((uVar3 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
                *param_2 = *(float *)(*(int *)(puVar5 + 10) + iVar8 + (int)param_2);
              }
              else if (*(int *)(param_1 + 0x2030) < 1) {
                *param_2 = (float)*(double *)(param_1 + 0x2140);
              }
              else {
                local_18 = *pfVar2 * *pfVar1 + pfVar2[3] * pfVar1[1] + pfVar2[6] * pfVar1[2] +
                           pfVar2[9];
                local_14 = pfVar2[1] * *pfVar1 + pfVar2[4] * pfVar1[1] + pfVar2[7] * pfVar1[2] +
                           pfVar2[10];
                local_10 = pfVar2[2] * *pfVar1 + pfVar2[5] * pfVar1[1] + pfVar2[8] * pfVar1[2] +
                           pfVar2[0xb];
                fVar12 = (float10)FUN_005ad200(&local_18,*(int *)(puVar5 + 0xc) + local_20,
                                               *(undefined4 *)(param_1 + 0x2140),
                                               *(undefined4 *)(param_1 + 0x2144));
                *param_2 = (float)fVar12;
              }
            }
            if ((*puVar5 & 2) == 0) {
              param_2[-0x2c] = pfVar1[3];
              fVar11 = pfVar1[4];
            }
            else {
              param_2[-0x2c] = *(float *)((int)param_2 + *(int *)(puVar5 + 6) + iVar8);
              fVar11 = *(float *)((int)param_2 + *(int *)(puVar5 + 8) + iVar8);
            }
            param_2[-0x16] = fVar11;
            param_2[0x17] = local_24;
            local_24 = (float)((int)local_24 + 1);
            local_20 = local_20 + 0xc;
            param_2 = param_2 + 1;
          } while ((int)local_24 < (int)(uint)puVar5[2]);
        }
        *(float *)(param_1 + 0x78c) = local_24;
        if (((*(int *)(param_1 + 0x21ac) != 2) &&
            ((-1 < (short)puVar5[0x19] ||
             (iVar8 = (int)((ulonglong)
                            ((longlong)
                             ((100 - *(int *)(param_1 + 0x2108)) * (int)(short)puVar5[0x19]) *
                            -0x51eb851f) >> 0x20),
             *(float *)(param_1 + 0x4cc) <= (float)((iVar8 >> 5) - (iVar8 >> 0x1f)))))) &&
           (((*(byte *)(*(int *)(*(int *)(param_1 + 0x2044) + 0x4c + (short)puVar5[0x18] * 0x7c) +
                       0x34) & 1) != 0 && (((byte)DAT_00701dec & 2) != 0)))) {
          puVar9 = (undefined4 *)FUN_005aaad0(&local_c,&DAT_00701958);
          _DAT_00701958 = *puVar9;
          _DAT_0070195c = puVar9[1];
          _DAT_00701960 = puVar9[2];
        }
      }
    }
  }
  return;
}

