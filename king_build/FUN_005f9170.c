
int __thiscall FUN_005f9170(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *puVar10;
  int unaff_retaddr;
  undefined4 local_f0 [10];
  undefined4 auStack_c8 [14];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  puVar5 = local_f0 + 2;
  iVar8 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar5 = auStack_c8 + 4;
  puVar10 = &DAT_00701550;
  puVar7 = local_f0;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar8 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    return 0;
  }
  if ((param_2 & 4) == 0) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x40);
  puVar5 = (undefined4 *)(param_3 + 4);
  puVar10 = puVar5;
  puVar7 = auStack_c8 + 2;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  if (iVar8 == 0) {
    return 0;
  }
  iVar8 = *(int *)(param_3 + 0x4c);
  uVar1 = *(undefined4 *)(param_3 + 0x50);
  uVar2 = *(undefined4 *)(param_3 + 0x54);
  uVar3 = *(undefined4 *)(param_3 + 0x58);
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar9 = FUN_005f1c30(local_f0);
    puVar10 = puVar5;
    if (iVar9 == 0) {
      puVar7 = (undefined4 *)FUN_005aba00(local_30,local_f0);
      iVar9 = 0xc;
    }
    else {
      if (iVar9 != 1) goto LAB_005f92d7;
      uVar6 = FUN_005aba00(local_90,local_f0);
      puVar7 = (undefined4 *)FUN_005ab130(local_60,puVar5,uVar6);
      iVar9 = 0xc;
    }
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
LAB_005f92d7:
  iVar9 = (**(code **)(**(int **)(param_1 + 0x40) + 0x34))(param_2,param_3);
  if (iVar9 == 0) {
    puVar5 = auStack_c8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *unaff_EBP = *puVar5;
      puVar5 = puVar5 + 1;
      unaff_EBP = unaff_EBP + 1;
    }
    return 0;
  }
  iVar4 = *(int *)(unaff_EBX + 0x48);
  if ((iVar4 != 0) && (iVar4 == *(int *)(unaff_retaddr + 0x78))) {
    *(int *)(param_3 + 0x4c) = (int)puVar5;
    puVar5 = auStack_c8;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *unaff_EBP = *puVar5;
      puVar5 = puVar5 + 1;
      unaff_EBP = unaff_EBP + 1;
    }
    *(undefined4 *)(param_3 + 0x58) = uVar1;
    *(int *)(param_3 + 0x50) = param_1;
    *(int *)(param_3 + 0x54) = iVar8;
    *(undefined4 *)(param_3 + 0x5c) = uVar2;
    *(undefined4 *)(param_3 + 0x60) = uVar3;
    return 0;
  }
  *(int *)(unaff_retaddr + 0x74) = iVar4;
  return iVar9;
}

