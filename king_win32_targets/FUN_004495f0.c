
void __fastcall FUN_004495f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  uint uVar4;
  LONG LVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e2d8;
  iVar9 = param_1[1];
  iVar7 = *param_1;
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, iVar7 != iVar9; iVar7 = iVar7 + 0x244) {
    FUN_004030a0();
    ppvVar3 = ExceptionList;
  }
  piVar1 = (int *)*param_1;
  iVar9 = (param_1[2] - (int)piVar1) / 0x244;
  if (iVar9 != 0) {
    uVar4 = iVar9 * 0x244;
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
      return;
    }
    LVar5 = InterlockedExchange(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (LVar5 != 0) {
      uVar8 = 0;
      if (DAT_0066b83c != 0) {
        uVar6 = DAT_0068c168 >> 1;
        do {
          if (((uVar6 <= uVar8) && (DAT_0068c164 == 0)) &&
             (LVar5 = InterlockedExchange(&DAT_0068c164,1), LVar5 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar8;
            goto LAB_00449775;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar9 = 6;
      while( true ) {
        iVar7 = iVar9;
        if (0x1b < iVar9) {
          iVar7 = 0x1b;
        }
        LVar5 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar5 == 0) break;
        if (iVar7 < 0x15) {
          Sleep(0);
          iVar9 = iVar9 + 1;
        }
        else {
          Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
          iVar9 = iVar9 + 1;
        }
      }
    }
LAB_00449775:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

