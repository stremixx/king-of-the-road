
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0060d7d0(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  float *pfVar9;
  uint uVar10;
  bool bVar11;
  byte *local_98;
  byte *local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649701;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_40 = param_1;
  FUN_005eed00(s_MarineNode_00684b7c,0x18);
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_0064f420;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_4 = 0;
  FUN_005d27c0(s_MarineNode_00684b7c);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = &PTR_FUN_00652030;
  param_1[0x13] = &PTR_LAB_00652010;
  DAT_00724d68 = param_2;
  local_4._0_1_ = 1;
  param_1[0x1c] = param_2;
  FUN_005d2c20(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x13));
  FUN_005d2a80(1);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  iVar3 = FUN_00631d33(4);
  local_4._0_1_ = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0060d250(0xc3c80000,0x455ac000,0,0x458ca000,0x44fa0000,DAT_0071f868,0);
  }
  param_1[0x1b] = uVar4;
  local_4 = CONCAT31(local_4._1_3_,1);
  pfVar5 = local_70 + 2;
  iVar3 = 4;
  do {
    pfVar5[-2] = 0.0;
    pfVar5[-1] = 0.0;
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pfVar5 = (float *)FUN_005db380(local_3c);
  pfVar9 = local_70;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_88 = local_70[0] * DAT_00701580 + local_70[3] * DAT_00701584 + local_58 * DAT_00701588;
  local_84 = local_70[1] * DAT_00701580 + local_60 * DAT_00701584 + local_54 * DAT_00701588;
  local_80 = local_70[2] * DAT_00701580 + local_5c * DAT_00701584 + local_50 * DAT_00701588;
  local_7c = local_4c;
  local_78 = local_48;
  local_74 = local_44;
  FUN_0060d4c0(&local_7c,&local_88);
  if (*(int *)(param_1[0x1c] + 0x20c) != 0) {
    FUN_005d8940(s_common_00671688);
    iVar3 = FUN_005ee9c0(s_rain_node_0067a9b8);
    if (iVar3 == 0) {
      FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_marine_MarineTas_00684b54,0x2e,s_Mar_19_2002_006714f8);
    }
    param_1[0xb] = *(undefined4 *)(iVar3 + 0x2c);
    FUN_005d1840(iVar3);
    param_1[9] = *(undefined4 *)(iVar3 + 0x24);
  }
  iVar3 = FUN_005d8940(s_common_00671688);
  uVar10 = 0;
  local_90 = (byte *)0x0;
  if (*(uint *)(iVar3 + 0x48) != 0) {
    local_98 = *(byte **)(iVar3 + 0x4c);
    do {
      pbVar8 = &DAT_0067b0b8;
      pbVar6 = local_98;
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0060da8a:
          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0060da8f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0060da8a;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_0060da8f:
      if (iVar7 == 0) {
        local_90 = *(byte **)(iVar3 + 0x4c) + uVar10 * 0x7c;
        if (local_90 != (byte *)0x0) goto LAB_0060dadd;
        break;
      }
      uVar10 = uVar10 + 1;
      local_98 = local_98 + 0x7c;
    } while (uVar10 < *(uint *)(iVar3 + 0x48));
  }
  FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
               s_C__Nek_VRAPPLVS_marine_MarineTas_00684b54,0x3d,s_Mar_19_2002_006714f8);
LAB_0060dadd:
  FUN_0060d7b0(local_90);
  fVar2 = (float)_DAT_00652008;
  param_1[0x22] = 0xc3480000;
  param_1[0x23] = 0x455ac000;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x25] = SQRT(fVar2);
  ExceptionList = local_c;
  return param_1;
}

