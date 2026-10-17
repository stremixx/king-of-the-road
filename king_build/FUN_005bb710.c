
undefined4 __fastcall FUN_005bb710(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *unaff_EDI;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  undefined1 local_118 [8];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_f8 [23];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  byte *pbStack_88;
  
  if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
    return 1;
  }
  if (DAT_0071f868 != 0) {
    piVar7 = local_f8;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_f8[2] = (int)*(ushort *)(param_1 + 6);
    local_f8[3] = (int)*(ushort *)(param_1 + 4);
    piVar7 = local_f8;
    local_f8[0] = 0x7c;
    local_f8[1] = 7;
    local_90 = 0x800;
    iVar2 = (**(code **)(*DAT_0071f86c + 0x18))(DAT_0071f86c,piVar7,local_118,0);
    uVar1 = FUN_005d7a00();
    if (*(ushort *)(param_1 + 8) != uVar1) {
      FUN_005d2520(s_mask_has_illegal_quantity_of_bit_0067e2ec,0);
    }
    if (iVar2 == 0) {
      if (unaff_EDI == (int *)0x0) {
        FUN_005d2520(s_can_not_create_mask_surface_0067e2d0,0);
      }
      uStack_110 = 0;
      uStack_10c = 0;
      (**(code **)(*unaff_EDI + 0x74))(unaff_EDI,8,&uStack_110);
      uStack_98 = 0x7c;
      uStack_94 = 0x7ff9ee;
      iVar2 = (**(code **)(*piVar7 + 100))(piVar7,0,&uStack_98,1);
      pbVar10 = (byte *)0x0;
      if (iVar2 == 0) {
        pbVar10 = pbStack_88;
      }
      if (pbVar10 == (byte *)0x0) {
        FUN_005d2250(s_can_not_Lock_Mask_0067e2bc,0);
      }
      else {
        pbVar5 = *(byte **)(param_1 + 0x10);
        iVar2 = 0;
        if (*(short *)(param_1 + 6) != 0) {
          do {
            iVar12 = 0;
            pbVar9 = pbVar10;
            if (*(short *)(param_1 + 4) != 0) {
              do {
                uVar1 = *pbVar5 & 0x7f;
                if ((*pbVar5 & 0x80) == 0) {
                  uVar3 = *(ushort *)(param_1 + 8) * uVar1;
                  pbVar6 = pbVar5 + 1;
                  pbVar8 = pbVar9;
                  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
                    pbVar6 = pbVar6 + 4;
                    pbVar8 = pbVar8 + 4;
                  }
                  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *pbVar8 = *pbVar6;
                    pbVar6 = pbVar6 + 1;
                    pbVar8 = pbVar8 + 1;
                  }
                  pbVar5 = pbVar5 + 1 + *(ushort *)(param_1 + 8) * uVar1;
                }
                else {
                  pbVar5 = pbVar5 + 1;
                  uVar3 = *(ushort *)(param_1 + 8) * uVar1;
                  pbVar6 = pbVar9;
                  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    pbVar6[0] = 0;
                    pbVar6[1] = 0;
                    pbVar6[2] = 0;
                    pbVar6[3] = 0;
                    pbVar6 = pbVar6 + 4;
                  }
                  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *pbVar6 = 0;
                    pbVar6 = pbVar6 + 1;
                  }
                }
                pbVar9 = pbVar9 + *(ushort *)(param_1 + 8) * uVar1;
                iVar12 = iVar12 + uVar1;
              } while (iVar12 < (int)(uint)*(ushort *)(param_1 + 4));
            }
            pbVar10 = pbVar10 + iStack_9c;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 6));
        }
        (**(code **)(iRam00000000 + 0x80))(0,0);
        FUN_00631d5c(*(undefined4 *)(param_1 + 0x10));
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
      return 1;
    }
    if (iVar2 == -0x7789ff9c) {
      pcVar11 = s_can_not_create_mask_surface_inv_c_0067e294;
    }
    else if (iVar2 == -0x7ff8ffa9) {
      pcVar11 = s_can_not_create_mask_surface_inv_p_0067e270;
    }
    else if (iVar2 == -0x7789ff6f) {
      pcVar11 = s_can_not_create_mask_surface_inv_p_0067e24c;
    }
    else {
      if (iVar2 != -0x7789ffa1) {
        return 0;
      }
      pcVar11 = s_can_not_create_mask_surface_inc_p_0067e228;
    }
    FUN_005d2250(pcVar11,0);
  }
  return 0;
}

