
void __thiscall FUN_004b2bf0(int param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uStack_9;
  int iStack_8;
  int local_4;
  
  while ((uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c) >> 2) +
                ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x14) >> 2) + 0x1ffffff) * 0x80 +
               (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8) >> 2)) < param_2) {
    iVar1 = *(int *)(param_1 + 0x38);
    puVar2 = *(undefined1 **)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38) - iVar1;
    if (0 < iVar4) {
      puVar5 = puVar2;
      local_4 = iVar4;
      do {
        *puVar5 = puVar5[iVar1 - (int)puVar2];
        puVar5 = puVar5 + 1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      local_4 = 0;
    }
    *(undefined1 **)(param_1 + 0x38) = puVar2 + (*(int *)(param_1 + 0x38) - iVar1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    do {
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_004a5470(0,1);
      }
      if ((*(uint *)(param_1 + 0x30) & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iStack_8 = (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
      piVar3 = *(int **)(param_1 + 0x18);
      if (piVar3 == (int *)(*(int *)(param_1 + 0x20) + -4)) {
        FUN_004a21f0(&iStack_8);
      }
      else {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iStack_8;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      }
      puVar2 = *(undefined1 **)(param_1 + 0x38);
      uStack_9 = (undefined1)iStack_8;
      if (puVar2 == *(undefined1 **)(param_1 + 0x3c)) {
        FUN_0044be90(puVar2,&uStack_9);
      }
      else {
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = uStack_9;
        }
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
    } while ((iStack_8 != 10) && (iStack_8 != -1));
  }
  return;
}

