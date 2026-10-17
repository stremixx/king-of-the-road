
void __fastcall FUN_0060ce60(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  puVar4 = _malloc((uint)*(ushort *)(param_1 + 0x24) << 2);
  puVar8 = puVar4;
  for (uVar6 = (uint)*(ushort *)(param_1 + 0x24); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar7 = **(int **)(param_1 + 0x20);
  if (iVar7 != 0) goto LAB_0060cea4;
  iVar7 = (*(int **)(param_1 + 0x20))[1];
  while (iVar7 != 0) {
LAB_0060cea4:
    puVar4[*(ushort *)(*(int *)(iVar7 + 0x10) + 8)] = 1;
    puVar4[*(ushort *)(*(int *)(iVar7 + 0x14) + 8)] = 1;
    puVar4[*(ushort *)(*(int *)(iVar7 + 0x18) + 8)] = 1;
    piVar2 = *(int **)(param_1 + 0x20);
    if ((*piVar2 == 0) || (iVar7 + 4 != *(int *)(*piVar2 + 8))) {
      if (((piVar2[1] != 0) && (iVar7 + 4 == *(int *)(piVar2[1] + 8))) || (*(int *)(iVar7 + 4) == 0)
         ) break;
      iVar7 = *(int *)(iVar7 + 4) + -4;
    }
    else {
      iVar7 = piVar2[1];
    }
  }
  uVar6 = 0;
  if (*(short *)(param_1 + 0x24) != 0) {
    do {
      piVar2 = DAT_00724cb0;
      if ((puVar4[uVar6] == 0) &&
         (piVar5 = (int *)FUN_00631d33(0xc), piVar2 = DAT_00724cb0, piVar5 != (int *)0x0)) {
        iVar7 = *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 4);
        piVar5[1] = (int)piVar5;
        *piVar5 = (int)piVar5;
        piVar5[2] = iVar7;
        piVar3 = DAT_00724cb0;
        DAT_00724cb4 = DAT_00724cb4 + 1;
        piVar2 = piVar5;
        if (DAT_00724cb0 != (int *)0x0) {
          *piVar5 = (int)DAT_00724cb0;
          piVar5[1] = piVar3[1];
          *(int **)piVar3[1] = piVar5;
          piVar3[1] = (int)piVar5;
          piVar2 = DAT_00724cb0;
        }
      }
      DAT_00724cb0 = piVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0x24));
  }
  while (DAT_00724cb0 != (int *)0x0) {
    iVar7 = DAT_00724cb0[2];
    uVar1 = *(ushort *)(iVar7 + 8);
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    if (uVar1 != *(ushort *)(param_1 + 0x24)) {
      *(undefined4 *)((uint)uVar1 * 4 + *(int *)(param_1 + 0xc)) =
           *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4);
      *(ushort *)(*(int *)((uint)uVar1 * 4 + *(int *)(param_1 + 0xc)) + 8) = uVar1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4) = 0;
    if (iVar7 != 0) {
      FUN_00631d5c(iVar7);
    }
    piVar2 = DAT_00724cb0;
    if (DAT_00724cb0 != (int *)0x0) {
      DAT_00724cb4 = DAT_00724cb4 + -1;
      bVar9 = DAT_00724cb0 == (int *)*DAT_00724cb0;
      DAT_00724cb0 = (int *)*DAT_00724cb0;
      if (bVar9) {
        DAT_00724cb0 = (int *)0x0;
      }
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
      FUN_00631d5c(piVar2);
    }
  }
  return;
}

