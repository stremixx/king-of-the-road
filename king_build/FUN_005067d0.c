
void FUN_005067d0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_40 [32];
  char local_20 [32];
  
  if (0 < DAT_006cd28c) {
    pcVar4 = &DAT_0069706c;
    iVar5 = DAT_006cd28c;
    do {
      uVar2 = 0xffffffff;
      pcVar6 = pcVar4 + 0x1e;
      do {
        pcVar7 = pcVar6;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar6 = pcVar7 + -uVar2;
      pcVar7 = local_40;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar2 = 0xffffffff;
      pcVar6 = pcVar4;
      do {
        pcVar7 = pcVar6;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar4 = pcVar4 + 0x970;
      pcVar6 = pcVar7 + -uVar2;
      pcVar7 = local_20;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      iVar5 = iVar5 + -1;
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    } while (iVar5 != 0);
  }
  return;
}

