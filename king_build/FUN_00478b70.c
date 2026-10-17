
void __fastcall FUN_00478b70(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063fd78;
  iVar8 = param_1[1];
  iVar6 = *param_1;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; iVar6 != iVar8; iVar6 = iVar6 + 0x90) {
    FUN_00450d80();
  }
  piVar1 = (int *)*param_1;
  iVar8 = (param_1[2] - (int)piVar1) / 0x90;
  if (iVar8 != 0) {
    uVar3 = iVar8 * 0x90;
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
      return;
    }
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
            goto LAB_00478cf8;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar8 = 6;
      while( true ) {
        iVar6 = iVar8;
        if (0x1b < iVar8) {
          iVar6 = 0x1b;
        }
        LVar4 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar4 == 0) break;
        if (iVar6 < 0x15) {
          Sleep(0);
          iVar8 = iVar8 + 1;
        }
        else {
          Sleep(1 << ((char)iVar6 - 0x14U & 0x1f));
          iVar8 = iVar8 + 1;
        }
      }
    }
LAB_00478cf8:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

