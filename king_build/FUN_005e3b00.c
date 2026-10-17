
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e3b00(double *param_1,undefined4 param_2,char *param_3)

{
  double dVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  
  iVar7 = 0;
  if (param_3 != (char *)0x0) {
    if (*(int *)(param_1 + 2) != 0) {
      FUN_005e3ac0();
      SetThreadPriority(*(HANDLE *)(*(int *)(param_1 + 4) + 0x28),0);
      return;
    }
    if (*(int *)((int)param_1 + 0x14) == 0) {
      cVar2 = *param_3;
      iVar6 = 0;
      if (cVar2 != '\0') {
        do {
          iVar7 = iVar7 * 0x100 + (int)cVar2;
          cVar2 = param_3[iVar6 + 1];
          iVar6 = iVar6 + 1;
        } while (cVar2 != '\0');
        if (2 < iVar6) {
          FUN_005d2520(s_name_of_the_module_for_pumping_t_006821e8,param_3);
        }
      }
      if ((*(int *)(param_1 + 1) != iVar7) && (iVar6 = FUN_005d8940(param_3), iVar6 == 0)) {
        *(int *)(param_1 + 1) = iVar7;
        if (*(int *)(param_1 + 3) != 0) {
          FUN_00631d5c(*(int *)(param_1 + 3));
        }
        puVar5 = (undefined4 *)FUN_00631d33(0x1b0);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5[2] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[0x6b] = 0;
          puVar5[0x6a] = 0;
          puVar8 = puVar5 + 6;
          for (iVar7 = 100; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
        }
        *(undefined4 **)(param_1 + 3) = puVar5;
        iVar7 = (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x70))();
        if (iVar7 != 0) {
          FUN_005e4570(param_3);
        }
        (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x54))
                  (param_3,0,*(undefined4 *)(param_1 + 3));
        *(char **)((int)param_1 + 0x14) = param_3;
        fVar9 = (float10)thunk_FUN_00603580();
        *param_1 = (double)fVar9;
        SetEvent(*(HANDLE *)((int)param_1 + 0x24));
      }
    }
    else {
      dVar1 = *param_1 + _DAT_00651720;
      fVar9 = (float10)thunk_FUN_00603580();
      if ((float10)dVar1 < fVar9) {
        fVar9 = (float10)thunk_FUN_00603580();
        *param_1 = (double)fVar9;
        SetLastError(0);
        BVar3 = SetThreadPriority(*(HANDLE *)(*(int *)(param_1 + 4) + 0x28),1);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          FUN_005d2250(s_increase_priority_fail_00682210,DVar4);
          return;
        }
      }
    }
  }
  return;
}

