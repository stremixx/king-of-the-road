
void __fastcall FUN_004afd00(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar1 = *(int **)*param_1;
  if (piVar1 != (int *)*param_1) {
    do {
      piVar8 = piVar1;
      piVar1 = (int *)*piVar8;
      if (((piVar8[4] & 0x10000U) == 0) && (iVar7 = piVar8[2], iVar7 != 0)) {
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1;
        piVar2 = (int *)piVar8[2];
        if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0xc))(1);
        }
      }
      FUN_00401aa0();
      *piVar8 = (int)DAT_0068c12c;
      DAT_0068c164 = 0;
      DAT_0068c12c = piVar8;
    } while (piVar1 != (int *)*param_1);
  }
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1 = (int *)*param_1;
  LVar4 = InterlockedExchange(&DAT_0068c164,1);
  uVar3 = DAT_0066b83c;
  if (LVar4 != 0) {
    uVar6 = 0;
    if (DAT_0066b83c != 0) {
      uVar5 = DAT_0068c168 >> 1;
      do {
        if (((uVar5 <= uVar6) && (DAT_0068c164 == 0)) &&
           (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
          DAT_0066b83c = 1000;
          DAT_0068c168 = uVar6;
          goto LAB_004afe4c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    DAT_0066b83c = 0x1e;
    iVar7 = 6;
    while( true ) {
      iVar9 = iVar7;
      if (0x1b < iVar7) {
        iVar9 = 0x1b;
      }
      LVar4 = InterlockedExchange(&DAT_0068c164,1);
      if (LVar4 == 0) break;
      FUN_00402b10(iVar9);
      iVar7 = iVar7 + 1;
    }
  }
LAB_004afe4c:
  *param_1 = (int)DAT_0068c12c;
  DAT_0068c12c = param_1;
  DAT_0068c164 = 0;
  return;
}

