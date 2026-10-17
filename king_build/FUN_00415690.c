
bool FUN_00415690(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  for (piVar2 = param_1; (piVar2 != param_2 && (*piVar2 != param_4)); piVar2 = piVar2 + 1) {
  }
  iVar3 = param_3 - (int)param_1 >> 2;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 4;
    if (uVar4 < 0x81) {
      LVar5 = InterlockedExchange(&DAT_0068c164,1);
      uVar1 = DAT_0066b83c;
      if (LVar5 != 0) {
        uVar7 = 0;
        if (DAT_0066b83c != 0) {
          uVar6 = DAT_0068c168 >> 1;
          do {
            if (((uVar6 <= uVar7) && (DAT_0068c164 == 0)) &&
               (LVar5 = InterlockedExchange(&DAT_0068c164,1), LVar5 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar7;
              goto LAB_004157d4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar1);
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
LAB_004157d4:
      *param_1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = param_1;
      DAT_0068c164 = 0;
      return param_2 != piVar2;
    }
    FUN_0061c888(param_1);
  }
  return param_2 != piVar2;
}

