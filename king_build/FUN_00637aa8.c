
void __fastcall FUN_00637aa8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  if (((code *)param_1[0x27] != (code *)0x0) &&
     (iVar1 = (*(code *)param_1[0x27])(param_1), iVar1 == 0)) {
    return;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0xbc))();
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x8c))(param_1), iVar1 == 0)) {
    return;
  }
  iVar1 = FUN_00639a37();
  piVar3 = *(int **)(iVar1 + 4);
  if ((piVar3 != (int *)0x0) && ((int *)piVar3[7] == param_1)) {
    if ((piVar2 == (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 0x88))(), iVar1 == 0)) {
      return;
    }
    FUN_00636afd();
    FUN_00636bc9(0);
    iVar1 = FUN_00639038();
    if (iVar1 == 0) {
      FUN_00639048(0);
      return;
    }
    iVar1 = FUN_00639a37();
    if ((*(char *)(iVar1 + 0x14) == '\0') && (piVar3[7] == 0)) {
      AfxPostQuitMessage(0);
      return;
    }
  }
  if ((piVar2 != (int *)0x0) && (piVar2[0x12] != 0)) {
    local_8 = (int *)(**(code **)(*piVar2 + 0x60))();
    do {
      if (local_8 == (int *)0x0) {
        (**(code **)(*piVar2 + 0x7c))();
        return;
      }
      (**(code **)(*piVar2 + 100))(&local_8);
      piVar3 = (int *)FUN_00634939();
    } while (piVar3 == param_1);
    (**(code **)(*piVar2 + 0x94))(param_1);
  }
  (**(code **)(*param_1 + 0x58))();
  return;
}

