
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004098e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  float10 fVar8;
  double local_18;
  double local_10;
  
  iVar1 = param_3 + param_1 * 2;
  if (*(char *)(iVar1 * 0x10 + 0x38 + param_2) != '\0') {
    return (float10)*(double *)((iVar1 + 3) * 0x10 + param_2);
  }
  iVar5 = *(int *)(param_2 + 0x78);
  uVar7 = 0;
  local_10 = 0.0;
  if (*(int *)(param_2 + 0x7c) - iVar5 >> 2 != 0) {
    do {
      piVar2 = *(int **)(iVar5 + uVar7 * 4);
      if (piVar2 == (int *)0x0) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)(piVar2 + 2);
      }
      lVar4 = 0x3ff00000;
      if (puVar6[5] == 2) {
        lVar4 = 0x3ff80000;
      }
      if (puVar6[5] == 3) {
        lVar4 = 0x40000000;
      }
      local_18 = (double)(lVar4 << 0x20);
      if (param_1 != 1) {
        uVar3 = *puVar6;
        if ((uVar3 & 0x40) == 0) {
          if (param_3 == 1) {
            uVar3 = uVar3 & 4;
          }
          else {
            uVar3 = uVar3 & 8;
          }
          if (uVar3 == 0) goto LAB_004099b8;
        }
        local_18 = local_18 * _DAT_0064a5e0;
      }
LAB_004099b8:
      fVar8 = (float10)(**(code **)(*piVar2 + 0x24))();
      iVar5 = *(int *)(param_2 + 0x78);
      uVar7 = uVar7 + 1;
      local_10 = (double)(fVar8 * (float10)local_18 + (float10)local_10);
    } while (uVar7 < (uint)(*(int *)(param_2 + 0x7c) - iVar5 >> 2));
  }
  *(undefined1 *)(iVar1 * 0x10 + 0x38 + param_2) = 1;
  *(double *)((iVar1 + 3) * 0x10 + param_2) = local_10;
  return (float10)local_10;
}

