
void Catch_0047aed9(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  LONG LVar5;
  int unaff_EBP;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(unaff_EBP + 8) != 0) {
    uVar4 = *(int *)(unaff_EBP + 8) * 0x28;
    if (uVar4 < 0x81) {
      *(undefined1 **)(unaff_EBP + 0x10) = &DAT_0068c120 + (uVar4 + 7 >> 3) * 4;
      LVar5 = InterlockedExchange(&DAT_0068c164,1);
      uVar3 = DAT_0068c168;
      uVar4 = DAT_0066b83c;
      if (LVar5 != 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0x11;
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            if ((uVar6 < uVar3 >> 1) || (DAT_0068c164 != 0)) {
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) * *(int *)(unaff_EBP + 8);
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) * *(int *)(unaff_EBP + 8);
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) * *(int *)(unaff_EBP + 8);
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) * *(int *)(unaff_EBP + 8);
            }
            else {
              LVar5 = InterlockedExchange(&DAT_0068c164,1);
              if (LVar5 == 0) {
                DAT_0066b83c = 1000;
                DAT_0068c168 = uVar6;
                goto LAB_0047afe6;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
        }
        DAT_0066b83c = 0x1e;
        iVar8 = 6;
        while( true ) {
          iVar7 = iVar8;
          if (0x1b < iVar8) {
            iVar7 = 0x1b;
          }
          LVar5 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar5 == 0) break;
          if (iVar7 < 0x15) {
            Sleep(0);
            iVar8 = iVar8 + 1;
          }
          else {
            Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
            iVar8 = iVar8 + 1;
          }
        }
      }
LAB_0047afe6:
      puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
      puVar2 = *(undefined4 **)(unaff_EBP + -0x18);
      *puVar2 = *puVar1;
      *puVar1 = puVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(*(undefined4 *)(unaff_EBP + -0x18));
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

