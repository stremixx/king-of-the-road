
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00507880(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  float10 fVar11;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [28];
  undefined4 local_d0;
  undefined1 local_c8 [200];
  
  iVar6 = 0;
  DAT_006967c0 = 0;
  iVar3 = FUN_0061c356(PTR_s___vehicle_tech_00673a62_2_00673a58,&DAT_0066f3e8);
  if (iVar3 == 0) {
    return DAT_006967c0;
  }
  FUN_0061d8bf(&local_fc,4,1,iVar3);
  if (199 < local_fc) {
    return DAT_006967c0;
  }
  if (local_fc < 0) {
    return DAT_006967c0;
  }
  FUN_0061d8bf(local_c8,1,local_fc,iVar3);
  local_c8[local_fc] = 0;
  FUN_006310b6(PTR_s___vehicle_tech_00673a62_2_00673a58,local_ec);
  uVar2 = local_d0;
  local_f0 = local_d0;
  FUN_0061d8bf(&local_f8,4,1,iVar3);
  iVar4 = FUN_006310b6(local_c8,local_ec);
  if (iVar4 != -1) {
    fVar11 = (float10)FUN_0061f066(local_d0,uVar2);
    if ((float10)_DAT_0064cac0 <= fVar11) {
      return DAT_006967c0;
    }
    fVar11 = (float10)FUN_0061f066(local_d0,local_f8);
    if ((float10)_DAT_0064a668 < fVar11) {
      return DAT_006967c0;
    }
  }
  FUN_0061d8bf(&local_104,4,1,iVar3);
  if (local_104 != 0x970) {
    return DAT_006967c0;
  }
  FUN_0061d8bf(&DAT_006cd28c,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd290,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd294,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd298,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd29c,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd2a0,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd2a4,4,1,iVar3);
  FUN_0061d8bf(&DAT_006cd2a8,4,1,iVar3);
  puVar8 = &DAT_006967c8;
  do {
    if (local_104 != 0x970) goto LAB_00507a4f;
    local_104 = FUN_0061d8bf(puVar8,1,0x970,iVar3);
    puVar8 = puVar8 + 0x25c;
  } while ((int)puVar8 < 0x6c5ac8);
  if (local_104 == 0x970) {
    DAT_006967c0 = 1;
  }
  else {
LAB_00507a4f:
    if (DAT_006967c0 == 0) goto LAB_00507b5b;
  }
  local_100 = 0;
  local_108 = 0;
  iVar4 = 0;
  if (0 < DAT_006cd28c) {
    pbVar7 = &DAT_0069706c;
    do {
      FUN_0061d8bf(&local_f4,4,1,iVar3);
      if ((int)pbVar7 < 0x69706d) {
LAB_00507ac8:
        iVar4 = FUN_006310b6(pbVar7,local_ec);
        if (iVar4 == -1) {
          local_108 = local_108 + 1;
        }
        else {
          fVar11 = (float10)FUN_0061f066(local_d0,local_f0);
          if (((float10)_DAT_0064cac0 <= fVar11) ||
             (fVar11 = (float10)FUN_0061f066(local_d0,local_f4), fVar11 != (float10)_DAT_0064a668))
          {
            DAT_006967c0 = 0;
            iVar4 = local_108;
            break;
          }
          local_100 = local_100 + 1;
        }
      }
      else {
        pbVar9 = pbVar7 + -0x970;
        pbVar5 = pbVar7;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_00507abf:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00507ac4;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_00507abf;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00507ac4:
        if (iVar4 != 0) goto LAB_00507ac8;
      }
      iVar6 = iVar6 + 1;
      pbVar7 = pbVar7 + 0x970;
      iVar4 = local_108;
    } while (iVar6 < DAT_006cd28c);
  }
  if (iVar4 * local_100 != 0) {
    DAT_006967c0 = 0;
  }
LAB_00507b5b:
  FUN_0061c25a(iVar3);
  return DAT_006967c0;
}

