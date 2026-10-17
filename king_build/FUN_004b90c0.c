
void FUN_004b90c0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  
  iVar2 = FUN_005d8940(&DAT_0066bd44);
  DAT_00693798 = 0;
  DAT_00693794 = (byte *)0x0;
  uVar7 = 0;
  if (*(uint *)(iVar2 + 0x48) != 0) {
    pbVar5 = *(byte **)(iVar2 + 0x4c);
    do {
      pcVar6 = s_effect_Shadow_006715dc;
      pbVar3 = pbVar5;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_004b9126:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004b912b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_004b9126;
        pbVar3 = pbVar3 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004b912b:
      if (iVar4 == 0) {
        DAT_00693794 = *(byte **)(iVar2 + 0x4c) + uVar7 * 0x7c;
        if (DAT_00693794 != (byte *)0x0) goto LAB_004b9171;
        break;
      }
      uVar7 = uVar7 + 1;
      pbVar5 = pbVar5 + 0x7c;
    } while (uVar7 < *(uint *)(iVar2 + 0x48));
  }
  FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
               s_C__Nek_VRAPPLVS_TRUCK_aeffects_c_006714d4,0x2e8,s_Mar_19_2002_006714f8);
LAB_004b9171:
  DAT_00693798 = FUN_004c4750(s_shadtree0_006715d0,DAT_00695160);
  if (DAT_00693798 == 0) {
    FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_TRUCK_aeffects_c_006714d4,0x2ee,s_Mar_19_2002_006714f8);
  }
  *(uint *)(DAT_00693794 + 0x20) = *(uint *)(DAT_00693794 + 0x20) | 0x40200;
  *(uint *)(DAT_00693798 + 0x20) = *(uint *)(DAT_00693798 + 0x20) | 0x40200;
  return;
}

