
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0056a6f0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if ((((iVar2 <= param_2) && (iVar2 != 0)) && (param_2 < 8)) || (iVar2 == 5)) {
    return 0;
  }
  if (param_3 != (char *)0x0) {
    if (*(int *)(DAT_006f2390 + 0x30) != 0) {
      FUN_00631d5c(*(int *)(DAT_006f2390 + 0x30));
    }
    uVar4 = 0xffffffff;
    pcVar6 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = FUN_00631d33(~uVar4);
    *(undefined4 *)(DAT_006f2390 + 0x30) = uVar3;
    uVar4 = 0xffffffff;
    do {
      pcVar6 = param_3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar7 = *(char **)(DAT_006f2390 + 0x30);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x3c) = param_2;
  *(double *)(param_1 + 0x20) = *(double *)(DAT_00695c00 + 0xb98) * _DAT_0064a720;
  return 1;
}

