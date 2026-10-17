
int * FUN_00462700(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063f4e0;
  local_10 = ExceptionList;
  iVar7 = *param_1;
  iVar1 = iVar7 + param_3;
  uVar4 = iVar1 + 8U & 0xfffffff8;
  if (uVar4 == 0) {
    iVar6 = 0;
    ExceptionList = &local_10;
  }
  else {
    ExceptionList = &local_10;
    iVar6 = FUN_0044b6e0(uVar4);
  }
  FUN_00602c20(param_1[5],param_1[5] + iVar7,iVar6);
  iVar2 = param_2;
  iVar7 = iVar7 + iVar6;
  iVar8 = (iVar3 + param_2) - param_2;
  param_2 = iVar3 + param_2;
  FUN_0061c980(iVar7,iVar2,iVar8);
  param_1 = (int *)(iVar8 + iVar7);
  FUN_0040a4e0(&param_2,&param_1);
  local_8 = 0;
  *(undefined1 *)(iVar7 + param_3) = 0;
  piVar5 = (int *)FUN_0044b6e0(0x18);
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar1;
    piVar5[1] = 1;
    *(undefined1 *)(piVar5 + 3) = 1;
    *(undefined1 *)((int)piVar5 + 0xd) = 0;
    piVar5[2] = piVar5[2] & 0xffffff00;
    piVar5[5] = iVar6;
    piVar5[4] = iVar6;
    ExceptionList = local_10;
    return piVar5;
  }
  ExceptionList = local_10;
  return (int *)0x0;
}

