
int * __fastcall FUN_00407310(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar4 = *(int **)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18) - (int)piVar4 >> 3;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 8;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar4 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar4;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar4);
    }
  }
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0xc) - (int)piVar1;
  piVar4 = (int *)(iVar2 * 0x2aaaaaab);
  iVar2 = iVar2 / 0x18;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x18;
    if (0x80 < uVar3) {
      piVar4 = (int *)FUN_0061c888(piVar1);
      return piVar4;
    }
    piVar4 = (int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    LVar5 = InterlockedExchange(&DAT_0068c164,1);
    uVar3 = DAT_0066b83c;
    if (LVar5 != 0) {
      uVar7 = 0;
      if (DAT_0066b83c != 0) {
        uVar6 = DAT_0068c168 >> 1;
        do {
          if (((uVar6 <= uVar7) && (DAT_0068c164 == 0)) &&
             (LVar5 = InterlockedExchange(&DAT_0068c164,1), LVar5 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar7;
            goto LAB_00407496;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      DAT_0066b83c = 0x1e;
      iVar2 = 6;
      while( true ) {
        iVar8 = iVar2;
        if (0x1b < iVar2) {
          iVar8 = 0x1b;
        }
        LVar5 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar5 == 0) break;
        if (iVar8 < 0x15) {
          Sleep(0);
          iVar2 = iVar2 + 1;
        }
        else {
          Sleep(1 << ((char)iVar8 - 0x14U & 0x1f));
          iVar2 = iVar2 + 1;
        }
      }
    }
LAB_00407496:
    *piVar1 = *piVar4;
    *piVar4 = (int)piVar1;
    DAT_0068c164 = 0;
  }
  return piVar4;
}

