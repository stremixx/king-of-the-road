
void FUN_005d3b40(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  LONG LStack_218;
  LONG LStack_214;
  tagPOINT tStack_210;
  LONG LStack_208;
  LONG LStack_204;
  tagPOINT tStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  LONG LStack_1f0;
  LONG LStack_1ec;
  undefined4 auStack_1e8 [2];
  undefined4 uStack_1e0;
  char acStack_1a4 [32];
  char acStack_184 [4];
  char acStack_180 [220];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_94;
  
  if (DAT_0071f84c != 0) {
    if (DAT_0071f808 != 0) {
      iVar2 = (**(code **)(*DAT_0071f85c + 0x80))();
      if (iVar2 == 0) {
        DAT_0071f808 = 0;
      }
      else if (DAT_0071f808 != 0) {
        return;
      }
    }
    iVar2 = (**(code **)(*DAT_0071f858 + 0x60))(DAT_0071f858);
    if (iVar2 == -0x7789fe3e) {
      FUN_005d2250(s_prim_restore_0067eda0,0);
      iVar2 = (**(code **)(*DAT_0071f858 + 0x6c))(DAT_0071f858);
      if (iVar2 != 0) {
        uVar4 = 0xffffffff;
        pcVar3 = s_fail_prim_restore_0067ed8c;
        do {
          pcVar7 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar3 = pcVar7 + -uVar4;
        pcVar7 = acStack_180;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcVar3 = (char *)FUN_005d42c0(iVar2,0);
        uVar4 = 0xffffffff;
        do {
          pcVar7 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar2 = -1;
        pcVar3 = acStack_180;
        do {
          pcVar6 = pcVar3;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar6;
        } while (cVar1 != '\0');
        pcVar3 = pcVar7 + -uVar4;
        pcVar7 = pcVar6 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_005d2520(acStack_180,0);
      }
    }
    iVar2 = (**(code **)(*DAT_0071f85c + 0x60))(DAT_0071f85c);
    if (iVar2 == -0x7789fe3e) {
      DAT_0071f808 = 0;
      FUN_005d2250(s_back_restore_0067ed7c,0);
      iVar2 = (**(code **)(*DAT_0071f85c + 0x6c))(DAT_0071f85c);
      if (iVar2 != 0) {
        uVar4 = 0xffffffff;
        pcVar3 = s_fail_back_restore_0067ed68;
        do {
          pcVar7 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar3 = pcVar7 + -uVar4;
        pcVar7 = acStack_184;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcVar3 = (char *)FUN_005d42c0(iVar2,0);
        uVar4 = 0xffffffff;
        do {
          pcVar7 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar2 = -1;
        pcVar3 = acStack_184;
        do {
          pcVar6 = pcVar3;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar6;
        } while (cVar1 != '\0');
        pcVar3 = pcVar7 + -uVar4;
        pcVar7 = pcVar6 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_005d2520(acStack_184,0);
      }
    }
    if (DAT_0071f84c == 2) {
      if (DAT_0071f814 == 0) {
        tStack_210.x = 0;
        auStack_1e8[0] = 100;
        uStack_1e0 = 0xcc0020;
        LStack_208 = DAT_0071f7fc;
        tStack_210.y = 0;
        LStack_204 = DAT_0071f800;
        LStack_218 = DAT_0071f7fc;
        LStack_214 = DAT_0071f800;
        iVar2 = (**(code **)(*DAT_0071f858 + 0x60))(DAT_0071f858);
        if (iVar2 == -0x7789fe3e) {
          FUN_005d2250(s_lost_prim_0067ed5c,0x21);
        }
        iVar2 = (**(code **)(*DAT_0071f85c + 0x60))(DAT_0071f85c);
        if (iVar2 == -0x7789fe3e) {
          FUN_005d2250(s_lost_back_0067ed50,0x21);
        }
        iVar2 = (**(code **)(*DAT_0071f858 + 0x14))
                          (DAT_0071f858,&LStack_218,DAT_0071f85c,&stack0xfffffdd8,0x1020000,
                           &LStack_1f0);
        if (iVar2 != 0) {
          uVar4 = 0xffffffff;
          pcVar3 = s_swap_fail_0067ed44;
          do {
            pcVar7 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar7 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar7;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar3 = pcVar7 + -uVar4;
          pcVar7 = acStack_1a4;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar7 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar7 = pcVar7 + 1;
          }
          pcVar3 = (char *)FUN_005d42c0(iVar2,0);
          uVar4 = 0xffffffff;
          do {
            pcVar7 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar7 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar7;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar2 = -1;
          pcVar3 = acStack_1a4;
          do {
            pcVar6 = pcVar3;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar6 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar6;
          } while (cVar1 != '\0');
          pcVar3 = pcVar7 + -uVar4;
          pcVar7 = pcVar6 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar7 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
      }
      else {
        while( true ) {
          FUN_005d3b00();
          iVar2 = (**(code **)(*DAT_0071f858 + 0x2c))(DAT_0071f858,0,1);
          if (iVar2 == 0) break;
          uVar4 = 0xffffffff;
          pcVar3 = s_flip_fail_0067ed38;
          do {
            pcVar7 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar7 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar7;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar3 = pcVar7 + -uVar4;
          pcVar7 = acStack_1a4;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar7 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar7 = pcVar7 + 1;
          }
          pcVar3 = (char *)FUN_005d42c0(iVar2,0);
          uVar4 = 0xffffffff;
          do {
            pcVar7 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar7 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar7;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar2 = -1;
          pcVar3 = acStack_184;
          do {
            pcVar6 = pcVar3;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar6 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar6;
          } while (cVar1 != '\0');
          pcVar3 = pcVar7 + -uVar4;
          pcVar7 = pcVar6 + -1;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar7 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        DAT_0071f888 = 1;
      }
    }
    else {
      LStack_1f0 = DAT_0071f7fc;
      auStack_1e8[0] = 100;
      uStack_1e0 = 0xcc0020;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      LStack_1ec = DAT_0071f800;
      GetClientRect(DAT_0071f880,(LPRECT)&stack0xfffffde0);
      tStack_210.x = LStack_218;
      tStack_210.y = LStack_214;
      ClientToScreen(DAT_0071f880,&tStack_200);
      ClientToScreen(DAT_0071f880,&tStack_210);
      LStack_218 = tStack_210.x;
      LStack_214 = tStack_210.y;
      (**(code **)(*DAT_0071f858 + 0x14))
                (DAT_0071f858,&stack0xfffffde0,DAT_0071f85c,&uStack_1f8,0x20000,auStack_1e8);
    }
    uStack_a4 = 0x7c;
    uStack_a0 = 0x7ff9ee;
    if (((DAT_0071f850 == 0) && (DAT_0071f818 == 0)) &&
       (iVar2 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,&uStack_a4,1,0), iVar2 == 0)) {
      DAT_0071f808 = iStack_94;
    }
  }
  return;
}

