
void FUN_00511f50(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_40 [64];
  
  *(undefined4 *)(DAT_00695c00 + 0x1f00) = 0;
  *(undefined4 *)(DAT_00695c00 + 0x1efc) = 0;
  if (*(int *)(DAT_006cdbcc + 0x514) != 0) {
    if (*(int *)(DAT_00695c00 + 0x1ef8) != 0) {
      FUN_0061c25a(*(int *)(DAT_00695c00 + 0x1ef8));
      *(undefined4 *)(DAT_00695c00 + 0x1ef8) = 0;
    }
    if (*(int *)(DAT_006cdbcc + 0x514) == 1) {
      *(undefined4 *)(DAT_00695c00 + 0x1f00) = 1;
      uVar4 = 0xffffffff;
      pcVar2 = (char *)(DAT_006cdbf0 + 0x180);
      do {
        pcVar8 = pcVar2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar2 = pcVar8 + -uVar4;
      pcVar8 = local_40;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar2 = &DAT_0067583c;
      do {
        pcVar8 = pcVar2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pcVar2 = local_40;
      do {
        pcVar7 = pcVar2;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      pcVar2 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar8 = pcVar8 + 1;
      }
      pcVar2 = (char *)FUN_0050b470(local_40);
      if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
        pcVar2 = s_tr_tr_00675834;
      }
      uVar3 = FUN_0061c356(pcVar2,&DAT_0066f3e4);
      *(undefined4 *)(DAT_00695c00 + 0x1ef8) = uVar3;
      FUN_005c3a90();
      return;
    }
    if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
      *(undefined4 *)(DAT_006cdbcc + 0x50c) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
      iVar6 = *(int *)(*(int *)(DAT_006cdbf0 + 0x17c) + 300);
      if (iVar6 == 0) {
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = *(char **)(iVar6 + 0xc);
      }
      if (((*(int *)(DAT_006cdbcc + 0x514) == 3) || (pcVar2 == (char *)0x0)) || (*pcVar2 == '\0')) {
        pcVar2 = s_demo_tr0_00675820;
      }
      else {
        FUN_0061c369(local_40,s__s_tr_0067582c,pcVar2);
        pcVar2 = local_40;
      }
      uVar3 = FUN_0061c356(pcVar2,&DAT_0066f3e8);
      *(undefined4 *)(DAT_00695c00 + 0x1ef8) = uVar3;
      *(undefined4 *)(DAT_00695c00 + 0x1efc) = 1;
      *(undefined4 *)(DAT_00695c00 + 0x1f18) = 0;
      *(undefined4 *)(DAT_00695c00 + 0x1f1c) = 0x3ff00000;
      *(undefined4 *)(DAT_00695c00 + 0x1f04) = 0;
    }
  }
  return;
}

