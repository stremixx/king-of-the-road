
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060b970(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int *piStack_1c;
  
  DVar6 = timeGetTime();
  *(DWORD *)(param_1 + 0x30) = DVar6;
  uVar11 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0060b500();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar7 = FUN_0060b820();
    *(undefined4 *)(param_1 + 0x18) = uVar7;
  }
  piVar10 = *(int **)(param_1 + 4);
  (**(code **)(*piVar10 + 0xc))();
  piVar12 = *(int **)(param_1 + 0x2c);
  if (piVar12 != (int *)0x0) {
    do {
      iVar8 = FUN_0060e8a0(*(undefined4 *)(param_1 + 0x30));
      if ((iVar8 != 0) && (DAT_00724c88 < 500)) {
        *(int **)(&DAT_007244b8 + DAT_00724c88 * 4) = piVar12;
        DAT_00724c88 = DAT_00724c88 + 1;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)*(int *)(param_1 + 0x2c));
    while (DAT_00724c88 != 0) {
      DAT_00724c88 = DAT_00724c88 - 1;
      piVar12 = *(int **)(&DAT_007244b8 + DAT_00724c88 * 4);
      if (piVar12 == (int *)0x0) break;
      piVar1 = *(int **)(param_1 + 0x2c);
      if (((int *)*piVar1 == piVar12) && ((int *)piVar1[1] == piVar12)) {
        if (piVar1 == piVar12) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        else {
          *piVar1 = (int)piVar1;
          (*(undefined4 **)(param_1 + 0x2c))[1] = **(undefined4 **)(param_1 + 0x2c);
        }
      }
      else {
        if (piVar1 == piVar12) {
          *(int *)(param_1 + 0x2c) = *piVar12;
        }
        *(int *)(*piVar12 + 4) = piVar12[1];
        *(int *)piVar12[1] = *piVar12;
      }
      FUN_0060e890();
      FUN_00631d5c(piVar12);
    }
  }
  (**(code **)(*piVar10 + 0x10))(*(undefined4 *)(param_1 + 0x10));
  piVar10[0x18] = (uint)*(ushort *)(param_1 + 0x28);
  if ((piVar10[0x272d] != 0) && (piVar10[0x272d] = 0, *(short *)(param_1 + 0x28) != 0)) {
    iVar8 = 0;
    iVar13 = 0;
    do {
      fVar2 = (float)*(uint *)(*(int *)(param_1 + 0xc) + 8 + iVar8) - (float)piStack_1c[0x273e];
      fVar3 = fVar2 * _DAT_0064c484;
      fVar4 = (float)*(uint *)(*(int *)(param_1 + 0xc) + iVar8 + 0xc) - (float)piStack_1c[0x273f];
      fVar5 = fVar4 * _DAT_0064c484;
      fVar2 = fVar2 * _DAT_0064b8f4;
      fVar4 = fVar4 * _DAT_0064b8f4;
      *(float *)(iVar13 + 0x18 + *(int *)(param_1 + 0x10)) = fVar3;
      *(float *)(iVar13 + 0x1c + *(int *)(param_1 + 0x10)) = fVar5;
      *(float *)(iVar13 + 0x20 + *(int *)(param_1 + 0x10)) = fVar2;
      *(float *)(iVar13 + 0x24 + *(int *)(param_1 + 0x10)) = fVar4;
      if (*(int *)(*(int *)(param_1 + 0xc) + 4 + iVar8) != 0) {
        FUN_0060e960(fVar3,fVar5);
        FUN_0060e980(fVar2,fVar4);
      }
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + 0x28;
      iVar8 = iVar8 + 0x10;
      piVar10 = piStack_1c;
    } while (uVar11 < *(ushort *)(param_1 + 0x28));
  }
  iVar8 = 0;
  uVar9 = 0;
  iVar13 = **(int **)(param_1 + 0x24);
  if (iVar13 != 0) goto LAB_0060bb7c;
  iVar13 = (*(int **)(param_1 + 0x24))[1];
  while( true ) {
    while( true ) {
      uVar9 = (undefined2)((uint)iVar8 >> 0x10);
      if (iVar13 == 0) {
        return 1;
      }
LAB_0060bb7c:
      (**(code **)(*piVar10 + 0x14))
                (CONCAT22(uVar9,**(undefined2 **)(iVar13 + 0x10)),
                 CONCAT22(uVar9,**(undefined2 **)(iVar13 + 0x14)),
                 CONCAT22(uVar9,**(undefined2 **)(iVar13 + 0x18)),iVar13);
      piVar12 = *(int **)(param_1 + 0x24);
      iVar8 = *piVar12;
      if ((iVar8 == 0) || (iVar13 + 4 != *(int *)(iVar8 + 8))) break;
      iVar13 = piVar12[1];
    }
    if ((piVar12[1] != 0) && (iVar8 = iVar13 + 4, iVar8 == *(int *)(piVar12[1] + 8))) break;
    if (*(int *)(iVar13 + 4) == 0) {
      return 1;
    }
    iVar13 = *(int *)(iVar13 + 4) + -4;
  }
  return 1;
}

