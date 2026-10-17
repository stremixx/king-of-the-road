
undefined4 FUN_0062e9c0(int param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_14;
  uint local_c;
  
  local_14 = DAT_007355e8;
  uVar2 = *(ushort *)(&DAT_00689654 + param_3 * 2);
  uVar3 = *(ushort *)(&DAT_00689654 + param_4 * 2);
  uVar7 = DAT_0077d358;
  uVar8 = DAT_0077d354;
  while( true ) {
    while( true ) {
      for (; uVar7 < param_3; uVar7 = uVar7 + 8) {
        if (DAT_007355e4 < DAT_007355e0) {
          uVar10 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
          DAT_007355e4 = DAT_007355e4 + 1;
        }
        else {
          uVar10 = FUN_0062afd0(0);
        }
        bVar5 = (byte)uVar7;
        uVar8 = uVar8 | (uVar10 & 0xff) << (bVar5 & 0x1f);
      }
      pbVar1 = (byte *)(param_1 + (uVar2 & uVar8) * 8);
      bVar5 = *pbVar1;
      uVar10 = DAT_007355e4;
      while (uVar6 = (uint)bVar5, 0x10 < uVar6) {
        if (uVar6 == 99) {
          return 1;
        }
        uVar8 = uVar8 >> (pbVar1[1] & 0x1f);
        for (uVar7 = uVar7 - pbVar1[1]; uVar7 < uVar6 - 0x10; uVar7 = uVar7 + 8) {
          if (uVar10 < DAT_007355e0) {
            uVar4 = (uint)(byte)(&DAT_0072d594)[uVar10];
            DAT_007355e4 = uVar10 + 1;
          }
          else {
            uVar4 = FUN_0062afd0(0);
          }
          uVar8 = uVar8 | (uVar4 & 0xff) << ((byte)uVar7 & 0x1f);
          uVar10 = DAT_007355e4;
        }
        pbVar1 = (byte *)(*(int *)(pbVar1 + 4) +
                         (*(ushort *)(&DAT_00689654 + (uVar6 - 0x10) * 2) & uVar8) * 8);
        bVar5 = *pbVar1;
      }
      uVar8 = uVar8 >> (pbVar1[1] & 0x1f);
      uVar7 = uVar7 - pbVar1[1];
      if (uVar6 != 0x10) break;
      *(byte *)((int)&DAT_00759df0 + local_14) = pbVar1[4];
      local_14 = local_14 + 1;
      if (local_14 == 0x8000) {
        DAT_007355e8 = local_14;
        FUN_0062b0d0();
        local_14 = 0;
      }
    }
    if (uVar6 == 0xf) break;
    for (; uVar7 < uVar6; uVar7 = uVar7 + 8) {
      if (uVar10 < DAT_007355e0) {
        uVar4 = (uint)(byte)(&DAT_0072d594)[uVar10];
        DAT_007355e4 = uVar10 + 1;
      }
      else {
        uVar4 = FUN_0062afd0(0);
      }
      uVar8 = uVar8 | (uVar4 & 0xff) << ((byte)uVar7 & 0x1f);
      uVar10 = DAT_007355e4;
    }
    local_c = (*(ushort *)(&DAT_00689654 + uVar6 * 2) & uVar8) + (uint)*(ushort *)(pbVar1 + 4);
    uVar8 = uVar8 >> (bVar5 & 0x1f);
    for (uVar7 = uVar7 - uVar6; uVar7 < param_4; uVar7 = uVar7 + 8) {
      if (uVar10 < DAT_007355e0) {
        uVar6 = (uint)(byte)(&DAT_0072d594)[uVar10];
        DAT_007355e4 = uVar10 + 1;
      }
      else {
        uVar6 = FUN_0062afd0(0);
      }
      uVar8 = uVar8 | (uVar6 & 0xff) << ((byte)uVar7 & 0x1f);
      uVar10 = DAT_007355e4;
    }
    pbVar1 = (byte *)(param_2 + (uVar3 & uVar8) * 8);
    bVar5 = *pbVar1;
    while (uVar6 = (uint)bVar5, 0x10 < uVar6) {
      if (uVar6 == 99) {
        return 1;
      }
      uVar8 = uVar8 >> (pbVar1[1] & 0x1f);
      for (uVar7 = uVar7 - pbVar1[1]; uVar7 < uVar6 - 0x10; uVar7 = uVar7 + 8) {
        if (uVar10 < DAT_007355e0) {
          uVar4 = (uint)(byte)(&DAT_0072d594)[uVar10];
          DAT_007355e4 = uVar10 + 1;
        }
        else {
          uVar4 = FUN_0062afd0(0);
        }
        uVar8 = uVar8 | (uVar4 & 0xff) << ((byte)uVar7 & 0x1f);
        uVar10 = DAT_007355e4;
      }
      pbVar1 = (byte *)(*(int *)(pbVar1 + 4) +
                       (*(ushort *)(&DAT_00689654 + (uVar6 - 0x10) * 2) & uVar8) * 8);
      bVar5 = *pbVar1;
    }
    uVar8 = uVar8 >> (pbVar1[1] & 0x1f);
    for (uVar7 = uVar7 - pbVar1[1]; uVar7 < uVar6; uVar7 = uVar7 + 8) {
      if (uVar10 < DAT_007355e0) {
        uVar4 = (uint)(byte)(&DAT_0072d594)[uVar10];
        DAT_007355e4 = uVar10 + 1;
      }
      else {
        uVar4 = FUN_0062afd0(0);
      }
      uVar8 = uVar8 | (uVar4 & 0xff) << ((byte)uVar7 & 0x1f);
      uVar10 = DAT_007355e4;
    }
    uVar10 = (local_14 - (*(ushort *)(&DAT_00689654 + uVar6 * 2) & uVar8)) -
             (uint)*(ushort *)(pbVar1 + 4);
    uVar8 = uVar8 >> (bVar5 & 0x1f);
    uVar7 = uVar7 - uVar6;
    do {
      uVar10 = uVar10 & 0x7fff;
      uVar6 = uVar10;
      if (uVar10 <= local_14) {
        uVar6 = local_14;
      }
      uVar4 = 0x8000 - uVar6;
      if (local_c < 0x8000 - uVar6) {
        uVar4 = local_c;
      }
      local_c = local_c - uVar4;
      if (local_14 - uVar10 < uVar4) {
        do {
          *(undefined1 *)((int)&DAT_00759df0 + local_14) =
               *(undefined1 *)((int)&DAT_00759df0 + uVar10);
          local_14 = local_14 + 1;
          uVar10 = uVar10 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      else {
        puVar9 = (undefined4 *)((int)&DAT_00759df0 + uVar10);
        puVar11 = (undefined4 *)((int)&DAT_00759df0 + local_14);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        local_14 = local_14 + uVar4;
        for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        uVar10 = uVar10 + uVar4;
      }
      if (local_14 == 0x8000) {
        DAT_007355e8 = local_14;
        FUN_0062b0d0();
        local_14 = 0;
      }
    } while (local_c != 0);
  }
  DAT_0077d354 = uVar8;
  DAT_0077d358 = uVar7;
  DAT_007355e8 = local_14;
  return 0;
}

