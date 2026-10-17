
void __fastcall FUN_0060c1d0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  
  piVar4 = _malloc((uint)*(ushort *)(param_1 + 0x28) << 2);
  piVar11 = piVar4;
  for (uVar7 = (uint)*(ushort *)(param_1 + 0x28); uVar7 != 0; uVar7 = uVar7 - 1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)piVar11 = 0;
    piVar11 = (int *)((int)piVar11 + 1);
  }
  iVar8 = **(int **)(param_1 + 0x24);
  if (iVar8 != 0) goto LAB_0060c218;
  iVar8 = (*(int **)(param_1 + 0x24))[1];
  while (iVar8 != 0) {
LAB_0060c218:
    piVar4[**(ushort **)(iVar8 + 0x10)] = 1;
    piVar4[**(ushort **)(iVar8 + 0x14)] = 1;
    piVar4[**(ushort **)(iVar8 + 0x18)] = 1;
    piVar11 = *(int **)(param_1 + 0x24);
    if ((*piVar11 == 0) || (iVar8 + 4 != *(int *)(*piVar11 + 8))) {
      if (((piVar11[1] != 0) && (iVar8 + 4 == *(int *)(piVar11[1] + 8))) ||
         (*(int *)(iVar8 + 4) == 0)) break;
      iVar8 = *(int *)(iVar8 + 4) + -4;
    }
    else {
      iVar8 = piVar11[1];
    }
  }
  uVar7 = 0;
  if (*(short *)(param_1 + 0x28) != 0) {
    iVar8 = 0;
    do {
      piVar11 = DAT_00724ca0;
      if ((*piVar4 == 0) &&
         (piVar5 = (int *)FUN_00631d33(0xc), piVar11 = DAT_00724ca0, piVar5 != (int *)0x0)) {
        iVar10 = *(int *)(*(int *)(param_1 + 0xc) + iVar8);
        piVar5[1] = (int)piVar5;
        *piVar5 = (int)piVar5;
        piVar5[2] = iVar10;
        piVar3 = DAT_00724ca0;
        DAT_00724ca4 = DAT_00724ca4 + 1;
        piVar11 = piVar5;
        if (DAT_00724ca0 != (int *)0x0) {
          *piVar5 = (int)DAT_00724ca0;
          piVar5[1] = piVar3[1];
          *(int **)piVar3[1] = piVar5;
          piVar3[1] = (int)piVar5;
          piVar11 = DAT_00724ca0;
        }
      }
      DAT_00724ca0 = piVar11;
      uVar7 = uVar7 + 1;
      piVar4 = piVar4 + 1;
      iVar8 = iVar8 + 0x10;
    } while (uVar7 < *(ushort *)(param_1 + 0x28));
  }
  while (DAT_00724ca0 != (int *)0x0) {
    puVar2 = (ushort *)DAT_00724ca0[2];
    uVar1 = *puVar2;
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + -1;
    iVar8 = (uint)uVar1 * 0x10;
    piVar11 = *(int **)(*(int *)(param_1 + 0xc) + 4 + iVar8);
    if (piVar11 != (int *)0x0) {
      piVar4 = *(int **)(param_1 + 0x2c);
      if (((int *)*piVar4 == piVar11) && ((int *)piVar4[1] == piVar11)) {
        if (piVar4 == piVar11) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        else {
          *piVar4 = (int)piVar4;
          (*(undefined4 **)(param_1 + 0x2c))[1] = **(undefined4 **)(param_1 + 0x2c);
        }
      }
      else {
        if (piVar4 == piVar11) {
          *(int *)(param_1 + 0x2c) = *piVar11;
        }
        FUN_00609b00(piVar11);
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 4 + iVar8);
      if (iVar10 != 0) {
        FUN_0060e890();
        FUN_00631d5c(iVar10);
      }
    }
    if (uVar1 != *(ushort *)(param_1 + 0x28)) {
      puVar6 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x28) * 0x10 + *(int *)(param_1 + 0xc));
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar8);
      *puVar9 = *puVar6;
      puVar9[1] = puVar6[1];
      puVar9[2] = puVar6[2];
      puVar9[3] = puVar6[3];
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x28) * 0x28);
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar1 * 0x28);
      for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      **(ushort **)(*(int *)(param_1 + 0xc) + iVar8) = uVar1;
      iVar8 = iVar8 + *(int *)(param_1 + 0xc);
      iVar10 = *(int *)(iVar8 + 4);
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x10) = iVar8;
      }
    }
    if (puVar2 != (ushort *)0x0) {
      FUN_0060c450(1);
    }
    piVar11 = DAT_00724ca0;
    if (DAT_00724ca0 != (int *)0x0) {
      DAT_00724ca4 = DAT_00724ca4 + -1;
      bVar12 = DAT_00724ca0 == (int *)*DAT_00724ca0;
      DAT_00724ca0 = (int *)*DAT_00724ca0;
      if (bVar12) {
        DAT_00724ca0 = (int *)0x0;
      }
      *(int *)(*piVar11 + 4) = piVar11[1];
      *(int *)piVar11[1] = *piVar11;
      FUN_00631d5c(piVar11);
    }
  }
  return;
}

