
int FUN_005d3690(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  char *pcVar7;
  char *pcVar8;
  int iStack_174;
  char acStack_108 [4];
  char acStack_104 [260];
  
  if (DAT_0071f84c == 0) {
    return 0;
  }
  if (DAT_0071f850 != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_0071f858 + 0x60))(DAT_0071f858);
  if (iVar2 == -0x7789fe3e) {
    iVar2 = (**(code **)(*DAT_0071f858 + 0x6c))(DAT_0071f858);
    if (iVar2 != 0) {
      uVar5 = 0xffffffff;
      pcVar3 = s_fail_prim_restore__at__0067ed18;
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
  iVar2 = (**(code **)(*DAT_0071f85c + 0x60))(DAT_0071f85c);
  if (iVar2 == -0x7789fe3e) {
    DAT_0071f808 = 0;
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
      pcVar8 = acStack_108;
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
      pcVar3 = acStack_108;
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
      FUN_005d2520(acStack_108,0);
    }
  }
  if (DAT_0071f808 == 0) {
    if (DAT_0071f818 != 0) {
      return 0;
    }
    iVar2 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,&stack0xfffffe7c,1,0);
    if (iVar2 == 0) {
      DAT_0071f808 = iStack_174;
      DAT_0071f804 = unaff_ESI;
      return iStack_174;
    }
    uVar4 = FUN_005d42c0(0,s_attach_0067ecf8,0,0);
    FUN_005d2520(uVar4);
  }
  return DAT_0071f808;
}

