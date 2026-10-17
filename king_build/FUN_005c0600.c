
void __thiscall FUN_005c0600(int param_1,byte *param_2)

{
  short *psVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pbVar7 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647f63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_00631d33(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    param_2 = (byte *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar10 = 0xffffffff;
    *puVar3 = &PTR_FUN_006508d4;
    pbVar4 = param_2;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
    local_4 = 1;
    pbVar4 = (byte *)FUN_00631d33(~uVar10);
    uVar10 = 0xffffffff;
    puVar3[3] = pbVar4;
    do {
      pbVar5 = param_2;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pbVar5 = param_2 + 1;
      bVar2 = *param_2;
      param_2 = pbVar5;
    } while (bVar2 != 0);
    uVar10 = ~uVar10;
    pbVar5 = pbVar5 + -uVar10;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar4 = pbVar4 + 4;
    }
    for (uVar10 = uVar10 & 3; param_2 = (byte *)puVar3, uVar10 != 0; uVar10 = uVar10 - 1) {
      *pbVar4 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    }
  }
  iVar9 = *(int *)(param_1 + 0x128);
  local_4 = 0xffffffff;
  if (iVar9 == 0) {
    *(byte **)(param_1 + 0x150) = param_2;
    *(byte **)(param_1 + 300) = param_2;
    *(byte **)(param_1 + 0x128) = param_2;
  }
  else {
    for (iVar8 = *(int *)(iVar9 + 8); iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
      pbVar4 = *(byte **)(iVar9 + 0xc);
      pbVar5 = pbVar7;
      do {
        bVar2 = *pbVar5;
        bVar12 = bVar2 < *pbVar4;
        if (bVar2 != *pbVar4) {
LAB_005c06f9:
          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_005c06fe;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar12 = bVar2 < pbVar4[1];
        if (bVar2 != pbVar4[1]) goto LAB_005c06f9;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_005c06fe:
      if (iVar6 < 1) break;
      iVar9 = iVar8;
    }
    pbVar4 = *(byte **)(iVar9 + 0xc);
    do {
      bVar2 = *pbVar7;
      bVar12 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_005c0738:
        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_005c073d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar12 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_005c0738;
      pbVar7 = pbVar7 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_005c073d:
    iVar6 = iVar9;
    if ((iVar8 < 1) && (iVar6 = *(int *)(iVar9 + 4), *(int *)(iVar9 + 4) == 0)) {
      *(byte **)(param_1 + 0x150) = param_2;
      *(byte **)(param_1 + 300) = param_2;
      *(byte **)(param_1 + 0x128) = param_2;
      *(int *)((int)param_2 + 8) = iVar9;
      *(byte **)(iVar9 + 4) = param_2;
    }
    else {
      FUN_005d1840(iVar6);
    }
    *(byte **)(param_1 + 300) = param_2;
  }
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  iVar9 = FUN_005bfda0();
  if (iVar9 < *(int *)(param_1 + 0x148)) {
    psVar1 = (short *)(*(int *)(param_1 + 0x154) + 0x128);
    *psVar1 = *psVar1 + 1;
  }
  FUN_005c0320(0);
  ExceptionList = local_c;
  return;
}

