
undefined4 __thiscall FUN_005eacd0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_40 [64];
  
  FUN_0061d8bf(local_40,0x20,1,param_2);
  FUN_005d1d00(local_40,param_1 + 0x50);
  FUN_0061d8bf(local_40,0x20,1,param_2);
  iVar5 = 0;
  while ((local_40[0] != '\0' && (local_40[0] != ':'))) {
    iVar2 = iVar5 + 1;
    iVar5 = iVar5 + 1;
    local_40[0] = local_40[iVar2];
  }
  if (local_40[iVar5] == '\0') {
    FUN_005d1d00(local_40,param_1 + 0x4c);
  }
  else {
    uVar3 = 0xffffffff;
    local_40[iVar5] = '\0';
    pcVar6 = local_40;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)(param_1 + 0xc);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = local_40 + iVar5 + 1;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = (char *)(param_1 + 0x2c);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x54) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 1;
}

