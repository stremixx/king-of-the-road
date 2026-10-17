
void __thiscall FUN_005bb5b0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int local_10;
  
  iVar4 = param_2;
  if ((((*(int *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x1c) & 0xa0) == 0)) &&
      (*(short *)(param_1 + 8) == 1)) &&
     ((uVar6 = FUN_005d7a00(), uVar6 != *(ushort *)(param_1 + 8) &&
      (pbVar7 = (byte *)FUN_00631d33(*(undefined4 *)(param_1 + 0xc)), pbVar7 != (byte *)0x0)))) {
    pbVar11 = *(byte **)(param_1 + 0x10);
    local_10 = 0;
    pbVar10 = pbVar7;
    if (*(short *)(param_1 + 6) != 0) {
      do {
        param_2 = 0;
        if (*(short *)(param_1 + 4) != 0) {
          do {
            bVar2 = *pbVar11;
            *pbVar10 = bVar2;
            if ((bVar2 & 0x80) == 0) {
              pbVar11 = pbVar11 + 1;
              pbVar10 = pbVar10 + 1;
              uVar6 = bVar2 & 0x7f;
              if ((bVar2 & 0x7f) != 0) {
                do {
                  bVar3 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  iVar1 = iVar4 + (bVar3 + 8) * 2;
                  puVar8 = (undefined1 *)(bVar3 + 8 + iVar1);
                  uVar5 = FUN_005b58c0(*puVar8,CONCAT31((int3)((uint)iVar1 >> 8),puVar8[1]),
                                       puVar8[2]);
                  *(undefined2 *)pbVar10 = uVar5;
                  pbVar10 = pbVar10 + 2;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
            }
            else {
              pbVar10 = pbVar10 + 1;
              pbVar11 = pbVar11 + 1;
            }
            param_2 = param_2 + (bVar2 & 0x7f);
          } while (param_2 < (int)(uint)*(ushort *)(param_1 + 4));
        }
        local_10 = local_10 + 1;
      } while (local_10 < (int)(uint)*(ushort *)(param_1 + 6));
    }
    if ((*(byte *)(param_1 + 0x1c) & 4) == 0) {
      FUN_00631d5c(*(undefined4 *)(param_1 + 0x10));
      *(byte **)(param_1 + 0x10) = pbVar7;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xc);
      pbVar11 = *(byte **)(param_1 + 0x10);
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar7;
        pbVar7 = pbVar7 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar11 = pbVar11 + 1;
      }
    }
    *(undefined2 *)(param_1 + 8) = 2;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
  }
  return;
}

