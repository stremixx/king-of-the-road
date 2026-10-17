
void __fastcall FUN_004884f0(undefined4 *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006406c4;
  local_c = ExceptionList;
  piVar5 = (int *)param_1[3];
  local_4 = 2;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (piVar5 != (int *)param_1[4]) {
    do {
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        local_4._0_1_ = 4;
        FUN_0044a450();
        local_4._0_1_ = 3;
        FUN_004473b0();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00447240();
        FUN_00631d5c(iVar3);
      }
      piVar5 = piVar5 + 1;
      ppvVar2 = ExceptionList;
    } while (piVar5 != (int *)param_1[4]);
  }
  ExceptionList = ppvVar2;
  piVar5 = (int *)param_1[6];
  if (piVar5 != (int *)param_1[7]) {
    do {
      piVar1 = (int *)*piVar5;
      if (piVar1 != (int *)0x0) {
        iVar3 = piVar1[2] - *piVar1;
        if (iVar3 != 0) {
          FUN_0044b440(*piVar1,iVar3);
        }
        FUN_00631d5c(piVar1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)param_1[7]);
  }
  piVar5 = (int *)param_1[6];
  local_4._0_1_ = 1;
  iVar3 = param_1[8] - (int)piVar5 >> 2;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 4;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar5 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar5;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar5);
    }
  }
  piVar5 = (int *)param_1[3];
  local_4 = (uint)local_4._1_3_ << 8;
  iVar3 = param_1[5] - (int)piVar5 >> 2;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 4;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar5 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar5;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar5);
    }
  }
  piVar5 = (int *)*param_1;
  uVar4 = param_1[2] - (int)piVar5;
  local_4 = 0xffffffff;
  if (uVar4 != 0) {
    if (0x80 < uVar4) {
      FUN_0061c888(piVar5);
      ExceptionList = local_c;
      return;
    }
    FUN_00401aa0();
    *piVar5 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar5;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

