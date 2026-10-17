
void __fastcall FUN_00602380(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = *(int **)(param_1 + 4);
  uVar3 = *(int *)(param_1 + 0xc) - (int)piVar1;
  if (uVar3 != 0) {
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      return;
    }
    LVar4 = InterlockedExchange(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (LVar4 != 0) {
      uVar6 = 0;
      if (DAT_0066b83c != 0) {
        uVar5 = DAT_0068c168 >> 1;
        do {
          if (((uVar5 <= uVar6) && (DAT_0068c164 == 0)) &&
             (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar6;
            goto LAB_0060249e;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar8 = 6;
      while( true ) {
        iVar7 = iVar8;
        if (0x1b < iVar8) {
          iVar7 = 0x1b;
        }
        LVar4 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar4 == 0) break;
        if (iVar7 < 0x15) {
          Sleep(0);
          iVar8 = iVar8 + 1;
        }
        else {
          Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
          iVar8 = iVar8 + 1;
        }
      }
    }
LAB_0060249e:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}

