
void __thiscall FUN_0051d850(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  *(undefined4 *)(param_1 + 0x200) = param_2;
  FUN_005c03f0();
  FUN_0051c8c0(DAT_006cdc38 + 0x278,*(undefined4 *)(param_1 + 500));
  if (*(char *)(param_1 + 0x174) == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 500) + 300);
    pcVar3 = (char *)0x0;
    if (iVar2 != 0) {
      pcVar3 = *(char **)(iVar2 + 0xc);
    }
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)FUN_005d2500(0x67);
      uVar4 = 0xffffffff;
      do {
        pcVar6 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar6 + -uVar4;
      pcVar6 = (char *)(param_1 + 0x174);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      FUN_005d7cc0();
      return;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 + -uVar4;
    pcVar6 = (char *)(param_1 + 0x174);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  FUN_005d7cc0();
  return;
}

