
void __fastcall FUN_004482f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = param_1[1];
  for (iVar7 = *param_1; iVar7 != iVar3; iVar7 = iVar7 + 0x10) {
    FUN_004497b0();
  }
  piVar1 = (int *)*param_1;
  iVar3 = param_1[2] - (int)piVar1 >> 4;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 0x10;
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
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
            goto LAB_00448437;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar3 = 6;
      while( true ) {
        iVar7 = iVar3;
        if (0x1b < iVar3) {
          iVar7 = 0x1b;
        }
        LVar5 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar5 == 0) break;
        if (iVar7 < 0x15) {
          Sleep(0);
          iVar3 = iVar3 + 1;
        }
        else {
          Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
          iVar3 = iVar3 + 1;
        }
      }
    }
LAB_00448437:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}

