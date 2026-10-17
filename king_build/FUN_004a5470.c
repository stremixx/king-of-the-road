
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a5470(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (*(int *)(&DAT_00690d1c + param_1 * 4) == 0) {
    pcVar2 = (char *)FUN_004a5510(param_1,param_2);
    _DAT_006911a4 = param_1;
    DAT_006911a8 = param_2;
    if (PTR_DAT_0066fb04 != (undefined *)0x0) {
      FUN_0061d86c(PTR_DAT_0066fb04,pcVar2);
    }
    if (DAT_006911ac != (code *)0x0) {
      uVar4 = 0xffffffff;
      pcVar5 = pcVar2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = FUN_00631d33(~uVar4 + 0x13);
      FUN_0061c369(uVar3,pcVar2);
      (*DAT_006911ac)(param_1,param_2,uVar3);
      FUN_00631d5c(uVar3);
    }
    if ((DAT_006911a8 != 0) && (DAT_006911a8 < 2)) {
      FUN_0061df73(0xffffffff);
    }
  }
  return;
}

