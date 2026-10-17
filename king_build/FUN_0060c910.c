
undefined4 __fastcall FUN_0060c910(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint extraout_EDX;
  uint uVar4;
  undefined2 uVar5;
  uint extraout_EDX_00;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_0060c660();
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = FUN_0060c840();
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  piVar1 = *(int **)(param_1 + 4);
  (**(code **)(*piVar1 + 0x1c))();
  uVar6 = 0;
  uVar4 = extraout_EDX;
  if (*(short *)(param_1 + 0x24) != 0) {
    do {
      (**(code **)(*piVar1 + 0x34))(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4));
      uVar6 = uVar6 + 1;
      uVar4 = (uint)*(ushort *)(param_1 + 0x24);
    } while (uVar6 < uVar4);
  }
  uVar5 = (undefined2)(uVar4 >> 0x10);
  iVar7 = **(int **)(param_1 + 0x20);
  if (iVar7 != 0) goto LAB_0060c971;
  iVar7 = (*(int **)(param_1 + 0x20))[1];
  while( true ) {
    while( true ) {
      uVar5 = (undefined2)(uVar4 >> 0x10);
      if (iVar7 == 0) {
        return 1;
      }
LAB_0060c971:
      (**(code **)(*piVar1 + 0x38))
                (CONCAT22(uVar5,*(undefined2 *)(*(int *)(iVar7 + 0x10) + 8)),
                 CONCAT22(uVar5,*(undefined2 *)(*(int *)(iVar7 + 0x14) + 8)),
                 CONCAT22(uVar5,*(undefined2 *)(*(int *)(iVar7 + 0x18) + 8)),iVar7);
      piVar2 = *(int **)(param_1 + 0x20);
      uVar4 = extraout_EDX_00;
      if ((*piVar2 == 0) || (uVar4 = iVar7 + 4, uVar4 != *(uint *)(*piVar2 + 8))) break;
      iVar7 = piVar2[1];
    }
    if ((piVar2[1] != 0) && (uVar4 = *(uint *)(piVar2[1] + 8), iVar7 + 4U == uVar4)) break;
    if (*(int *)(iVar7 + 4) == 0) {
      return 1;
    }
    iVar7 = *(int *)(iVar7 + 4) + -4;
  }
  return 1;
}

