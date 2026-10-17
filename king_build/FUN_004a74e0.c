
void __fastcall FUN_004a74e0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643040;
  pvStack_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  iVar6 = *(int *)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((iVar6 != 0) && (ExceptionList = &pvStack_c, (*(uint *)(param_1 + 0xc) & 0x10000) == 0)) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
    piVar7 = *(int **)(param_1 + 4);
    if ((piVar7[1] == 0) && (piVar7 != (int *)0x0)) {
      (**(code **)(*piVar7 + 0xc))(1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  local_4 = 0xffffffff;
  iVar4 = FUN_004a2d60(iVar1,iVar1,iVar6,iVar6,0);
  iVar2 = *(int *)(param_1 + 0x14);
  for (; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
    FUN_00492340();
  }
  local_18 = (int *)0x0;
  iVar6 = (int)((ulonglong)((longlong)(iVar1 - iVar6) * -0x2aaaaaab) >> 0x20);
  local_14 = 0;
  local_10 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ((iVar6 >> 1) - (iVar6 >> 0x1f)) * 0xc;
  iVar6 = *(int *)(param_1 + 0x20);
  piVar7 = (int *)(param_1 + 0x20);
  local_4 = 1;
  if (iVar6 == 0) {
LAB_004a7646:
    *piVar7 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
    if (((*(int *)(*piVar7 + 4) == 0) && (cVar3 = FUN_00408fd0(piVar7,&local_18), cVar3 == '\0')) &&
       ((int *)*piVar7 != (int *)0x0)) {
      (**(code **)(*(int *)*piVar7 + 0xc))(1);
    }
    if (local_18 == (int *)0x0) goto LAB_004a7646;
    iVar6 = (**(code **)*local_18)();
    if (iVar6 != 0xc) {
      uVar5 = (**(code **)(*local_18 + 4))(s_Environment_0066f60c);
      FUN_004a5670(2,1,uVar5);
      goto LAB_004a764e;
    }
    *piVar7 = (int)local_18;
    *(undefined4 *)(param_1 + 0x28) = local_10;
    local_18[1] = local_18[1] + 1;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
LAB_004a764e:
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

