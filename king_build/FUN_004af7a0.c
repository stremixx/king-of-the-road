
void __fastcall FUN_004af7a0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  LONG LVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = *(int **)*param_1;
  if (piVar1 != (undefined4 *)*param_1) {
    do {
      piVar4 = piVar1;
      piVar1 = (int *)*piVar4;
      FUN_00401aa0();
      *piVar4 = (int)DAT_0068c128;
      DAT_0068c164 = 0;
      DAT_0068c128 = piVar4;
    } while (piVar1 != (int *)*param_1);
  }
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1 = (int *)*param_1;
  LVar3 = InterlockedExchange(&DAT_0068c164,1);
  uVar2 = DAT_0066b83c;
  if (LVar3 != 0) {
    uVar5 = 0;
    if (DAT_0066b83c != 0) {
      uVar7 = DAT_0068c168 >> 1;
      do {
        if (((uVar7 <= uVar5) && (DAT_0068c164 == 0)) &&
           (LVar3 = InterlockedExchange(&DAT_0068c164,1), LVar3 == 0)) {
          DAT_0066b83c = 1000;
          DAT_0068c168 = uVar5;
          goto LAB_004af8c4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    DAT_0066b83c = 0x1e;
    iVar8 = 6;
    while( true ) {
      iVar6 = iVar8;
      if (0x1b < iVar8) {
        iVar6 = 0x1b;
      }
      LVar3 = InterlockedExchange(&DAT_0068c164,1);
      if (LVar3 == 0) break;
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
LAB_004af8c4:
  *param_1 = (int)DAT_0068c128;
  DAT_0068c128 = param_1;
  DAT_0068c164 = 0;
  return;
}

