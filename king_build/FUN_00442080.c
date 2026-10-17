
undefined4 FUN_00442080(int param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 auStack_f8 [6];
  undefined4 uStack_e0;
  char *pcStack_dc;
  uint *puStack_d8;
  int local_c8;
  int local_c4;
  uint local_a4 [2];
  undefined4 local_9c;
  undefined4 local_98;
  char *local_94;
  char *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74 [8];
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063de5b;
  local_14 = ExceptionList;
  puStack_d8 = (uint *)0x8;
  pcStack_dc = s_START__0066b830;
  uStack_e0 = 0x4420c5;
  ExceptionList = &local_14;
  FUN_00401870();
  puStack_d8 = (uint *)s_getObstacleInfo_ObstacleId_obsta_0066e08c;
  pcStack_dc = (char *)0x4420d4;
  FUN_004018b0();
  local_c = 0;
  iVar9 = *(int *)(DAT_0068bb78 + param_1 * 4);
  dVar1 = *(double *)(iVar9 + 0x48);
  dVar2 = *(double *)(iVar9 + 0x50);
  *param_2 = (float)*(double *)(iVar9 + 0x40);
  param_2[1] = (float)dVar1;
  param_2[2] = (float)dVar2;
  cVar3 = *(char *)(*(int *)(DAT_0068bb78 + param_1 * 4) + 0x1c);
  *(char *)(param_2 + 3) = cVar3;
  if (cVar3 != '\0') {
    *(undefined1 *)(param_2 + 3) = 0;
    local_c4 = 0x30;
    iVar9 = DAT_0068be60;
    do {
      iVar4 = *(int *)(*(int *)(DAT_0068bb78 + param_1 * 4) + local_c4);
      if (iVar4 == -1) {
LAB_00442281:
        *(undefined1 *)(param_2 + 3) = 1;
        break;
      }
      local_c8 = 0;
      do {
        iVar5 = *(int *)(iVar9 + iVar4 * 4);
        puVar10 = *(undefined4 **)(iVar5 + 0x14 + local_c8 * 0xc);
        iVar8 = (local_c8 * 3 + 6) * 4;
        if (puVar10 != *(undefined4 **)(iVar8 + iVar5)) {
          do {
            if (local_c8 == 0) {
              puStack_d8 = (uint *)*puVar10;
              pcStack_dc = local_54;
              uStack_e0 = 0x4421a4;
              puVar6 = (undefined4 *)FUN_0047ff40();
            }
            else {
              puStack_d8 = (uint *)*puVar10;
              pcStack_dc = local_34;
              uStack_e0 = 0x4421b6;
              puVar6 = (undefined4 *)FUN_0047fe10();
            }
            puVar11 = local_74;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar11 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
            }
            local_80 = 0xffffffff;
            local_7c = 0xffffffff;
            puStack_d8 = local_a4;
            local_a4[0] = 0;
            puVar6 = local_74;
            puVar11 = auStack_f8;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar11 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
            }
            local_9c = 0;
            local_98 = 0;
            local_94 = s_UNDEFINED_MODULE_0066c638;
            local_90 = s_UNDEFINED_ROOM_0066c628;
            local_8c = 0;
            local_88 = 0;
            FUN_00438e50();
            if ((local_a4[0] >> 5 & 1) == 0) goto LAB_00442281;
            puVar10 = puVar10 + 1;
            iVar9 = DAT_0068be60;
          } while (puVar10 != *(undefined4 **)(*(int *)(DAT_0068be60 + iVar4 * 4) + iVar8));
        }
        local_c8 = local_c8 + 1;
      } while (local_c8 < 2);
      local_c4 = local_c4 + 4;
    } while (local_c4 < 0x38);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_getObstacleInfo_ObstacleId_obsta_0066e08c;
  cVar3 = s_getObstacleInfo_ObstacleId_obsta_0066e08c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar7;
    }
  }
  ExceptionList = local_14;
  return 0;
}

