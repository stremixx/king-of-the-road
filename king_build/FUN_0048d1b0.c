
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0048d1b0(int param_1,double *param_2,double *param_3,undefined4 param_4,uint *param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38 [52];
  
  if (*param_3 <= _DAT_0064a668) {
    if ((*param_3 < _DAT_0064a668) && (uVar11 = *param_5, -1 < (int)uVar11)) {
      while( true ) {
        iVar3 = uVar11 * 3 + 3;
        pdVar1 = (double *)(*(int *)(param_1 + 0x20) + iVar3 * 8);
        FUN_00405ea0(*pdVar1 * *param_2,pdVar1[1] * *param_2,
                     *(double *)(*(int *)(param_1 + 0x20) + 0x10 + iVar3 * 8) * *param_2);
        puVar12 = local_38;
        uVar9 = FUN_00425640();
        FUN_00411a70(&local_50,uVar9,puVar12);
        pdVar1 = (double *)(*(int *)(param_1 + 0x20) + *param_5 * 0x18);
        FUN_00405ea0(*pdVar1 - local_50,pdVar1[1] - local_48,
                     *(double *)(*(int *)(param_1 + 0x20) + 0x10 + *param_5 * 0x18) - local_40);
        dVar6 = SQRT(local_58 * local_58 + local_60 * local_60 + local_68 * local_68);
        if (-*param_3 <= dVar6) {
          iVar5 = *(int *)(param_1 + 0x20);
          iVar4 = *param_5 * 3 + 3;
          pdVar1 = (double *)(iVar5 + *param_5 * 0x18);
          iVar3 = iVar5 + iVar4 * 8;
          dVar6 = *(double *)(iVar5 + iVar4 * 8) - *pdVar1;
          dVar7 = *(double *)(iVar3 + 8) - pdVar1[1];
          dVar8 = *(double *)(iVar3 + 0x10) - pdVar1[2];
          *param_2 = *param_3 / SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6) + *param_2;
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)((int)param_3 + 4) = 0;
          if (*param_2 < _DAT_0064a668) {
            *(undefined4 *)param_2 = 0;
            *(undefined4 *)((int)param_2 + 4) = 0;
          }
          return 0;
        }
        *param_3 = dVar6 + *param_3;
        if (*param_5 == 0) break;
        *param_5 = *param_5 - 1;
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
        uVar11 = *param_5;
        if ((int)uVar11 < 0) {
          return 1;
        }
      }
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)((int)param_2 + 4) = 0;
      return 1;
    }
  }
  else {
    uVar11 = *param_5;
    if (uVar11 < (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18 - 1U) {
      do {
        uVar9 = FUN_00425640(local_38,*(int *)(param_1 + 0x20) + (uVar11 * 3 + 3) * 8,
                             *(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
        uVar10 = FUN_00425640();
        FUN_00411a70(&local_50,uVar10,uVar9);
        pdVar1 = (double *)(*(int *)(param_1 + 0x20) + (*param_5 + 1) * 0x18);
        FUN_00405ea0(*pdVar1 - local_50,pdVar1[1] - local_48,
                     *(double *)(*(int *)(param_1 + 0x20) + 0x10 + (*param_5 + 1) * 0x18) - local_40
                    );
        dVar6 = SQRT(local_68 * local_68 + local_58 * local_58 + local_60 * local_60);
        if (*param_3 <= dVar6) {
          iVar4 = *(int *)(param_1 + 0x20);
          iVar3 = *param_5 * 3 + 3;
          pdVar1 = (double *)(iVar4 + iVar3 * 8);
          pdVar2 = (double *)(iVar4 + *param_5 * 0x18);
          FUN_00405ea0(*pdVar1 - *pdVar2,pdVar1[1] - pdVar2[1],
                       *(double *)(iVar4 + 0x10 + iVar3 * 8) - pdVar2[2]);
          *param_2 = *param_3 /
                     SQRT(local_68 * local_68 + local_58 * local_58 + local_60 * local_60) +
                     *param_2;
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)((int)param_3 + 4) = 0;
          if (_DAT_0064a660 < *param_2) {
            *(undefined4 *)param_2 = 0;
            *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
          }
          return 0;
        }
        *param_3 = *param_3 - dVar6;
        if ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18 - 2U <= *param_5) {
          *(undefined4 *)param_2 = 0;
          *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
          return 1;
        }
        *param_5 = *param_5 + 1;
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
        uVar11 = *param_5;
      } while (uVar11 < (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) / 0x18 - 1U);
    }
  }
  return 1;
}

