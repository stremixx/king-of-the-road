
void FUN_00567f40(undefined4 param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 in_stack_0000001c;
  undefined4 auStackY_1c8 [3];
  char *local_170;
  undefined4 local_128 [12];
  undefined4 local_f8;
  char local_f4 [32];
  char local_d4 [32];
  undefined4 local_b4 [8];
  undefined4 local_94 [12];
  byte local_64 [100];
  
  if (DAT_00695bbc != 0) {
    pbVar8 = &DAT_0068c120;
    pbVar3 = param_2;
    do {
      bVar2 = *pbVar3;
      bVar11 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_00567fbc:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00567fc1;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar11 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_00567fbc;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_00567fc1:
    if (iVar4 == 0) {
      FUN_00437300();
      puVar5 = local_b4;
      puVar10 = auStackY_1c8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      local_170 = s_UNDEFINED_ROOM_0066c628;
      FUN_00438e50();
      uVar6 = 0xffffffff;
      do {
        pcVar9 = local_170;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = local_170 + 1;
        cVar1 = *local_170;
        local_170 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pbVar3 = (byte *)(pcVar9 + -uVar6);
      pbVar8 = local_64;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar8 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar8 = pbVar8 + 1;
      }
      param_2 = local_64;
    }
    FUN_005e4740();
    FUN_005ab330();
    puVar5 = local_128 + 2;
    iVar4 = 4;
    do {
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar5 = local_94;
    puVar10 = local_128;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    local_f8 = in_stack_0000001c;
    _strncpy(local_f4,(char *)param_2,0x1f);
    auStackY_1c8[2] = 0x5681c4;
    _strncpy(local_d4,&DAT_00671f78,0x1f);
    FUN_005e48c0();
    iVar4 = FUN_005e4980();
    if (DAT_006ee164 != 0) {
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(DAT_006ee164 + 0x10);
      return;
    }
    FUN_004e1e9c();
  }
  return;
}

