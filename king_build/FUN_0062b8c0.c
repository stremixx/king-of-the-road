
void FUN_0062b8c0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar3 = FUN_0062b560(9);
  if (iVar3 == 0) {
    uVar2 = FUN_0062b560(9);
    puVar8 = (undefined4 *)&DAT_007355ec;
    for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    puVar8 = &DAT_00769f30;
    for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = CONCAT22(uVar2,uVar2);
      puVar8 = puVar8 + 1;
    }
    return;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      uVar1 = *(ushort *)((int)&DAT_00779fc4 + ((DAT_00779fc0 & 0xffff) >> 8) * 2);
      uVar5 = (uint)uVar1;
      if (0x12 < uVar1) {
        uVar4 = 0x80;
        do {
          if ((uVar4 & DAT_00779fc0 & 0xffff) == 0) {
            uVar1 = *(ushort *)((int)&DAT_00739df0 + uVar5 * 2);
          }
          else {
            uVar1 = (&DAT_00749df0)[uVar5];
          }
          uVar5 = (uint)uVar1;
          uVar4 = uVar4 >> 1;
        } while (0x12 < uVar1);
      }
      FUN_0062b320(*(undefined1 *)((int)&DAT_00779fa4 + uVar5));
      if (uVar5 < 3) {
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        else if (uVar5 == 1) {
          iVar6 = FUN_0062b560(4);
          uVar5 = iVar6 + 3;
        }
        else {
          iVar6 = FUN_0062b560(9);
          uVar5 = iVar6 + 0x14;
        }
        if (-1 < (int)(uVar5 - 1)) {
          puVar8 = (undefined4 *)(&DAT_007355ec + iVar7);
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          iVar7 = iVar7 + uVar5;
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
      }
      else {
        (&DAT_007355ec)[iVar7] = (char)uVar5 + -2;
        iVar7 = iVar7 + 1;
      }
    } while (iVar7 < iVar3);
    if (0x1fd < iVar7) goto LAB_0062b9fa;
  }
  puVar8 = (undefined4 *)(&DAT_007355ec + iVar7);
  for (uVar5 = 0x1feU - iVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = 0x1feU - iVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
LAB_0062b9fa:
  FUN_0062b6b0(0x1fe,&DAT_007355ec,0xc,&DAT_00769f30);
  return;
}

