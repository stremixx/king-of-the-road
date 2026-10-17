
void __thiscall FUN_0044b440(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  LONG LVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (0x80 < param_3) {
    FUN_0061c888(param_2,param_1);
    return;
  }
  puVar7 = (undefined4 *)(&DAT_0068c120 + (param_3 + 7 >> 3) * 4);
  LVar2 = InterlockedExchange(&DAT_0068c164,1);
  uVar1 = DAT_0066b83c;
  if (LVar2 != 0) {
    uVar4 = 0;
    if (DAT_0066b83c != 0) {
      uVar3 = DAT_0068c168 >> 1;
      do {
        if (((uVar3 <= uVar4) && (DAT_0068c164 == 0)) &&
           (LVar2 = InterlockedExchange(&DAT_0068c164,1), LVar2 == 0)) {
          DAT_0066b83c = 1000;
          DAT_0068c168 = uVar4;
          goto LAB_0044b54b;
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
      LVar2 = InterlockedExchange(&DAT_0068c164,1);
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
LAB_0044b54b:
  *param_2 = *puVar7;
  *puVar7 = param_2;
  DAT_0068c164 = 0;
  return;
}

