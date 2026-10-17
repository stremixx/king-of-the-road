
undefined4 __thiscall FUN_0062fde3(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_0062fb80((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  }
  if (param_2 != 0) {
    param_1[2] = 0;
  }
  iVar2 = *(int *)(*param_1 + 4);
  uVar1 = *(uint *)(iVar2 + 8 + (int)param_1);
  if (uVar1 == 0) {
    if (*(int *)((int)param_1 + iVar2 + 0x20) != 0) {
      if (param_2 != 0) {
        iVar2 = FUN_0062fec4();
        if (param_2 <= iVar2) goto LAB_0062fe45;
      }
      FUN_0062fac0();
    }
LAB_0062fe45:
    iVar2 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
    if (*(int *)(iVar2 + 0x30) < 0) {
      FUN_0062fb80(iVar2 + 0x34);
    }
    if ((param_2 == 0) && ((*(byte *)(*(int *)(*param_1 + 4) + 0x24 + (int)param_1) & 1) != 0)) {
      FUN_00630018();
      uVar1 = *(uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
      if (uVar1 != 0) {
        *(uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) = uVar1 | 2;
        iVar2 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
        if (*(int *)(iVar2 + 0x30) < 0) {
          FUN_0062fb8b(iVar2 + 0x34);
        }
        goto LAB_0062fea1;
      }
    }
    uVar3 = 1;
  }
  else {
    *(uint *)((int)param_1 + iVar2 + 8) = uVar1 | 2;
LAB_0062fea1:
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
      FUN_0062fb8b((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    }
    uVar3 = 0;
  }
  return uVar3;
}

