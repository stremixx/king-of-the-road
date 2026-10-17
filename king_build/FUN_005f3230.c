
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005f3230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uVar10;
  byte local_40 [64];
  
  FUN_005e4d00(param_2);
  FUN_0061d8bf(local_40,0x20,1,param_2);
  pcVar7 = s_direction_00682b14;
  pbVar4 = local_40;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_005f3289:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_005f328e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_005f3289;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_005f328e:
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  else {
    pbVar8 = &DAT_00682b0c;
    pbVar4 = local_40;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_005f32cb:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_005f32d0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_005f32cb;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005f32d0:
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else {
      pcVar7 = s_position_00682b00;
      pbVar4 = local_40;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_005f330d:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005f3312;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_005f330d;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_005f3312:
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 2;
      }
      else {
        pbVar8 = &DAT_00682af8;
        pbVar4 = local_40;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_005f334c:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005f3351;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_005f334c;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_005f3351:
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
  fVar2 = -DAT_00701594;
  fVar3 = -DAT_00701598;
  *(float *)(param_1 + 0x48) = -DAT_00701590;
  *(float *)(param_1 + 0x4c) = fVar2;
  *(undefined4 *)(param_1 + 100) = 0x3f490fda;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(float *)(param_1 + 0x50) = fVar3;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    *(float *)(param_1 + 0x5c) =
         _DAT_0064b240 / (*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20));
  }
  uVar10 = 1;
  uVar6 = FUN_005aa810(param_2,1,param_3,param_4);
  FUN_005f1420(param_2,uVar6,uVar10,param_3,param_4);
  return;
}

