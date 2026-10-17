
void __thiscall FUN_005e5300(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + param_3 * 0x7c;
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar1 != 0) {
    while ((*(byte *)(iVar1 + 0x20) & 1) != 0) {
      iVar4 = *(int *)(iVar1 + 0x30) + 1;
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      if ((*(int *)(iVar1 + 0x2c) < 0) ||
         (iVar1 = param_2 + *(int *)(iVar1 + 0x2c) * 0x7c, iVar1 == 0)) break;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0))
  goto switchD_005e544f_switchD;
  puVar2 = (undefined4 *)FUN_00631d33(0x60);
  *(undefined4 **)(param_1 + 4) = puVar2;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined **)(*(int *)(param_1 + 4) + 0x18) = &DAT_00720718;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      **(int **)(param_1 + 4) = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0x20;
      *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(param_1 + 0x1c) + 0x10;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0x20;
      *(int *)(*(int *)(param_1 + 4) + 0x20) = *(int *)(param_1 + 0x1c) + 0x18;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = 0x20;
      uVar3 = *(uint *)(param_1 + 8) | 0x42;
      goto LAB_005e540a;
    }
  }
  else {
    **(int **)(param_1 + 4) = *(int *)(param_1 + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0x20;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 0x18) + 0xc;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0x20;
    *(int *)(*(int *)(param_1 + 4) + 0x20) = *(int *)(param_1 + 0x18) + 0x18;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = 0x20;
    uVar3 = *(uint *)(param_1 + 8) | 0x12;
LAB_005e540a:
    *(uint *)(param_1 + 8) = uVar3;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar4 = 0;
    iVar1 = 8;
    do {
      *(int *)(*(int *)(param_1 + 4) + 0x20 + iVar1) = *(int *)(param_1 + 0x10) + -8 + iVar1;
      iVar1 = iVar1 + 8;
      *(uint *)(*(int *)(param_1 + 4) + 0x1c + iVar1) = (uint)*(byte *)(param_1 + 0xc) << 3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
switchD_005e544f_switchD:
  switch(iVar5) {
  case 1:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
    return;
  case 2:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
    return;
  case 3:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x300;
    return;
  case 4:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x400;
    return;
  case 5:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x500;
    return;
  case 6:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x600;
    return;
  case 7:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x700;
    return;
  case 8:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800;
  }
  return;
}

