
int * __thiscall FUN_004aa330(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = param_3;
  piVar2 = param_2;
  iVar5 = (*(int *)(param_1 + 4) - param_3) / 0x2c;
  if (0 < iVar5) {
    piVar6 = param_2 + 1;
    iVar7 = param_3 - (int)param_2;
    param_2 = param_2 + iVar5 * 0xb;
    param_3 = iVar5;
    do {
      iVar5 = *piVar6;
      if ((((iVar5 != 0) && ((piVar6[2] & 0x10000U) == 0)) &&
          (*(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1, *(int *)(*piVar6 + 4) == 0)) &&
         ((cVar4 = FUN_00408fd0(piVar6,(int)piVar6 + iVar7), cVar4 == '\0' &&
          ((int *)*piVar6 != (int *)0x0)))) {
        (**(code **)(*(int *)*piVar6 + 0xc))(1);
      }
      uVar1 = *(uint *)((int)piVar6 + iVar7 + 8);
      if ((uVar1 & 0x10000) == 0) {
        piVar6[1] = 0;
        if (*(int *)((int)piVar6 + iVar7) == 0) {
          *piVar6 = 0;
          piVar6[2] = 0;
        }
        else {
          *piVar6 = *(int *)((int)piVar6 + iVar7);
          piVar6[2] = *(int *)((int)piVar6 + iVar7 + 8);
          *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + 1;
        }
      }
      else {
        piVar6[2] = uVar1;
        *piVar6 = *(int *)((int)piVar6 + iVar7);
        piVar6[1] = *(int *)((int)piVar6 + iVar7 + 4);
      }
      FUN_004ab250((int)piVar6 + iVar7 + 0xc);
      piVar6[6] = *(int *)((int)piVar6 + iVar7 + 0x18);
      FUN_0040c060((int)piVar6 + iVar7 + 0x1c);
      piVar6 = piVar6 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  piVar6 = *(int **)(param_1 + 4);
  for (; param_2 != piVar6; param_2 = param_2 + 0xb) {
    (**(code **)(*param_2 + 4))(0);
  }
  iVar5 = (int)((ulonglong)((longlong)(iVar3 - (int)piVar2) * -0x2e8ba2e9) >> 0x20);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((iVar5 >> 3) - (iVar5 >> 0x1f)) * 0x2c;
  return piVar2;
}

