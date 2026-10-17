
void __fastcall FUN_00449420(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  undefined4 uVar4;
  LONG LVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e2b8;
  local_c = ExceptionList;
  piVar1 = *(int **)*param_1;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar1 != (int *)*param_1) {
    do {
      piVar9 = piVar1;
      piVar1 = (int *)*piVar9;
      iVar8 = piVar9[0xb];
      iVar10 = piVar9[0xc];
      local_4 = 0;
      uVar4 = FUN_004c4b40(iVar8);
      FUN_004030a0(iVar8,iVar10,uVar4);
      iVar8 = piVar9[0xb];
      local_4 = 0xffffffff;
      FUN_0044b6b0(iVar8,(piVar9[0xd] - iVar8) / 0xc);
      FUN_00401aa0();
      *piVar9 = (int)DAT_0068c140;
      DAT_0068c164 = 0;
      DAT_0068c140 = piVar9;
      ppvVar3 = ExceptionList;
    } while (piVar1 != (int *)*param_1);
  }
  ExceptionList = ppvVar3;
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1 = (int *)*param_1;
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
          goto LAB_004495b7;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    DAT_0066b83c = 0x1e;
    iVar8 = 6;
    while( true ) {
      iVar10 = iVar8;
      if (0x1b < iVar8) {
        iVar10 = 0x1b;
      }
      LVar5 = InterlockedExchange(&DAT_0068c164,1);
      if (LVar5 == 0) break;
      FUN_00402b10(iVar10);
      iVar8 = iVar8 + 1;
    }
  }
LAB_004495b7:
  *param_1 = (int)DAT_0068c140;
  DAT_0068c140 = param_1;
  DAT_0068c164 = 0;
  ExceptionList = local_c;
  return;
}

