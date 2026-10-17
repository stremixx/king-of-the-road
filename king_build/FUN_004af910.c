
uint * __thiscall FUN_004af910(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar3 = param_3;
  iVar4 = (*(int *)(param_1 + 4) - param_3) / 0xc;
  puVar7 = param_2;
  if (0 < iVar4) {
    puVar6 = (uint *)(param_3 + 8);
    iVar5 = (int)param_2 - param_3;
    param_3 = iVar4;
    do {
      uVar1 = *puVar7;
      if ((uVar1 != 0) && ((*(uint *)(iVar5 + (int)puVar6) & 0x10000) == 0)) {
        *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1;
        piVar2 = (int *)*puVar7;
        if (((piVar2[1] == 0) &&
            (((piVar2 != (int *)puVar6[-2] || (*(uint *)(iVar5 + (int)puVar6) != *puVar6)) ||
             (puVar7[1] != puVar6[-1])))) && (piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0xc))(1);
        }
      }
      if ((*puVar6 & 0x10000) == 0) {
        puVar7[1] = 0;
        uVar1 = puVar6[-2];
        if (uVar1 == 0) {
          *puVar7 = 0;
          *(undefined4 *)(iVar5 + (int)puVar6) = 0;
        }
        else {
          *puVar7 = uVar1;
          *(uint *)(iVar5 + (int)puVar6) = *puVar6;
          *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
        }
      }
      else {
        *(uint *)(iVar5 + (int)puVar6) = *puVar6;
        *puVar7 = puVar6[-2];
        puVar7[1] = puVar6[-1];
      }
      puVar7 = puVar7 + 3;
      puVar6 = puVar6 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar6 = *(uint **)(param_1 + 4);
  for (; puVar7 != puVar6; puVar7 = puVar7 + 3) {
    if (((puVar7[2] & 0x10000) == 0) && (uVar1 = *puVar7, uVar1 != 0)) {
      *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1;
      piVar2 = (int *)*puVar7;
      if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0xc))(1);
      }
    }
  }
  iVar4 = (int)((ulonglong)((longlong)(iVar3 - (int)param_2) * -0x2aaaaaab) >> 0x20);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((iVar4 >> 1) - (iVar4 >> 0x1f)) * 0xc;
  return param_2;
}

