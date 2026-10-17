
void __fastcall FUN_0041f4c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063cc03;
  iVar5 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x1c);
  local_4 = 1;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, iVar8 != iVar5; iVar8 = iVar8 + 0x90) {
    FUN_0041cf40();
    ppvVar3 = ExceptionList;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar5 = (*(int *)(param_1 + 0x24) - (int)piVar1) / 0x90;
  if (iVar5 != 0) {
    uVar4 = iVar5 * 0x90;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x18) - (int)piVar1 >> 4;
  if (iVar5 != 0) {
    uVar4 = iVar5 * 0x10;
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
      return;
    }
    LVar6 = InterlockedExchange(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (LVar6 != 0) {
      uVar9 = 0;
      if (DAT_0066b83c != 0) {
        uVar7 = DAT_0068c168 >> 1;
        do {
          if (((uVar7 <= uVar9) && (DAT_0068c164 == 0)) &&
             (LVar6 = InterlockedExchange(&DAT_0068c164,1), LVar6 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar9;
            goto LAB_0041f698;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar5 = 6;
      while( true ) {
        iVar8 = iVar5;
        if (0x1b < iVar5) {
          iVar8 = 0x1b;
        }
        LVar6 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar6 == 0) break;
        if (iVar8 < 0x15) {
          Sleep(0);
          iVar5 = iVar5 + 1;
        }
        else {
          Sleep(1 << ((char)iVar8 - 0x14U & 0x1f));
          iVar5 = iVar5 + 1;
        }
      }
    }
LAB_0041f698:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

