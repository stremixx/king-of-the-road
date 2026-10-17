
void __fastcall FUN_00449900(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = (int *)*param_1;
  iVar3 = param_1[2] - (int)piVar1 >> 5;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 0x20;
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      return;
    }
    LVar5 = InterlockedExchange(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (LVar5 != 0) {
      uVar7 = 0;
      if (DAT_0066b83c != 0) {
        uVar6 = DAT_0068c168 >> 1;
        do {
          if (((uVar6 <= uVar7) && (DAT_0068c164 == 0)) &&
             (LVar5 = InterlockedExchange(&DAT_0068c164,1), LVar5 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar7;
            goto LAB_00449a27;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar3 = 6;
      while( true ) {
        iVar8 = iVar3;
        if (0x1b < iVar3) {
          iVar8 = 0x1b;
        }
        LVar5 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar5 == 0) break;
        if (iVar8 < 0x15) {
          Sleep(0);
          iVar3 = iVar3 + 1;
        }
        else {
          Sleep(1 << ((char)iVar8 - 0x14U & 0x1f));
          iVar3 = iVar3 + 1;
        }
      }
    }
LAB_00449a27:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}

