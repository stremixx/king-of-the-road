
void FUN_0062b6b0(uint param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  ushort uStack_48;
  undefined4 local_46 [8];
  ushort auStack_24 [18];
  
  uVar4 = param_3;
  uVar5 = 0;
  puVar14 = local_46;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  if (param_1 != 0) {
    do {
      (&uStack_48)[*(byte *)(uVar5 + param_2)] = (&uStack_48)[*(byte *)(uVar5 + param_2)] + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_1);
  }
  auStack_24[1] = 0;
  bVar7 = 0xf;
  uVar5 = 0;
  do {
    uVar6 = uVar5 + 2;
    bVar2 = bVar7 & 0x1f;
    bVar7 = bVar7 - 1;
    *(short *)((int)auStack_24 + uVar5 + 4) =
         (*(short *)((int)local_46 + uVar5) << bVar2) + *(short *)((int)auStack_24 + uVar5 + 2);
    uVar5 = uVar6;
  } while (uVar6 < 0x1f);
  if (auStack_24[0x11] != 0) {
    FUN_0062b1c0(s_Bad_table_0068903c);
  }
  uVar5 = 1;
  bVar2 = (byte)param_3;
  bVar7 = 0x10 - bVar2;
  if (param_3 != 0) {
    iVar8 = 0;
    do {
      puVar11 = (ushort *)((int)auStack_24 + iVar8 + 2);
      *puVar11 = *puVar11 >> (bVar7 & 0x1f);
      cVar3 = (char)uVar5;
      uVar5 = uVar5 + 1;
      *(short *)((int)local_46 + iVar8) = (short)(1 << (bVar2 - cVar3 & 0x1f));
      iVar8 = iVar8 + 2;
    } while (uVar5 <= param_3);
    if (0x10 < uVar5) goto LAB_0062b77f;
  }
  puVar11 = &uStack_48 + uVar5;
  do {
    cVar3 = (char)uVar5;
    uVar5 = uVar5 + 1;
    *puVar11 = (ushort)(1 << (0x10U - cVar3 & 0x1f));
    puVar11 = puVar11 + 1;
  } while (uVar5 < 0x11);
LAB_0062b77f:
  uVar5 = (uint)(auStack_24[param_3 + 1] >> (bVar7 & 0x1f));
  if ((uVar5 != 0) && (uVar6 = 1 << (bVar2 & 0x1f), uVar5 != uVar6)) {
    uVar6 = uVar6 - uVar5;
    puVar14 = (undefined4 *)(param_4 + uVar5 * 2);
    for (uVar9 = uVar6 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    for (uVar5 = (uint)((uVar6 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2 *)puVar14 = 0;
      puVar14 = (undefined4 *)((int)puVar14 + 2);
    }
  }
  param_3 = 0;
  uVar5 = param_1;
  if (param_1 != 0) {
    do {
      uVar6 = (uint)*(byte *)(param_3 + param_2);
      if (uVar6 != 0) {
        uVar1 = auStack_24[uVar6];
        uVar9 = (uint)uVar1;
        uVar12 = (&uStack_48)[uVar6] + uVar9;
        if (uVar4 < uVar6) {
          iVar8 = uVar6 - uVar4;
          puVar11 = (ushort *)(param_4 + (uint)(uVar1 >> (bVar7 & 0x1f)) * 2);
          if (iVar8 != 0) {
            puVar13 = &DAT_00749df0 + uVar5;
            do {
              if (*puVar11 == 0) {
                puVar13[-0x8000] = 0;
                *puVar13 = 0;
                *puVar11 = (ushort)uVar5;
                uVar5 = uVar5 + 1;
                puVar13 = puVar13 + 1;
              }
              if ((1 << (0xf - bVar2 & 0x1f) & uVar9) == 0) {
                puVar11 = (ushort *)((int)&DAT_00739df0 + (uint)*puVar11 * 2);
              }
              else {
                puVar11 = &DAT_00749df0 + *puVar11;
              }
              uVar9 = uVar9 << 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *puVar11 = (ushort)param_3;
        }
        else if (uVar9 < uVar12) {
          puVar11 = (ushort *)(param_4 + uVar9 * 2);
          for (uVar10 = uVar12 - uVar9 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(uint *)puVar11 = CONCAT22((ushort)param_3,(ushort)param_3);
            puVar11 = puVar11 + 2;
          }
          for (uVar9 = (uint)((uVar12 - uVar9 & 1) != 0); uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = (ushort)param_3;
            puVar11 = puVar11 + 1;
          }
        }
        auStack_24[uVar6] = (ushort)uVar12;
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_1);
  }
  return;
}

