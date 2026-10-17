
void FUN_004306d0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  int local_8;
  
  piVar5 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      iVar4 = *piVar5;
      puVar2 = *(undefined4 **)(iVar4 + 0x1c);
      if (puVar2 != *(undefined4 **)(iVar4 + 0x20)) {
        do {
          if ((*(byte *)(puVar2 + 1) & 1) != 0) {
            *(undefined4 *)(iVar4 + 0x40) = *puVar2;
          }
          iVar4 = *piVar5;
          puVar2 = puVar2 + 4;
        } while (puVar2 != *(undefined4 **)(iVar4 + 0x20));
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != DAT_0068be24);
  }
  piVar5 = DAT_006898d0;
  piVar6 = DAT_006898d4;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      local_8 = *piVar5;
      puVar2 = *(undefined4 **)(local_8 + 0xd0);
      if (puVar2 != *(undefined4 **)(local_8 + 0xd4)) {
        do {
          piVar8 = DAT_006898d0;
          if (DAT_006898d0 == piVar6) {
LAB_004307d0:
            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3136,
                         s_No_such_ambush_0066cec8,(byte *)*puVar2,&DAT_0068c120);
          }
          else {
            do {
              pbVar3 = *(byte **)*piVar8;
              if ((pbVar3 != (byte *)((undefined4 *)*piVar8)[1]) &&
                 (pbVar7 = (byte *)*puVar2, pbVar3 != (byte *)0x0)) {
                do {
                  bVar1 = *pbVar3;
                  bVar9 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_0043078b:
                    iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_00430790;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar3[1];
                  bVar9 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_0043078b;
                  pbVar3 = pbVar3 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00430790:
                if (iVar4 == 0) break;
              }
              piVar8 = piVar8 + 1;
            } while (piVar8 != piVar6);
            if (piVar8 == piVar6) goto LAB_004307d0;
            piVar6 = *(int **)(local_8 + 0xe0);
            if (piVar6 == *(int **)(local_8 + 0xe4)) {
              FUN_004528c0(piVar6,piVar8);
            }
            else {
              if (piVar6 != (int *)0x0) {
                *piVar6 = *piVar8;
              }
              *(int *)(local_8 + 0xe0) = *(int *)(local_8 + 0xe0) + 4;
            }
          }
          puVar2 = puVar2 + 3;
          local_8 = *piVar5;
          piVar6 = DAT_006898d4;
        } while (puVar2 != *(undefined4 **)(local_8 + 0xd4));
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar6);
  }
  return;
}

