
undefined4 FUN_005d38b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_170;
  char acStack_104 [240];
  undefined4 *puStack_14;
  
  if (DAT_0071f84c == 0) {
    return 0;
  }
  if (DAT_0071f818 != 0) {
    return 0;
  }
  piStack_180 = DAT_0071f85c;
  iVar2 = (**(code **)(*DAT_0071f85c + 0x60))();
  if (iVar2 == -0x7789fe3e) {
    iVar2 = (**(code **)(*DAT_0071f85c + 0x6c))(DAT_0071f85c);
    if (iVar2 != 0) {
      uVar5 = 0xffffffff;
      pcVar3 = s_fail_back_restore__at__0067ed00;
      do {
        pcVar8 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar8 + -uVar5;
      pcVar8 = acStack_104;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      pcVar3 = (char *)FUN_005d42c0(iVar2,0);
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar2 = -1;
      pcVar3 = acStack_104;
      do {
        pcVar7 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar5;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_005d2520(acStack_104,0);
    }
  }
  uVar9 = 0;
  piStack_180 = (int *)0x7c;
  uStack_17c = 0x7ff9ee;
  iVar2 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,&piStack_180,1);
  if (iVar2 != 0) {
    uVar4 = FUN_005d42c0(1,s_attach_0067ecf8,0);
    FUN_005d2520(uVar4);
  }
  *puStack_14 = uVar9;
  return uStack_170;
}

