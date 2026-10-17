
void __fastcall FUN_0060cb20(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar5 = **(int **)(param_1 + 0x20);
  if (iVar5 == 0) {
    iVar5 = (*(int **)(param_1 + 0x20))[1];
  }
  *(int *)(param_1 + 0x28) = iVar5;
  DVar2 = timeGetTime();
  do {
    iVar5 = *(int *)(param_1 + 0x28);
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x24))
                               (*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),
                                *(undefined4 *)(iVar5 + 0x18),iVar5 + 0xc);
    piVar1 = *(int **)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x28);
    if (*piVar1 == 0) {
LAB_0060cb86:
      if (piVar1[1] == 0) {
LAB_0060cb9d:
        if (*(int *)(iVar5 + 4) != 0) {
          iVar6 = *(int *)(iVar5 + 4) + -4;
          goto LAB_0060cbab;
        }
      }
      else {
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar5 + 4;
        }
        if (iVar6 != *(int *)(piVar1[1] + 8)) goto LAB_0060cb9d;
      }
      iVar6 = 0;
    }
    else {
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar5 + 4;
      }
      if (iVar6 != *(int *)(*piVar1 + 8)) goto LAB_0060cb86;
      iVar6 = piVar1[1];
    }
LAB_0060cbab:
    FUN_0060ebd0(iVar5,(float)fVar7);
    *(int *)(param_1 + 0x28) = iVar6;
    DVar3 = timeGetTime();
    if ((999 < DVar3 - DVar2) || (*(int *)(param_1 + 0x28) == 0)) {
      uVar4 = (**(code **)(**(int **)(param_1 + 4) + 8))();
      if (*(ushort *)(param_1 + 0x26) < uVar4) {
        do {
          iVar5 = FUN_0060ee90();
          FUN_00604fc0(*(undefined4 *)(iVar5 + 0x20),param_1);
          uVar4 = (**(code **)(**(int **)(param_1 + 4) + 8))();
        } while (*(ushort *)(param_1 + 0x26) < uVar4);
      }
      return;
    }
  } while( true );
}

