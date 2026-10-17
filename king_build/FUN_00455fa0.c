
/* WARNING: Removing unreachable block (ram,0x004560a1) */
/* WARNING: Removing unreachable block (ram,0x004560b6) */
/* WARNING: Removing unreachable block (ram,0x004560ab) */

int * FUN_00455fa0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_5;
  iVar2 = param_4;
  iVar5 = param_3;
  puStack_8 = &LAB_0063ebd0;
  piVar3 = (int *)0x0;
  local_14 = (int *)0x0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_2 != iVar5; param_2 = param_2 + 0x38) {
    if ((iVar2 == *(int *)(param_2 + 0x18)) &&
       ((iVar1 == -1 || (iVar1 == *(int *)(param_2 + 0x14))))) {
      if (piVar3 == (int *)0x0) {
        FUN_0045c5a0(0,&param_2);
        piVar3 = local_14;
      }
      else {
        piVar4 = (int *)0x0;
        if (piVar3 != (int *)0x0) {
          *piVar3 = param_2;
          piVar4 = local_14;
        }
        local_14 = piVar4 + 1;
        piVar3 = local_14;
      }
    }
  }
  *param_1 = 0;
  iVar5 = (int)piVar3 >> 2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar5 == 0) {
    iVar2 = 0;
    local_14 = piVar3;
  }
  else {
    iVar2 = FUN_0044b6e0(iVar5 * 4);
  }
  *param_1 = iVar2;
  param_1[1] = iVar2;
  param_1[2] = iVar2 + iVar5 * 4;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = FUN_0046b5a0(0,local_14,iVar2,param_2);
  param_1[1] = iVar5;
  ExceptionList = local_c;
  return param_1;
}

