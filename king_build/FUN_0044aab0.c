
uint * __thiscall FUN_0044aab0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar2 = param_3;
  iVar4 = (*(int *)(param_1 + 4) - param_3) / 0x18;
  puVar6 = param_2;
  if (0 < iVar4) {
    puVar7 = (uint *)(param_3 + 8);
    iVar5 = (int)param_2 - param_3;
    param_3 = iVar4;
    do {
      uVar1 = *puVar6;
      if ((((uVar1 != 0) && ((*(uint *)(iVar5 + (int)puVar7) & 0x10000) == 0)) &&
          (*(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1, *(int *)(*puVar6 + 4) == 0)) &&
         ((cVar3 = FUN_00408fd0(puVar6,puVar7 + -2), cVar3 == '\0' && ((int *)*puVar6 != (int *)0x0)
          ))) {
        (**(code **)(*(int *)*puVar6 + 0xc))(1);
      }
      if ((*puVar7 & 0x10000) == 0) {
        puVar6[1] = 0;
        if (puVar7[-2] == 0) {
          *puVar6 = 0;
          *(undefined4 *)(iVar5 + (int)puVar7) = 0;
        }
        else {
          *puVar6 = puVar7[-2];
          *(uint *)(iVar5 + (int)puVar7) = *puVar7;
          *(int *)(*puVar6 + 4) = *(int *)(*puVar6 + 4) + 1;
        }
      }
      else {
        *(uint *)(iVar5 + (int)puVar7) = *puVar7;
        *puVar6 = puVar7[-2];
        puVar6[1] = puVar7[-1];
      }
      FUN_0045aa70(puVar7 + 1);
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar7 = *(uint **)(param_1 + 4);
  for (; puVar6 != puVar7; puVar6 = puVar6 + 6) {
    FUN_0040cac0();
  }
  iVar4 = (int)((ulonglong)((longlong)(iVar2 - (int)param_2) * -0x2aaaaaab) >> 0x20);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + ((iVar4 >> 2) - (iVar4 >> 0x1f)) * 0x18;
  return param_2;
}

