
void __fastcall FUN_00401aa0(LONG *param_1)

{
  uint uVar1;
  LONG LVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  LVar2 = InterlockedExchange(param_1,1);
  uVar1 = DAT_0066b83c;
  if (LVar2 != 0) {
    uVar4 = 0;
    if (DAT_0066b83c != 0) {
      uVar3 = DAT_0068c168 >> 1;
      do {
        if (((uVar3 <= uVar4) && (*param_1 == 0)) &&
           (LVar2 = InterlockedExchange(param_1,1), LVar2 == 0)) {
          DAT_0066b83c = 1000;
          DAT_0068c168 = uVar4;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    DAT_0066b83c = 0x1e;
    iVar6 = 6;
    while( true ) {
      iVar5 = iVar6;
      if (0x1b < iVar6) {
        iVar5 = 0x1b;
      }
      LVar2 = InterlockedExchange(param_1,1);
      if (LVar2 == 0) break;
      if (iVar5 < 0x15) {
        Sleep(0);
        iVar6 = iVar6 + 1;
      }
      else {
        Sleep(1 << ((char)iVar5 - 0x14U & 0x1f));
        iVar6 = iVar6 + 1;
      }
    }
  }
  return;
}

