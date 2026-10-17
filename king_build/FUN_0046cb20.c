
void FUN_0046cb20(int *param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f848;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1 != param_3) {
    uVar3 = param_1[1] - *param_1;
    if ((uint)(param_3[2] - *param_3) < uVar3) {
      ExceptionList = &local_c;
      iVar2 = FUN_00458d60();
      if (param_3[2] != *param_3) {
        FUN_0044b440();
      }
      *param_3 = iVar2;
      param_3[2] = iVar2 + uVar3;
    }
    else if ((uint)(param_3[1] - *param_3) < uVar3) {
      ExceptionList = &local_c;
      FUN_0061c980();
      FUN_0061c980(param_3[1],(param_3[1] - *param_3) + *param_1);
    }
    else {
      ExceptionList = &local_c;
      FUN_0061c980();
    }
    param_3[1] = *param_3 + uVar3;
  }
  FUN_0044dd30(&param_4);
  FUN_0046b330(param_1,0,(param_2 - (int)param_1) / 0xc);
  puVar1 = param_4;
  uVar3 = param_6 - (int)param_4;
  if (uVar3 != 0) {
    if (0x80 < uVar3) {
      FUN_0061c888();
      ExceptionList = local_c;
      return;
    }
    FUN_00401aa0();
    *puVar1 = *(undefined4 *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(undefined4 **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = puVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

