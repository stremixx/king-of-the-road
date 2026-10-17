
undefined4 * __thiscall
FUN_004b6780(undefined4 *param_1,int *param_2,int param_3,int *param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  undefined3 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006441a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_0064aec0;
  iVar1 = param_2[4];
  param_1[3] = iVar1;
  param_1[4] = param_2 + 1;
  *(undefined4 **)(iVar1 + 0x10) = param_1;
  *(undefined4 **)(param_1[4] + 0xc) = param_1;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_3 == 0) {
    piVar3 = (int *)0x0;
    local_4._1_3_ = uVar2;
  }
  else {
    uVar4 = param_3 * 0xc;
    if (uVar4 < 0x81) {
      param_2 = (int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      FUN_00401aa0();
      local_4._0_1_ = 2;
      piVar3 = (int *)*param_2;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_0044bcf0(uVar4 + 7 & 0xfffffff8);
      }
      else {
        *param_2 = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar3 = (int *)FUN_0044bc90(uVar4);
    }
  }
  param_1[5] = piVar3;
  param_1[6] = piVar3;
  param_1[7] = (int)piVar3 + param_3 * 0xc;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar5 = FUN_004b6ab0(piVar3,param_3,&param_4,param_2);
  param_1[6] = uVar5;
  *param_1 = &PTR_LAB_0064b118;
  local_4 = 0xffffffff;
  if (((param_6 & 0x10000) == 0) && (param_4 != (int *)0x0)) {
    param_4[1] = param_4[1] + -1;
    if ((param_4[1] == 0) && (param_4 != (int *)0x0)) {
      (**(code **)(*param_4 + 0xc))(1);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

