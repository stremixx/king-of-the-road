
void __fastcall FUN_004028f0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void **ppvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063adab;
  local_c = ExceptionList;
  uVar8 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar5 = &local_c;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar8 * 4);
      while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar3;
        FUN_0044a6e0(puVar3[1]);
        FUN_00401aa0();
        *puVar3 = DAT_0068c128;
        DAT_0068c164 = 0;
        DAT_0068c128 = puVar3;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + -4 + uVar8 * 4) = 0;
      ppvVar5 = ExceptionList;
    } while (uVar8 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  ExceptionList = ppvVar5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar2 = *(int **)(param_1 + 4);
  local_4 = 0xffffffff;
  iVar10 = *(int *)(param_1 + 0xc) - (int)piVar2 >> 2;
  if (iVar10 != 0) {
    uVar8 = iVar10 * 4;
    if (0x80 < uVar8) {
      FUN_0061c888(piVar2);
      ExceptionList = local_c;
      return;
    }
    iVar10 = FUN_00402af0(&DAT_0068c164,1);
    uVar4 = DAT_0066b83c;
    if (iVar10 != 0) {
      uVar9 = 0;
      if (DAT_0066b83c != 0) {
        uVar7 = DAT_0068c168 >> 1;
        do {
          if (((uVar7 <= uVar9) && (DAT_0068c164 == 0)) &&
             (iVar10 = FUN_00402af0(&DAT_0068c164,1), iVar10 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar9;
            goto LAB_00402ac2;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar4);
      }
      DAT_0066b83c = 0x1e;
      iVar10 = 6;
      while( true ) {
        iVar11 = iVar10;
        if (0x1b < iVar10) {
          iVar11 = 0x1b;
        }
        iVar6 = FUN_00402af0(&DAT_0068c164,1);
        if (iVar6 == 0) break;
        FUN_00402b10(iVar11);
        iVar10 = iVar10 + 1;
      }
    }
LAB_00402ac2:
    *piVar2 = *(int *)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4) = piVar2;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

