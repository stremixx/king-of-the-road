
/* WARNING: Removing unreachable block (ram,0x004a72f4) */
/* WARNING: Removing unreachable block (ram,0x004a7306) */
/* WARNING: Removing unreachable block (ram,0x004a731e) */
/* WARNING: Removing unreachable block (ram,0x004a7302) */

void __thiscall FUN_004a7230(int param_1,int *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00642fe8;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((iVar4 != 0) && (ExceptionList = &pvStack_c, (*(uint *)(param_1 + 0xc) & 0x10000) == 0)) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -1;
    piVar1 = *(int **)(param_1 + 4);
    if (((piVar1[1] == 0) &&
        (((piVar1 != param_2 || (*(uint *)(param_1 + 0xc) != param_4)) ||
         (*(int *)(param_1 + 8) != param_3)))) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  if ((param_4 & 0x10000) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      *(int **)(param_1 + 4) = param_2;
      *(uint *)(param_1 + 0xc) = param_4;
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    *(uint *)(param_1 + 0xc) = param_4;
    *(int **)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  for (iVar5 = iVar2; iVar5 != iVar3; iVar5 = iVar5 + 0xc) {
    FUN_00492340();
  }
  iVar4 = (int)((ulonglong)((longlong)(iVar4 - iVar2) * -0x2aaaaaab) >> 0x20);
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ((iVar4 >> 1) - (iVar4 >> 0x1f)) * 0xc;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) &&
     (iVar4 = param_2[1], param_2[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return;
}

