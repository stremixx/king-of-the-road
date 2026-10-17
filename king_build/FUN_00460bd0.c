
void FUN_00460bd0(int *param_1,int *param_2)

{
  undefined3 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063f349;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    if ((param_2[2] & 0x10000U) == 0) {
      ExceptionList = &local_c;
      param_1[1] = 0;
      if (*param_2 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = *param_2;
        param_1[2] = param_2[2];
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
    }
    else {
      ExceptionList = &local_c;
      param_1[2] = param_2[2];
      *param_1 = *param_2;
      param_1[1] = param_2[1];
    }
    uStack_3 = 0;
    uVar1 = uStack_3;
    local_4 = 1;
    uStack_3 = 0;
    iVar3 = (param_2[4] - param_2[3]) / 0x18;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
      uStack_3 = uVar1;
    }
    else {
      uVar4 = iVar3 * 0x18;
      if (uVar4 < 0x81) {
        FUN_00401aa0();
        local_4 = 2;
        piVar2 = *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)FUN_0044bcf0(uVar4);
        }
        else {
          *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = *piVar2;
        }
        DAT_0068c164 = 0;
      }
      else {
        piVar2 = (int *)FUN_0044bc90(uVar4);
      }
    }
    param_1[3] = (int)piVar2;
    param_1[4] = (int)piVar2;
    param_1[5] = (int)piVar2 + iVar3 * 0x18;
    _local_4 = CONCAT31(uStack_3,3);
    iVar3 = FUN_004661a0(param_2[3],param_2[4],piVar2,param_1);
    param_1[4] = iVar3;
  }
  ExceptionList = local_c;
  return;
}

