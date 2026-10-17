
void FUN_00467770(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f798;
  local_c = ExceptionList;
  iVar5 = param_2[1];
  iVar1 = *param_2;
  iVar4 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  if (iVar5 - iVar1 != 0) {
    ExceptionList = &local_c;
    iVar4 = FUN_0044b6e0();
  }
  iVar2 = param_2[1];
  iVar3 = *param_2;
  local_10 = (iVar5 - iVar1) + iVar4;
  local_18 = iVar4;
  local_14 = iVar4;
  FUN_0061c980();
  local_14 = (iVar4 - iVar3) + iVar2;
  local_4 = 0;
  iVar5 = FUN_0061d520(local_18);
  if (iVar5 < 0) {
    iVar5 = ((int)param_2 - (int)param_1) / 0xc;
    if (0 < iVar5) {
      do {
        FUN_0044c100();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (&local_18 != param_1) {
      uVar6 = local_14 - local_18;
      if ((uint)(param_1[2] - *param_1) < uVar6) {
        iVar5 = FUN_00458d60();
        if (param_1[2] != *param_1) {
          FUN_0044b440();
        }
        *param_1 = iVar5;
        param_1[2] = iVar5 + uVar6;
        param_1[1] = *param_1 + uVar6;
      }
      else if ((uint)(param_1[1] - *param_1) < uVar6) {
        FUN_0061c980();
        FUN_00407250((param_1[1] - *param_1) + local_18,local_14);
        param_1[1] = *param_1 + uVar6;
      }
      else {
        FUN_0061c980();
        param_1[1] = *param_1 + uVar6;
      }
    }
  }
  else {
    FUN_0044dd30(&local_18);
    FUN_00469710(param_2);
  }
  if (local_10 != local_18) {
    FUN_0044b440();
  }
  ExceptionList = local_c;
  return;
}

