
int FUN_00578450(HWND param_1)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_13c [16];
  undefined1 local_12c [200];
  undefined1 local_64 [68];
  undefined4 uStack_20;
  int iStack_1c;
  
  puVar6 = &DAT_006f248c;
  puVar11 = &DAT_006f2448;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puVar11 = &DAT_006f3ab8;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  do {
    *(undefined4 *)(puVar6 + -4) = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0;
    *(undefined4 *)(puVar6 + 0x20) = 0;
    *(undefined4 *)(puVar6 + 0x1c) = 0;
    *(undefined2 *)(puVar6 + 0x28) = 0;
    *(undefined2 *)(puVar6 + 0x2a) = 0;
    *(undefined2 *)(puVar6 + 0x26) = 0;
    *(undefined2 *)(puVar6 + 0x24) = 0;
    puVar6 = puVar6 + 0x238;
  } while ((int)puVar6 < 0x6f3abc);
  DAT_006f3ae0 = 0;
  DAT_006f3aec = 0;
  DAT_006f3ae8 = 0;
  FUN_00576440(local_64);
  FUN_0061c369(local_12c,s__s_____________________0067be04,local_64);
  FUN_00576420(local_12c);
  FUN_0061c369(local_12c,s_DirectInputCreateEx____0067be4c);
  FUN_00576420(local_12c);
  uVar12 = 0;
  puVar11 = &DAT_006f3ae4;
  uVar10 = 0x700;
  LVar1 = GetWindowLongA(param_1,-6);
  iVar3 = DirectInputCreateA(LVar1,uVar10,puVar11,uVar12);
  if (iVar3 < 0) {
    uVar10 = FUN_0061f231(iVar3,iVar3);
    FUN_0061c369(auStack_13c,s_error__s___0X_0067be3c,uVar10);
    FUN_00576420(auStack_13c);
    return -0x7fffbffb;
  }
  FUN_00576420(&DAT_006761c8);
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  FUN_00576420(s_Enum_Attached_Devices___0067be20);
  (**(code **)(*DAT_006f3ae4 + 0x10))
            (DAT_006f3ae4,4,&LAB_00576660,0,1,LVar1,uVar10,uVar12,uVar13,uVar14,uVar15);
  if (DAT_006f3af0 != 0) {
    iVar7 = -1;
    iVar3 = 0;
    if (0 < DAT_006f3af0) {
      puVar4 = &DAT_006f2488;
      do {
        if ((*puVar4 & 0x600) != 0) {
          iVar7 = iVar3;
          if (-1 < iVar3) goto LAB_00578638;
          break;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x8e;
      } while (iVar3 < DAT_006f3af0);
    }
    iVar2 = 0;
    iVar3 = iVar7;
    if (0 < DAT_006f3af0) {
      piVar5 = &DAT_006f2448;
      do {
        iVar3 = iVar2;
        if (*piVar5 == 1) break;
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
        iVar3 = iVar7;
      } while (iVar2 < DAT_006f3af0);
    }
    if (iVar3 < 0) {
      uVar8 = 0;
      iVar7 = 0;
      if (0 < DAT_006f3af0) {
        puVar9 = &DAT_006f24b0;
        do {
          if (uVar8 < *puVar9) {
            iVar3 = iVar7;
            uVar8 = *puVar9;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 0x11c;
        } while (iVar7 < DAT_006f3af0);
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
LAB_00578638:
    FUN_00577e70(iVar3,uStack_20,(float)iStack_1c,0);
  }
  return (-(uint)(DAT_006f3ae8 != 0) & 0x7fffbffb) + 0x80004005;
}

