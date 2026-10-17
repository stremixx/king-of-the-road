
int * __fastcall FUN_00447540(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e138;
  piVar3 = (int *)param_1[1];
  piVar6 = (int *)*param_1;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  for (; piVar6 != piVar3; piVar6 = piVar6 + 3) {
    if (((piVar6[2] & 0x10000U) == 0) && (iVar9 = *piVar6, iVar9 != 0)) {
      *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + -1;
      piVar1 = (int *)*piVar6;
      if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0xc))(1);
      }
    }
  }
  piVar6 = (int *)*param_1;
  piVar3 = (int *)((param_1[2] - (int)piVar6) * 0x2aaaaaab);
  iVar9 = (param_1[2] - (int)piVar6) / 0xc;
  if (iVar9 != 0) {
    uVar2 = iVar9 * 0xc;
    if (0x80 < uVar2) {
      piVar3 = (int *)FUN_0061c888(piVar6);
      ExceptionList = pvStack_c;
      return piVar3;
    }
    piVar3 = (int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
    LVar4 = InterlockedExchange(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (LVar4 != 0) {
      uVar7 = 0;
      if (DAT_0066b83c != 0) {
        uVar5 = DAT_0068c168 >> 1;
        do {
          if (((uVar5 <= uVar7) && (DAT_0068c164 == 0)) &&
             (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar7;
            goto LAB_004476df;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar9 = 6;
      while( true ) {
        iVar8 = iVar9;
        if (0x1b < iVar9) {
          iVar8 = 0x1b;
        }
        LVar4 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar4 == 0) break;
        if (iVar8 < 0x15) {
          Sleep(0);
          iVar9 = iVar9 + 1;
        }
        else {
          Sleep(1 << ((char)iVar8 - 0x14U & 0x1f));
          iVar9 = iVar9 + 1;
        }
      }
    }
LAB_004476df:
    *piVar6 = *piVar3;
    *piVar3 = (int)piVar6;
    DAT_0068c164 = 0;
  }
  ExceptionList = pvStack_c;
  return piVar3;
}

