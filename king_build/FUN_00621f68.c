
void FUN_00621f68(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006539c0;
  puStack_10 = &LAB_00623924;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        iVar2 = FUN_00628a15(*(undefined4 *)(param_1 + 0x18),1);
        if ((iVar2 != 0) && (iVar2 = FUN_00628a31(piVar1,1), iVar2 != 0)) {
          uVar3 = FUN_00622193(*(undefined4 *)(param_1 + 0x18),param_4 + 8,
                               *(undefined4 *)(param_4 + 0x14));
          FUN_0061c980(piVar1,uVar3);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        iVar2 = FUN_00628a15(*(undefined4 *)(param_1 + 0x18),1);
        if (((iVar2 != 0) && (iVar2 = FUN_00628a31(piVar1,1), iVar2 != 0)) &&
           (iVar2 = FUN_00628a4d(*(undefined4 *)(param_4 + 0x18)), iVar2 != 0)) {
          if ((*param_4 & 4) != 0) {
            uVar3 = FUN_00622193(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
            FUN_0061c4b5(piVar1,*(undefined4 *)(param_4 + 0x18),uVar3);
            ExceptionList = local_14;
            return;
          }
          uVar3 = FUN_00622193(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
          FUN_0061c4ae(piVar1,*(undefined4 *)(param_4 + 0x18),uVar3);
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      iVar2 = FUN_00628a15(*(undefined4 *)(param_1 + 0x18),1);
      if ((iVar2 != 0) && (iVar2 = FUN_00628a31(piVar1,1), iVar2 != 0)) {
        FUN_0061c980(piVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_00621ff6;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    iVar2 = FUN_00628a15(*(undefined4 *)(param_1 + 0x18),1);
    if ((iVar2 != 0) && (iVar2 = FUN_00628a31(piVar1,1), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar2;
LAB_00621ff6:
      iVar2 = FUN_00622193(iVar2,param_4 + 8);
      *piVar1 = iVar2;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_006223db();
  ExceptionList = local_14;
  return;
}

