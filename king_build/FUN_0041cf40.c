
void __fastcall FUN_0041cf40(int param_1)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ca98;
  iVar4 = *(int *)(param_1 + 0x7c);
  iVar8 = *(int *)(param_1 + 0x78);
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, iVar8 != iVar4; iVar8 = iVar8 + 0x10) {
    FUN_0046c840(0);
    ppvVar3 = ExceptionList;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x80) - (int)piVar1 >> 4;
  if (iVar4 != 0) {
    uVar5 = iVar4 * 0x10;
    if (0x80 < uVar5) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
      return;
    }
    iVar4 = FUN_00402af0(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (iVar4 != 0) {
      uVar9 = 0;
      if (DAT_0066b83c != 0) {
        uVar7 = DAT_0068c168 >> 1;
        do {
          if (((uVar7 <= uVar9) && (DAT_0068c164 == 0)) &&
             (iVar4 = FUN_00402af0(&DAT_0068c164,1), iVar4 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar9;
            goto LAB_0041d0af;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar4 = 6;
      while( true ) {
        iVar8 = iVar4;
        if (0x1b < iVar4) {
          iVar8 = 0x1b;
        }
        iVar6 = FUN_00402af0(&DAT_0068c164,1);
        if (iVar6 == 0) break;
        FUN_00402b10(iVar8);
        iVar4 = iVar4 + 1;
      }
    }
LAB_0041d0af:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

